// RSSImportant.cpp : CRSSImportant ��ʵ��

#include "stdafx.h"
#include "RSSImportant.h"
#include "RssGlobal.h"
#include "RssError.h"
#include "RSSDlg.h"
#include <assert.h>

extern CComPtr<ISDKApplication3> g_spApplication3;

///////////////////////////////////////////////////////////////////////
///
/// @brief  ������ҽӵ����
///
/// @param  __in IDispatch* pSlot - ��۽ӿ����ͣ��������ļ���Insert_Slot���
/// @param  __in long hParentWnd  - �����ھ�����˲��������ڲ�������ļ����趨��Style ΪSTYLE_CONTROL ʱ����Ч
/// @param  __in long lCookie     - Ψһ��ʾ���
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
CRSSImportant::OnCreate(
                        __in IDispatch* pSlot, 
                        __in long hParentWnd, 
                        __in long lCookie
                        )
{
    //
    // ���״��ھ����ʹ��
    //
    UNREFERENCED(hParentWnd);

    DEBUG_TRACE(L"CTKDImportant::OnCreate");

    m_pSlot   = CComQIPtr<ISDKImportantPanelSlot>(pSlot);
    m_nCookie = lCookie;

    //
    // ȷ��ת������Ҫ���Ĳ�۲�Ϊ��
    //
    assert(m_pSlot != NULL);

    return S_OK;
}


///////////////////////////////////////////////////////////////////////
///
/// @brief  ����Ӳ������
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
CRSSImportant::OnDestroy(
                         )
{
    return S_OK;
}


///////////////////////////////////////////////////////////////////////
///
/// @brief  �����ص���Ϣ
///
/// @param  __in SDKItemNotifyID MsgID - ��Ϣ����
/// @param  __in IDispatch* pParam     - ��Ϣ����
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
CRSSImportant::OnNotify(
                        __in SDKItemNotifyID MsgID,
                        __in IDispatch* pParam
                        )
{
    UNREFERENCED(MsgID);
    UNREFERENCED(pParam);

    return S_OK;
}

///////////////////////////////////////////////////////////////////////
///
/// @brief  �û�������
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
CRSSImportant::OnClick(
                       )
{
    CRSSDlg dlg;
    dlg.DoModal();
    return S_OK;
}

///////////////////////////////////////////////////////////////////////
///
/// @brief  �����Ӧ���ڱ仯��Ϣ
///
/// @param  __in int x - ������Ŀǰ�Ŀ��
/// @param  __in int y - ������Ŀǰ�ĸ߶�
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
CRSSImportant::OnSize(
                      __in int x, 
                      __in int y
                      )
{
    UNREFERENCED(x);
    UNREFERENCED(y);
    return S_OK;
}

///////////////////////////////////////////////////////////////////////
///
/// @brief  �˵������󴥷�
///
/// @param  __in long lCmdID - �˵������ID
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
CRSSImportant::OnMenuClick(
                           __in long lCmdID
                           )
{
    UNREFERENCED(lCmdID);
    return S_OK;
}


