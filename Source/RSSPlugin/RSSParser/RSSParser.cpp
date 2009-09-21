//////////////////////////////////////////////////////////
///
/// @file      RSSParser.cpp
///
/// @brief     ������RSS������
///
/// @version   1.0
///
/// @author    ����
///
/// @date      2009-08-10
/// 
/// <�޸�����>      <�޸���>        <�޸�����>\n
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
/// @brief ��ʼ��RSS������
/// 
/// @note ���RSS����������IRSSParse�ӿ�ָ��
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
/// @brief ����RSS������
/// 
/// @note ������Ҫ������RSS��ַ�ͳ�ʱ��ʱ��
///
/// @param __in LPWSTR strChannel      ����Ƶ����url��ַ���磺http://xxx
/// @param __in long time              ���ó�ʱʱ�䣬��λ���롣ȱʡ��50��
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
    // ����RSSƵ����url��ַ
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
/// @brief ������������
/// 
/// @note ��Ҫ������Ƶ���ͽ���RSSҳ�档����ǰ��������SetParser���ú�Ƶ��
///
/// @param __in VARIANT_BOOL isAsyn     �Ƿ�ʹ���첽��ʽ��Ĭ��Ϊͬ��
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
        // ���׼�����ˣ��˳�ѭ��
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
/// @brief ��ȡRSSƵ����Ϣ
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
    // �ַ���ת�� BSTR -> LPWSTR
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
/// @brief ��ȡRSSƵ���������Ϣ
///
/// @param void
///
/// @retval
///
//////////////////////////////////////////////////////////////////////////
HRESULT RSSLW::GetItemInfo()
{
    //
    // �����ǰ�ļ�¼
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
    // ���һ���ж�����
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
/// @brief �ͷ���Դ
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
/// @brief ��ȡ��ǰRSSƵ���ı���
///
/// @param __out LPSTR &strTitle     ����õ���RSS����
///
/// @note �ͻ��������ͷ��ڴ�
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
    // �ַ���ת�� BSTR -> LPWSTR
    //
    USES_CONVERSION;
    strTitle = OLE2W(strTemp);
    
    return S_OK;
}

//////////////////////////////////////////////////////////////////////////
///
/// @brief ��ȡ��ǰRSSƵ��������
///
/// @param __out LPSTR &strLink     ����õ���RSS���ӵ�ַ
///
/// @note �ͻ��������ͷ��ڴ�
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
    // �ַ���ת�� BSTR -> LPWSTR
    //
    USES_CONVERSION;
    strLink = OLE2W(strTemp);

    return S_OK;
}

//////////////////////////////////////////////////////////////////////////
///
/// @brief ��ȡ��ǰRSSƵ���ķ�������
///
/// @param __out LPSTR &strDate      ����õ���RSS����
///
/// @param �ͻ��������ͷ��ڴ�
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
    // �ַ���ת�� BSTR -> LPWSTR
    //
    USES_CONVERSION;
    strDate = OLE2W(strTemp);
    
    return S_OK;
}

//////////////////////////////////////////////////////////////////////////
///
/// @brief ��ȡ��ǰRSSƵ�����n��ı���
///
/// @param __in long n                 ��n��
/// @param __out LPSTR &strTitle       �����n��ı���
///
/// @note �ͻ��������ͷ��ڴ�
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
    // �ַ���ת�� BSTR -> LPWSTR
    //
    USES_CONVERSION;
    strTitle = OLE2W(strTemp);

    return S_OK;
}

//////////////////////////////////////////////////////////////////////////
///
/// @brief ��ȡ��ǰRSSƵ�����n�������
///
/// @param __in long n                 ��n��
/// @param __out LPSTR &strAuthor      �����n�������
///
/// @note �ͻ��������ͷ��ڴ�
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
    // �ַ���ת�� BSTR -> LPWSTR
    //
    USES_CONVERSION;
    strAuthor = OLE2W(strTemp);

    return S_OK;
}

//////////////////////////////////////////////////////////////////////////
///
/// @brief ��ȡ��ǰRSSƵ�����n��ķ�������
///
/// @param __in long n                 ��n��
/// @param __out LPSTR &strDate        �����n��ķ�������
///
/// @note �ͻ��������ͷ��ڴ�
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
    // �ַ���ת�� BSTR -> LPWSTR
    //
    USES_CONVERSION;
    strDate = OLE2W(strTemp);

    return S_OK;
}

//////////////////////////////////////////////////////////////////////////
///
/// @brief ��ȡ��ǰRSSƵ�����n������ӵ�ַ
///
/// @param __in long n                 ��n��
/// @param __out LPSTR &strLink        �����n������ӵ�ַ
///
/// @note �ͻ��������ͷ��ڴ�
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
    // �ַ���ת�� BSTR -> LPWSTR
    //
    USES_CONVERSION;
    strLink = OLE2W(strTemp);

    return S_OK;
}

//////////////////////////////////////////////////////////////////////////
///
/// @brief ��ȡ��ǰRSSƵ����һ���ж�����
///
/// @param __out long &itemCount       ����RSSƵ����һ���ж�����
///
/// @retval HRESULT
///
//////////////////////////////////////////////////////////////////////////
HRESULT RSSLW::GetItemCount(__out long &itemCount)
{
    itemCount = m_rssChannel.rssItem.size();

    return S_OK;
}