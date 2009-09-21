/* this ALWAYS GENERATED file contains the definitions for the interfaces */


/* File created by MIDL compiler version 5.01.0164 */
/* at Wed Jan 14 17:24:54 2009
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

#ifndef __RSSParse_VC6_com_h__
#define __RSSParse_VC6_com_h__

#ifdef __cplusplus
extern "C"{
#endif 

/* Forward Declarations */ 

#ifndef __IRSSParse_FWD_DEFINED__
#define __IRSSParse_FWD_DEFINED__
typedef interface IRSSParse IRSSParse;
#endif 	/* __IRSSParse_FWD_DEFINED__ */


#ifndef __RSSParse_FWD_DEFINED__
#define __RSSParse_FWD_DEFINED__

#ifdef __cplusplus
typedef class RSSParse RSSParse;
#else
typedef struct RSSParse RSSParse;
#endif /* __cplusplus */

#endif 	/* __RSSParse_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

#ifndef __IRSSParse_INTERFACE_DEFINED__
#define __IRSSParse_INTERFACE_DEFINED__

/* interface IRSSParse */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IRSSParse;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1E76FA32-DFD4-4000-908B-B2D4A256F644")
    IRSSParse : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetChannel( 
            /* [in] */ BSTR channel) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetNotify( 
            /* [in] */ long hwnd,
            /* [in] */ long msg) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Start( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetTimeout( 
            /* [in] */ long time) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Refresh( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IsReady( 
            /* [in] */ VARIANT_BOOL isAsyn,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *bResult) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE WhichSpec( 
            /* [retval][out] */ BSTR __RPC_FAR *bstr) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetFirstNodePos( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetNextNode( 
            /* [retval][out] */ BSTR __RPC_FAR *node) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetFirstItemPos( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetNextItem( 
            /* [retval][out] */ BSTR __RPC_FAR *node) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetFirstAttributePos( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetNextAttribute( 
            /* [in] */ BSTR node,
            /* [retval][out] */ BSTR __RPC_FAR *attribute) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetItemCount( 
            /* [retval][out] */ long __RPC_FAR *count) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetAttributeValue( 
            /* [in] */ BSTR attribute,
            /* [retval][out] */ BSTR __RPC_FAR *value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetContent( 
            /* [in] */ BSTR node,
            /* [retval][out] */ BSTR __RPC_FAR *content) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetTimer( 
            /* [in] */ long time) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE KillTimer( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetFeedTitle( 
            /* [retval][out] */ BSTR __RPC_FAR *title) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetFeedLink( 
            /* [retval][out] */ BSTR __RPC_FAR *Link) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetFeedDescription( 
            /* [retval][out] */ BSTR __RPC_FAR *Description) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetFeedCopyright( 
            /* [retval][out] */ BSTR __RPC_FAR *Copyright) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetFeedPubDate( 
            /* [retval][out] */ BSTR __RPC_FAR *PubDate) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetFeedLastBuildDate( 
            /* [retval][out] */ BSTR __RPC_FAR *LastBuildDate) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetFeedCategory( 
            /* [retval][out] */ BSTR __RPC_FAR *Category) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetImageUrl( 
            /* [retval][out] */ BSTR __RPC_FAR *url) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetImageTitle( 
            /* [retval][out] */ BSTR __RPC_FAR *Title) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetImageLink( 
            /* [retval][out] */ BSTR __RPC_FAR *Link) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetImageDescription( 
            /* [retval][out] */ BSTR __RPC_FAR *Description) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetItemTitle( 
            /* [in] */ long n,
            /* [retval][out] */ BSTR __RPC_FAR *title) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetItemLink( 
            /* [in] */ long n,
            /* [retval][out] */ BSTR __RPC_FAR *Link) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetItemDescription( 
            /* [in] */ long n,
            /* [retval][out] */ BSTR __RPC_FAR *Description) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetItemAuthor( 
            /* [in] */ long n,
            /* [retval][out] */ BSTR __RPC_FAR *Author) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetItemCategory( 
            /* [in] */ long n,
            /* [retval][out] */ BSTR __RPC_FAR *Category) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetItemPubDate( 
            /* [in] */ long n,
            /* [retval][out] */ BSTR __RPC_FAR *PubDate) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetItemGuid( 
            /* [in] */ long n,
            /* [retval][out] */ BSTR __RPC_FAR *Guid) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetItemSource( 
            /* [in] */ long n,
            /* [retval][out] */ BSTR __RPC_FAR *Source) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE WriteNodes2File( 
            /* [in] */ BSTR filename) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IRSSParseVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IRSSParse __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IRSSParse __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IRSSParse __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IRSSParse __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IRSSParse __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IRSSParse __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IRSSParse __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetChannel )( 
            IRSSParse __RPC_FAR * This,
            /* [in] */ BSTR channel);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetNotify )( 
            IRSSParse __RPC_FAR * This,
            /* [in] */ long hwnd,
            /* [in] */ long msg);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Start )( 
            IRSSParse __RPC_FAR * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetTimeout )( 
            IRSSParse __RPC_FAR * This,
            /* [in] */ long time);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Refresh )( 
            IRSSParse __RPC_FAR * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *IsReady )( 
            IRSSParse __RPC_FAR * This,
            /* [in] */ VARIANT_BOOL isAsyn,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *bResult);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *WhichSpec )( 
            IRSSParse __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *bstr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetFirstNodePos )( 
            IRSSParse __RPC_FAR * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetNextNode )( 
            IRSSParse __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *node);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetFirstItemPos )( 
            IRSSParse __RPC_FAR * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetNextItem )( 
            IRSSParse __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *node);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetFirstAttributePos )( 
            IRSSParse __RPC_FAR * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetNextAttribute )( 
            IRSSParse __RPC_FAR * This,
            /* [in] */ BSTR node,
            /* [retval][out] */ BSTR __RPC_FAR *attribute);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetItemCount )( 
            IRSSParse __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetAttributeValue )( 
            IRSSParse __RPC_FAR * This,
            /* [in] */ BSTR attribute,
            /* [retval][out] */ BSTR __RPC_FAR *value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetContent )( 
            IRSSParse __RPC_FAR * This,
            /* [in] */ BSTR node,
            /* [retval][out] */ BSTR __RPC_FAR *content);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetTimer )( 
            IRSSParse __RPC_FAR * This,
            /* [in] */ long time);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *KillTimer )( 
            IRSSParse __RPC_FAR * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetFeedTitle )( 
            IRSSParse __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *title);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetFeedLink )( 
            IRSSParse __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *Link);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetFeedDescription )( 
            IRSSParse __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *Description);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetFeedCopyright )( 
            IRSSParse __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *Copyright);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetFeedPubDate )( 
            IRSSParse __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *PubDate);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetFeedLastBuildDate )( 
            IRSSParse __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *LastBuildDate);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetFeedCategory )( 
            IRSSParse __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *Category);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetImageUrl )( 
            IRSSParse __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *url);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetImageTitle )( 
            IRSSParse __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *Title);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetImageLink )( 
            IRSSParse __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *Link);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetImageDescription )( 
            IRSSParse __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *Description);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetItemTitle )( 
            IRSSParse __RPC_FAR * This,
            /* [in] */ long n,
            /* [retval][out] */ BSTR __RPC_FAR *title);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetItemLink )( 
            IRSSParse __RPC_FAR * This,
            /* [in] */ long n,
            /* [retval][out] */ BSTR __RPC_FAR *Link);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetItemDescription )( 
            IRSSParse __RPC_FAR * This,
            /* [in] */ long n,
            /* [retval][out] */ BSTR __RPC_FAR *Description);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetItemAuthor )( 
            IRSSParse __RPC_FAR * This,
            /* [in] */ long n,
            /* [retval][out] */ BSTR __RPC_FAR *Author);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetItemCategory )( 
            IRSSParse __RPC_FAR * This,
            /* [in] */ long n,
            /* [retval][out] */ BSTR __RPC_FAR *Category);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetItemPubDate )( 
            IRSSParse __RPC_FAR * This,
            /* [in] */ long n,
            /* [retval][out] */ BSTR __RPC_FAR *PubDate);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetItemGuid )( 
            IRSSParse __RPC_FAR * This,
            /* [in] */ long n,
            /* [retval][out] */ BSTR __RPC_FAR *Guid);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetItemSource )( 
            IRSSParse __RPC_FAR * This,
            /* [in] */ long n,
            /* [retval][out] */ BSTR __RPC_FAR *Source);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *WriteNodes2File )( 
            IRSSParse __RPC_FAR * This,
            /* [in] */ BSTR filename);
        
        END_INTERFACE
    } IRSSParseVtbl;

    interface IRSSParse
    {
        CONST_VTBL struct IRSSParseVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRSSParse_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IRSSParse_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IRSSParse_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IRSSParse_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IRSSParse_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IRSSParse_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IRSSParse_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IRSSParse_SetChannel(This,channel)	\
    (This)->lpVtbl -> SetChannel(This,channel)

#define IRSSParse_SetNotify(This,hwnd,msg)	\
    (This)->lpVtbl -> SetNotify(This,hwnd,msg)

#define IRSSParse_Start(This)	\
    (This)->lpVtbl -> Start(This)

#define IRSSParse_SetTimeout(This,time)	\
    (This)->lpVtbl -> SetTimeout(This,time)

#define IRSSParse_Refresh(This)	\
    (This)->lpVtbl -> Refresh(This)

#define IRSSParse_IsReady(This,isAsyn,bResult)	\
    (This)->lpVtbl -> IsReady(This,isAsyn,bResult)

#define IRSSParse_WhichSpec(This,bstr)	\
    (This)->lpVtbl -> WhichSpec(This,bstr)

#define IRSSParse_SetFirstNodePos(This)	\
    (This)->lpVtbl -> SetFirstNodePos(This)

#define IRSSParse_GetNextNode(This,node)	\
    (This)->lpVtbl -> GetNextNode(This,node)

#define IRSSParse_SetFirstItemPos(This)	\
    (This)->lpVtbl -> SetFirstItemPos(This)

#define IRSSParse_GetNextItem(This,node)	\
    (This)->lpVtbl -> GetNextItem(This,node)

#define IRSSParse_SetFirstAttributePos(This)	\
    (This)->lpVtbl -> SetFirstAttributePos(This)

#define IRSSParse_GetNextAttribute(This,node,attribute)	\
    (This)->lpVtbl -> GetNextAttribute(This,node,attribute)

#define IRSSParse_GetItemCount(This,count)	\
    (This)->lpVtbl -> GetItemCount(This,count)

#define IRSSParse_GetAttributeValue(This,attribute,value)	\
    (This)->lpVtbl -> GetAttributeValue(This,attribute,value)

#define IRSSParse_GetContent(This,node,content)	\
    (This)->lpVtbl -> GetContent(This,node,content)

#define IRSSParse_SetTimer(This,time)	\
    (This)->lpVtbl -> SetTimer(This,time)

#define IRSSParse_KillTimer(This)	\
    (This)->lpVtbl -> KillTimer(This)

#define IRSSParse_GetFeedTitle(This,title)	\
    (This)->lpVtbl -> GetFeedTitle(This,title)

#define IRSSParse_GetFeedLink(This,Link)	\
    (This)->lpVtbl -> GetFeedLink(This,Link)

#define IRSSParse_GetFeedDescription(This,Description)	\
    (This)->lpVtbl -> GetFeedDescription(This,Description)

#define IRSSParse_GetFeedCopyright(This,Copyright)	\
    (This)->lpVtbl -> GetFeedCopyright(This,Copyright)

#define IRSSParse_GetFeedPubDate(This,PubDate)	\
    (This)->lpVtbl -> GetFeedPubDate(This,PubDate)

#define IRSSParse_GetFeedLastBuildDate(This,LastBuildDate)	\
    (This)->lpVtbl -> GetFeedLastBuildDate(This,LastBuildDate)

#define IRSSParse_GetFeedCategory(This,Category)	\
    (This)->lpVtbl -> GetFeedCategory(This,Category)

#define IRSSParse_GetImageUrl(This,url)	\
    (This)->lpVtbl -> GetImageUrl(This,url)

#define IRSSParse_GetImageTitle(This,Title)	\
    (This)->lpVtbl -> GetImageTitle(This,Title)

#define IRSSParse_GetImageLink(This,Link)	\
    (This)->lpVtbl -> GetImageLink(This,Link)

#define IRSSParse_GetImageDescription(This,Description)	\
    (This)->lpVtbl -> GetImageDescription(This,Description)

#define IRSSParse_GetItemTitle(This,n,title)	\
    (This)->lpVtbl -> GetItemTitle(This,n,title)

#define IRSSParse_GetItemLink(This,n,Link)	\
    (This)->lpVtbl -> GetItemLink(This,n,Link)

#define IRSSParse_GetItemDescription(This,n,Description)	\
    (This)->lpVtbl -> GetItemDescription(This,n,Description)

#define IRSSParse_GetItemAuthor(This,n,Author)	\
    (This)->lpVtbl -> GetItemAuthor(This,n,Author)

#define IRSSParse_GetItemCategory(This,n,Category)	\
    (This)->lpVtbl -> GetItemCategory(This,n,Category)

#define IRSSParse_GetItemPubDate(This,n,PubDate)	\
    (This)->lpVtbl -> GetItemPubDate(This,n,PubDate)

#define IRSSParse_GetItemGuid(This,n,Guid)	\
    (This)->lpVtbl -> GetItemGuid(This,n,Guid)

#define IRSSParse_GetItemSource(This,n,Source)	\
    (This)->lpVtbl -> GetItemSource(This,n,Source)

#define IRSSParse_WriteNodes2File(This,filename)	\
    (This)->lpVtbl -> WriteNodes2File(This,filename)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IRSSParse_SetChannel_Proxy( 
    IRSSParse __RPC_FAR * This,
    /* [in] */ BSTR channel);


void __RPC_STUB IRSSParse_SetChannel_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IRSSParse_SetNotify_Proxy( 
    IRSSParse __RPC_FAR * This,
    /* [in] */ long hwnd,
    /* [in] */ long msg);


void __RPC_STUB IRSSParse_SetNotify_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IRSSParse_Start_Proxy( 
    IRSSParse __RPC_FAR * This);


void __RPC_STUB IRSSParse_Start_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IRSSParse_SetTimeout_Proxy( 
    IRSSParse __RPC_FAR * This,
    /* [in] */ long time);


void __RPC_STUB IRSSParse_SetTimeout_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IRSSParse_Refresh_Proxy( 
    IRSSParse __RPC_FAR * This);


void __RPC_STUB IRSSParse_Refresh_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IRSSParse_IsReady_Proxy( 
    IRSSParse __RPC_FAR * This,
    /* [in] */ VARIANT_BOOL isAsyn,
    /* [retval][out] */ VARIANT_BOOL __RPC_FAR *bResult);


void __RPC_STUB IRSSParse_IsReady_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IRSSParse_WhichSpec_Proxy( 
    IRSSParse __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *bstr);


void __RPC_STUB IRSSParse_WhichSpec_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IRSSParse_SetFirstNodePos_Proxy( 
    IRSSParse __RPC_FAR * This);


void __RPC_STUB IRSSParse_SetFirstNodePos_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IRSSParse_GetNextNode_Proxy( 
    IRSSParse __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *node);


void __RPC_STUB IRSSParse_GetNextNode_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IRSSParse_SetFirstItemPos_Proxy( 
    IRSSParse __RPC_FAR * This);


void __RPC_STUB IRSSParse_SetFirstItemPos_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IRSSParse_GetNextItem_Proxy( 
    IRSSParse __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *node);


void __RPC_STUB IRSSParse_GetNextItem_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IRSSParse_SetFirstAttributePos_Proxy( 
    IRSSParse __RPC_FAR * This);


void __RPC_STUB IRSSParse_SetFirstAttributePos_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IRSSParse_GetNextAttribute_Proxy( 
    IRSSParse __RPC_FAR * This,
    /* [in] */ BSTR node,
    /* [retval][out] */ BSTR __RPC_FAR *attribute);


void __RPC_STUB IRSSParse_GetNextAttribute_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IRSSParse_GetItemCount_Proxy( 
    IRSSParse __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *count);


void __RPC_STUB IRSSParse_GetItemCount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IRSSParse_GetAttributeValue_Proxy( 
    IRSSParse __RPC_FAR * This,
    /* [in] */ BSTR attribute,
    /* [retval][out] */ BSTR __RPC_FAR *value);


void __RPC_STUB IRSSParse_GetAttributeValue_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IRSSParse_GetContent_Proxy( 
    IRSSParse __RPC_FAR * This,
    /* [in] */ BSTR node,
    /* [retval][out] */ BSTR __RPC_FAR *content);


void __RPC_STUB IRSSParse_GetContent_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IRSSParse_SetTimer_Proxy( 
    IRSSParse __RPC_FAR * This,
    /* [in] */ long time);


void __RPC_STUB IRSSParse_SetTimer_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IRSSParse_KillTimer_Proxy( 
    IRSSParse __RPC_FAR * This);


void __RPC_STUB IRSSParse_KillTimer_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IRSSParse_GetFeedTitle_Proxy( 
    IRSSParse __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *title);


void __RPC_STUB IRSSParse_GetFeedTitle_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IRSSParse_GetFeedLink_Proxy( 
    IRSSParse __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *Link);


void __RPC_STUB IRSSParse_GetFeedLink_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IRSSParse_GetFeedDescription_Proxy( 
    IRSSParse __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *Description);


void __RPC_STUB IRSSParse_GetFeedDescription_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IRSSParse_GetFeedCopyright_Proxy( 
    IRSSParse __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *Copyright);


void __RPC_STUB IRSSParse_GetFeedCopyright_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IRSSParse_GetFeedPubDate_Proxy( 
    IRSSParse __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *PubDate);


void __RPC_STUB IRSSParse_GetFeedPubDate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IRSSParse_GetFeedLastBuildDate_Proxy( 
    IRSSParse __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *LastBuildDate);


void __RPC_STUB IRSSParse_GetFeedLastBuildDate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IRSSParse_GetFeedCategory_Proxy( 
    IRSSParse __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *Category);


void __RPC_STUB IRSSParse_GetFeedCategory_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IRSSParse_GetImageUrl_Proxy( 
    IRSSParse __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *url);


void __RPC_STUB IRSSParse_GetImageUrl_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IRSSParse_GetImageTitle_Proxy( 
    IRSSParse __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *Title);


void __RPC_STUB IRSSParse_GetImageTitle_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IRSSParse_GetImageLink_Proxy( 
    IRSSParse __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *Link);


void __RPC_STUB IRSSParse_GetImageLink_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IRSSParse_GetImageDescription_Proxy( 
    IRSSParse __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *Description);


void __RPC_STUB IRSSParse_GetImageDescription_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IRSSParse_GetItemTitle_Proxy( 
    IRSSParse __RPC_FAR * This,
    /* [in] */ long n,
    /* [retval][out] */ BSTR __RPC_FAR *title);


void __RPC_STUB IRSSParse_GetItemTitle_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IRSSParse_GetItemLink_Proxy( 
    IRSSParse __RPC_FAR * This,
    /* [in] */ long n,
    /* [retval][out] */ BSTR __RPC_FAR *Link);


void __RPC_STUB IRSSParse_GetItemLink_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IRSSParse_GetItemDescription_Proxy( 
    IRSSParse __RPC_FAR * This,
    /* [in] */ long n,
    /* [retval][out] */ BSTR __RPC_FAR *Description);


void __RPC_STUB IRSSParse_GetItemDescription_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IRSSParse_GetItemAuthor_Proxy( 
    IRSSParse __RPC_FAR * This,
    /* [in] */ long n,
    /* [retval][out] */ BSTR __RPC_FAR *Author);


void __RPC_STUB IRSSParse_GetItemAuthor_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IRSSParse_GetItemCategory_Proxy( 
    IRSSParse __RPC_FAR * This,
    /* [in] */ long n,
    /* [retval][out] */ BSTR __RPC_FAR *Category);


void __RPC_STUB IRSSParse_GetItemCategory_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IRSSParse_GetItemPubDate_Proxy( 
    IRSSParse __RPC_FAR * This,
    /* [in] */ long n,
    /* [retval][out] */ BSTR __RPC_FAR *PubDate);


void __RPC_STUB IRSSParse_GetItemPubDate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IRSSParse_GetItemGuid_Proxy( 
    IRSSParse __RPC_FAR * This,
    /* [in] */ long n,
    /* [retval][out] */ BSTR __RPC_FAR *Guid);


void __RPC_STUB IRSSParse_GetItemGuid_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IRSSParse_GetItemSource_Proxy( 
    IRSSParse __RPC_FAR * This,
    /* [in] */ long n,
    /* [retval][out] */ BSTR __RPC_FAR *Source);


void __RPC_STUB IRSSParse_GetItemSource_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IRSSParse_WriteNodes2File_Proxy( 
    IRSSParse __RPC_FAR * This,
    /* [in] */ BSTR filename);


void __RPC_STUB IRSSParse_WriteNodes2File_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IRSSParse_INTERFACE_DEFINED__ */



#ifndef __RSSPARSE_VC6_COMLib_LIBRARY_DEFINED__
#define __RSSPARSE_VC6_COMLib_LIBRARY_DEFINED__

/* library RSSPARSE_VC6_COMLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_RSSPARSE_VC6_COMLib;

EXTERN_C const CLSID CLSID_RSSParse;

#ifdef __cplusplus

class DECLSPEC_UUID("F5789789-A93D-4BBA-B1DE-C1EE43E80C2B")
RSSParse;
#endif
#endif /* __RSSPARSE_VC6_COMLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long __RPC_FAR *, unsigned long            , BSTR __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  BSTR_UserMarshal(  unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, BSTR __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  BSTR_UserUnmarshal(unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, BSTR __RPC_FAR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long __RPC_FAR *, BSTR __RPC_FAR * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif
