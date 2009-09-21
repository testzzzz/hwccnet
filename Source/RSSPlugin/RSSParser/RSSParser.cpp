//////////////////////////////////////////////////////////
///
/// @file      RSSParser.cpp
///
/// @brief     定义了RSS解析类
///
/// @version   1.0
///
/// @author    游枭
///
/// @date      2009-08-10
/// 
/// <修改日期>      <修改者>        <修改描述>\n
///
////////////////////////////////////////////////////////////
#include "stdafx.h"
#include <atlbase.h>
#include <atlconv.h>
#include <comutil.h>
#include "RSSParser.h"
#include "RssGlobal.h"
#include "RssError.h"

//////////////////////////////////////////////////////////////////////////
///
/// @brief 初始化RSS解析器
/// 
/// @note 获得RSS解析组件里的IRSSParse接口指针
///
/// @param void
///
/// @return HRESULT
///
//////////////////////////////////////////////////////////////////////////
HRESULT RSSLW::InitParser()
{
    HRESULT Error = S_OK;
    CLSID clsid;

    CLSIDFromProgID(
        OLESTR("RSSParse_VC6_com.RSSParse"),
        &clsid
        );
    
    IClassFactory* p_classfactory = NULL;
    CoGetClassObject(
        clsid, 
        CLSCTX_INPROC_SERVER, 
        NULL, 
        IID_IClassFactory, 
        (LPVOID*)&p_classfactory
        );

    Error = p_classfactory->CreateInstance(
                                NULL,
                                __uuidof(IRSSParse),
                                reinterpret_cast<void**>(&m_pRssParse)
                                );

    HR_CHECK(Error);

Exit:
    return Error;
}

//////////////////////////////////////////////////////////////////////////
///
/// @brief 设置RSS解析器
/// 
/// @note 设置需要解析的RSS地址和超时的时间
///
/// @param __in LPWSTR strChannel      设置频道的url地址，如：http://xxx
/// @param __in long time              设置超时时间，单位：秒。缺省：50秒
///
/// @retval HRESULT
///
//////////////////////////////////////////////////////////////////////////
HRESULT RSSLW::SetParser( 
    __in LPWSTR strChannel, 
    __in long time /* = 50 */ 
    )
{
    HRESULT Error = S_OK;
    BSTR bstrChannel = NULL;
    POINTER_CHECK(m_pRssParse);
    
    //
    // 保存RSS频道的url地址
    //
    m_rssChannel.rssLink = strChannel;

    bstrChannel = SysAllocString(strChannel);

    Error = m_pRssParse->SetChannel(bstrChannel);
    HR_CHECK(Error);

    Error = m_pRssParse->SetTimeout(time);
    HR_CHECK(Error);

Exit:
    DELETE_BSTR(bstrChannel);
    return ERROR;
}

//////////////////////////////////////////////////////////////////////////
///
/// @brief 启动解析过程
/// 
/// @note 主要是下载频道和解析RSS页面。调用前必须先用SetParser设置好频道
///
/// @param __in VARIANT_BOOL isAsyn     是否使用异步方式，默认为同步
///
/// @retval HRESULT
///
//////////////////////////////////////////////////////////////////////////
HRESULT RSSLW::StartParser( 
    __in VARIANT_BOOL isAsyn /* = FALSE */ 
    )
{
    HRESULT Error = S_OK;
    POINTER_CHECK(m_pRssParse);

    Error = m_pRssParse->Start();
    HR_CHECK(Error);

    bool bFlag = true;
    while (bFlag)
    {
        Error = m_pRssParse->IsReady(
            isAsyn,
            &m_bReady
            );
        HR_CHECK(Error);
        
        //
        // 如果准备好了，退出循环
        //
        if (m_bReady == VARIANT_TRUE)
        {
            break;
        }
    }

Exit:
    return Error;
}

//////////////////////////////////////////////////////////////////////////
///
/// @brief 获取RSS频道信息
///
/// @param void
///
/// @retval HRESULT
///
//////////////////////////////////////////////////////////////////////////
HRESULT RSSLW::GetChannelInfo()
{
    HRESULT Error = S_OK;
    BSTR bstrTitle = NULL;
    BSTR bstrPubDate = NULL;
    POINTER_CHECK(m_pRssParse);

    Error = m_pRssParse->GetFeedTitle(&bstrTitle);
    // HR_CHECK(Error);

    Error = m_pRssParse->GetFeedPubDate(&bstrPubDate);
    // HR_CHECK(Error);

    //
    // 字符串转换 BSTR -> LPWSTR
    //
    USES_CONVERSION;
    m_rssChannel.rssTitle = OLE2W(bstrTitle);
    m_rssChannel.rssDate = OLE2W(bstrPubDate);

Exit:
    DELETE_BSTR(bstrTitle);
    DELETE_BSTR(bstrPubDate);
    return Error;
}

