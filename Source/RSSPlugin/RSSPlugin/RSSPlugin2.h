// RSSPlugin2.h : CRSSPlugin2 ������

#pragma once
#include "resource.h"       // ������

#include "RSSPlugin_i.h"


#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Windows CE ƽ̨(�粻�ṩ��ȫ DCOM ֧�ֵ� Windows Mobile ƽ̨)���޷���ȷ֧�ֵ��߳� COM ���󡣶��� _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA ��ǿ�� ATL ֧�ִ������߳� COM ����ʵ�ֲ�����ʹ���䵥�߳� COM ����ʵ�֡�rgs �ļ��е��߳�ģ���ѱ�����Ϊ��Free����ԭ���Ǹ�ģ���Ƿ� DCOM Windows CE ƽ̨֧�ֵ�Ψһ�߳�ģ�͡�"
#endif



// CRSSPlugin2

class ATL_NO_VTABLE CRSSPlugin2 :
    public CComObjectRootEx<CComSingleThreadModel>,
    public CComCoClass<CRSSPlugin2, &CLSID_RSSPlugin2>,
    public IDispatchImpl<ISDKPlugin2, &__uuidof(ISDKPlugin2), &LIBID_RSSPluginLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
    CRSSPlugin2()
    {
    }

DECLARE_REGISTRY_RESOURCEID(IDR_RSSPLUGIN2)


BEGIN_COM_MAP(CRSSPlugin2)
    COM_INTERFACE_ENTRY(ISDKPlugin2)
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
    STDMETHOD(OnConnect)(
        __in IDispatch *pApplication, 
        __in LONG lPluginCookie
        );

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
    //////////////////////////////////////////////////////////////////////
    STDMETHOD(OnDisconnect)(
        __in IDispatch *pApplication, 
        __in LONG lPluginCookie
        );

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
    STDMETHOD(OnNotify)(
        __in enum SDKMessageID MsgID, 
        __in IDispatch *pParam
        );

    ///////////////////////////////////////////////////////////////////////
    ///
    /// @brief  ɾ�������������ģ��Ƚ����������û�������ɾ��
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
    STDMETHOD(OnUninstall)(
        );
};

OBJECT_ENTRY_AUTO(__uuidof(RSSPlugin2), CRSSPlugin2)
