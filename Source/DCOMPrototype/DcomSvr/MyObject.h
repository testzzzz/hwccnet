// MyObject.h : CMyObject ������

#pragma once
#include "resource.h"       // ������

#include "DcomSvr_i.h"


#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Windows CE ƽ̨(�粻�ṩ��ȫ DCOM ֧�ֵ� Windows Mobile ƽ̨)���޷���ȷ֧�ֵ��߳� COM ���󡣶��� _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA ��ǿ�� ATL ֧�ִ������߳� COM ����ʵ�ֲ�����ʹ���䵥�߳� COM ����ʵ�֡�rgs �ļ��е��߳�ģ���ѱ�����Ϊ��Free����ԭ���Ǹ�ģ���Ƿ� DCOM Windows CE ƽ̨֧�ֵ�Ψһ�߳�ģ�͡�"
#endif



// CMyObject

class ATL_NO_VTABLE CMyObject :
    public CComObjectRootEx<CComSingleThreadModel>,
    public CComCoClass<CMyObject, &CLSID_MyObject>,
    public IDispatchImpl<IMyObject, &IID_IMyObject, &LIBID_DcomSvrLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
    CMyObject()
    {
    }

DECLARE_REGISTRY_RESOURCEID(IDR_MYOBJECT)


BEGIN_COM_MAP(CMyObject)
    COM_INTERFACE_ENTRY(IMyObject)
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

    STDMETHOD(GetData)(LONG* lpData);
};

OBJECT_ENTRY_AUTO(__uuidof(MyObject), CMyObject)