//////////////////////////////////////////////////////////////////////////
///
/// @brief 获取RSS频道各项的信息
///
/// @param void
///
/// @retval
///
//////////////////////////////////////////////////////////////////////////
HRESULT RSSLW::GetItemInfo()
{
    //
    // 清空以前的记录
    //
    m_rssChannel.rssItem.clear();

    HRESULT Error = S_OK;
    BSTR bstrTitle = NULL;
    BSTR bstrAuthor = NULL;
    BSTR bstrDate = NULL;
    BSTR bstrLink = NULL;
    long cntItem = 0;    
    POINTER_CHECK(m_pRssParse);
    
    //
    // 获得一共有多少项
    //
    Error = m_pRssParse->GetItemCount(&cntItem);
    HR_CHECK(Error);

    for (int i = 0; i < cntItem; i++)
    {
        Error = m_pRssParse->GetItemTitle(i, &bstrTitle);
        // HR_CHECK(Error);

        Error = m_pRssParse->GetItemAuthor(i, &bstrAuthor);
        // HR_CHECK(Error);

        Error = m_pRssParse->GetItemPubDate(i, &bstrDate);
        // HR_CHECK(Error);

        Error = m_pRssParse->GetItemLink(i, &bstrLink);
        // HR_CHECK(Error);

        RSSItem item;
        item.itemTitle =  OLE2W(bstrTitle);
        item.itemAuthor = OLE2W(bstrAuthor);
        item.itemDate = OLE2W(bstrDate);
        item.itemLink = OLE2W(bstrLink);

        m_rssChannel.rssItem.push_back(item);
    }

Exit:
    DELETE_BSTR(bstrTitle);
    DELETE_BSTR(bstrAuthor);
    DELETE_BSTR(bstrDate);
    DELETE_BSTR(bstrLink);
    return Error;
}

//////////////////////////////////////////////////////////////////////////
///
/// @brief 释放资源
///
/// @param void
///
/// @retval void
///
//////////////////////////////////////////////////////////////////////////
void RSSLW::UninitParser()
{
    if (m_pRssParse != NULL)
    {
        m_pRssParse->Release();
    }
   
    DELETE_BSTR(m_rssChannel.rssTitle);
    m_rssChannel.rssLink = NULL;
    DELETE_BSTR(m_rssChannel.rssDate);

    int cntItem = m_rssChannel.rssItem.size();
    for (int i = 0; i < cntItem - 1; i++)
    {
        DELETE_BSTR(m_rssChannel.rssItem[i].itemTitle);
        DELETE_BSTR(m_rssChannel.rssItem[i].itemAuthor);
        DELETE_BSTR(m_rssChannel.rssItem[i].itemDate);
        DELETE_BSTR(m_rssChannel.rssItem[i].itemLink);
    }
}

//////////////////////////////////////////////////////////////////////////
///
/// @brief 获取当前RSS频道的标题
///
/// @param __out LPSTR &strTitle     保存得到的RSS标题
///
/// @note 客户程序负责释放内存
///
/// @retval HRESULT 
///
//////////////////////////////////////////////////////////////////////////
HRESULT RSSLW::GetRssTitle(__out LPWSTR &strTitle)
{
    if (m_rssChannel.rssTitle == NULL)
    {
        return RSS_NODATE;
    }

    BSTR strTemp = SysAllocString(m_rssChannel.rssTitle);

    //
    // 字符串转换 BSTR -> LPWSTR
    //
    USES_CONVERSION;
    strTitle = OLE2W(strTemp);
    
    return S_OK;
}

//////////////////////////////////////////////////////////////////////////
///
/// @brief 获取当前RSS频道的链接
///
/// @param __out LPSTR &strLink     保存得到的RSS链接地址
///
/// @note 客户程序负责释放内存
///
/// @retval HRESULT 
///
//////////////////////////////////////////////////////////////////////////
HRESULT RSSLW::GetRssLink(__out LPWSTR &strLink)
{
    if (m_rssChannel.rssLink == NULL)
    {
        return RSS_NODATE;
    }

    BSTR strTemp = SysAllocString(m_rssChannel.rssLink);

    //
    // 字符串转换 BSTR -> LPWSTR
    //
    USES_CONVERSION;
    strLink = OLE2W(strTemp);

    return S_OK;
}

