// RSSImportant.h : CRSSImportant ������

#pragma once
#include "resource.h"       // ������

#include "RSSPlugin_i.h"


#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Windows CE ƽ̨(�粻�ṩ��ȫ DCOM ֧�ֵ� Windows Mobile ƽ̨)���޷���ȷ֧�ֵ��߳� COM ���󡣶��� _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA ��ǿ�� ATL ֧�ִ������߳� COM ����ʵ�ֲ�����ʹ���䵥�߳� COM ����ʵ�֡�rgs �ļ��е��߳�ģ���ѱ�����Ϊ��Free����ԭ���Ǹ�ģ���Ƿ� DCOM Windows CE ƽ̨֧�ֵ�Ψһ�߳�ģ�͡�"
#endif



// CRSSImportant

class ATL_NO_VTABLE CRSSImportant :
    public CComObjectRootEx<CComSingleThreadModel>,
    public CComCoClass<CRSSImportant, &CLSID_RSSImportant>,
    public IDispatchImpl<ISDKPluginItem, &__uuidof(ISDKPluginItem), &LIBID_RSSPluginLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
    CRSSImportant()
    {
    }

DECLARE_REGISTRY_RESOURCEID(IDR_RSSIMPORTANT)


BEGIN_COM_MAP(CRSSImportant)
    COM_INTERFACE_ENTRY(ISDKPluginItem)
    COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()



    DECLARE_PROTECT_FINAL_CONSTRUCT()

    HRESULT FinalConstruct()
    {
        return S_OK;
    }

    void FinalRelease()
    {
    }

public:
    ///////////////////////////////////////////////////////////////////////
    ///
    /// @brief  ������ҽӵ����
    ///
    /// �����������Ĳ�۶��󴴽���\n
    /// �ɰ����������ö�֪ͨ�������ʾ��������ص����
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
    STDMETHOD(OnCreate)(
        __in IDispatch* pSlot, 
        __in long hParentWnd, 
        __in long lCookie
        );

    ///////////////////////////////////////////////////////////////////////
    ///
    /// @brief  ����Ӳ������
    ///
    /// ��������������۶�������ʱ��\n
    /// �ɰ����������ö�֪ͨ�������ʾ������Ӳ���ϱ�����
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
    STDMETHOD(OnDestroy)(
        );

    ///////////////////////////////////////////////////////////////////////
    ///
    /// @brief  �����ص���Ϣ
    ///
    /// �˷����ڰ������������ŵ��¼���������£�\n
    /// �ɰ����������ö�֪ͨ���
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
    STDMETHOD(OnNotify)(
        __in SDKItemNotifyID MsgID, 
        __in IDispatch* pParam
        );

    ///////////////////////////////////////////////////////////////////////
    ///
    /// @brief  �û�������
    ///
    /// �û�����ز���ϵ���˲������ô�˷����õ�֪ͨ
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
    STDMETHOD(OnClick)(
        );

    ///////////////////////////////////////////////////////////////////////
    ///
    /// @brief  �����Ӧ���ڱ仯��Ϣ
    ///
    /// �˷������û��������ļ��е� Item ���趨�� Style �趨��STYLE_CONTROL , \n
    /// Insert_Slot �趨��SLOTID_BOTTOMPANELSLOT,\n
    /// �������ڵĴ�С�����仯ʱ��,�������������ñ�������
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
    STDMETHOD(OnSize)(
        __in int x, 
        __in int y
        );

    ///////////////////////////////////////////////////////////////////////
    ///
    /// @brief  �˵������󴥷�
    /// 
    /// �˷������û��������ļ��е� Item �� Style �趨��STYLE_BUTTON;\n
    /// Insert_Slot �趨��SLOT_MAINMENU,\n
    /// ���û������˵��˵����ϵ��ʱ��,�����������ñ�������\n
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
    STDMETHOD(OnMenuClick)(
        __in long lCmdID 
        );

private:
    CComPtr<ISDKImportantPanelSlot> m_pSlot;    ///< ��Ҫ�����
    LONG                            m_nCookie;  ///< ���ID
};

OBJECT_ENTRY_AUTO(__uuidof(RSSImportant), CRSSImportant)
