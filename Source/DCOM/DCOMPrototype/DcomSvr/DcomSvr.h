
#pragma warning( disable: 4049 )  /* more than 64k source lines */

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 6.00.0347 */
/* at Thu Sep 03 12:20:11 2009
 */
/* Compiler settings for D:\Program Files\Microsoft Visual Studio\MyProjects\DCOMPrototype\DcomSvr\DcomSvr.idl:
    Oicf, W1, Zp8, env=Win32 (32b run)
    protocol : dce , ms_ext, c_ext
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
//@@MIDL_FILE_HEADING(  )


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 440
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __DcomSvr_h__
#define __DcomSvr_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IMyObject_FWD_DEFINED__
#define __IMyObject_FWD_DEFINED__
typedef interface IMyObject IMyObject;
#endif 	/* __IMyObject_FWD_DEFINED__ */


#ifndef __MyObject_FWD_DEFINED__
#define __MyObject_FWD_DEFINED__

#ifdef __cplusplus
typedef class MyObject MyObject;
#else
typedef struct MyObject MyObject;
#endif /* __cplusplus */

#endif 	/* __MyObject_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 

void * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void * ); 

#ifndef __IMyObject_INTERFACE_DEFINED__
#define __IMyObject_INTERFACE_DEFINED__

/* interface IMyObject */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IMyObject;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F5648F39-3FCF-49BD-BC84-1A52BEAC849E")
    IMyObject : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetData( 
            /* [out] */ long *lpData) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMyObjectVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMyObject * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMyObject * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMyObject * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMyObject * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMyObject * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMyObject * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMyObject * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetData )( 
            IMyObject * This,
            /* [out] */ long *lpData);
        
        END_INTERFACE
    } IMyObjectVtbl;

    interface IMyObject
    {
        CONST_VTBL struct IMyObjectVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMyObject_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IMyObject_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IMyObject_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IMyObject_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IMyObject_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IMyObject_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IMyObject_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IMyObject_GetData(This,lpData)	\
    (This)->lpVtbl -> GetData(This,lpData)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IMyObject_GetData_Proxy( 
    IMyObject * This,
    /* [out] */ long *lpData);


void __RPC_STUB IMyObject_GetData_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IMyObject_INTERFACE_DEFINED__ */



#ifndef __DCOMSVRLib_LIBRARY_DEFINED__
#define __DCOMSVRLib_LIBRARY_DEFINED__

/* library DCOMSVRLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_DCOMSVRLib;

EXTERN_C const CLSID CLSID_MyObject;

#ifdef __cplusplus

class DECLSPEC_UUID("C6EDEC7B-B9AB-45CB-8090-1589F3E47283")
MyObject;
#endif
#endif /* __DCOMSVRLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


