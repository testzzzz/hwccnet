

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0500 */
/* at Fri Sep 11 17:08:21 2009
 */
/* Compiler settings for .\RSSPlugin.idl:
    Oicf, W1, Zp8, env=Win32 (32b run)
    protocol : dce , ms_ext, c_ext, robust
    error checks: stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
//@@MIDL_FILE_HEADING(  )

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
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

#ifndef __RSSPlugin_i_h__
#define __RSSPlugin_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IRSSPlugin2_FWD_DEFINED__
#define __IRSSPlugin2_FWD_DEFINED__
typedef interface IRSSPlugin2 IRSSPlugin2;
#endif 	/* __IRSSPlugin2_FWD_DEFINED__ */


#ifndef __IRSSImportant_FWD_DEFINED__
#define __IRSSImportant_FWD_DEFINED__
typedef interface IRSSImportant IRSSImportant;
#endif 	/* __IRSSImportant_FWD_DEFINED__ */


#ifndef __RSSPlugin2_FWD_DEFINED__
#define __RSSPlugin2_FWD_DEFINED__

#ifdef __cplusplus
typedef class RSSPlugin2 RSSPlugin2;
#else
typedef struct RSSPlugin2 RSSPlugin2;
#endif /* __cplusplus */

#endif 	/* __RSSPlugin2_FWD_DEFINED__ */


#ifndef __RSSImportant_FWD_DEFINED__
#define __RSSImportant_FWD_DEFINED__

#ifdef __cplusplus
typedef class RSSImportant RSSImportant;
#else
typedef struct RSSImportant RSSImportant;
#endif /* __cplusplus */

#endif 	/* __RSSImportant_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "wwsdkcom.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IRSSPlugin2_INTERFACE_DEFINED__
#define __IRSSPlugin2_INTERFACE_DEFINED__

/* interface IRSSPlugin2 */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IRSSPlugin2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("AC9E3B7E-AE04-4E51-8C47-34CA5CDA493C")
    IRSSPlugin2 : public IDispatch
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct IRSSPlugin2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IRSSPlugin2 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IRSSPlugin2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IRSSPlugin2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IRSSPlugin2 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IRSSPlugin2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IRSSPlugin2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IRSSPlugin2 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } IRSSPlugin2Vtbl;

    interface IRSSPlugin2
    {
        CONST_VTBL struct IRSSPlugin2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRSSPlugin2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IRSSPlugin2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IRSSPlugin2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IRSSPlugin2_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IRSSPlugin2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IRSSPlugin2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IRSSPlugin2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IRSSPlugin2_INTERFACE_DEFINED__ */


#ifndef __IRSSImportant_INTERFACE_DEFINED__
#define __IRSSImportant_INTERFACE_DEFINED__

/* interface IRSSImportant */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IRSSImportant;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("27E2BF87-0368-46C0-98C2-BDCB04B0DF2E")
    IRSSImportant : public IDispatch
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct IRSSImportantVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IRSSImportant * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IRSSImportant * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IRSSImportant * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IRSSImportant * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IRSSImportant * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IRSSImportant * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IRSSImportant * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } IRSSImportantVtbl;

    interface IRSSImportant
    {
        CONST_VTBL struct IRSSImportantVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRSSImportant_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IRSSImportant_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IRSSImportant_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IRSSImportant_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IRSSImportant_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IRSSImportant_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IRSSImportant_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IRSSImportant_INTERFACE_DEFINED__ */



#ifndef __RSSPluginLib_LIBRARY_DEFINED__
#define __RSSPluginLib_LIBRARY_DEFINED__

/* library RSSPluginLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_RSSPluginLib;

EXTERN_C const CLSID CLSID_RSSPlugin2;

#ifdef __cplusplus

class DECLSPEC_UUID("8E4D9061-3E51-48B1-BC86-88B62EB0E812")
RSSPlugin2;
#endif

EXTERN_C const CLSID CLSID_RSSImportant;

#ifdef __cplusplus

class DECLSPEC_UUID("AEB4E820-D9CF-49D0-AE52-188CC8AA19DE")
RSSImportant;
#endif
#endif /* __RSSPluginLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