//////////////////////////////////////////////////////////////////////////
///
/// @brief 获取当前RSS频道的发布日期
///
/// @param __out LPSTR &strDate      保存得到的RSS日期
///
/// @param 客户程序负责释放内存
///
/// @retval HRESULT
///
//////////////////////////////////////////////////////////////////////////
HRESULT RSSLW::GetRssDate(__out LPWSTR &strDate)
{
    if (m_rssChannel.rssDate == NULL)
    {
        return RSS_NODATE;
    }

    BSTR strTemp = SysAllocString(m_rssChannel.rssDate);

    //
    // 字符串转换 BSTR -> LPWSTR
    //
    USES_CONVERSION;
    strDate = OLE2W(strTemp);
    
    return S_OK;
}

//////////////////////////////////////////////////////////////////////////
///
/// @brief 获取当前RSS频道里第n项的标题
///
/// @param __in long n                 第n项
/// @param __out LPSTR &strTitle       保存第n项的标题
///
/// @note 客户程序负责释放内存
///
/// @retval HRESULT
///
//////////////////////////////////////////////////////////////////////////
HRESULT RSSLW::GetItemTitle(
                     __in long n,
                     __out LPWSTR &strTitle
                     )
{
    if (m_rssChannel.rssItem[n].itemTitle == NULL)
    {
        return RSS_NODATE;
    }

    BSTR strTemp = SysAllocString(m_rssChannel.rssItem[n].itemTitle);

    //
    // 字符串转换 BSTR -> LPWSTR
    //
    USES_CONVERSION;
    strTitle = OLE2W(strTemp);

    return S_OK;
}

//////////////////////////////////////////////////////////////////////////
///
/// @brief 获取当前RSS频道里第n项的作者
///
/// @param __in long n                 第n项
/// @param __out LPSTR &strAuthor      保存第n项的作者
///
/// @note 客户程序负责释放内存
///
/// @retval HRESULT
///
//////////////////////////////////////////////////////////////////////////
HRESULT RSSLW::GetItemAuthor(
                      __in long n,
                      __out LPWSTR &strAuthor
                      )
{
    if (m_rssChannel.rssItem[n].itemAuthor == NULL)
    {
        return RSS_NODATE;
    }

    BSTR strTemp = SysAllocString(m_rssChannel.rssItem[n].itemAuthor);

    //
    // 字符串转换 BSTR -> LPWSTR
    //
    USES_CONVERSION;
    strAuthor = OLE2W(strTemp);

    return S_OK;
}

//////////////////////////////////////////////////////////////////////////
///
/// @brief 获取当前RSS频道里第n项的发布日期
///
/// @param __in long n                 第n项
/// @param __out LPSTR &strDate        保存第n项的发布日期
///
/// @note 客户程序负责释放内存
///
/// @retval HRESULT
///
//////////////////////////////////////////////////////////////////////////
HRESULT RSSLW::GetItemDate(
                    __in long n,
                    __out LPWSTR &strDate
                    )
{
    if (m_rssChannel.rssItem[n].itemDate == NULL)
    {
        return RSS_NODATE;
    }

    BSTR strTemp = SysAllocString(m_rssChannel.rssItem[n].itemDate);

    //
    // 字符串转换 BSTR -> LPWSTR
    //
    USES_CONVERSION;
    strDate = OLE2W(strTemp);

    return S_OK;
}

//////////////////////////////////////////////////////////////////////////
///
/// @brief 获取当前RSS频道里第n项的链接地址
///
/// @param __in long n                 第n项
/// @param __out LPSTR &strLink        保存第n项的链接地址
///
/// @note 客户程序负责释放内存
///
/// @retval HRESULT
///
//////////////////////////////////////////////////////////////////////////
HRESULT RSSLW::GetItemLink(
                    __in long n,
                    __out LPWSTR &strLink
                    )
{
    if (m_rssChannel.rssItem[n].itemLink == NULL)
    {
        return RSS_NODATE;
    }

    BSTR strTemp = SysAllocString(m_rssChannel.rssItem[n].itemLink);

    //
    // 字符串转换 BSTR -> LPWSTR
    //
    USES_CONVERSION;
    strLink = OLE2W(strTemp);

    return S_OK;
}

//////////////////////////////////////////////////////////////////////////
///
/// @brief 获取当前RSS频道里一共有多少项
///
/// @param __out long &itemCount       保存RSS频道里一共有多少项
///
/// @retval HRESULT
///
//////////////////////////////////////////////////////////////////////////
HRESULT RSSLW::GetItemCount(__out long &itemCount)
{
    itemCount = m_rssChannel.rssItem.size();

    return S_OK;
}