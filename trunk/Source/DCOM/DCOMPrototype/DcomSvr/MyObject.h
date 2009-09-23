// MyObject.h : Declaration of the CMyObject

#ifndef __MYOBJECT_H_
#define __MYOBJECT_H_

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CMyObject
class ATL_NO_VTABLE CMyObject : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CMyObject, &CLSID_MyObject>,
	public IDispatchImpl<IMyObject, &IID_IMyObject, &LIBID_DCOMSVRLib>
{
public:
	CMyObject()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_MYOBJECT)

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CMyObject)
	COM_INTERFACE_ENTRY(IMyObject)
	COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()

// IMyObject
public:
	STDMETHOD(GetData)(/*[out]*/long* lpData);
};

#endif //__MYOBJECT_H_
