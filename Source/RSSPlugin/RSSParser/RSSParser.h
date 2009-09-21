//////////////////////////////////////////////////////////
///
/// @file      RSSParser.h
///
/// @brief     ������RSS���������صĽṹ��
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
#ifndef RSSPARSER_H
#define RSSPARSER_H
#include "RSSParse_VC6_com.h"
#include <vector>
using std::vector;
#import "..\bin\RSSParse_VC6_com.dll"

/// @class RSSItem
/// @brief RSSƵ��ÿһ��
struct RSSItem
{
    ///< ����
    LPWSTR itemTitle;
    ///< ����
    LPWSTR itemAuthor;
    ///< ����
    LPWSTR itemDate;
    ///< ����
    LPWSTR itemLink;
};

/// @class RSSChannel
/// @brief RSSƵ����
struct RSSChannel
{
    ///< RSSƵ������
    LPWSTR rssTitle;
    ///< RSSƵ������
    LPWSTR rssLink;
    ///< RSSƵ������������
    LPWSTR rssDate;
    ///< RSSƵ����
    vector<RSSItem> rssItem;
};

/// @class RSSLW
/// @brief ��ΪRSS������
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
        /// @brief ��ʼ��RSS������
        /// 
        /// @note ���RSS����������IRSSParse�ӿ�ָ��
        ///
        /// @param void
        ///
        /// @retval
        ///
        //////////////////////////////////////////////////////////////////////////
        HRESULT InitParser();

        //////////////////////////////////////////////////////////////////////////
        ///
        /// @brief ����RSS������
        /// 
        /// @note ������Ҫ������RSS��ַ�ͳ�ʱ��ʱ��
        ///
        /// @param __in LPWSTR strChannel      ����Ƶ����url��ַ���磺http://xxx
        /// @param __in long time              ���ó�ʱʱ�䣬��λ���롣ȱʡ��50��
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
        /// @brief ������������
        /// 
        /// @note ��Ҫ������Ƶ���ͽ���RSSҳ�档����ǰ��������SetParser���ú�Ƶ��
        ///
        /// @param __in VARIANT_BOOL isAsyn     �Ƿ�ʹ���첽��ʽ��Ĭ��Ϊͬ��
        ///
        /// @retval
        ///
        //////////////////////////////////////////////////////////////////////////
        HRESULT StartParser(
            __in VARIANT_BOOL isAsyn = FALSE
            );

        //////////////////////////////////////////////////////////////////////////
        ///
        /// @brief ��ȡRSSƵ����Ϣ
        ///
        /// @param void
        ///
        /// @retval
        ///
        //////////////////////////////////////////////////////////////////////////
        HRESULT GetChannelInfo();

        //////////////////////////////////////////////////////////////////////////
        ///
        /// @brief ��ȡRSSƵ���������Ϣ
        ///
        /// @param void
        ///
        /// @retval
        ///
        //////////////////////////////////////////////////////////////////////////
        HRESULT GetItemInfo();

        //////////////////////////////////////////////////////////////////////////
        ///
        /// @brief �ͷ���Դ
        ///
        /// @param void
        ///
        /// @retval void
        ///
        //////////////////////////////////////////////////////////////////////////
        void UninitParser();

        //////////////////////////////////////////////////////////////////////////
        ///
        /// @brief ��ȡ��ǰRSSƵ���ı���
        ///
        /// @param __out LPWSTR &strTitle       ����õ���RSS����
        ///
        /// @note �ͻ��������ͷ��ڴ�
        ///
        /// @retval HRESULT 
        ///
        //////////////////////////////////////////////////////////////////////////
        HRESULT GetRssTitle(__out LPWSTR &strTitle);

        //////////////////////////////////////////////////////////////////////////
        ///
        /// @brief ��ȡ��ǰRSSƵ���ı���
        ///
        /// @param __out LPWSTR &strTitle       ����õ���RSS���ӵ�ַ
        ///
        /// @note �ͻ��������ͷ��ڴ�
        ///
        /// @retval HRESULT 
        ///
        //////////////////////////////////////////////////////////////////////////
        HRESULT GetRssLink(__out LPWSTR &strLink);

        //////////////////////////////////////////////////////////////////////////
        ///
        /// @brief ��ȡ��ǰRSSƵ���ķ�������
        ///
        /// @param __out LPWSTR &strDate        ����õ���RSS����
        ///
        /// @note �ͻ��������ͷ��ڴ�
        ///
        /// @retval HRESULT
        ///
        //////////////////////////////////////////////////////////////////////////
        HRESULT GetRssDate(__out LPWSTR &strDate);

        //////////////////////////////////////////////////////////////////////////
        ///
        /// @brief ��ȡ��ǰRSSƵ�����n��ı���
        ///
        /// @param __in long n                 ��n��
        /// @param __out LPWSTR &strTitle       �����n��ı���
        ///
        /// @note �ͻ��������ͷ��ڴ�
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
        /// @brief ��ȡ��ǰRSSƵ�����n�������
        ///
        /// @param __in long n                 ��n��
        /// @param __out LPWSTR &strAuthor      �����n�������
        ///
        /// @note �ͻ��������ͷ��ڴ�
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
        /// @brief ��ȡ��ǰRSSƵ�����n��ķ�������
        ///
        /// @param __in long n                 ��n��
        /// @param __out LPWSTR &strDate        �����n��ķ�������
        ///
        /// @note �ͻ��������ͷ��ڴ�
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
        HRESULT GetItemLink(
            __in long n,
            __out LPWSTR &strLink
            );

        //////////////////////////////////////////////////////////////////////////
        ///
        /// @brief ��ȡ��ǰRSSƵ����һ���ж�����
        ///
        /// @param __out long &itemCount       ����RSSƵ����һ���ж�����
        ///
        /// @retval HRESULT
        ///
        //////////////////////////////////////////////////////////////////////////
        HRESULT GetItemCount(__out long &itemCount);
private:
    IRSSParse* m_pRssParse;             ///< ����IRSSParse�ӿ�ָ��
    RSSChannel m_rssChannel;            ///< ����RSS������Ľ��
    VARIANT_BOOL m_bReady;              ///< �����Ƿ��Ѿ�׼����
};


#endif