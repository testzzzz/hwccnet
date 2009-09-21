// RSSPlugin2.cpp : CRSSPlugin2 ��ʵ��

#include "stdafx.h"
#include "RSSPlugin2.h"
#include "RssError.h"
#include "RssGlobal.h"

LONG g_plugincookie                         = 0;
CComPtr<ISDKApplication3> g_spApplication3  = NULL;

///////////////////////////////////////////////////////////////////////
///
/// @brief  �˷����ڰ���������ʼ���׶��У��ɰ����������ö�֪ͨ�������ʾ�����������
///
/// @param  __in IDispatch *pApplication   - Ӧ�ó������
/// @param  __in LONG lPluginCookie        - �����ʾ
///
/// @retval HRESULT
///
/// �޸ļ�¼: \n
///
///      <�޸�����>     <�޸���>   <�޸���������>\n
///
///      2009-08-06      ����       ����\n
///
/// ��ע��Ϣ: 
///
///////////////////////////////////////////////////////////////////////
STDMETHODIMP 
CRSSPlugin2::OnConnect(
                       __in IDispatch *pApplication, 
                       __in LONG lPluginCookie
                       )
{
    CComQIPtr<ISDKApplication3> spSDKApplication3(pApplication);
    if (spSDKApplication3)
    {
        g_spApplication3=spSDKApplication3;
    }

    DEBUG_TRACE(_T("CRssPlugin2::OnConnect"));

    g_plugincookie = lPluginCookie;

    return S_OK;
} 

///////////////////////////////////////////////////////////////////////
///
/// @brief  �˷����ڰ��������˳������У��ɰ����������ö�֪ͨ�������ʾ�������ж��
///
/// @param  __in IDispatch *pApplication   - Ӧ�ó������
/// @param  __in LONG lPluginCookie        - �����ʾ
///
/// @retval HRESULT
///
/// �޸ļ�¼: \n
///
///      <�޸�����>     <�޸���>   <�޸���������>\n
///
///      2009-08-06      ����       ����\n
///
/// ��ע��Ϣ: 
///
///////////////////////////////////////////////////////////////////////
STDMETHODIMP 
CRSSPlugin2::OnDisconnect(
                          __in IDispatch *pApplication, 
                          __in LONG lPluginCookie
                          )
{
    UNREFERENCED(pApplication);
    UNREFERENCED(lPluginCookie);

    return S_OK;
}

///////////////////////////////////////////////////////////////////////
///
/// @brief  �������������ŵ��¼���������£��ɰ����������ö�֪ͨ���
///
/// @param  __in enum SDKMessageID MsgID   - ��Ϣ����
/// @param  __in IDispatch *pParam         - ��ʾ��Ϣ�Ĳ����������ȡ���ھ������Ϣ����
///
/// @retval HRESULT
///
/// �޸ļ�¼: \n
///
///      <�޸�����>     <�޸���>   <�޸���������>\n
///
///      2009-08-06      ����       ����\n
///
/// ��ע��Ϣ: 
///
///////////////////////////////////////////////////////////////////////
STDMETHODIMP 
CRSSPlugin2::OnNotify(
                      __in enum SDKMessageID MsgID, 
                      __in IDispatch *pParam
                      )
{
//    int Error = TKD_SUCCESS;

    UNREFERENCED(MsgID);
    UNREFERENCED(pParam);

    switch (MsgID)
    {
            //
            // ���������Ѿ������¼״̬
            //
        case NOTIFY_USERLOGIN:
            break;

            //
            // ����������������״̬
            //
        case NOTIFY_OFFLINE:
            break;

            //
            // ������������
            //
        case NOTIFY_SHOW_OPTION:
            break;

            //
            // ��������������Ϣ
            //
        case NOTIFY_CHATMESSAGE:
            break;

            //
            // ֪ͨ������ڵ�ǰ��¼�û��Բ���Ķ�����Ϣ
            //
        case NOTIFY_AEPINFO:
            break;

            //
            // ��δ����˴�
            //
        default:
            break;
    }

    return S_OK;
}

///////////////////////////////////////////////////////////////////////
///
/// @brief  ֪ͨ����û�������Ӵ�����ɾ��
///
/// @param  void
///
/// @retval HRESULT
///
/// �޸ļ�¼: \n
///
///      <�޸�����>     <�޸���>   <�޸���������>\n
///
///      2009-08-06      ����       ����\n
///
/// ��ע��Ϣ: 
///
///////////////////////////////////////////////////////////////////////
STDMETHODIMP 
CRSSPlugin2::OnUninstall(
                         )
{
    return S_OK;
}

// CRSSPlugin2

