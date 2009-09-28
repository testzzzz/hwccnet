

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0500 */
/* at Sun Sep 27 14:59:07 2009
 */
/* Compiler settings for .\Update.idl:
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

#ifndef __Update_i_h__
#define __Update_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IUpdateVersion_FWD_DEFINED__
#define __IUpdateVersion_FWD_DEFINED__
typedef interface IUpdateVersion IUpdateVersion;
#endif 	/* __IUpdateVersion_FWD_DEFINED__ */


#ifndef __UpdateVersion_FWD_DEFINED__
#define __UpdateVersion_FWD_DEFINED__

#ifdef __cplusplus
typedef class UpdateVersion UpdateVersion;
#else
typedef struct UpdateVersion UpdateVersion;
#endif /* __cplusplus */

#endif 	/* __UpdateVersion_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IUpdateVersion_INTERFACE_DEFINED__
#define __IUpdateVersion_INTERFACE_DEFINED__

/* interface IUpdateVersion */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IUpdateVersion;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9BA693AC-B51A-46BE-8673-900E2494048E")
    IUpdateVersion : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CheckUpdate( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DownloadUpdateFile( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ConnectUpdateServer( 
            /* [in] */ BSTR UpdateServerUrl) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IUpdateVersionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUpdateVersion * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUpdateVersion * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUpdateVersion * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IUpdateVersion * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IUpdateVersion * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IUpdateVersion * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IUpdateVersion * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CheckUpdate )( 
            IUpdateVersion * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DownloadUpdateFile )( 
            IUpdateVersion * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ConnectUpdateServer )( 
            IUpdateVersion * This,
            /* [in] */ BSTR UpdateServerUrl);
        
        END_INTERFACE
    } IUpdateVersionVtbl;

    interface IUpdateVersion
    {
        CONST_VTBL struct IUpdateVersionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUpdateVersion_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUpdateVersion_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUpdateVersion_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUpdateVersion_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IUpdateVersion_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IUpdateVersion_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IUpdateVersion_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IUpdateVersion_CheckUpdate(This)	\
    ( (This)->lpVtbl -> CheckUpdate(This) ) 

#define IUpdateVersion_DownloadUpdateFile(This)	\
    ( (This)->lpVtbl -> DownloadUpdateFile(This) ) 

#define IUpdateVersion_ConnectUpdateServer(This,UpdateServerUrl)	\
    ( (This)->lpVtbl -> ConnectUpdateServer(This,UpdateServerUrl) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUpdateVersion_INTERFACE_DEFINED__ */



#ifndef __UpdateLib_LIBRARY_DEFINED__
#define __UpdateLib_LIBRARY_DEFINED__

/* library UpdateLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_UpdateLib;

EXTERN_C const CLSID CLSID_UpdateVersion;

#ifdef __cplusplus

class DECLSPEC_UUID("043A0012-F9FB-4DD8-AFF9-8C0911138D97")
UpdateVersion;
#endif
#endif /* __UpdateLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


