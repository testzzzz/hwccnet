//////////////////////////////////////////////////////////
///
/// @file      RSSParser.h
///
/// @brief     申明了RSS解析类和相关的结构体
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
#ifndef RSSPARSER_H
#define RSSPARSER_H
#include "RSSParse_VC6_com.h"
#include <vector>
using std::vector;
#import "..\bin\RSSParse_VC6_com.dll"

/// @class RSSItem
/// @brief RSS频道每一项
struct RSSItem
{
    ///< 标题
    LPWSTR itemTitle;
    ///< 作者
    LPWSTR itemAuthor;
    ///< 日期
    LPWSTR itemDate;
    ///< 链接
    LPWSTR itemLink;
};

/// @class RSSChannel
/// @brief RSS频道类
struct RSSChannel
{
    ///< RSS频道标题
    LPWSTR rssTitle;
    ///< RSS频道链接
    LPWSTR rssLink;
    ///< RSS频道最后更新日期
    LPWSTR rssDate;
    ///< RSS频道项
    vector<RSSItem> rssItem;
};

/// @class RSSLW
/// @brief 乐为RSS解析类
class RSSLW
{
    public:
        RSSLW():
          m_pRssParse(NULL),
          m_bReady(FALSE)
        {

        }
        //////////////////////////////////////////////////////////////////////////
        ///
        /// @brief 初始化RSS解析器
        /// 
        /// @note 获得RSS解析组件里的IRSSParse接口指针
        ///
        /// @param void
        ///
        /// @retval
        ///
        //////////////////////////////////////////////////////////////////////////
        HRESULT InitParser();

        //////////////////////////////////////////////////////////////////////////
        ///
        /// @brief 设置RSS解析器
        /// 
        /// @note 设置需要解析的RSS地址和超时的时间
        ///
        /// @param __in LPWSTR strChannel      设置频道的url地址，如：http://xxx
        /// @param __in long time              设置超时时间，单位：秒。缺省：50秒
        ///
        /// @retval
        ///
        //////////////////////////////////////////////////////////////////////////
        HRESULT SetParser(
            __in LPWSTR strChannel,
            __in long time = 50
            );

        //////////////////////////////////////////////////////////////////////////
        ///
        /// @brief 启动解析过程
        /// 
        /// @note 主要是下载频道和解析RSS页面。调用前必须先用SetParser设置好频道
        ///
        /// @param __in VARIANT_BOOL isAsyn     是否使用异步方式，默认为同步
        ///
        /// @retval
        ///
        //////////////////////////////////////////////////////////////////////////
        HRESULT StartParser(
            __in VARIANT_BOOL isAsyn = FALSE
            );

        //////////////////////////////////////////////////////////////////////////
        ///
        /// @brief 获取RSS频道信息
        ///
        /// @param void
        ///
        /// @retval
        ///
        //////////////////////////////////////////////////////////////////////////
        HRESULT GetChannelInfo();

        //////////////////////////////////////////////////////////////////////////
        ///
        /// @brief 获取RSS频道各项的信息
        ///
        /// @param void
        ///
        /// @retval
        ///
        //////////////////////////////////////////////////////////////////////////
        HRESULT GetItemInfo();

        //////////////////////////////////////////////////////////////////////////
        ///
        /// @brief 释放资源
        ///
        /// @param void
        ///
        /// @retval void
        ///
        //////////////////////////////////////////////////////////////////////////
        void UninitParser();

        //////////////////////////////////////////////////////////////////////////
        ///
        /// @brief 获取当前RSS频道的标题
        ///
        /// @param __out LPWSTR &strTitle       保存得到的RSS标题
        ///
        /// @note 客户程序负责释放内存
        ///
        /// @retval HRESULT 
        ///
        //////////////////////////////////////////////////////////////////////////
        HRESULT GetRssTitle(__out LPWSTR &strTitle);

        //////////////////////////////////////////////////////////////////////////
        ///
        /// @brief 获取当前RSS频道的标题
        ///
        /// @param __out LPWSTR &strTitle       保存得到的RSS链接地址
        ///
        /// @note 客户程序负责释放内存
        ///
        /// @retval HRESULT 
        ///
        //////////////////////////////////////////////////////////////////////////
        HRESULT GetRssLink(__out LPWSTR &strLink);

        //////////////////////////////////////////////////////////////////////////
        ///
        /// @brief 获取当前RSS频道的发布日期
        ///
        /// @param __out LPWSTR &strDate        保存得到的RSS日期
        ///
        /// @note 客户程序负责释放内存
        ///
        /// @retval HRESULT
        ///
        //////////////////////////////////////////////////////////////////////////
        HRESULT GetRssDate(__out LPWSTR &strDate);

        //////////////////////////////////////////////////////////////////////////
        ///
        /// @brief 获取当前RSS频道里第n项的标题
        ///
        /// @param __in long n                 第n项
        /// @param __out LPWSTR &strTitle       保存第n项的标题
        ///
        /// @note 客户程序负责释放内存
        ///
        /// @retval HRESULT
        ///
        //////////////////////////////////////////////////////////////////////////
        HRESULT GetItemTitle(
            __in long n,
            __out LPWSTR &strTitle
            );

        //////////////////////////////////////////////////////////////////////////
        ///
        /// @brief 获取当前RSS频道里第n项的作者
        ///
        /// @param __in long n                 第n项
        /// @param __out LPWSTR &strAuthor      保存第n项的作者
        ///
        /// @note 客户程序负责释放内存
        ///
        /// @retval HRESULT
        ///
        //////////////////////////////////////////////////////////////////////////
        HRESULT GetItemAuthor(
            __in long n,
            __out LPWSTR &strAuthor
            );

        //////////////////////////////////////////////////////////////////////////
        ///
        /// @brief 获取当前RSS频道里第n项的发布日期
        ///
        /// @param __in long n                 第n项
        /// @param __out LPWSTR &strDate        保存第n项的发布日期
        ///
        /// @note 客户程序负责释放内存
        ///
        /// @retval HRESULT
        ///
        //////////////////////////////////////////////////////////////////////////
        HRESULT GetItemDate(
            __in long n,
            __out LPWSTR &strDate
            );

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
        HRESULT GetItemLink(
            __in long n,
            __out LPWSTR &strLink
            );

        //////////////////////////////////////////////////////////////////////////
        ///
        /// @brief 获取当前RSS频道里一共有多少项
        ///
        /// @param __out long &itemCount       保存RSS频道里一共有多少项
        ///
        /// @retval HRESULT
        ///
        //////////////////////////////////////////////////////////////////////////
        HRESULT GetItemCount(__out long &itemCount);
private:
    IRSSParse* m_pRssParse;             ///< 返回IRSSParse接口指针
    RSSChannel m_rssChannel;            ///< 保存RSS解析后的结果
    VARIANT_BOOL m_bReady;              ///< 数据是否已经准备好
};


#endif