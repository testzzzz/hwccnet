

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 6.00.0366 */
/* at Fri Feb 20 11:20:06 2009
 */
/* Compiler settings for .\wwsdkcom.idl:
    Oicf, W1, Zp8, env=Win32 (32b run)
    protocol : dce , ms_ext, c_ext
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
//@@MIDL_FILE_HEADING(  )

#pragma warning( disable: 4049 )  /* more than 64k source lines */


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

#ifndef __wwsdkcom_h__
#define __wwsdkcom_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IWWAEP_PluginQuery_FWD_DEFINED__
#define __IWWAEP_PluginQuery_FWD_DEFINED__
typedef interface IWWAEP_PluginQuery IWWAEP_PluginQuery;
#endif 	/* __IWWAEP_PluginQuery_FWD_DEFINED__ */


#ifndef __IWWAEP_PluginQuery2_FWD_DEFINED__
#define __IWWAEP_PluginQuery2_FWD_DEFINED__
typedef interface IWWAEP_PluginQuery2 IWWAEP_PluginQuery2;
#endif 	/* __IWWAEP_PluginQuery2_FWD_DEFINED__ */


#ifndef __IWWPluginQueryResult_FWD_DEFINED__
#define __IWWPluginQueryResult_FWD_DEFINED__
typedef interface IWWPluginQueryResult IWWPluginQueryResult;
#endif 	/* __IWWPluginQueryResult_FWD_DEFINED__ */


#ifndef __ISDKPluginQueryResult_FWD_DEFINED__
#define __ISDKPluginQueryResult_FWD_DEFINED__
typedef interface ISDKPluginQueryResult ISDKPluginQueryResult;
#endif 	/* __ISDKPluginQueryResult_FWD_DEFINED__ */


#ifndef __ISDKPluginQueryResult2_FWD_DEFINED__
#define __ISDKPluginQueryResult2_FWD_DEFINED__
typedef interface ISDKPluginQueryResult2 ISDKPluginQueryResult2;
#endif 	/* __ISDKPluginQueryResult2_FWD_DEFINED__ */


#ifndef __ISDKApplication_FWD_DEFINED__
#define __ISDKApplication_FWD_DEFINED__
typedef interface ISDKApplication ISDKApplication;
#endif 	/* __ISDKApplication_FWD_DEFINED__ */


#ifndef __ISDKApplication2_FWD_DEFINED__
#define __ISDKApplication2_FWD_DEFINED__
typedef interface ISDKApplication2 ISDKApplication2;
#endif 	/* __ISDKApplication2_FWD_DEFINED__ */


#ifndef __ISDKApplication3_FWD_DEFINED__
#define __ISDKApplication3_FWD_DEFINED__
typedef interface ISDKApplication3 ISDKApplication3;
#endif 	/* __ISDKApplication3_FWD_DEFINED__ */


#ifndef __ISDKContactMgr_FWD_DEFINED__
#define __ISDKContactMgr_FWD_DEFINED__
typedef interface ISDKContactMgr ISDKContactMgr;
#endif 	/* __ISDKContactMgr_FWD_DEFINED__ */


#ifndef __IWWContactMgr_FWD_DEFINED__
#define __IWWContactMgr_FWD_DEFINED__
typedef interface IWWContactMgr IWWContactMgr;
#endif 	/* __IWWContactMgr_FWD_DEFINED__ */


#ifndef __ISDKContactMgr2_FWD_DEFINED__
#define __ISDKContactMgr2_FWD_DEFINED__
typedef interface ISDKContactMgr2 ISDKContactMgr2;
#endif 	/* __ISDKContactMgr2_FWD_DEFINED__ */


#ifndef __ISDKContactMgr3_FWD_DEFINED__
#define __ISDKContactMgr3_FWD_DEFINED__
typedef interface ISDKContactMgr3 ISDKContactMgr3;
#endif 	/* __ISDKContactMgr3_FWD_DEFINED__ */


#ifndef __ISDKMainFrame_FWD_DEFINED__
#define __ISDKMainFrame_FWD_DEFINED__
typedef interface ISDKMainFrame ISDKMainFrame;
#endif 	/* __ISDKMainFrame_FWD_DEFINED__ */


#ifndef __ISDKMainFrame2_FWD_DEFINED__
#define __ISDKMainFrame2_FWD_DEFINED__
typedef interface ISDKMainFrame2 ISDKMainFrame2;
#endif 	/* __ISDKMainFrame2_FWD_DEFINED__ */


#ifndef __ISDKContact_FWD_DEFINED__
#define __ISDKContact_FWD_DEFINED__
typedef interface ISDKContact ISDKContact;
#endif 	/* __ISDKContact_FWD_DEFINED__ */


#ifndef __ISDKLoginUser_FWD_DEFINED__
#define __ISDKLoginUser_FWD_DEFINED__
typedef interface ISDKLoginUser ISDKLoginUser;
#endif 	/* __ISDKLoginUser_FWD_DEFINED__ */


#ifndef __ISDKLoginUser2_FWD_DEFINED__
#define __ISDKLoginUser2_FWD_DEFINED__
typedef interface ISDKLoginUser2 ISDKLoginUser2;
#endif 	/* __ISDKLoginUser2_FWD_DEFINED__ */


#ifndef __ISDKLoginUser3_FWD_DEFINED__
#define __ISDKLoginUser3_FWD_DEFINED__
typedef interface ISDKLoginUser3 ISDKLoginUser3;
#endif 	/* __ISDKLoginUser3_FWD_DEFINED__ */


#ifndef __ISDKChatDlgMgr_FWD_DEFINED__
#define __ISDKChatDlgMgr_FWD_DEFINED__
typedef interface ISDKChatDlgMgr ISDKChatDlgMgr;
#endif 	/* __ISDKChatDlgMgr_FWD_DEFINED__ */


#ifndef __ISDKChatDlgMgr2_FWD_DEFINED__
#define __ISDKChatDlgMgr2_FWD_DEFINED__
typedef interface ISDKChatDlgMgr2 ISDKChatDlgMgr2;
#endif 	/* __ISDKChatDlgMgr2_FWD_DEFINED__ */


#ifndef __ISDKObjectCollection_FWD_DEFINED__
#define __ISDKObjectCollection_FWD_DEFINED__
typedef interface ISDKObjectCollection ISDKObjectCollection;
#endif 	/* __ISDKObjectCollection_FWD_DEFINED__ */


#ifndef __ISDKSlot_FWD_DEFINED__
#define __ISDKSlot_FWD_DEFINED__
typedef interface ISDKSlot ISDKSlot;
#endif 	/* __ISDKSlot_FWD_DEFINED__ */


#ifndef __ISDKImportantPanelSlot_FWD_DEFINED__
#define __ISDKImportantPanelSlot_FWD_DEFINED__
typedef interface ISDKImportantPanelSlot ISDKImportantPanelSlot;
#endif 	/* __ISDKImportantPanelSlot_FWD_DEFINED__ */


#ifndef __ISDKImportantPanelSlot2_FWD_DEFINED__
#define __ISDKImportantPanelSlot2_FWD_DEFINED__
typedef interface ISDKImportantPanelSlot2 ISDKImportantPanelSlot2;
#endif 	/* __ISDKImportantPanelSlot2_FWD_DEFINED__ */


#ifndef __ISDKBottomPanelSlot_FWD_DEFINED__
#define __ISDKBottomPanelSlot_FWD_DEFINED__
typedef interface ISDKBottomPanelSlot ISDKBottomPanelSlot;
#endif 	/* __ISDKBottomPanelSlot_FWD_DEFINED__ */


#ifndef __ISDKBottomPanelSlot2_FWD_DEFINED__
#define __ISDKBottomPanelSlot2_FWD_DEFINED__
typedef interface ISDKBottomPanelSlot2 ISDKBottomPanelSlot2;
#endif 	/* __ISDKBottomPanelSlot2_FWD_DEFINED__ */


#ifndef __ISDKChatDlg_FWD_DEFINED__
#define __ISDKChatDlg_FWD_DEFINED__
typedef interface ISDKChatDlg ISDKChatDlg;
#endif 	/* __ISDKChatDlg_FWD_DEFINED__ */


#ifndef __ISDKChatDlg2_FWD_DEFINED__
#define __ISDKChatDlg2_FWD_DEFINED__
typedef interface ISDKChatDlg2 ISDKChatDlg2;
#endif 	/* __ISDKChatDlg2_FWD_DEFINED__ */


#ifndef __ISDKChatDlg3_FWD_DEFINED__
#define __ISDKChatDlg3_FWD_DEFINED__
typedef interface ISDKChatDlg3 ISDKChatDlg3;
#endif 	/* __ISDKChatDlg3_FWD_DEFINED__ */


#ifndef __IWWContact_FWD_DEFINED__
#define __IWWContact_FWD_DEFINED__
typedef interface IWWContact IWWContact;
#endif 	/* __IWWContact_FWD_DEFINED__ */


#ifndef __ISDKContact2_FWD_DEFINED__
#define __ISDKContact2_FWD_DEFINED__
typedef interface ISDKContact2 ISDKContact2;
#endif 	/* __ISDKContact2_FWD_DEFINED__ */


#ifndef __ISDKContact3_FWD_DEFINED__
#define __ISDKContact3_FWD_DEFINED__
typedef interface ISDKContact3 ISDKContact3;
#endif 	/* __ISDKContact3_FWD_DEFINED__ */


#ifndef __IWWSlot_FWD_DEFINED__
#define __IWWSlot_FWD_DEFINED__
typedef interface IWWSlot IWWSlot;
#endif 	/* __IWWSlot_FWD_DEFINED__ */


#ifndef __IWWIMChatSlot_FWD_DEFINED__
#define __IWWIMChatSlot_FWD_DEFINED__
typedef interface IWWIMChatSlot IWWIMChatSlot;
#endif 	/* __IWWIMChatSlot_FWD_DEFINED__ */


#ifndef __ISDKIMChatInputToolbarSlot_FWD_DEFINED__
#define __ISDKIMChatInputToolbarSlot_FWD_DEFINED__
typedef interface ISDKIMChatInputToolbarSlot ISDKIMChatInputToolbarSlot;
#endif 	/* __ISDKIMChatInputToolbarSlot_FWD_DEFINED__ */


#ifndef __ISDKIMChatInputToolbarSlot2_FWD_DEFINED__
#define __ISDKIMChatInputToolbarSlot2_FWD_DEFINED__
typedef interface ISDKIMChatInputToolbarSlot2 ISDKIMChatInputToolbarSlot2;
#endif 	/* __ISDKIMChatInputToolbarSlot2_FWD_DEFINED__ */


#ifndef __ISDKIMChatMainToolbarSlot_FWD_DEFINED__
#define __ISDKIMChatMainToolbarSlot_FWD_DEFINED__
typedef interface ISDKIMChatMainToolbarSlot ISDKIMChatMainToolbarSlot;
#endif 	/* __ISDKIMChatMainToolbarSlot_FWD_DEFINED__ */


#ifndef __ISDKIMChatMainToolbarSlot2_FWD_DEFINED__
#define __ISDKIMChatMainToolbarSlot2_FWD_DEFINED__
typedef interface ISDKIMChatMainToolbarSlot2 ISDKIMChatMainToolbarSlot2;
#endif 	/* __ISDKIMChatMainToolbarSlot2_FWD_DEFINED__ */


#ifndef __ISlotItemInfor_FWD_DEFINED__
#define __ISlotItemInfor_FWD_DEFINED__
typedef interface ISlotItemInfor ISlotItemInfor;
#endif 	/* __ISlotItemInfor_FWD_DEFINED__ */


#ifndef __ISDKMainMenuSlot_FWD_DEFINED__
#define __ISDKMainMenuSlot_FWD_DEFINED__
typedef interface ISDKMainMenuSlot ISDKMainMenuSlot;
#endif 	/* __ISDKMainMenuSlot_FWD_DEFINED__ */


#ifndef __ISDKMainMenuSlot2_FWD_DEFINED__
#define __ISDKMainMenuSlot2_FWD_DEFINED__
typedef interface ISDKMainMenuSlot2 ISDKMainMenuSlot2;
#endif 	/* __ISDKMainMenuSlot2_FWD_DEFINED__ */


#ifndef __IPluginMgr_FWD_DEFINED__
#define __IPluginMgr_FWD_DEFINED__
typedef interface IPluginMgr IPluginMgr;
#endif 	/* __IPluginMgr_FWD_DEFINED__ */


#ifndef __IPluginMgrV2_FWD_DEFINED__
#define __IPluginMgrV2_FWD_DEFINED__
typedef interface IPluginMgrV2 IPluginMgrV2;
#endif 	/* __IPluginMgrV2_FWD_DEFINED__ */


#ifndef __IPluginMgrV3_FWD_DEFINED__
#define __IPluginMgrV3_FWD_DEFINED__
typedef interface IPluginMgrV3 IPluginMgrV3;
#endif 	/* __IPluginMgrV3_FWD_DEFINED__ */


#ifndef __IWWApplication_FWD_DEFINED__
#define __IWWApplication_FWD_DEFINED__
typedef interface IWWApplication IWWApplication;
#endif 	/* __IWWApplication_FWD_DEFINED__ */


#ifndef __IWWChatDlg_FWD_DEFINED__
#define __IWWChatDlg_FWD_DEFINED__
typedef interface IWWChatDlg IWWChatDlg;
#endif 	/* __IWWChatDlg_FWD_DEFINED__ */


#ifndef __IWWChatDlgMgr_FWD_DEFINED__
#define __IWWChatDlgMgr_FWD_DEFINED__
typedef interface IWWChatDlgMgr IWWChatDlgMgr;
#endif 	/* __IWWChatDlgMgr_FWD_DEFINED__ */


#ifndef __IWWMainFrame_FWD_DEFINED__
#define __IWWMainFrame_FWD_DEFINED__
typedef interface IWWMainFrame IWWMainFrame;
#endif 	/* __IWWMainFrame_FWD_DEFINED__ */


#ifndef __ISDKNotifyUserLogin_FWD_DEFINED__
#define __ISDKNotifyUserLogin_FWD_DEFINED__
typedef interface ISDKNotifyUserLogin ISDKNotifyUserLogin;
#endif 	/* __ISDKNotifyUserLogin_FWD_DEFINED__ */


#ifndef __ISDKNotifyOffline_FWD_DEFINED__
#define __ISDKNotifyOffline_FWD_DEFINED__
typedef interface ISDKNotifyOffline ISDKNotifyOffline;
#endif 	/* __ISDKNotifyOffline_FWD_DEFINED__ */


#ifndef __ISubMenuItemInfo_FWD_DEFINED__
#define __ISubMenuItemInfo_FWD_DEFINED__
typedef interface ISubMenuItemInfo ISubMenuItemInfo;
#endif 	/* __ISubMenuItemInfo_FWD_DEFINED__ */


#ifndef __ISDKNotifyChatMessage_FWD_DEFINED__
#define __ISDKNotifyChatMessage_FWD_DEFINED__
typedef interface ISDKNotifyChatMessage ISDKNotifyChatMessage;
#endif 	/* __ISDKNotifyChatMessage_FWD_DEFINED__ */


#ifndef __ISDKNotifyShowOption_FWD_DEFINED__
#define __ISDKNotifyShowOption_FWD_DEFINED__
typedef interface ISDKNotifyShowOption ISDKNotifyShowOption;
#endif 	/* __ISDKNotifyShowOption_FWD_DEFINED__ */


#ifndef __ISDKNotifyContactTabChanging_FWD_DEFINED__
#define __ISDKNotifyContactTabChanging_FWD_DEFINED__
typedef interface ISDKNotifyContactTabChanging ISDKNotifyContactTabChanging;
#endif 	/* __ISDKNotifyContactTabChanging_FWD_DEFINED__ */


#ifndef __ISDKNotifyContactTabChanged_FWD_DEFINED__
#define __ISDKNotifyContactTabChanged_FWD_DEFINED__
typedef interface ISDKNotifyContactTabChanged ISDKNotifyContactTabChanged;
#endif 	/* __ISDKNotifyContactTabChanged_FWD_DEFINED__ */


#ifndef __IWWPluginKey_FWD_DEFINED__
#define __IWWPluginKey_FWD_DEFINED__
typedef interface IWWPluginKey IWWPluginKey;
#endif 	/* __IWWPluginKey_FWD_DEFINED__ */


#ifndef __IWWPluginQueryRes_FWD_DEFINED__
#define __IWWPluginQueryRes_FWD_DEFINED__
typedef interface IWWPluginQueryRes IWWPluginQueryRes;
#endif 	/* __IWWPluginQueryRes_FWD_DEFINED__ */


#ifndef __ISDKGroup_FWD_DEFINED__
#define __ISDKGroup_FWD_DEFINED__
typedef interface ISDKGroup ISDKGroup;
#endif 	/* __ISDKGroup_FWD_DEFINED__ */


#ifndef __IWWGroup_FWD_DEFINED__
#define __IWWGroup_FWD_DEFINED__
typedef interface IWWGroup IWWGroup;
#endif 	/* __IWWGroup_FWD_DEFINED__ */


#ifndef __IWWPluginMonitor_FWD_DEFINED__
#define __IWWPluginMonitor_FWD_DEFINED__
typedef interface IWWPluginMonitor IWWPluginMonitor;
#endif 	/* __IWWPluginMonitor_FWD_DEFINED__ */


#ifndef __IWWPluginProxy_FWD_DEFINED__
#define __IWWPluginProxy_FWD_DEFINED__
typedef interface IWWPluginProxy IWWPluginProxy;
#endif 	/* __IWWPluginProxy_FWD_DEFINED__ */


#ifndef __IWWItemFacade_FWD_DEFINED__
#define __IWWItemFacade_FWD_DEFINED__
typedef interface IWWItemFacade IWWItemFacade;
#endif 	/* __IWWItemFacade_FWD_DEFINED__ */


#ifndef __IWWPluginInfo_FWD_DEFINED__
#define __IWWPluginInfo_FWD_DEFINED__
typedef interface IWWPluginInfo IWWPluginInfo;
#endif 	/* __IWWPluginInfo_FWD_DEFINED__ */


#ifndef __IAEP_PluginQueryNotify_FWD_DEFINED__
#define __IAEP_PluginQueryNotify_FWD_DEFINED__
typedef interface IAEP_PluginQueryNotify IAEP_PluginQueryNotify;
#endif 	/* __IAEP_PluginQueryNotify_FWD_DEFINED__ */


#ifndef __AEP_PluginQuery_FWD_DEFINED__
#define __AEP_PluginQuery_FWD_DEFINED__

#ifdef __cplusplus
typedef class AEP_PluginQuery AEP_PluginQuery;
#else
typedef struct AEP_PluginQuery AEP_PluginQuery;
#endif /* __cplusplus */

#endif 	/* __AEP_PluginQuery_FWD_DEFINED__ */


#ifndef __SDKPluginQueryResult_FWD_DEFINED__
#define __SDKPluginQueryResult_FWD_DEFINED__

#ifdef __cplusplus
typedef class SDKPluginQueryResult SDKPluginQueryResult;
#else
typedef struct SDKPluginQueryResult SDKPluginQueryResult;
#endif /* __cplusplus */

#endif 	/* __SDKPluginQueryResult_FWD_DEFINED__ */


#ifndef __ISDKPlugin_FWD_DEFINED__
#define __ISDKPlugin_FWD_DEFINED__
typedef interface ISDKPlugin ISDKPlugin;
#endif 	/* __ISDKPlugin_FWD_DEFINED__ */


#ifndef __ISDKPlugin2_FWD_DEFINED__
#define __ISDKPlugin2_FWD_DEFINED__
typedef interface ISDKPlugin2 ISDKPlugin2;
#endif 	/* __ISDKPlugin2_FWD_DEFINED__ */


#ifndef __ISDKDevPlugin_FWD_DEFINED__
#define __ISDKDevPlugin_FWD_DEFINED__
typedef interface ISDKDevPlugin ISDKDevPlugin;
#endif 	/* __ISDKDevPlugin_FWD_DEFINED__ */


#ifndef __ISDKPluginItem_FWD_DEFINED__
#define __ISDKPluginItem_FWD_DEFINED__
typedef interface ISDKPluginItem ISDKPluginItem;
#endif 	/* __ISDKPluginItem_FWD_DEFINED__ */


#ifndef __SDKApplication_FWD_DEFINED__
#define __SDKApplication_FWD_DEFINED__

#ifdef __cplusplus
typedef class SDKApplication SDKApplication;
#else
typedef struct SDKApplication SDKApplication;
#endif /* __cplusplus */

#endif 	/* __SDKApplication_FWD_DEFINED__ */


#ifndef __SDKContactMgr_FWD_DEFINED__
#define __SDKContactMgr_FWD_DEFINED__

#ifdef __cplusplus
typedef class SDKContactMgr SDKContactMgr;
#else
typedef struct SDKContactMgr SDKContactMgr;
#endif /* __cplusplus */

#endif 	/* __SDKContactMgr_FWD_DEFINED__ */


#ifndef __SDKMainFrame_FWD_DEFINED__
#define __SDKMainFrame_FWD_DEFINED__

#ifdef __cplusplus
typedef class SDKMainFrame SDKMainFrame;
#else
typedef struct SDKMainFrame SDKMainFrame;
#endif /* __cplusplus */

#endif 	/* __SDKMainFrame_FWD_DEFINED__ */


#ifndef __SDKLoginUser_FWD_DEFINED__
#define __SDKLoginUser_FWD_DEFINED__

#ifdef __cplusplus
typedef class SDKLoginUser SDKLoginUser;
#else
typedef struct SDKLoginUser SDKLoginUser;
#endif /* __cplusplus */

#endif 	/* __SDKLoginUser_FWD_DEFINED__ */


#ifndef __SDKChatDlgMgr_FWD_DEFINED__
#define __SDKChatDlgMgr_FWD_DEFINED__

#ifdef __cplusplus
typedef class SDKChatDlgMgr SDKChatDlgMgr;
#else
typedef struct SDKChatDlgMgr SDKChatDlgMgr;
#endif /* __cplusplus */

#endif 	/* __SDKChatDlgMgr_FWD_DEFINED__ */


#ifndef __SDKObjectCollection_FWD_DEFINED__
#define __SDKObjectCollection_FWD_DEFINED__

#ifdef __cplusplus
typedef class SDKObjectCollection SDKObjectCollection;
#else
typedef struct SDKObjectCollection SDKObjectCollection;
#endif /* __cplusplus */

#endif 	/* __SDKObjectCollection_FWD_DEFINED__ */


#ifndef __SDKImportantPanelSlot_FWD_DEFINED__
#define __SDKImportantPanelSlot_FWD_DEFINED__

#ifdef __cplusplus
typedef class SDKImportantPanelSlot SDKImportantPanelSlot;
#else
typedef struct SDKImportantPanelSlot SDKImportantPanelSlot;
#endif /* __cplusplus */

#endif 	/* __SDKImportantPanelSlot_FWD_DEFINED__ */


#ifndef __SDKBottomPanelSlot_FWD_DEFINED__
#define __SDKBottomPanelSlot_FWD_DEFINED__

#ifdef __cplusplus
typedef class SDKBottomPanelSlot SDKBottomPanelSlot;
#else
typedef struct SDKBottomPanelSlot SDKBottomPanelSlot;
#endif /* __cplusplus */

#endif 	/* __SDKBottomPanelSlot_FWD_DEFINED__ */


#ifndef __SDKChatDlg_FWD_DEFINED__
#define __SDKChatDlg_FWD_DEFINED__

#ifdef __cplusplus
typedef class SDKChatDlg SDKChatDlg;
#else
typedef struct SDKChatDlg SDKChatDlg;
#endif /* __cplusplus */

#endif 	/* __SDKChatDlg_FWD_DEFINED__ */


#ifndef __SDKContact_FWD_DEFINED__
#define __SDKContact_FWD_DEFINED__

#ifdef __cplusplus
typedef class SDKContact SDKContact;
#else
typedef struct SDKContact SDKContact;
#endif /* __cplusplus */

#endif 	/* __SDKContact_FWD_DEFINED__ */


#ifndef __SDKIMInputToolbarSlot_FWD_DEFINED__
#define __SDKIMInputToolbarSlot_FWD_DEFINED__

#ifdef __cplusplus
typedef class SDKIMInputToolbarSlot SDKIMInputToolbarSlot;
#else
typedef struct SDKIMInputToolbarSlot SDKIMInputToolbarSlot;
#endif /* __cplusplus */

#endif 	/* __SDKIMInputToolbarSlot_FWD_DEFINED__ */


#ifndef __SDKIMMainToolbarSlot_FWD_DEFINED__
#define __SDKIMMainToolbarSlot_FWD_DEFINED__

#ifdef __cplusplus
typedef class SDKIMMainToolbarSlot SDKIMMainToolbarSlot;
#else
typedef struct SDKIMMainToolbarSlot SDKIMMainToolbarSlot;
#endif /* __cplusplus */

#endif 	/* __SDKIMMainToolbarSlot_FWD_DEFINED__ */


#ifndef __PluginMgr_FWD_DEFINED__
#define __PluginMgr_FWD_DEFINED__

#ifdef __cplusplus
typedef class PluginMgr PluginMgr;
#else
typedef struct PluginMgr PluginMgr;
#endif /* __cplusplus */

#endif 	/* __PluginMgr_FWD_DEFINED__ */


#ifndef __PluginMgrV2_FWD_DEFINED__
#define __PluginMgrV2_FWD_DEFINED__

#ifdef __cplusplus
typedef class PluginMgrV2 PluginMgrV2;
#else
typedef struct PluginMgrV2 PluginMgrV2;
#endif /* __cplusplus */

#endif 	/* __PluginMgrV2_FWD_DEFINED__ */


#ifndef __SlotItemInfor_FWD_DEFINED__
#define __SlotItemInfor_FWD_DEFINED__

#ifdef __cplusplus
typedef class SlotItemInfor SlotItemInfor;
#else
typedef struct SlotItemInfor SlotItemInfor;
#endif /* __cplusplus */

#endif 	/* __SlotItemInfor_FWD_DEFINED__ */


#ifndef __SDKMainMenuSlot_FWD_DEFINED__
#define __SDKMainMenuSlot_FWD_DEFINED__

#ifdef __cplusplus
typedef class SDKMainMenuSlot SDKMainMenuSlot;
#else
typedef struct SDKMainMenuSlot SDKMainMenuSlot;
#endif /* __cplusplus */

#endif 	/* __SDKMainMenuSlot_FWD_DEFINED__ */


#ifndef __SDKNotifyUserLogin_FWD_DEFINED__
#define __SDKNotifyUserLogin_FWD_DEFINED__

#ifdef __cplusplus
typedef class SDKNotifyUserLogin SDKNotifyUserLogin;
#else
typedef struct SDKNotifyUserLogin SDKNotifyUserLogin;
#endif /* __cplusplus */

#endif 	/* __SDKNotifyUserLogin_FWD_DEFINED__ */


#ifndef __SDKNotifyOffline_FWD_DEFINED__
#define __SDKNotifyOffline_FWD_DEFINED__

#ifdef __cplusplus
typedef class SDKNotifyOffline SDKNotifyOffline;
#else
typedef struct SDKNotifyOffline SDKNotifyOffline;
#endif /* __cplusplus */

#endif 	/* __SDKNotifyOffline_FWD_DEFINED__ */


#ifndef __SubMenuItemInfo_FWD_DEFINED__
#define __SubMenuItemInfo_FWD_DEFINED__

#ifdef __cplusplus
typedef class SubMenuItemInfo SubMenuItemInfo;
#else
typedef struct SubMenuItemInfo SubMenuItemInfo;
#endif /* __cplusplus */

#endif 	/* __SubMenuItemInfo_FWD_DEFINED__ */


#ifndef __SDKNotifyChatMessage_FWD_DEFINED__
#define __SDKNotifyChatMessage_FWD_DEFINED__

#ifdef __cplusplus
typedef class SDKNotifyChatMessage SDKNotifyChatMessage;
#else
typedef struct SDKNotifyChatMessage SDKNotifyChatMessage;
#endif /* __cplusplus */

#endif 	/* __SDKNotifyChatMessage_FWD_DEFINED__ */


#ifndef __SDKNotifyShowOption_FWD_DEFINED__
#define __SDKNotifyShowOption_FWD_DEFINED__

#ifdef __cplusplus
typedef class SDKNotifyShowOption SDKNotifyShowOption;
#else
typedef struct SDKNotifyShowOption SDKNotifyShowOption;
#endif /* __cplusplus */

#endif 	/* __SDKNotifyShowOption_FWD_DEFINED__ */


#ifndef __SDKNotifyContactTabChanging_FWD_DEFINED__
#define __SDKNotifyContactTabChanging_FWD_DEFINED__

#ifdef __cplusplus
typedef class SDKNotifyContactTabChanging SDKNotifyContactTabChanging;
#else
typedef struct SDKNotifyContactTabChanging SDKNotifyContactTabChanging;
#endif /* __cplusplus */

#endif 	/* __SDKNotifyContactTabChanging_FWD_DEFINED__ */


#ifndef __SDKNotifyContactTabChanged_FWD_DEFINED__
#define __SDKNotifyContactTabChanged_FWD_DEFINED__

#ifdef __cplusplus
typedef class SDKNotifyContactTabChanged SDKNotifyContactTabChanged;
#else
typedef struct SDKNotifyContactTabChanged SDKNotifyContactTabChanged;
#endif /* __cplusplus */

#endif 	/* __SDKNotifyContactTabChanged_FWD_DEFINED__ */


#ifndef __WWPluginKey_FWD_DEFINED__
#define __WWPluginKey_FWD_DEFINED__

#ifdef __cplusplus
typedef class WWPluginKey WWPluginKey;
#else
typedef struct WWPluginKey WWPluginKey;
#endif /* __cplusplus */

#endif 	/* __WWPluginKey_FWD_DEFINED__ */


#ifndef __WWPluginQueryRes_FWD_DEFINED__
#define __WWPluginQueryRes_FWD_DEFINED__

#ifdef __cplusplus
typedef class WWPluginQueryRes WWPluginQueryRes;
#else
typedef struct WWPluginQueryRes WWPluginQueryRes;
#endif /* __cplusplus */

#endif 	/* __WWPluginQueryRes_FWD_DEFINED__ */


#ifndef __SDKGroup_FWD_DEFINED__
#define __SDKGroup_FWD_DEFINED__

#ifdef __cplusplus
typedef class SDKGroup SDKGroup;
#else
typedef struct SDKGroup SDKGroup;
#endif /* __cplusplus */

#endif 	/* __SDKGroup_FWD_DEFINED__ */


#ifndef __WWPluginMonitor_FWD_DEFINED__
#define __WWPluginMonitor_FWD_DEFINED__

#ifdef __cplusplus
typedef class WWPluginMonitor WWPluginMonitor;
#else
typedef struct WWPluginMonitor WWPluginMonitor;
#endif /* __cplusplus */

#endif 	/* __WWPluginMonitor_FWD_DEFINED__ */


#ifndef __WWPluginProxy_FWD_DEFINED__
#define __WWPluginProxy_FWD_DEFINED__

#ifdef __cplusplus
typedef class WWPluginProxy WWPluginProxy;
#else
typedef struct WWPluginProxy WWPluginProxy;
#endif /* __cplusplus */

#endif 	/* __WWPluginProxy_FWD_DEFINED__ */


#ifndef __WWPluginItemFacade_FWD_DEFINED__
#define __WWPluginItemFacade_FWD_DEFINED__

#ifdef __cplusplus
typedef class WWPluginItemFacade WWPluginItemFacade;
#else
typedef struct WWPluginItemFacade WWPluginItemFacade;
#endif /* __cplusplus */

#endif 	/* __WWPluginItemFacade_FWD_DEFINED__ */


#ifndef __WWPluginInfo_FWD_DEFINED__
#define __WWPluginInfo_FWD_DEFINED__

#ifdef __cplusplus
typedef class WWPluginInfo WWPluginInfo;
#else
typedef struct WWPluginInfo WWPluginInfo;
#endif /* __cplusplus */

#endif 	/* __WWPluginInfo_FWD_DEFINED__ */


#ifndef __WWWindowItemFacade_FWD_DEFINED__
#define __WWWindowItemFacade_FWD_DEFINED__

#ifdef __cplusplus
typedef class WWWindowItemFacade WWWindowItemFacade;
#else
typedef struct WWWindowItemFacade WWWindowItemFacade;
#endif /* __cplusplus */

#endif 	/* __WWWindowItemFacade_FWD_DEFINED__ */


#ifndef __WWMsgFilter_FWD_DEFINED__
#define __WWMsgFilter_FWD_DEFINED__

#ifdef __cplusplus
typedef class WWMsgFilter WWMsgFilter;
#else
typedef struct WWMsgFilter WWMsgFilter;
#endif /* __cplusplus */

#endif 	/* __WWMsgFilter_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 

void * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void * ); 

/* interface __MIDL_itf_wwsdkcom_0000 */
/* [local] */ 







































extern RPC_IF_HANDLE __MIDL_itf_wwsdkcom_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wwsdkcom_0000_v0_0_s_ifspec;

#ifndef __IWWAEP_PluginQuery_INTERFACE_DEFINED__
#define __IWWAEP_PluginQuery_INTERFACE_DEFINED__

/* interface IWWAEP_PluginQuery */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IWWAEP_PluginQuery;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C1D853A7-6312-485D-B429-88DEE876C3EA")
    IWWAEP_PluginQuery : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetPluginInfo( 
            /* [in] */ ISDKObjectCollection *pPluginCol) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE NotifySubsInfo( 
            /* [in] */ BSTR appID,
            BSTR userID) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetPluginLocalSubsInfo( 
            /* [in] */ BSTR appID,
            BSTR userID,
            /* [retval][out] */ IDispatch **ppDisp) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetPluginSubsInfo( 
            /* [in] */ BSTR appId,
            /* [in] */ BSTR userID,
            /* [in] */ ISDKPluginQueryResult *pQueryResult) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWWAEP_PluginQueryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWWAEP_PluginQuery * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWWAEP_PluginQuery * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWWAEP_PluginQuery * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IWWAEP_PluginQuery * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IWWAEP_PluginQuery * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IWWAEP_PluginQuery * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWWAEP_PluginQuery * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetPluginInfo )( 
            IWWAEP_PluginQuery * This,
            /* [in] */ ISDKObjectCollection *pPluginCol);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *NotifySubsInfo )( 
            IWWAEP_PluginQuery * This,
            /* [in] */ BSTR appID,
            BSTR userID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetPluginLocalSubsInfo )( 
            IWWAEP_PluginQuery * This,
            /* [in] */ BSTR appID,
            BSTR userID,
            /* [retval][out] */ IDispatch **ppDisp);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetPluginSubsInfo )( 
            IWWAEP_PluginQuery * This,
            /* [in] */ BSTR appId,
            /* [in] */ BSTR userID,
            /* [in] */ ISDKPluginQueryResult *pQueryResult);
        
        END_INTERFACE
    } IWWAEP_PluginQueryVtbl;

    interface IWWAEP_PluginQuery
    {
        CONST_VTBL struct IWWAEP_PluginQueryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWWAEP_PluginQuery_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IWWAEP_PluginQuery_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IWWAEP_PluginQuery_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IWWAEP_PluginQuery_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IWWAEP_PluginQuery_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IWWAEP_PluginQuery_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IWWAEP_PluginQuery_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IWWAEP_PluginQuery_GetPluginInfo(This,pPluginCol)	\
    (This)->lpVtbl -> GetPluginInfo(This,pPluginCol)

#define IWWAEP_PluginQuery_NotifySubsInfo(This,appID,userID)	\
    (This)->lpVtbl -> NotifySubsInfo(This,appID,userID)

#define IWWAEP_PluginQuery_GetPluginLocalSubsInfo(This,appID,userID,ppDisp)	\
    (This)->lpVtbl -> GetPluginLocalSubsInfo(This,appID,userID,ppDisp)

#define IWWAEP_PluginQuery_GetPluginSubsInfo(This,appId,userID,pQueryResult)	\
    (This)->lpVtbl -> GetPluginSubsInfo(This,appId,userID,pQueryResult)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IWWAEP_PluginQuery_GetPluginInfo_Proxy( 
    IWWAEP_PluginQuery * This,
    /* [in] */ ISDKObjectCollection *pPluginCol);


void __RPC_STUB IWWAEP_PluginQuery_GetPluginInfo_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IWWAEP_PluginQuery_NotifySubsInfo_Proxy( 
    IWWAEP_PluginQuery * This,
    /* [in] */ BSTR appID,
    BSTR userID);


void __RPC_STUB IWWAEP_PluginQuery_NotifySubsInfo_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IWWAEP_PluginQuery_GetPluginLocalSubsInfo_Proxy( 
    IWWAEP_PluginQuery * This,
    /* [in] */ BSTR appID,
    BSTR userID,
    /* [retval][out] */ IDispatch **ppDisp);


void __RPC_STUB IWWAEP_PluginQuery_GetPluginLocalSubsInfo_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IWWAEP_PluginQuery_GetPluginSubsInfo_Proxy( 
    IWWAEP_PluginQuery * This,
    /* [in] */ BSTR appId,
    /* [in] */ BSTR userID,
    /* [in] */ ISDKPluginQueryResult *pQueryResult);


void __RPC_STUB IWWAEP_PluginQuery_GetPluginSubsInfo_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IWWAEP_PluginQuery_INTERFACE_DEFINED__ */


#ifndef __IWWAEP_PluginQuery2_INTERFACE_DEFINED__
#define __IWWAEP_PluginQuery2_INTERFACE_DEFINED__

/* interface IWWAEP_PluginQuery2 */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IWWAEP_PluginQuery2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B2073CA8-EF9C-47c5-AEF1-576B2E8AFDE4")
    IWWAEP_PluginQuery2 : public IWWAEP_PluginQuery
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetPluginSubsInfoEx( 
            /* [in] */ BSTR appId,
            /* [in] */ BSTR userID,
            /* [retval][out] */ ISDKPluginQueryResult **ppQueryResult) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetPluginInfoEx( 
            /* [in] */ ISDKObjectCollection *pPluginCol,
            /* [in] */ BSTR sFlag) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWWAEP_PluginQuery2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWWAEP_PluginQuery2 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWWAEP_PluginQuery2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWWAEP_PluginQuery2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IWWAEP_PluginQuery2 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IWWAEP_PluginQuery2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IWWAEP_PluginQuery2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWWAEP_PluginQuery2 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetPluginInfo )( 
            IWWAEP_PluginQuery2 * This,
            /* [in] */ ISDKObjectCollection *pPluginCol);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *NotifySubsInfo )( 
            IWWAEP_PluginQuery2 * This,
            /* [in] */ BSTR appID,
            BSTR userID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetPluginLocalSubsInfo )( 
            IWWAEP_PluginQuery2 * This,
            /* [in] */ BSTR appID,
            BSTR userID,
            /* [retval][out] */ IDispatch **ppDisp);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetPluginSubsInfo )( 
            IWWAEP_PluginQuery2 * This,
            /* [in] */ BSTR appId,
            /* [in] */ BSTR userID,
            /* [in] */ ISDKPluginQueryResult *pQueryResult);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetPluginSubsInfoEx )( 
            IWWAEP_PluginQuery2 * This,
            /* [in] */ BSTR appId,
            /* [in] */ BSTR userID,
            /* [retval][out] */ ISDKPluginQueryResult **ppQueryResult);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetPluginInfoEx )( 
            IWWAEP_PluginQuery2 * This,
            /* [in] */ ISDKObjectCollection *pPluginCol,
            /* [in] */ BSTR sFlag);
        
        END_INTERFACE
    } IWWAEP_PluginQuery2Vtbl;

    interface IWWAEP_PluginQuery2
    {
        CONST_VTBL struct IWWAEP_PluginQuery2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWWAEP_PluginQuery2_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IWWAEP_PluginQuery2_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IWWAEP_PluginQuery2_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IWWAEP_PluginQuery2_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IWWAEP_PluginQuery2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IWWAEP_PluginQuery2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IWWAEP_PluginQuery2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IWWAEP_PluginQuery2_GetPluginInfo(This,pPluginCol)	\
    (This)->lpVtbl -> GetPluginInfo(This,pPluginCol)

#define IWWAEP_PluginQuery2_NotifySubsInfo(This,appID,userID)	\
    (This)->lpVtbl -> NotifySubsInfo(This,appID,userID)

#define IWWAEP_PluginQuery2_GetPluginLocalSubsInfo(This,appID,userID,ppDisp)	\
    (This)->lpVtbl -> GetPluginLocalSubsInfo(This,appID,userID,ppDisp)

#define IWWAEP_PluginQuery2_GetPluginSubsInfo(This,appId,userID,pQueryResult)	\
    (This)->lpVtbl -> GetPluginSubsInfo(This,appId,userID,pQueryResult)


#define IWWAEP_PluginQuery2_GetPluginSubsInfoEx(This,appId,userID,ppQueryResult)	\
    (This)->lpVtbl -> GetPluginSubsInfoEx(This,appId,userID,ppQueryResult)

#define IWWAEP_PluginQuery2_GetPluginInfoEx(This,pPluginCol,sFlag)	\
    (This)->lpVtbl -> GetPluginInfoEx(This,pPluginCol,sFlag)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IWWAEP_PluginQuery2_GetPluginSubsInfoEx_Proxy( 
    IWWAEP_PluginQuery2 * This,
    /* [in] */ BSTR appId,
    /* [in] */ BSTR userID,
    /* [retval][out] */ ISDKPluginQueryResult **ppQueryResult);


void __RPC_STUB IWWAEP_PluginQuery2_GetPluginSubsInfoEx_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IWWAEP_PluginQuery2_GetPluginInfoEx_Proxy( 
    IWWAEP_PluginQuery2 * This,
    /* [in] */ ISDKObjectCollection *pPluginCol,
    /* [in] */ BSTR sFlag);


void __RPC_STUB IWWAEP_PluginQuery2_GetPluginInfoEx_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IWWAEP_PluginQuery2_INTERFACE_DEFINED__ */


#ifndef __IWWPluginQueryResult_INTERFACE_DEFINED__
#define __IWWPluginQueryResult_INTERFACE_DEFINED__

/* interface IWWPluginQueryResult */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IWWPluginQueryResult;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("52A19588-9AE5-4D53-A624-81056E6CAFC0")
    IWWPluginQueryResult : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SubscUserId( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_SubscUserId( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_AppInstanceId( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_AppInstanceId( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SubscTime( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_SubscTime( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ExpireTime( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ExpireTime( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ErrorMsg( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ErrorMsg( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SubscUrl( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_SubscUrl( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Result( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Result( 
            /* [in] */ BSTR newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWWPluginQueryResultVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWWPluginQueryResult * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWWPluginQueryResult * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWWPluginQueryResult * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IWWPluginQueryResult * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IWWPluginQueryResult * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IWWPluginQueryResult * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWWPluginQueryResult * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SubscUserId )( 
            IWWPluginQueryResult * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SubscUserId )( 
            IWWPluginQueryResult * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AppInstanceId )( 
            IWWPluginQueryResult * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AppInstanceId )( 
            IWWPluginQueryResult * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SubscTime )( 
            IWWPluginQueryResult * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SubscTime )( 
            IWWPluginQueryResult * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExpireTime )( 
            IWWPluginQueryResult * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ExpireTime )( 
            IWWPluginQueryResult * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ErrorMsg )( 
            IWWPluginQueryResult * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ErrorMsg )( 
            IWWPluginQueryResult * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SubscUrl )( 
            IWWPluginQueryResult * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SubscUrl )( 
            IWWPluginQueryResult * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Result )( 
            IWWPluginQueryResult * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Result )( 
            IWWPluginQueryResult * This,
            /* [in] */ BSTR newVal);
        
        END_INTERFACE
    } IWWPluginQueryResultVtbl;

    interface IWWPluginQueryResult
    {
        CONST_VTBL struct IWWPluginQueryResultVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWWPluginQueryResult_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IWWPluginQueryResult_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IWWPluginQueryResult_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IWWPluginQueryResult_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IWWPluginQueryResult_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IWWPluginQueryResult_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IWWPluginQueryResult_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IWWPluginQueryResult_get_SubscUserId(This,pVal)	\
    (This)->lpVtbl -> get_SubscUserId(This,pVal)

#define IWWPluginQueryResult_put_SubscUserId(This,newVal)	\
    (This)->lpVtbl -> put_SubscUserId(This,newVal)

#define IWWPluginQueryResult_get_AppInstanceId(This,pVal)	\
    (This)->lpVtbl -> get_AppInstanceId(This,pVal)

#define IWWPluginQueryResult_put_AppInstanceId(This,newVal)	\
    (This)->lpVtbl -> put_AppInstanceId(This,newVal)

#define IWWPluginQueryResult_get_SubscTime(This,pVal)	\
    (This)->lpVtbl -> get_SubscTime(This,pVal)

#define IWWPluginQueryResult_put_SubscTime(This,newVal)	\
    (This)->lpVtbl -> put_SubscTime(This,newVal)

#define IWWPluginQueryResult_get_ExpireTime(This,pVal)	\
    (This)->lpVtbl -> get_ExpireTime(This,pVal)

#define IWWPluginQueryResult_put_ExpireTime(This,newVal)	\
    (This)->lpVtbl -> put_ExpireTime(This,newVal)

#define IWWPluginQueryResult_get_ErrorMsg(This,pVal)	\
    (This)->lpVtbl -> get_ErrorMsg(This,pVal)

#define IWWPluginQueryResult_put_ErrorMsg(This,newVal)	\
    (This)->lpVtbl -> put_ErrorMsg(This,newVal)

#define IWWPluginQueryResult_get_SubscUrl(This,pVal)	\
    (This)->lpVtbl -> get_SubscUrl(This,pVal)

#define IWWPluginQueryResult_put_SubscUrl(This,newVal)	\
    (This)->lpVtbl -> put_SubscUrl(This,newVal)

#define IWWPluginQueryResult_get_Result(This,pVal)	\
    (This)->lpVtbl -> get_Result(This,pVal)

#define IWWPluginQueryResult_put_Result(This,newVal)	\
    (This)->lpVtbl -> put_Result(This,newVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWWPluginQueryResult_get_SubscUserId_Proxy( 
    IWWPluginQueryResult * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IWWPluginQueryResult_get_SubscUserId_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IWWPluginQueryResult_put_SubscUserId_Proxy( 
    IWWPluginQueryResult * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IWWPluginQueryResult_put_SubscUserId_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWWPluginQueryResult_get_AppInstanceId_Proxy( 
    IWWPluginQueryResult * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IWWPluginQueryResult_get_AppInstanceId_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IWWPluginQueryResult_put_AppInstanceId_Proxy( 
    IWWPluginQueryResult * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IWWPluginQueryResult_put_AppInstanceId_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWWPluginQueryResult_get_SubscTime_Proxy( 
    IWWPluginQueryResult * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IWWPluginQueryResult_get_SubscTime_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IWWPluginQueryResult_put_SubscTime_Proxy( 
    IWWPluginQueryResult * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IWWPluginQueryResult_put_SubscTime_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWWPluginQueryResult_get_ExpireTime_Proxy( 
    IWWPluginQueryResult * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IWWPluginQueryResult_get_ExpireTime_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IWWPluginQueryResult_put_ExpireTime_Proxy( 
    IWWPluginQueryResult * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IWWPluginQueryResult_put_ExpireTime_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWWPluginQueryResult_get_ErrorMsg_Proxy( 
    IWWPluginQueryResult * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IWWPluginQueryResult_get_ErrorMsg_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IWWPluginQueryResult_put_ErrorMsg_Proxy( 
    IWWPluginQueryResult * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IWWPluginQueryResult_put_ErrorMsg_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWWPluginQueryResult_get_SubscUrl_Proxy( 
    IWWPluginQueryResult * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IWWPluginQueryResult_get_SubscUrl_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IWWPluginQueryResult_put_SubscUrl_Proxy( 
    IWWPluginQueryResult * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IWWPluginQueryResult_put_SubscUrl_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWWPluginQueryResult_get_Result_Proxy( 
    IWWPluginQueryResult * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IWWPluginQueryResult_get_Result_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IWWPluginQueryResult_put_Result_Proxy( 
    IWWPluginQueryResult * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IWWPluginQueryResult_put_Result_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IWWPluginQueryResult_INTERFACE_DEFINED__ */


#ifndef __ISDKPluginQueryResult_INTERFACE_DEFINED__
#define __ISDKPluginQueryResult_INTERFACE_DEFINED__

/* interface ISDKPluginQueryResult */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ISDKPluginQueryResult;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4EA061CE-82D4-4fbf-8504-7455671C0386")
    ISDKPluginQueryResult : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CheckTime( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_CheckTime( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ExpireTime( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ExpireTime( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SubscUrl( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_SubscUrl( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SubscResult( 
            /* [retval][out] */ enum SDKSubscResult *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_SubscResult( 
            /* [in] */ enum SDKSubscResult newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_AppId( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_AppId( 
            /* [in] */ BSTR newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDKPluginQueryResultVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDKPluginQueryResult * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDKPluginQueryResult * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDKPluginQueryResult * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDKPluginQueryResult * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDKPluginQueryResult * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDKPluginQueryResult * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDKPluginQueryResult * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CheckTime )( 
            ISDKPluginQueryResult * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_CheckTime )( 
            ISDKPluginQueryResult * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExpireTime )( 
            ISDKPluginQueryResult * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ExpireTime )( 
            ISDKPluginQueryResult * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SubscUrl )( 
            ISDKPluginQueryResult * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SubscUrl )( 
            ISDKPluginQueryResult * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SubscResult )( 
            ISDKPluginQueryResult * This,
            /* [retval][out] */ enum SDKSubscResult *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SubscResult )( 
            ISDKPluginQueryResult * This,
            /* [in] */ enum SDKSubscResult newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AppId )( 
            ISDKPluginQueryResult * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AppId )( 
            ISDKPluginQueryResult * This,
            /* [in] */ BSTR newVal);
        
        END_INTERFACE
    } ISDKPluginQueryResultVtbl;

    interface ISDKPluginQueryResult
    {
        CONST_VTBL struct ISDKPluginQueryResultVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDKPluginQueryResult_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISDKPluginQueryResult_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISDKPluginQueryResult_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISDKPluginQueryResult_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ISDKPluginQueryResult_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ISDKPluginQueryResult_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ISDKPluginQueryResult_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ISDKPluginQueryResult_get_CheckTime(This,pVal)	\
    (This)->lpVtbl -> get_CheckTime(This,pVal)

#define ISDKPluginQueryResult_put_CheckTime(This,newVal)	\
    (This)->lpVtbl -> put_CheckTime(This,newVal)

#define ISDKPluginQueryResult_get_ExpireTime(This,pVal)	\
    (This)->lpVtbl -> get_ExpireTime(This,pVal)

#define ISDKPluginQueryResult_put_ExpireTime(This,newVal)	\
    (This)->lpVtbl -> put_ExpireTime(This,newVal)

#define ISDKPluginQueryResult_get_SubscUrl(This,pVal)	\
    (This)->lpVtbl -> get_SubscUrl(This,pVal)

#define ISDKPluginQueryResult_put_SubscUrl(This,newVal)	\
    (This)->lpVtbl -> put_SubscUrl(This,newVal)

#define ISDKPluginQueryResult_get_SubscResult(This,pVal)	\
    (This)->lpVtbl -> get_SubscResult(This,pVal)

#define ISDKPluginQueryResult_put_SubscResult(This,newVal)	\
    (This)->lpVtbl -> put_SubscResult(This,newVal)

#define ISDKPluginQueryResult_get_AppId(This,pVal)	\
    (This)->lpVtbl -> get_AppId(This,pVal)

#define ISDKPluginQueryResult_put_AppId(This,newVal)	\
    (This)->lpVtbl -> put_AppId(This,newVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISDKPluginQueryResult_get_CheckTime_Proxy( 
    ISDKPluginQueryResult * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB ISDKPluginQueryResult_get_CheckTime_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ISDKPluginQueryResult_put_CheckTime_Proxy( 
    ISDKPluginQueryResult * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB ISDKPluginQueryResult_put_CheckTime_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISDKPluginQueryResult_get_ExpireTime_Proxy( 
    ISDKPluginQueryResult * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB ISDKPluginQueryResult_get_ExpireTime_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ISDKPluginQueryResult_put_ExpireTime_Proxy( 
    ISDKPluginQueryResult * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB ISDKPluginQueryResult_put_ExpireTime_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISDKPluginQueryResult_get_SubscUrl_Proxy( 
    ISDKPluginQueryResult * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB ISDKPluginQueryResult_get_SubscUrl_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ISDKPluginQueryResult_put_SubscUrl_Proxy( 
    ISDKPluginQueryResult * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB ISDKPluginQueryResult_put_SubscUrl_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISDKPluginQueryResult_get_SubscResult_Proxy( 
    ISDKPluginQueryResult * This,
    /* [retval][out] */ enum SDKSubscResult *pVal);


void __RPC_STUB ISDKPluginQueryResult_get_SubscResult_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ISDKPluginQueryResult_put_SubscResult_Proxy( 
    ISDKPluginQueryResult * This,
    /* [in] */ enum SDKSubscResult newVal);


void __RPC_STUB ISDKPluginQueryResult_put_SubscResult_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISDKPluginQueryResult_get_AppId_Proxy( 
    ISDKPluginQueryResult * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB ISDKPluginQueryResult_get_AppId_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ISDKPluginQueryResult_put_AppId_Proxy( 
    ISDKPluginQueryResult * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB ISDKPluginQueryResult_put_AppId_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISDKPluginQueryResult_INTERFACE_DEFINED__ */


#ifndef __ISDKPluginQueryResult2_INTERFACE_DEFINED__
#define __ISDKPluginQueryResult2_INTERFACE_DEFINED__

/* interface ISDKPluginQueryResult2 */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ISDKPluginQueryResult2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("35FCD6E6-5924-4a0f-A36A-706E48127FB1")
    ISDKPluginQueryResult2 : public ISDKPluginQueryResult
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_AppInstanceId( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_AppInstanceId( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SubscStartTime( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_SubscStartTime( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SubscEndTime( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_SubscEndTime( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SubscUserId( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_SubscUserId( 
            /* [in] */ BSTR newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDKPluginQueryResult2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDKPluginQueryResult2 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDKPluginQueryResult2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDKPluginQueryResult2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDKPluginQueryResult2 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDKPluginQueryResult2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDKPluginQueryResult2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDKPluginQueryResult2 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CheckTime )( 
            ISDKPluginQueryResult2 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_CheckTime )( 
            ISDKPluginQueryResult2 * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExpireTime )( 
            ISDKPluginQueryResult2 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ExpireTime )( 
            ISDKPluginQueryResult2 * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SubscUrl )( 
            ISDKPluginQueryResult2 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SubscUrl )( 
            ISDKPluginQueryResult2 * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SubscResult )( 
            ISDKPluginQueryResult2 * This,
            /* [retval][out] */ enum SDKSubscResult *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SubscResult )( 
            ISDKPluginQueryResult2 * This,
            /* [in] */ enum SDKSubscResult newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AppId )( 
            ISDKPluginQueryResult2 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AppId )( 
            ISDKPluginQueryResult2 * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AppInstanceId )( 
            ISDKPluginQueryResult2 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AppInstanceId )( 
            ISDKPluginQueryResult2 * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SubscStartTime )( 
            ISDKPluginQueryResult2 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SubscStartTime )( 
            ISDKPluginQueryResult2 * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SubscEndTime )( 
            ISDKPluginQueryResult2 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SubscEndTime )( 
            ISDKPluginQueryResult2 * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SubscUserId )( 
            ISDKPluginQueryResult2 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SubscUserId )( 
            ISDKPluginQueryResult2 * This,
            /* [in] */ BSTR newVal);
        
        END_INTERFACE
    } ISDKPluginQueryResult2Vtbl;

    interface ISDKPluginQueryResult2
    {
        CONST_VTBL struct ISDKPluginQueryResult2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDKPluginQueryResult2_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISDKPluginQueryResult2_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISDKPluginQueryResult2_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISDKPluginQueryResult2_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ISDKPluginQueryResult2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ISDKPluginQueryResult2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ISDKPluginQueryResult2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ISDKPluginQueryResult2_get_CheckTime(This,pVal)	\
    (This)->lpVtbl -> get_CheckTime(This,pVal)

#define ISDKPluginQueryResult2_put_CheckTime(This,newVal)	\
    (This)->lpVtbl -> put_CheckTime(This,newVal)

#define ISDKPluginQueryResult2_get_ExpireTime(This,pVal)	\
    (This)->lpVtbl -> get_ExpireTime(This,pVal)

#define ISDKPluginQueryResult2_put_ExpireTime(This,newVal)	\
    (This)->lpVtbl -> put_ExpireTime(This,newVal)

#define ISDKPluginQueryResult2_get_SubscUrl(This,pVal)	\
    (This)->lpVtbl -> get_SubscUrl(This,pVal)

#define ISDKPluginQueryResult2_put_SubscUrl(This,newVal)	\
    (This)->lpVtbl -> put_SubscUrl(This,newVal)

#define ISDKPluginQueryResult2_get_SubscResult(This,pVal)	\
    (This)->lpVtbl -> get_SubscResult(This,pVal)

#define ISDKPluginQueryResult2_put_SubscResult(This,newVal)	\
    (This)->lpVtbl -> put_SubscResult(This,newVal)

#define ISDKPluginQueryResult2_get_AppId(This,pVal)	\
    (This)->lpVtbl -> get_AppId(This,pVal)

#define ISDKPluginQueryResult2_put_AppId(This,newVal)	\
    (This)->lpVtbl -> put_AppId(This,newVal)


#define ISDKPluginQueryResult2_get_AppInstanceId(This,pVal)	\
    (This)->lpVtbl -> get_AppInstanceId(This,pVal)

#define ISDKPluginQueryResult2_put_AppInstanceId(This,newVal)	\
    (This)->lpVtbl -> put_AppInstanceId(This,newVal)

#define ISDKPluginQueryResult2_get_SubscStartTime(This,pVal)	\
    (This)->lpVtbl -> get_SubscStartTime(This,pVal)

#define ISDKPluginQueryResult2_put_SubscStartTime(This,newVal)	\
    (This)->lpVtbl -> put_SubscStartTime(This,newVal)

#define ISDKPluginQueryResult2_get_SubscEndTime(This,pVal)	\
    (This)->lpVtbl -> get_SubscEndTime(This,pVal)

#define ISDKPluginQueryResult2_put_SubscEndTime(This,newVal)	\
    (This)->lpVtbl -> put_SubscEndTime(This,newVal)

#define ISDKPluginQueryResult2_get_SubscUserId(This,pVal)	\
    (This)->lpVtbl -> get_SubscUserId(This,pVal)

#define ISDKPluginQueryResult2_put_SubscUserId(This,newVal)	\
    (This)->lpVtbl -> put_SubscUserId(This,newVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISDKPluginQueryResult2_get_AppInstanceId_Proxy( 
    ISDKPluginQueryResult2 * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB ISDKPluginQueryResult2_get_AppInstanceId_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ISDKPluginQueryResult2_put_AppInstanceId_Proxy( 
    ISDKPluginQueryResult2 * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB ISDKPluginQueryResult2_put_AppInstanceId_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISDKPluginQueryResult2_get_SubscStartTime_Proxy( 
    ISDKPluginQueryResult2 * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB ISDKPluginQueryResult2_get_SubscStartTime_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ISDKPluginQueryResult2_put_SubscStartTime_Proxy( 
    ISDKPluginQueryResult2 * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB ISDKPluginQueryResult2_put_SubscStartTime_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISDKPluginQueryResult2_get_SubscEndTime_Proxy( 
    ISDKPluginQueryResult2 * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB ISDKPluginQueryResult2_get_SubscEndTime_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ISDKPluginQueryResult2_put_SubscEndTime_Proxy( 
    ISDKPluginQueryResult2 * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB ISDKPluginQueryResult2_put_SubscEndTime_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISDKPluginQueryResult2_get_SubscUserId_Proxy( 
    ISDKPluginQueryResult2 * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB ISDKPluginQueryResult2_get_SubscUserId_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ISDKPluginQueryResult2_put_SubscUserId_Proxy( 
    ISDKPluginQueryResult2 * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB ISDKPluginQueryResult2_put_SubscUserId_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISDKPluginQueryResult2_INTERFACE_DEFINED__ */


#ifndef __ISDKApplication_INTERFACE_DEFINED__
#define __ISDKApplication_INTERFACE_DEFINED__

/* interface ISDKApplication */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ISDKApplication;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("05AA76A6-95D3-4C5D-BC17-76CC39055294")
    ISDKApplication : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetContactMgr( 
            /* [retval][out] */ ISDKContactMgr **ppContactMgr) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetMainFrame( 
            /* [retval][out] */ ISDKMainFrame **ppMainFrame) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetLoginUser( 
            /* [retval][out] */ ISDKLoginUser **ppLoginUser) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetChatDlgMgr( 
            /* [retval][out] */ ISDKChatDlgMgr **ppChatDlgMgr) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ManualCheckUser( 
            /* [in] */ LONG lPluginCookie,
            /* [out] */ BSTR *bstrUID) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetLoginUIDList( 
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ ISDKObjectCollection **ppUIDList) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE BrowseURL( 
            /* [in] */ BSTR bstrURL) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDKApplicationVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDKApplication * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDKApplication * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDKApplication * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDKApplication * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDKApplication * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDKApplication * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDKApplication * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetContactMgr )( 
            ISDKApplication * This,
            /* [retval][out] */ ISDKContactMgr **ppContactMgr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetMainFrame )( 
            ISDKApplication * This,
            /* [retval][out] */ ISDKMainFrame **ppMainFrame);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetLoginUser )( 
            ISDKApplication * This,
            /* [retval][out] */ ISDKLoginUser **ppLoginUser);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetChatDlgMgr )( 
            ISDKApplication * This,
            /* [retval][out] */ ISDKChatDlgMgr **ppChatDlgMgr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ManualCheckUser )( 
            ISDKApplication * This,
            /* [in] */ LONG lPluginCookie,
            /* [out] */ BSTR *bstrUID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetLoginUIDList )( 
            ISDKApplication * This,
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ ISDKObjectCollection **ppUIDList);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *BrowseURL )( 
            ISDKApplication * This,
            /* [in] */ BSTR bstrURL);
        
        END_INTERFACE
    } ISDKApplicationVtbl;

    interface ISDKApplication
    {
        CONST_VTBL struct ISDKApplicationVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDKApplication_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISDKApplication_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISDKApplication_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISDKApplication_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ISDKApplication_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ISDKApplication_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ISDKApplication_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ISDKApplication_GetContactMgr(This,ppContactMgr)	\
    (This)->lpVtbl -> GetContactMgr(This,ppContactMgr)

#define ISDKApplication_GetMainFrame(This,ppMainFrame)	\
    (This)->lpVtbl -> GetMainFrame(This,ppMainFrame)

#define ISDKApplication_GetLoginUser(This,ppLoginUser)	\
    (This)->lpVtbl -> GetLoginUser(This,ppLoginUser)

#define ISDKApplication_GetChatDlgMgr(This,ppChatDlgMgr)	\
    (This)->lpVtbl -> GetChatDlgMgr(This,ppChatDlgMgr)

#define ISDKApplication_ManualCheckUser(This,lPluginCookie,bstrUID)	\
    (This)->lpVtbl -> ManualCheckUser(This,lPluginCookie,bstrUID)

#define ISDKApplication_GetLoginUIDList(This,lPluginCookie,ppUIDList)	\
    (This)->lpVtbl -> GetLoginUIDList(This,lPluginCookie,ppUIDList)

#define ISDKApplication_BrowseURL(This,bstrURL)	\
    (This)->lpVtbl -> BrowseURL(This,bstrURL)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISDKApplication_GetContactMgr_Proxy( 
    ISDKApplication * This,
    /* [retval][out] */ ISDKContactMgr **ppContactMgr);


void __RPC_STUB ISDKApplication_GetContactMgr_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISDKApplication_GetMainFrame_Proxy( 
    ISDKApplication * This,
    /* [retval][out] */ ISDKMainFrame **ppMainFrame);


void __RPC_STUB ISDKApplication_GetMainFrame_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISDKApplication_GetLoginUser_Proxy( 
    ISDKApplication * This,
    /* [retval][out] */ ISDKLoginUser **ppLoginUser);


void __RPC_STUB ISDKApplication_GetLoginUser_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISDKApplication_GetChatDlgMgr_Proxy( 
    ISDKApplication * This,
    /* [retval][out] */ ISDKChatDlgMgr **ppChatDlgMgr);


void __RPC_STUB ISDKApplication_GetChatDlgMgr_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISDKApplication_ManualCheckUser_Proxy( 
    ISDKApplication * This,
    /* [in] */ LONG lPluginCookie,
    /* [out] */ BSTR *bstrUID);


void __RPC_STUB ISDKApplication_ManualCheckUser_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISDKApplication_GetLoginUIDList_Proxy( 
    ISDKApplication * This,
    /* [in] */ LONG lPluginCookie,
    /* [retval][out] */ ISDKObjectCollection **ppUIDList);


void __RPC_STUB ISDKApplication_GetLoginUIDList_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISDKApplication_BrowseURL_Proxy( 
    ISDKApplication * This,
    /* [in] */ BSTR bstrURL);


void __RPC_STUB ISDKApplication_BrowseURL_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISDKApplication_INTERFACE_DEFINED__ */


#ifndef __ISDKApplication2_INTERFACE_DEFINED__
#define __ISDKApplication2_INTERFACE_DEFINED__

/* interface ISDKApplication2 */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ISDKApplication2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("57521EAA-9118-486f-983B-6AB91E21374F")
    ISDKApplication2 : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetContactMgr( 
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ IDispatch **ppContactMgr) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetMainFrame( 
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ IDispatch **ppMainFrame) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetLoginUser( 
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ IDispatch **ppLoginUser) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetChatDlgMgr( 
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ IDispatch **ppChatDlgMgr) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ManualCheckUser( 
            /* [in] */ LONG lPluginCookie,
            /* [out] */ BSTR *bstrUID) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetLoginUIDList( 
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ ISDKObjectCollection **ppUIDList) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE BrowseURL( 
            /* [in] */ LONG lPluginCookie,
            /* [in] */ BSTR bstrURL) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDKApplication2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDKApplication2 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDKApplication2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDKApplication2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDKApplication2 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDKApplication2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDKApplication2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDKApplication2 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetContactMgr )( 
            ISDKApplication2 * This,
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ IDispatch **ppContactMgr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetMainFrame )( 
            ISDKApplication2 * This,
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ IDispatch **ppMainFrame);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetLoginUser )( 
            ISDKApplication2 * This,
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ IDispatch **ppLoginUser);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetChatDlgMgr )( 
            ISDKApplication2 * This,
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ IDispatch **ppChatDlgMgr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ManualCheckUser )( 
            ISDKApplication2 * This,
            /* [in] */ LONG lPluginCookie,
            /* [out] */ BSTR *bstrUID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetLoginUIDList )( 
            ISDKApplication2 * This,
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ ISDKObjectCollection **ppUIDList);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *BrowseURL )( 
            ISDKApplication2 * This,
            /* [in] */ LONG lPluginCookie,
            /* [in] */ BSTR bstrURL);
        
        END_INTERFACE
    } ISDKApplication2Vtbl;

    interface ISDKApplication2
    {
        CONST_VTBL struct ISDKApplication2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDKApplication2_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISDKApplication2_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISDKApplication2_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISDKApplication2_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ISDKApplication2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ISDKApplication2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ISDKApplication2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ISDKApplication2_GetContactMgr(This,lPluginCookie,ppContactMgr)	\
    (This)->lpVtbl -> GetContactMgr(This,lPluginCookie,ppContactMgr)

#define ISDKApplication2_GetMainFrame(This,lPluginCookie,ppMainFrame)	\
    (This)->lpVtbl -> GetMainFrame(This,lPluginCookie,ppMainFrame)

#define ISDKApplication2_GetLoginUser(This,lPluginCookie,ppLoginUser)	\
    (This)->lpVtbl -> GetLoginUser(This,lPluginCookie,ppLoginUser)

#define ISDKApplication2_GetChatDlgMgr(This,lPluginCookie,ppChatDlgMgr)	\
    (This)->lpVtbl -> GetChatDlgMgr(This,lPluginCookie,ppChatDlgMgr)

#define ISDKApplication2_ManualCheckUser(This,lPluginCookie,bstrUID)	\
    (This)->lpVtbl -> ManualCheckUser(This,lPluginCookie,bstrUID)

#define ISDKApplication2_GetLoginUIDList(This,lPluginCookie,ppUIDList)	\
    (This)->lpVtbl -> GetLoginUIDList(This,lPluginCookie,ppUIDList)

#define ISDKApplication2_BrowseURL(This,lPluginCookie,bstrURL)	\
    (This)->lpVtbl -> BrowseURL(This,lPluginCookie,bstrURL)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISDKApplication2_GetContactMgr_Proxy( 
    ISDKApplication2 * This,
    /* [in] */ LONG lPluginCookie,
    /* [retval][out] */ IDispatch **ppContactMgr);


void __RPC_STUB ISDKApplication2_GetContactMgr_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISDKApplication2_GetMainFrame_Proxy( 
    ISDKApplication2 * This,
    /* [in] */ LONG lPluginCookie,
    /* [retval][out] */ IDispatch **ppMainFrame);


void __RPC_STUB ISDKApplication2_GetMainFrame_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISDKApplication2_GetLoginUser_Proxy( 
    ISDKApplication2 * This,
    /* [in] */ LONG lPluginCookie,
    /* [retval][out] */ IDispatch **ppLoginUser);


void __RPC_STUB ISDKApplication2_GetLoginUser_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISDKApplication2_GetChatDlgMgr_Proxy( 
    ISDKApplication2 * This,
    /* [in] */ LONG lPluginCookie,
    /* [retval][out] */ IDispatch **ppChatDlgMgr);


void __RPC_STUB ISDKApplication2_GetChatDlgMgr_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISDKApplication2_ManualCheckUser_Proxy( 
    ISDKApplication2 * This,
    /* [in] */ LONG lPluginCookie,
    /* [out] */ BSTR *bstrUID);


void __RPC_STUB ISDKApplication2_ManualCheckUser_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISDKApplication2_GetLoginUIDList_Proxy( 
    ISDKApplication2 * This,
    /* [in] */ LONG lPluginCookie,
    /* [retval][out] */ ISDKObjectCollection **ppUIDList);


void __RPC_STUB ISDKApplication2_GetLoginUIDList_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISDKApplication2_BrowseURL_Proxy( 
    ISDKApplication2 * This,
    /* [in] */ LONG lPluginCookie,
    /* [in] */ BSTR bstrURL);


void __RPC_STUB ISDKApplication2_BrowseURL_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISDKApplication2_INTERFACE_DEFINED__ */


#ifndef __ISDKApplication3_INTERFACE_DEFINED__
#define __ISDKApplication3_INTERFACE_DEFINED__

/* interface ISDKApplication3 */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ISDKApplication3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B9D7BBFD-5232-4eb0-9892-3C21A2769E8C")
    ISDKApplication3 : public ISDKApplication2
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetVersion( 
            /* [in] */ LONG lPluginCookie,
            /* [out] */ BSTR *bstrDispVersion,
            /* [out] */ LONG *pVersion) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetSubScriptionInfo( 
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ IDispatch **ppResult) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDKApplication3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDKApplication3 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDKApplication3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDKApplication3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDKApplication3 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDKApplication3 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDKApplication3 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDKApplication3 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetContactMgr )( 
            ISDKApplication3 * This,
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ IDispatch **ppContactMgr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetMainFrame )( 
            ISDKApplication3 * This,
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ IDispatch **ppMainFrame);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetLoginUser )( 
            ISDKApplication3 * This,
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ IDispatch **ppLoginUser);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetChatDlgMgr )( 
            ISDKApplication3 * This,
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ IDispatch **ppChatDlgMgr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ManualCheckUser )( 
            ISDKApplication3 * This,
            /* [in] */ LONG lPluginCookie,
            /* [out] */ BSTR *bstrUID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetLoginUIDList )( 
            ISDKApplication3 * This,
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ ISDKObjectCollection **ppUIDList);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *BrowseURL )( 
            ISDKApplication3 * This,
            /* [in] */ LONG lPluginCookie,
            /* [in] */ BSTR bstrURL);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetVersion )( 
            ISDKApplication3 * This,
            /* [in] */ LONG lPluginCookie,
            /* [out] */ BSTR *bstrDispVersion,
            /* [out] */ LONG *pVersion);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSubScriptionInfo )( 
            ISDKApplication3 * This,
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ IDispatch **ppResult);
        
        END_INTERFACE
    } ISDKApplication3Vtbl;

    interface ISDKApplication3
    {
        CONST_VTBL struct ISDKApplication3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDKApplication3_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISDKApplication3_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISDKApplication3_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISDKApplication3_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ISDKApplication3_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ISDKApplication3_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ISDKApplication3_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ISDKApplication3_GetContactMgr(This,lPluginCookie,ppContactMgr)	\
    (This)->lpVtbl -> GetContactMgr(This,lPluginCookie,ppContactMgr)

#define ISDKApplication3_GetMainFrame(This,lPluginCookie,ppMainFrame)	\
    (This)->lpVtbl -> GetMainFrame(This,lPluginCookie,ppMainFrame)

#define ISDKApplication3_GetLoginUser(This,lPluginCookie,ppLoginUser)	\
    (This)->lpVtbl -> GetLoginUser(This,lPluginCookie,ppLoginUser)

#define ISDKApplication3_GetChatDlgMgr(This,lPluginCookie,ppChatDlgMgr)	\
    (This)->lpVtbl -> GetChatDlgMgr(This,lPluginCookie,ppChatDlgMgr)

#define ISDKApplication3_ManualCheckUser(This,lPluginCookie,bstrUID)	\
    (This)->lpVtbl -> ManualCheckUser(This,lPluginCookie,bstrUID)

#define ISDKApplication3_GetLoginUIDList(This,lPluginCookie,ppUIDList)	\
    (This)->lpVtbl -> GetLoginUIDList(This,lPluginCookie,ppUIDList)

#define ISDKApplication3_BrowseURL(This,lPluginCookie,bstrURL)	\
    (This)->lpVtbl -> BrowseURL(This,lPluginCookie,bstrURL)


#define ISDKApplication3_GetVersion(This,lPluginCookie,bstrDispVersion,pVersion)	\
    (This)->lpVtbl -> GetVersion(This,lPluginCookie,bstrDispVersion,pVersion)

#define ISDKApplication3_GetSubScriptionInfo(This,lPluginCookie,ppResult)	\
    (This)->lpVtbl -> GetSubScriptionInfo(This,lPluginCookie,ppResult)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISDKApplication3_GetVersion_Proxy( 
    ISDKApplication3 * This,
    /* [in] */ LONG lPluginCookie,
    /* [out] */ BSTR *bstrDispVersion,
    /* [out] */ LONG *pVersion);


void __RPC_STUB ISDKApplication3_GetVersion_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISDKApplication3_GetSubScriptionInfo_Proxy( 
    ISDKApplication3 * This,
    /* [in] */ LONG lPluginCookie,
    /* [retval][out] */ IDispatch **ppResult);


void __RPC_STUB ISDKApplication3_GetSubScriptionInfo_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISDKApplication3_INTERFACE_DEFINED__ */


#ifndef __ISDKContactMgr_INTERFACE_DEFINED__
#define __ISDKContactMgr_INTERFACE_DEFINED__

/* interface ISDKContactMgr */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ISDKContactMgr;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("EAEBB5CD-70D2-4832-89EF-B12117B50EF2")
    ISDKContactMgr : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetApplication( 
            /* [retval][out] */ ISDKApplication **ppApplication) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetContact( 
            /* [in] */ BSTR bstrContactUID,
            /* [retval][out] */ ISDKContact **ppContact) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDKContactMgrVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDKContactMgr * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDKContactMgr * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDKContactMgr * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDKContactMgr * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDKContactMgr * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDKContactMgr * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDKContactMgr * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetApplication )( 
            ISDKContactMgr * This,
            /* [retval][out] */ ISDKApplication **ppApplication);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetContact )( 
            ISDKContactMgr * This,
            /* [in] */ BSTR bstrContactUID,
            /* [retval][out] */ ISDKContact **ppContact);
        
        END_INTERFACE
    } ISDKContactMgrVtbl;

    interface ISDKContactMgr
    {
        CONST_VTBL struct ISDKContactMgrVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDKContactMgr_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISDKContactMgr_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISDKContactMgr_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISDKContactMgr_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ISDKContactMgr_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ISDKContactMgr_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ISDKContactMgr_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ISDKContactMgr_GetApplication(This,ppApplication)	\
    (This)->lpVtbl -> GetApplication(This,ppApplication)

#define ISDKContactMgr_GetContact(This,bstrContactUID,ppContact)	\
    (This)->lpVtbl -> GetContact(This,bstrContactUID,ppContact)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISDKContactMgr_GetApplication_Proxy( 
    ISDKContactMgr * This,
    /* [retval][out] */ ISDKApplication **ppApplication);


void __RPC_STUB ISDKContactMgr_GetApplication_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISDKContactMgr_GetContact_Proxy( 
    ISDKContactMgr * This,
    /* [in] */ BSTR bstrContactUID,
    /* [retval][out] */ ISDKContact **ppContact);


void __RPC_STUB ISDKContactMgr_GetContact_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISDKContactMgr_INTERFACE_DEFINED__ */


#ifndef __IWWContactMgr_INTERFACE_DEFINED__
#define __IWWContactMgr_INTERFACE_DEFINED__

/* interface IWWContactMgr */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IWWContactMgr;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("34BCE8C6-77C5-49b0-9D2E-E451B4F8F6BC")
    IWWContactMgr : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnLogout( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWWContactMgrVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWWContactMgr * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWWContactMgr * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWWContactMgr * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IWWContactMgr * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IWWContactMgr * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IWWContactMgr * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWWContactMgr * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnLogout )( 
            IWWContactMgr * This);
        
        END_INTERFACE
    } IWWContactMgrVtbl;

    interface IWWContactMgr
    {
        CONST_VTBL struct IWWContactMgrVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWWContactMgr_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IWWContactMgr_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IWWContactMgr_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IWWContactMgr_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IWWContactMgr_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IWWContactMgr_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IWWContactMgr_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IWWContactMgr_OnLogout(This)	\
    (This)->lpVtbl -> OnLogout(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IWWContactMgr_OnLogout_Proxy( 
    IWWContactMgr * This);


void __RPC_STUB IWWContactMgr_OnLogout_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IWWContactMgr_INTERFACE_DEFINED__ */


#ifndef __ISDKContactMgr2_INTERFACE_DEFINED__
#define __ISDKContactMgr2_INTERFACE_DEFINED__

/* interface ISDKContactMgr2 */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ISDKContactMgr2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("CC0E9FFF-7DC7-48d4-B83A-E651029791D6")
    ISDKContactMgr2 : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetApplication( 
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ IDispatch **ppApplication) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetContact( 
            /* [in] */ LONG lPluginCookie,
            /* [in] */ BSTR bstrContactUID,
            /* [retval][out] */ IDispatch **ppContact) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDKContactMgr2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDKContactMgr2 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDKContactMgr2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDKContactMgr2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDKContactMgr2 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDKContactMgr2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDKContactMgr2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDKContactMgr2 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetApplication )( 
            ISDKContactMgr2 * This,
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ IDispatch **ppApplication);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetContact )( 
            ISDKContactMgr2 * This,
            /* [in] */ LONG lPluginCookie,
            /* [in] */ BSTR bstrContactUID,
            /* [retval][out] */ IDispatch **ppContact);
        
        END_INTERFACE
    } ISDKContactMgr2Vtbl;

    interface ISDKContactMgr2
    {
        CONST_VTBL struct ISDKContactMgr2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDKContactMgr2_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISDKContactMgr2_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISDKContactMgr2_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISDKContactMgr2_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ISDKContactMgr2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ISDKContactMgr2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ISDKContactMgr2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ISDKContactMgr2_GetApplication(This,lPluginCookie,ppApplication)	\
    (This)->lpVtbl -> GetApplication(This,lPluginCookie,ppApplication)

#define ISDKContactMgr2_GetContact(This,lPluginCookie,bstrContactUID,ppContact)	\
    (This)->lpVtbl -> GetContact(This,lPluginCookie,bstrContactUID,ppContact)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISDKContactMgr2_GetApplication_Proxy( 
    ISDKContactMgr2 * This,
    /* [in] */ LONG lPluginCookie,
    /* [retval][out] */ IDispatch **ppApplication);


void __RPC_STUB ISDKContactMgr2_GetApplication_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISDKContactMgr2_GetContact_Proxy( 
    ISDKContactMgr2 * This,
    /* [in] */ LONG lPluginCookie,
    /* [in] */ BSTR bstrContactUID,
    /* [retval][out] */ IDispatch **ppContact);


void __RPC_STUB ISDKContactMgr2_GetContact_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISDKContactMgr2_INTERFACE_DEFINED__ */


#ifndef __ISDKContactMgr3_INTERFACE_DEFINED__
#define __ISDKContactMgr3_INTERFACE_DEFINED__

/* interface ISDKContactMgr3 */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ISDKContactMgr3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6119ADD3-ECED-4481-BA82-125AA3E619AE")
    ISDKContactMgr3 : public ISDKContactMgr2
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetRecentContactCollection( 
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ ISDKObjectCollection **ppRecentContactCollection) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetFilterContactCollection( 
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ ISDKObjectCollection **ppFilterContactCollection) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetStrangerContactCollection( 
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ ISDKObjectCollection **ppStrangerContactCollection) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetRootGroup( 
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ IDispatch **ppGroupObj) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetGroup( 
            /* [in] */ LONG lPluginCookie,
            /* [in] */ BSTR sGroupID,
            /* [retval][out] */ IDispatch **ppGroupObj) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDKContactMgr3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDKContactMgr3 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDKContactMgr3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDKContactMgr3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDKContactMgr3 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDKContactMgr3 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDKContactMgr3 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDKContactMgr3 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetApplication )( 
            ISDKContactMgr3 * This,
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ IDispatch **ppApplication);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetContact )( 
            ISDKContactMgr3 * This,
            /* [in] */ LONG lPluginCookie,
            /* [in] */ BSTR bstrContactUID,
            /* [retval][out] */ IDispatch **ppContact);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetRecentContactCollection )( 
            ISDKContactMgr3 * This,
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ ISDKObjectCollection **ppRecentContactCollection);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetFilterContactCollection )( 
            ISDKContactMgr3 * This,
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ ISDKObjectCollection **ppFilterContactCollection);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetStrangerContactCollection )( 
            ISDKContactMgr3 * This,
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ ISDKObjectCollection **ppStrangerContactCollection);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetRootGroup )( 
            ISDKContactMgr3 * This,
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ IDispatch **ppGroupObj);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetGroup )( 
            ISDKContactMgr3 * This,
            /* [in] */ LONG lPluginCookie,
            /* [in] */ BSTR sGroupID,
            /* [retval][out] */ IDispatch **ppGroupObj);
        
        END_INTERFACE
    } ISDKContactMgr3Vtbl;

    interface ISDKContactMgr3
    {
        CONST_VTBL struct ISDKContactMgr3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDKContactMgr3_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISDKContactMgr3_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISDKContactMgr3_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISDKContactMgr3_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ISDKContactMgr3_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ISDKContactMgr3_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ISDKContactMgr3_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ISDKContactMgr3_GetApplication(This,lPluginCookie,ppApplication)	\
    (This)->lpVtbl -> GetApplication(This,lPluginCookie,ppApplication)

#define ISDKContactMgr3_GetContact(This,lPluginCookie,bstrContactUID,ppContact)	\
    (This)->lpVtbl -> GetContact(This,lPluginCookie,bstrContactUID,ppContact)


#define ISDKContactMgr3_GetRecentContactCollection(This,lPluginCookie,ppRecentContactCollection)	\
    (This)->lpVtbl -> GetRecentContactCollection(This,lPluginCookie,ppRecentContactCollection)

#define ISDKContactMgr3_GetFilterContactCollection(This,lPluginCookie,ppFilterContactCollection)	\
    (This)->lpVtbl -> GetFilterContactCollection(This,lPluginCookie,ppFilterContactCollection)

#define ISDKContactMgr3_GetStrangerContactCollection(This,lPluginCookie,ppStrangerContactCollection)	\
    (This)->lpVtbl -> GetStrangerContactCollection(This,lPluginCookie,ppStrangerContactCollection)

#define ISDKContactMgr3_GetRootGroup(This,lPluginCookie,ppGroupObj)	\
    (This)->lpVtbl -> GetRootGroup(This,lPluginCookie,ppGroupObj)

#define ISDKContactMgr3_GetGroup(This,lPluginCookie,sGroupID,ppGroupObj)	\
    (This)->lpVtbl -> GetGroup(This,lPluginCookie,sGroupID,ppGroupObj)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISDKContactMgr3_GetRecentContactCollection_Proxy( 
    ISDKContactMgr3 * This,
    /* [in] */ LONG lPluginCookie,
    /* [retval][out] */ ISDKObjectCollection **ppRecentContactCollection);


void __RPC_STUB ISDKContactMgr3_GetRecentContactCollection_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISDKContactMgr3_GetFilterContactCollection_Proxy( 
    ISDKContactMgr3 * This,
    /* [in] */ LONG lPluginCookie,
    /* [retval][out] */ ISDKObjectCollection **ppFilterContactCollection);


void __RPC_STUB ISDKContactMgr3_GetFilterContactCollection_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISDKContactMgr3_GetStrangerContactCollection_Proxy( 
    ISDKContactMgr3 * This,
    /* [in] */ LONG lPluginCookie,
    /* [retval][out] */ ISDKObjectCollection **ppStrangerContactCollection);


void __RPC_STUB ISDKContactMgr3_GetStrangerContactCollection_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISDKContactMgr3_GetRootGroup_Proxy( 
    ISDKContactMgr3 * This,
    /* [in] */ LONG lPluginCookie,
    /* [retval][out] */ IDispatch **ppGroupObj);


void __RPC_STUB ISDKContactMgr3_GetRootGroup_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISDKContactMgr3_GetGroup_Proxy( 
    ISDKContactMgr3 * This,
    /* [in] */ LONG lPluginCookie,
    /* [in] */ BSTR sGroupID,
    /* [retval][out] */ IDispatch **ppGroupObj);


void __RPC_STUB ISDKContactMgr3_GetGroup_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISDKContactMgr3_INTERFACE_DEFINED__ */


#ifndef __ISDKMainFrame_INTERFACE_DEFINED__
#define __ISDKMainFrame_INTERFACE_DEFINED__

/* interface ISDKMainFrame */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ISDKMainFrame;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("DAF7304E-08B7-4F21-8DFB-57D1BEA820EF")
    ISDKMainFrame : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetApplication( 
            /* [retval][out] */ ISDKApplication **ppApplication) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetImportantPanelSlot( 
            /* [retval][out] */ ISDKImportantPanelSlot **ppImportantPanelSlot) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetBottomPanelSlot( 
            /* [retval][out] */ ISDKBottomPanelSlot **ppBottomPanelSlot) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDKMainFrameVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDKMainFrame * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDKMainFrame * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDKMainFrame * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDKMainFrame * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDKMainFrame * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDKMainFrame * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDKMainFrame * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetApplication )( 
            ISDKMainFrame * This,
            /* [retval][out] */ ISDKApplication **ppApplication);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetImportantPanelSlot )( 
            ISDKMainFrame * This,
            /* [retval][out] */ ISDKImportantPanelSlot **ppImportantPanelSlot);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetBottomPanelSlot )( 
            ISDKMainFrame * This,
            /* [retval][out] */ ISDKBottomPanelSlot **ppBottomPanelSlot);
        
        END_INTERFACE
    } ISDKMainFrameVtbl;

    interface ISDKMainFrame
    {
        CONST_VTBL struct ISDKMainFrameVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDKMainFrame_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISDKMainFrame_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISDKMainFrame_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISDKMainFrame_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ISDKMainFrame_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ISDKMainFrame_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ISDKMainFrame_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ISDKMainFrame_GetApplication(This,ppApplication)	\
    (This)->lpVtbl -> GetApplication(This,ppApplication)

#define ISDKMainFrame_GetImportantPanelSlot(This,ppImportantPanelSlot)	\
    (This)->lpVtbl -> GetImportantPanelSlot(This,ppImportantPanelSlot)

#define ISDKMainFrame_GetBottomPanelSlot(This,ppBottomPanelSlot)	\
    (This)->lpVtbl -> GetBottomPanelSlot(This,ppBottomPanelSlot)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISDKMainFrame_GetApplication_Proxy( 
    ISDKMainFrame * This,
    /* [retval][out] */ ISDKApplication **ppApplication);


void __RPC_STUB ISDKMainFrame_GetApplication_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISDKMainFrame_GetImportantPanelSlot_Proxy( 
    ISDKMainFrame * This,
    /* [retval][out] */ ISDKImportantPanelSlot **ppImportantPanelSlot);


void __RPC_STUB ISDKMainFrame_GetImportantPanelSlot_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISDKMainFrame_GetBottomPanelSlot_Proxy( 
    ISDKMainFrame * This,
    /* [retval][out] */ ISDKBottomPanelSlot **ppBottomPanelSlot);


void __RPC_STUB ISDKMainFrame_GetBottomPanelSlot_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISDKMainFrame_INTERFACE_DEFINED__ */


#ifndef __ISDKMainFrame2_INTERFACE_DEFINED__
#define __ISDKMainFrame2_INTERFACE_DEFINED__

/* interface ISDKMainFrame2 */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ISDKMainFrame2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3D8231D4-8236-46b0-AAE4-758D27332C38")
    ISDKMainFrame2 : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetApplication( 
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ IDispatch **ppApplication) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetImportantPanelSlot( 
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ IDispatch **ppImportantPanelSlot) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetBottomPanelSlot( 
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ IDispatch **ppBottomPanelSlot) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDKMainFrame2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDKMainFrame2 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDKMainFrame2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDKMainFrame2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDKMainFrame2 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDKMainFrame2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDKMainFrame2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDKMainFrame2 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetApplication )( 
            ISDKMainFrame2 * This,
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ IDispatch **ppApplication);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetImportantPanelSlot )( 
            ISDKMainFrame2 * This,
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ IDispatch **ppImportantPanelSlot);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetBottomPanelSlot )( 
            ISDKMainFrame2 * This,
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ IDispatch **ppBottomPanelSlot);
        
        END_INTERFACE
    } ISDKMainFrame2Vtbl;

    interface ISDKMainFrame2
    {
        CONST_VTBL struct ISDKMainFrame2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDKMainFrame2_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISDKMainFrame2_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISDKMainFrame2_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISDKMainFrame2_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ISDKMainFrame2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ISDKMainFrame2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ISDKMainFrame2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ISDKMainFrame2_GetApplication(This,lPluginCookie,ppApplication)	\
    (This)->lpVtbl -> GetApplication(This,lPluginCookie,ppApplication)

#define ISDKMainFrame2_GetImportantPanelSlot(This,lPluginCookie,ppImportantPanelSlot)	\
    (This)->lpVtbl -> GetImportantPanelSlot(This,lPluginCookie,ppImportantPanelSlot)

#define ISDKMainFrame2_GetBottomPanelSlot(This,lPluginCookie,ppBottomPanelSlot)	\
    (This)->lpVtbl -> GetBottomPanelSlot(This,lPluginCookie,ppBottomPanelSlot)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISDKMainFrame2_GetApplication_Proxy( 
    ISDKMainFrame2 * This,
    /* [in] */ LONG lPluginCookie,
    /* [retval][out] */ IDispatch **ppApplication);


void __RPC_STUB ISDKMainFrame2_GetApplication_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISDKMainFrame2_GetImportantPanelSlot_Proxy( 
    ISDKMainFrame2 * This,
    /* [in] */ LONG lPluginCookie,
    /* [retval][out] */ IDispatch **ppImportantPanelSlot);


void __RPC_STUB ISDKMainFrame2_GetImportantPanelSlot_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISDKMainFrame2_GetBottomPanelSlot_Proxy( 
    ISDKMainFrame2 * This,
    /* [in] */ LONG lPluginCookie,
    /* [retval][out] */ IDispatch **ppBottomPanelSlot);


void __RPC_STUB ISDKMainFrame2_GetBottomPanelSlot_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISDKMainFrame2_INTERFACE_DEFINED__ */


#ifndef __ISDKContact_INTERFACE_DEFINED__
#define __ISDKContact_INTERFACE_DEFINED__

/* interface ISDKContact */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ISDKContact;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6EA488D4-C187-4FCA-BBDA-0561179FCF9B")
    ISDKContact : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetUserID( 
            /* [retval][out] */ BSTR *pbstrUID) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDKContactVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDKContact * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDKContact * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDKContact * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDKContact * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDKContact * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDKContact * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDKContact * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetUserID )( 
            ISDKContact * This,
            /* [retval][out] */ BSTR *pbstrUID);
        
        END_INTERFACE
    } ISDKContactVtbl;

    interface ISDKContact
    {
        CONST_VTBL struct ISDKContactVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDKContact_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISDKContact_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISDKContact_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISDKContact_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ISDKContact_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ISDKContact_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ISDKContact_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ISDKContact_GetUserID(This,pbstrUID)	\
    (This)->lpVtbl -> GetUserID(This,pbstrUID)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISDKContact_GetUserID_Proxy( 
    ISDKContact * This,
    /* [retval][out] */ BSTR *pbstrUID);


void __RPC_STUB ISDKContact_GetUserID_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISDKContact_INTERFACE_DEFINED__ */


#ifndef __ISDKLoginUser_INTERFACE_DEFINED__
#define __ISDKLoginUser_INTERFACE_DEFINED__

/* interface ISDKLoginUser */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ISDKLoginUser;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7E3F65A7-37F8-4542-BD00-A019ABAE70F2")
    ISDKLoginUser : public ISDKContact
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct ISDKLoginUserVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDKLoginUser * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDKLoginUser * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDKLoginUser * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDKLoginUser * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDKLoginUser * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDKLoginUser * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDKLoginUser * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetUserID )( 
            ISDKLoginUser * This,
            /* [retval][out] */ BSTR *pbstrUID);
        
        END_INTERFACE
    } ISDKLoginUserVtbl;

    interface ISDKLoginUser
    {
        CONST_VTBL struct ISDKLoginUserVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDKLoginUser_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISDKLoginUser_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISDKLoginUser_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISDKLoginUser_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ISDKLoginUser_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ISDKLoginUser_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ISDKLoginUser_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ISDKLoginUser_GetUserID(This,pbstrUID)	\
    (This)->lpVtbl -> GetUserID(This,pbstrUID)


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISDKLoginUser_INTERFACE_DEFINED__ */


#ifndef __ISDKLoginUser2_INTERFACE_DEFINED__
#define __ISDKLoginUser2_INTERFACE_DEFINED__

/* interface ISDKLoginUser2 */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ISDKLoginUser2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0D9A32D6-F1F2-402d-A3A3-3A0DB7D82BE1")
    ISDKLoginUser2 : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetUserID( 
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ BSTR *pbstrUID) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDKLoginUser2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDKLoginUser2 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDKLoginUser2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDKLoginUser2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDKLoginUser2 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDKLoginUser2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDKLoginUser2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDKLoginUser2 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetUserID )( 
            ISDKLoginUser2 * This,
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ BSTR *pbstrUID);
        
        END_INTERFACE
    } ISDKLoginUser2Vtbl;

    interface ISDKLoginUser2
    {
        CONST_VTBL struct ISDKLoginUser2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDKLoginUser2_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISDKLoginUser2_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISDKLoginUser2_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISDKLoginUser2_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ISDKLoginUser2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ISDKLoginUser2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ISDKLoginUser2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ISDKLoginUser2_GetUserID(This,lPluginCookie,pbstrUID)	\
    (This)->lpVtbl -> GetUserID(This,lPluginCookie,pbstrUID)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISDKLoginUser2_GetUserID_Proxy( 
    ISDKLoginUser2 * This,
    /* [in] */ LONG lPluginCookie,
    /* [retval][out] */ BSTR *pbstrUID);


void __RPC_STUB ISDKLoginUser2_GetUserID_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISDKLoginUser2_INTERFACE_DEFINED__ */


#ifndef __ISDKLoginUser3_INTERFACE_DEFINED__
#define __ISDKLoginUser3_INTERFACE_DEFINED__

/* interface ISDKLoginUser3 */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ISDKLoginUser3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("BD3F22F7-17D7-48ba-977F-DB27B9A01905")
    ISDKLoginUser3 : public ISDKLoginUser2
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetWangID( 
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ BSTR *pbstrWangID) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetSiteID( 
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ BSTR *pbstrSiteID) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetSiteName( 
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ BSTR *pbstrSiteName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetNickName( 
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ BSTR *pbstrNickName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetActivitiesLevel( 
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ LONG *pLevel) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetServerTime( 
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ BSTR *pTime) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDKLoginUser3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDKLoginUser3 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDKLoginUser3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDKLoginUser3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDKLoginUser3 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDKLoginUser3 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDKLoginUser3 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDKLoginUser3 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetUserID )( 
            ISDKLoginUser3 * This,
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ BSTR *pbstrUID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetWangID )( 
            ISDKLoginUser3 * This,
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ BSTR *pbstrWangID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSiteID )( 
            ISDKLoginUser3 * This,
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ BSTR *pbstrSiteID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSiteName )( 
            ISDKLoginUser3 * This,
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ BSTR *pbstrSiteName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetNickName )( 
            ISDKLoginUser3 * This,
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ BSTR *pbstrNickName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetActivitiesLevel )( 
            ISDKLoginUser3 * This,
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ LONG *pLevel);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetServerTime )( 
            ISDKLoginUser3 * This,
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ BSTR *pTime);
        
        END_INTERFACE
    } ISDKLoginUser3Vtbl;

    interface ISDKLoginUser3
    {
        CONST_VTBL struct ISDKLoginUser3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDKLoginUser3_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISDKLoginUser3_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISDKLoginUser3_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISDKLoginUser3_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ISDKLoginUser3_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ISDKLoginUser3_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ISDKLoginUser3_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ISDKLoginUser3_GetUserID(This,lPluginCookie,pbstrUID)	\
    (This)->lpVtbl -> GetUserID(This,lPluginCookie,pbstrUID)


#define ISDKLoginUser3_GetWangID(This,lPluginCookie,pbstrWangID)	\
    (This)->lpVtbl -> GetWangID(This,lPluginCookie,pbstrWangID)

#define ISDKLoginUser3_GetSiteID(This,lPluginCookie,pbstrSiteID)	\
    (This)->lpVtbl -> GetSiteID(This,lPluginCookie,pbstrSiteID)

#define ISDKLoginUser3_GetSiteName(This,lPluginCookie,pbstrSiteName)	\
    (This)->lpVtbl -> GetSiteName(This,lPluginCookie,pbstrSiteName)

#define ISDKLoginUser3_GetNickName(This,lPluginCookie,pbstrNickName)	\
    (This)->lpVtbl -> GetNickName(This,lPluginCookie,pbstrNickName)

#define ISDKLoginUser3_GetActivitiesLevel(This,lPluginCookie,pLevel)	\
    (This)->lpVtbl -> GetActivitiesLevel(This,lPluginCookie,pLevel)

#define ISDKLoginUser3_GetServerTime(This,lPluginCookie,pTime)	\
    (This)->lpVtbl -> GetServerTime(This,lPluginCookie,pTime)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISDKLoginUser3_GetWangID_Proxy( 
    ISDKLoginUser3 * This,
    /* [in] */ LONG lPluginCookie,
    /* [retval][out] */ BSTR *pbstrWangID);


void __RPC_STUB ISDKLoginUser3_GetWangID_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISDKLoginUser3_GetSiteID_Proxy( 
    ISDKLoginUser3 * This,
    /* [in] */ LONG lPluginCookie,
    /* [retval][out] */ BSTR *pbstrSiteID);


void __RPC_STUB ISDKLoginUser3_GetSiteID_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISDKLoginUser3_GetSiteName_Proxy( 
    ISDKLoginUser3 * This,
    /* [in] */ LONG lPluginCookie,
    /* [retval][out] */ BSTR *pbstrSiteName);


void __RPC_STUB ISDKLoginUser3_GetSiteName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISDKLoginUser3_GetNickName_Proxy( 
    ISDKLoginUser3 * This,
    /* [in] */ LONG lPluginCookie,
    /* [retval][out] */ BSTR *pbstrNickName);


void __RPC_STUB ISDKLoginUser3_GetNickName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISDKLoginUser3_GetActivitiesLevel_Proxy( 
    ISDKLoginUser3 * This,
    /* [in] */ LONG lPluginCookie,
    /* [retval][out] */ LONG *pLevel);


void __RPC_STUB ISDKLoginUser3_GetActivitiesLevel_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISDKLoginUser3_GetServerTime_Proxy( 
    ISDKLoginUser3 * This,
    /* [in] */ LONG lPluginCookie,
    /* [retval][out] */ BSTR *pTime);


void __RPC_STUB ISDKLoginUser3_GetServerTime_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISDKLoginUser3_INTERFACE_DEFINED__ */


#ifndef __ISDKChatDlgMgr_INTERFACE_DEFINED__
#define __ISDKChatDlgMgr_INTERFACE_DEFINED__

/* interface ISDKChatDlgMgr */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ISDKChatDlgMgr;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8AF60758-10D7-45B1-B756-98FB7BD0B91C")
    ISDKChatDlgMgr : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetChatDlgByUID( 
            /* [in] */ BSTR bstrUID,
            /* [retval][out] */ ISDKChatDlg **ppChatDlg) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetApplication( 
            /* [retval][out] */ ISDKApplication **ppApplication) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetChatDlgCollection( 
            /* [retval][out] */ ISDKObjectCollection **ppChatDlgCollection) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDKChatDlgMgrVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDKChatDlgMgr * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDKChatDlgMgr * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDKChatDlgMgr * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDKChatDlgMgr * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDKChatDlgMgr * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDKChatDlgMgr * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDKChatDlgMgr * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetChatDlgByUID )( 
            ISDKChatDlgMgr * This,
            /* [in] */ BSTR bstrUID,
            /* [retval][out] */ ISDKChatDlg **ppChatDlg);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetApplication )( 
            ISDKChatDlgMgr * This,
            /* [retval][out] */ ISDKApplication **ppApplication);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetChatDlgCollection )( 
            ISDKChatDlgMgr * This,
            /* [retval][out] */ ISDKObjectCollection **ppChatDlgCollection);
        
        END_INTERFACE
    } ISDKChatDlgMgrVtbl;

    interface ISDKChatDlgMgr
    {
        CONST_VTBL struct ISDKChatDlgMgrVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDKChatDlgMgr_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISDKChatDlgMgr_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISDKChatDlgMgr_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISDKChatDlgMgr_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ISDKChatDlgMgr_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ISDKChatDlgMgr_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ISDKChatDlgMgr_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ISDKChatDlgMgr_GetChatDlgByUID(This,bstrUID,ppChatDlg)	\
    (This)->lpVtbl -> GetChatDlgByUID(This,bstrUID,ppChatDlg)

#define ISDKChatDlgMgr_GetApplication(This,ppApplication)	\
    (This)->lpVtbl -> GetApplication(This,ppApplication)

#define ISDKChatDlgMgr_GetChatDlgCollection(This,ppChatDlgCollection)	\
    (This)->lpVtbl -> GetChatDlgCollection(This,ppChatDlgCollection)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISDKChatDlgMgr_GetChatDlgByUID_Proxy( 
    ISDKChatDlgMgr * This,
    /* [in] */ BSTR bstrUID,
    /* [retval][out] */ ISDKChatDlg **ppChatDlg);


void __RPC_STUB ISDKChatDlgMgr_GetChatDlgByUID_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISDKChatDlgMgr_GetApplication_Proxy( 
    ISDKChatDlgMgr * This,
    /* [retval][out] */ ISDKApplication **ppApplication);


void __RPC_STUB ISDKChatDlgMgr_GetApplication_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISDKChatDlgMgr_GetChatDlgCollection_Proxy( 
    ISDKChatDlgMgr * This,
    /* [retval][out] */ ISDKObjectCollection **ppChatDlgCollection);


void __RPC_STUB ISDKChatDlgMgr_GetChatDlgCollection_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISDKChatDlgMgr_INTERFACE_DEFINED__ */


#ifndef __ISDKChatDlgMgr2_INTERFACE_DEFINED__
#define __ISDKChatDlgMgr2_INTERFACE_DEFINED__

/* interface ISDKChatDlgMgr2 */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ISDKChatDlgMgr2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8AF53472-56D3-4838-BD3C-E8284E5C8D22")
    ISDKChatDlgMgr2 : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetChatDlgByUID( 
            /* [in] */ LONG lPluginCookie,
            /* [in] */ BSTR bstrUID,
            /* [retval][out] */ IDispatch **ppChatDlg) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetApplication( 
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ IDispatch **ppApplication) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetChatDlgCollection( 
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ ISDKObjectCollection **ppChatDlgCollection) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDKChatDlgMgr2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDKChatDlgMgr2 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDKChatDlgMgr2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDKChatDlgMgr2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDKChatDlgMgr2 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDKChatDlgMgr2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDKChatDlgMgr2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDKChatDlgMgr2 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetChatDlgByUID )( 
            ISDKChatDlgMgr2 * This,
            /* [in] */ LONG lPluginCookie,
            /* [in] */ BSTR bstrUID,
            /* [retval][out] */ IDispatch **ppChatDlg);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetApplication )( 
            ISDKChatDlgMgr2 * This,
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ IDispatch **ppApplication);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetChatDlgCollection )( 
            ISDKChatDlgMgr2 * This,
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ ISDKObjectCollection **ppChatDlgCollection);
        
        END_INTERFACE
    } ISDKChatDlgMgr2Vtbl;

    interface ISDKChatDlgMgr2
    {
        CONST_VTBL struct ISDKChatDlgMgr2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDKChatDlgMgr2_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISDKChatDlgMgr2_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISDKChatDlgMgr2_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISDKChatDlgMgr2_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ISDKChatDlgMgr2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ISDKChatDlgMgr2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ISDKChatDlgMgr2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ISDKChatDlgMgr2_GetChatDlgByUID(This,lPluginCookie,bstrUID,ppChatDlg)	\
    (This)->lpVtbl -> GetChatDlgByUID(This,lPluginCookie,bstrUID,ppChatDlg)

#define ISDKChatDlgMgr2_GetApplication(This,lPluginCookie,ppApplication)	\
    (This)->lpVtbl -> GetApplication(This,lPluginCookie,ppApplication)

#define ISDKChatDlgMgr2_GetChatDlgCollection(This,lPluginCookie,ppChatDlgCollection)	\
    (This)->lpVtbl -> GetChatDlgCollection(This,lPluginCookie,ppChatDlgCollection)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISDKChatDlgMgr2_GetChatDlgByUID_Proxy( 
    ISDKChatDlgMgr2 * This,
    /* [in] */ LONG lPluginCookie,
    /* [in] */ BSTR bstrUID,
    /* [retval][out] */ IDispatch **ppChatDlg);


void __RPC_STUB ISDKChatDlgMgr2_GetChatDlgByUID_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISDKChatDlgMgr2_GetApplication_Proxy( 
    ISDKChatDlgMgr2 * This,
    /* [in] */ LONG lPluginCookie,
    /* [retval][out] */ IDispatch **ppApplication);


void __RPC_STUB ISDKChatDlgMgr2_GetApplication_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISDKChatDlgMgr2_GetChatDlgCollection_Proxy( 
    ISDKChatDlgMgr2 * This,
    /* [in] */ LONG lPluginCookie,
    /* [retval][out] */ ISDKObjectCollection **ppChatDlgCollection);


void __RPC_STUB ISDKChatDlgMgr2_GetChatDlgCollection_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISDKChatDlgMgr2_INTERFACE_DEFINED__ */


#ifndef __ISDKObjectCollection_INTERFACE_DEFINED__
#define __ISDKObjectCollection_INTERFACE_DEFINED__

/* interface ISDKObjectCollection */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ISDKObjectCollection;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1AE3F1AB-06ED-42C6-AEBB-87DA831BF73B")
    ISDKObjectCollection : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ LONG *lpCount) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ VARIANT var) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Remove( 
            /* [in] */ LONG lIndex) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RemoveAll( void) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ LONG lIndex,
            /* [retval][out] */ VARIANT *pVar) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IEnumVARIANT **ppEnum) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDKObjectCollectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDKObjectCollection * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDKObjectCollection * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDKObjectCollection * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDKObjectCollection * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDKObjectCollection * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDKObjectCollection * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDKObjectCollection * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            ISDKObjectCollection * This,
            /* [retval][out] */ LONG *lpCount);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Add )( 
            ISDKObjectCollection * This,
            /* [in] */ VARIANT var);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            ISDKObjectCollection * This,
            /* [in] */ LONG lIndex);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RemoveAll )( 
            ISDKObjectCollection * This);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            ISDKObjectCollection * This,
            /* [in] */ LONG lIndex,
            /* [retval][out] */ VARIANT *pVar);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            ISDKObjectCollection * This,
            /* [retval][out] */ IEnumVARIANT **ppEnum);
        
        END_INTERFACE
    } ISDKObjectCollectionVtbl;

    interface ISDKObjectCollection
    {
        CONST_VTBL struct ISDKObjectCollectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDKObjectCollection_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISDKObjectCollection_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISDKObjectCollection_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISDKObjectCollection_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ISDKObjectCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ISDKObjectCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ISDKObjectCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ISDKObjectCollection_get_Count(This,lpCount)	\
    (This)->lpVtbl -> get_Count(This,lpCount)

#define ISDKObjectCollection_Add(This,var)	\
    (This)->lpVtbl -> Add(This,var)

#define ISDKObjectCollection_Remove(This,lIndex)	\
    (This)->lpVtbl -> Remove(This,lIndex)

#define ISDKObjectCollection_RemoveAll(This)	\
    (This)->lpVtbl -> RemoveAll(This)

#define ISDKObjectCollection_get_Item(This,lIndex,pVar)	\
    (This)->lpVtbl -> get_Item(This,lIndex,pVar)

#define ISDKObjectCollection_get__NewEnum(This,ppEnum)	\
    (This)->lpVtbl -> get__NewEnum(This,ppEnum)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISDKObjectCollection_get_Count_Proxy( 
    ISDKObjectCollection * This,
    /* [retval][out] */ LONG *lpCount);


void __RPC_STUB ISDKObjectCollection_get_Count_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISDKObjectCollection_Add_Proxy( 
    ISDKObjectCollection * This,
    /* [in] */ VARIANT var);


void __RPC_STUB ISDKObjectCollection_Add_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISDKObjectCollection_Remove_Proxy( 
    ISDKObjectCollection * This,
    /* [in] */ LONG lIndex);


void __RPC_STUB ISDKObjectCollection_Remove_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISDKObjectCollection_RemoveAll_Proxy( 
    ISDKObjectCollection * This);


void __RPC_STUB ISDKObjectCollection_RemoveAll_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ISDKObjectCollection_get_Item_Proxy( 
    ISDKObjectCollection * This,
    /* [in] */ LONG lIndex,
    /* [retval][out] */ VARIANT *pVar);


void __RPC_STUB ISDKObjectCollection_get_Item_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ISDKObjectCollection_get__NewEnum_Proxy( 
    ISDKObjectCollection * This,
    /* [retval][out] */ IEnumVARIANT **ppEnum);


void __RPC_STUB ISDKObjectCollection_get__NewEnum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISDKObjectCollection_INTERFACE_DEFINED__ */


#ifndef __ISDKSlot_INTERFACE_DEFINED__
#define __ISDKSlot_INTERFACE_DEFINED__

/* interface ISDKSlot */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ISDKSlot;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7974CE15-A974-48ce-AD3F-19C0A7F715DE")
    ISDKSlot : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ShowItem( 
            /* [in] */ VARIANT_BOOL bShow,
            /* [in] */ LONG lItemCookie) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EnableItem( 
            /* [in] */ VARIANT_BOOL bEnable,
            /* [in] */ LONG lItemCookie) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDKSlotVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDKSlot * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDKSlot * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDKSlot * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDKSlot * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDKSlot * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDKSlot * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDKSlot * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ShowItem )( 
            ISDKSlot * This,
            /* [in] */ VARIANT_BOOL bShow,
            /* [in] */ LONG lItemCookie);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EnableItem )( 
            ISDKSlot * This,
            /* [in] */ VARIANT_BOOL bEnable,
            /* [in] */ LONG lItemCookie);
        
        END_INTERFACE
    } ISDKSlotVtbl;

    interface ISDKSlot
    {
        CONST_VTBL struct ISDKSlotVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDKSlot_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISDKSlot_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISDKSlot_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISDKSlot_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ISDKSlot_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ISDKSlot_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ISDKSlot_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ISDKSlot_ShowItem(This,bShow,lItemCookie)	\
    (This)->lpVtbl -> ShowItem(This,bShow,lItemCookie)

#define ISDKSlot_EnableItem(This,bEnable,lItemCookie)	\
    (This)->lpVtbl -> EnableItem(This,bEnable,lItemCookie)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISDKSlot_ShowItem_Proxy( 
    ISDKSlot * This,
    /* [in] */ VARIANT_BOOL bShow,
    /* [in] */ LONG lItemCookie);


void __RPC_STUB ISDKSlot_ShowItem_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISDKSlot_EnableItem_Proxy( 
    ISDKSlot * This,
    /* [in] */ VARIANT_BOOL bEnable,
    /* [in] */ LONG lItemCookie);


void __RPC_STUB ISDKSlot_EnableItem_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISDKSlot_INTERFACE_DEFINED__ */


#ifndef __ISDKImportantPanelSlot_INTERFACE_DEFINED__
#define __ISDKImportantPanelSlot_INTERFACE_DEFINED__

/* interface ISDKImportantPanelSlot */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ISDKImportantPanelSlot;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("993DB3B0-267E-4E44-A0E2-9A1E5BD810FD")
    ISDKImportantPanelSlot : public ISDKSlot
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetMainFrame( 
            /* [retval][out] */ ISDKMainFrame **ppMainFrame) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetApplication( 
            /* [retval][out] */ ISDKApplication **ppApplication) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDKImportantPanelSlotVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDKImportantPanelSlot * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDKImportantPanelSlot * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDKImportantPanelSlot * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDKImportantPanelSlot * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDKImportantPanelSlot * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDKImportantPanelSlot * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDKImportantPanelSlot * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ShowItem )( 
            ISDKImportantPanelSlot * This,
            /* [in] */ VARIANT_BOOL bShow,
            /* [in] */ LONG lItemCookie);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EnableItem )( 
            ISDKImportantPanelSlot * This,
            /* [in] */ VARIANT_BOOL bEnable,
            /* [in] */ LONG lItemCookie);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetMainFrame )( 
            ISDKImportantPanelSlot * This,
            /* [retval][out] */ ISDKMainFrame **ppMainFrame);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetApplication )( 
            ISDKImportantPanelSlot * This,
            /* [retval][out] */ ISDKApplication **ppApplication);
        
        END_INTERFACE
    } ISDKImportantPanelSlotVtbl;

    interface ISDKImportantPanelSlot
    {
        CONST_VTBL struct ISDKImportantPanelSlotVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDKImportantPanelSlot_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISDKImportantPanelSlot_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISDKImportantPanelSlot_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISDKImportantPanelSlot_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ISDKImportantPanelSlot_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ISDKImportantPanelSlot_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ISDKImportantPanelSlot_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ISDKImportantPanelSlot_ShowItem(This,bShow,lItemCookie)	\
    (This)->lpVtbl -> ShowItem(This,bShow,lItemCookie)

#define ISDKImportantPanelSlot_EnableItem(This,bEnable,lItemCookie)	\
    (This)->lpVtbl -> EnableItem(This,bEnable,lItemCookie)


#define ISDKImportantPanelSlot_GetMainFrame(This,ppMainFrame)	\
    (This)->lpVtbl -> GetMainFrame(This,ppMainFrame)

#define ISDKImportantPanelSlot_GetApplication(This,ppApplication)	\
    (This)->lpVtbl -> GetApplication(This,ppApplication)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISDKImportantPanelSlot_GetMainFrame_Proxy( 
    ISDKImportantPanelSlot * This,
    /* [retval][out] */ ISDKMainFrame **ppMainFrame);


void __RPC_STUB ISDKImportantPanelSlot_GetMainFrame_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISDKImportantPanelSlot_GetApplication_Proxy( 
    ISDKImportantPanelSlot * This,
    /* [retval][out] */ ISDKApplication **ppApplication);


void __RPC_STUB ISDKImportantPanelSlot_GetApplication_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISDKImportantPanelSlot_INTERFACE_DEFINED__ */


#ifndef __ISDKImportantPanelSlot2_INTERFACE_DEFINED__
#define __ISDKImportantPanelSlot2_INTERFACE_DEFINED__

/* interface ISDKImportantPanelSlot2 */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ISDKImportantPanelSlot2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("634B44B4-2BAD-4fdb-B563-A67931FEE0B2")
    ISDKImportantPanelSlot2 : public ISDKSlot
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetMainFrame( 
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ IDispatch **ppMainFrame) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetApplication( 
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ IDispatch **ppApplication) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDKImportantPanelSlot2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDKImportantPanelSlot2 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDKImportantPanelSlot2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDKImportantPanelSlot2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDKImportantPanelSlot2 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDKImportantPanelSlot2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDKImportantPanelSlot2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDKImportantPanelSlot2 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ShowItem )( 
            ISDKImportantPanelSlot2 * This,
            /* [in] */ VARIANT_BOOL bShow,
            /* [in] */ LONG lItemCookie);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EnableItem )( 
            ISDKImportantPanelSlot2 * This,
            /* [in] */ VARIANT_BOOL bEnable,
            /* [in] */ LONG lItemCookie);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetMainFrame )( 
            ISDKImportantPanelSlot2 * This,
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ IDispatch **ppMainFrame);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetApplication )( 
            ISDKImportantPanelSlot2 * This,
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ IDispatch **ppApplication);
        
        END_INTERFACE
    } ISDKImportantPanelSlot2Vtbl;

    interface ISDKImportantPanelSlot2
    {
        CONST_VTBL struct ISDKImportantPanelSlot2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDKImportantPanelSlot2_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISDKImportantPanelSlot2_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISDKImportantPanelSlot2_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISDKImportantPanelSlot2_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ISDKImportantPanelSlot2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ISDKImportantPanelSlot2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ISDKImportantPanelSlot2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ISDKImportantPanelSlot2_ShowItem(This,bShow,lItemCookie)	\
    (This)->lpVtbl -> ShowItem(This,bShow,lItemCookie)

#define ISDKImportantPanelSlot2_EnableItem(This,bEnable,lItemCookie)	\
    (This)->lpVtbl -> EnableItem(This,bEnable,lItemCookie)


#define ISDKImportantPanelSlot2_GetMainFrame(This,lPluginCookie,ppMainFrame)	\
    (This)->lpVtbl -> GetMainFrame(This,lPluginCookie,ppMainFrame)

#define ISDKImportantPanelSlot2_GetApplication(This,lPluginCookie,ppApplication)	\
    (This)->lpVtbl -> GetApplication(This,lPluginCookie,ppApplication)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISDKImportantPanelSlot2_GetMainFrame_Proxy( 
    ISDKImportantPanelSlot2 * This,
    /* [in] */ LONG lPluginCookie,
    /* [retval][out] */ IDispatch **ppMainFrame);


void __RPC_STUB ISDKImportantPanelSlot2_GetMainFrame_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISDKImportantPanelSlot2_GetApplication_Proxy( 
    ISDKImportantPanelSlot2 * This,
    /* [in] */ LONG lPluginCookie,
    /* [retval][out] */ IDispatch **ppApplication);


void __RPC_STUB ISDKImportantPanelSlot2_GetApplication_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISDKImportantPanelSlot2_INTERFACE_DEFINED__ */


#ifndef __ISDKBottomPanelSlot_INTERFACE_DEFINED__
#define __ISDKBottomPanelSlot_INTERFACE_DEFINED__

/* interface ISDKBottomPanelSlot */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ISDKBottomPanelSlot;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4B5F9E91-8FDD-4C6A-8022-9149E3B1621B")
    ISDKBottomPanelSlot : public ISDKSlot
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetMainFrame( 
            /* [retval][out] */ ISDKMainFrame **ppMainFrame) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetApplication( 
            /* [retval][out] */ ISDKApplication **ppApplication) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDKBottomPanelSlotVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDKBottomPanelSlot * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDKBottomPanelSlot * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDKBottomPanelSlot * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDKBottomPanelSlot * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDKBottomPanelSlot * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDKBottomPanelSlot * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDKBottomPanelSlot * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ShowItem )( 
            ISDKBottomPanelSlot * This,
            /* [in] */ VARIANT_BOOL bShow,
            /* [in] */ LONG lItemCookie);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EnableItem )( 
            ISDKBottomPanelSlot * This,
            /* [in] */ VARIANT_BOOL bEnable,
            /* [in] */ LONG lItemCookie);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetMainFrame )( 
            ISDKBottomPanelSlot * This,
            /* [retval][out] */ ISDKMainFrame **ppMainFrame);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetApplication )( 
            ISDKBottomPanelSlot * This,
            /* [retval][out] */ ISDKApplication **ppApplication);
        
        END_INTERFACE
    } ISDKBottomPanelSlotVtbl;

    interface ISDKBottomPanelSlot
    {
        CONST_VTBL struct ISDKBottomPanelSlotVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDKBottomPanelSlot_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISDKBottomPanelSlot_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISDKBottomPanelSlot_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISDKBottomPanelSlot_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ISDKBottomPanelSlot_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ISDKBottomPanelSlot_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ISDKBottomPanelSlot_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ISDKBottomPanelSlot_ShowItem(This,bShow,lItemCookie)	\
    (This)->lpVtbl -> ShowItem(This,bShow,lItemCookie)

#define ISDKBottomPanelSlot_EnableItem(This,bEnable,lItemCookie)	\
    (This)->lpVtbl -> EnableItem(This,bEnable,lItemCookie)


#define ISDKBottomPanelSlot_GetMainFrame(This,ppMainFrame)	\
    (This)->lpVtbl -> GetMainFrame(This,ppMainFrame)

#define ISDKBottomPanelSlot_GetApplication(This,ppApplication)	\
    (This)->lpVtbl -> GetApplication(This,ppApplication)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISDKBottomPanelSlot_GetMainFrame_Proxy( 
    ISDKBottomPanelSlot * This,
    /* [retval][out] */ ISDKMainFrame **ppMainFrame);


void __RPC_STUB ISDKBottomPanelSlot_GetMainFrame_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISDKBottomPanelSlot_GetApplication_Proxy( 
    ISDKBottomPanelSlot * This,
    /* [retval][out] */ ISDKApplication **ppApplication);


void __RPC_STUB ISDKBottomPanelSlot_GetApplication_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISDKBottomPanelSlot_INTERFACE_DEFINED__ */


#ifndef __ISDKBottomPanelSlot2_INTERFACE_DEFINED__
#define __ISDKBottomPanelSlot2_INTERFACE_DEFINED__

/* interface ISDKBottomPanelSlot2 */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ISDKBottomPanelSlot2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5B4CABFE-88C5-4c97-A274-5005C2AC2506")
    ISDKBottomPanelSlot2 : public ISDKSlot
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetMainFrame( 
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ IDispatch **ppMainFrame) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetApplication( 
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ IDispatch **ppApplication) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDKBottomPanelSlot2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDKBottomPanelSlot2 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDKBottomPanelSlot2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDKBottomPanelSlot2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDKBottomPanelSlot2 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDKBottomPanelSlot2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDKBottomPanelSlot2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDKBottomPanelSlot2 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ShowItem )( 
            ISDKBottomPanelSlot2 * This,
            /* [in] */ VARIANT_BOOL bShow,
            /* [in] */ LONG lItemCookie);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EnableItem )( 
            ISDKBottomPanelSlot2 * This,
            /* [in] */ VARIANT_BOOL bEnable,
            /* [in] */ LONG lItemCookie);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetMainFrame )( 
            ISDKBottomPanelSlot2 * This,
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ IDispatch **ppMainFrame);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetApplication )( 
            ISDKBottomPanelSlot2 * This,
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ IDispatch **ppApplication);
        
        END_INTERFACE
    } ISDKBottomPanelSlot2Vtbl;

    interface ISDKBottomPanelSlot2
    {
        CONST_VTBL struct ISDKBottomPanelSlot2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDKBottomPanelSlot2_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISDKBottomPanelSlot2_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISDKBottomPanelSlot2_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISDKBottomPanelSlot2_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ISDKBottomPanelSlot2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ISDKBottomPanelSlot2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ISDKBottomPanelSlot2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ISDKBottomPanelSlot2_ShowItem(This,bShow,lItemCookie)	\
    (This)->lpVtbl -> ShowItem(This,bShow,lItemCookie)

#define ISDKBottomPanelSlot2_EnableItem(This,bEnable,lItemCookie)	\
    (This)->lpVtbl -> EnableItem(This,bEnable,lItemCookie)


#define ISDKBottomPanelSlot2_GetMainFrame(This,lPluginCookie,ppMainFrame)	\
    (This)->lpVtbl -> GetMainFrame(This,lPluginCookie,ppMainFrame)

#define ISDKBottomPanelSlot2_GetApplication(This,lPluginCookie,ppApplication)	\
    (This)->lpVtbl -> GetApplication(This,lPluginCookie,ppApplication)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISDKBottomPanelSlot2_GetMainFrame_Proxy( 
    ISDKBottomPanelSlot2 * This,
    /* [in] */ LONG lPluginCookie,
    /* [retval][out] */ IDispatch **ppMainFrame);


void __RPC_STUB ISDKBottomPanelSlot2_GetMainFrame_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISDKBottomPanelSlot2_GetApplication_Proxy( 
    ISDKBottomPanelSlot2 * This,
    /* [in] */ LONG lPluginCookie,
    /* [retval][out] */ IDispatch **ppApplication);


void __RPC_STUB ISDKBottomPanelSlot2_GetApplication_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISDKBottomPanelSlot2_INTERFACE_DEFINED__ */


#ifndef __ISDKChatDlg_INTERFACE_DEFINED__
#define __ISDKChatDlg_INTERFACE_DEFINED__

/* interface ISDKChatDlg */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ISDKChatDlg;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("AA5DCAA9-441F-4922-A942-95BFB94F07D8")
    ISDKChatDlg : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetActiveContact( 
            /* [retval][out] */ ISDKContact **ppContact) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetApplication( 
            /* [retval][out] */ ISDKApplication **ppApplication) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetMainToolbarSlot( 
            /* [retval][out] */ ISDKIMChatMainToolbarSlot **ppMainToolbarSlot) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetInputToolbarSlot( 
            /* [retval][out] */ ISDKIMChatInputToolbarSlot **ppInputToolbarSlot) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE InsertText2InputBox( 
            /* [in] */ BSTR bstrUID,
            /* [in] */ BSTR bstrText,
            /* [in] */ LONG nType) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDKChatDlgVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDKChatDlg * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDKChatDlg * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDKChatDlg * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDKChatDlg * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDKChatDlg * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDKChatDlg * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDKChatDlg * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetActiveContact )( 
            ISDKChatDlg * This,
            /* [retval][out] */ ISDKContact **ppContact);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetApplication )( 
            ISDKChatDlg * This,
            /* [retval][out] */ ISDKApplication **ppApplication);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetMainToolbarSlot )( 
            ISDKChatDlg * This,
            /* [retval][out] */ ISDKIMChatMainToolbarSlot **ppMainToolbarSlot);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInputToolbarSlot )( 
            ISDKChatDlg * This,
            /* [retval][out] */ ISDKIMChatInputToolbarSlot **ppInputToolbarSlot);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *InsertText2InputBox )( 
            ISDKChatDlg * This,
            /* [in] */ BSTR bstrUID,
            /* [in] */ BSTR bstrText,
            /* [in] */ LONG nType);
        
        END_INTERFACE
    } ISDKChatDlgVtbl;

    interface ISDKChatDlg
    {
        CONST_VTBL struct ISDKChatDlgVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDKChatDlg_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISDKChatDlg_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISDKChatDlg_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISDKChatDlg_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ISDKChatDlg_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ISDKChatDlg_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ISDKChatDlg_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ISDKChatDlg_GetActiveContact(This,ppContact)	\
    (This)->lpVtbl -> GetActiveContact(This,ppContact)

#define ISDKChatDlg_GetApplication(This,ppApplication)	\
    (This)->lpVtbl -> GetApplication(This,ppApplication)

#define ISDKChatDlg_GetMainToolbarSlot(This,ppMainToolbarSlot)	\
    (This)->lpVtbl -> GetMainToolbarSlot(This,ppMainToolbarSlot)

#define ISDKChatDlg_GetInputToolbarSlot(This,ppInputToolbarSlot)	\
    (This)->lpVtbl -> GetInputToolbarSlot(This,ppInputToolbarSlot)

#define ISDKChatDlg_InsertText2InputBox(This,bstrUID,bstrText,nType)	\
    (This)->lpVtbl -> InsertText2InputBox(This,bstrUID,bstrText,nType)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISDKChatDlg_GetActiveContact_Proxy( 
    ISDKChatDlg * This,
    /* [retval][out] */ ISDKContact **ppContact);


void __RPC_STUB ISDKChatDlg_GetActiveContact_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISDKChatDlg_GetApplication_Proxy( 
    ISDKChatDlg * This,
    /* [retval][out] */ ISDKApplication **ppApplication);


void __RPC_STUB ISDKChatDlg_GetApplication_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISDKChatDlg_GetMainToolbarSlot_Proxy( 
    ISDKChatDlg * This,
    /* [retval][out] */ ISDKIMChatMainToolbarSlot **ppMainToolbarSlot);


void __RPC_STUB ISDKChatDlg_GetMainToolbarSlot_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISDKChatDlg_GetInputToolbarSlot_Proxy( 
    ISDKChatDlg * This,
    /* [retval][out] */ ISDKIMChatInputToolbarSlot **ppInputToolbarSlot);


void __RPC_STUB ISDKChatDlg_GetInputToolbarSlot_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISDKChatDlg_InsertText2InputBox_Proxy( 
    ISDKChatDlg * This,
    /* [in] */ BSTR bstrUID,
    /* [in] */ BSTR bstrText,
    /* [in] */ LONG nType);


void __RPC_STUB ISDKChatDlg_InsertText2InputBox_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISDKChatDlg_INTERFACE_DEFINED__ */


#ifndef __ISDKChatDlg2_INTERFACE_DEFINED__
#define __ISDKChatDlg2_INTERFACE_DEFINED__

/* interface ISDKChatDlg2 */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ISDKChatDlg2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8DF8A53D-9B4F-4df3-A622-CB80F1CCF683")
    ISDKChatDlg2 : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetActiveContact( 
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ IDispatch **ppContact) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetApplication( 
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ IDispatch **ppApplication) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetMainToolbarSlot( 
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ IDispatch **ppMainToolbarSlot) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetInputToolbarSlot( 
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ IDispatch **ppInputToolbarSlot) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE InsertText2InputBox( 
            /* [in] */ LONG lPluginCookie,
            /* [in] */ BSTR bstrUID,
            /* [in] */ BSTR bstrText,
            /* [in] */ LONG nType) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDKChatDlg2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDKChatDlg2 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDKChatDlg2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDKChatDlg2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDKChatDlg2 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDKChatDlg2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDKChatDlg2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDKChatDlg2 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetActiveContact )( 
            ISDKChatDlg2 * This,
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ IDispatch **ppContact);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetApplication )( 
            ISDKChatDlg2 * This,
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ IDispatch **ppApplication);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetMainToolbarSlot )( 
            ISDKChatDlg2 * This,
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ IDispatch **ppMainToolbarSlot);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInputToolbarSlot )( 
            ISDKChatDlg2 * This,
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ IDispatch **ppInputToolbarSlot);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *InsertText2InputBox )( 
            ISDKChatDlg2 * This,
            /* [in] */ LONG lPluginCookie,
            /* [in] */ BSTR bstrUID,
            /* [in] */ BSTR bstrText,
            /* [in] */ LONG nType);
        
        END_INTERFACE
    } ISDKChatDlg2Vtbl;

    interface ISDKChatDlg2
    {
        CONST_VTBL struct ISDKChatDlg2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDKChatDlg2_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISDKChatDlg2_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISDKChatDlg2_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISDKChatDlg2_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ISDKChatDlg2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ISDKChatDlg2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ISDKChatDlg2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ISDKChatDlg2_GetActiveContact(This,lPluginCookie,ppContact)	\
    (This)->lpVtbl -> GetActiveContact(This,lPluginCookie,ppContact)

#define ISDKChatDlg2_GetApplication(This,lPluginCookie,ppApplication)	\
    (This)->lpVtbl -> GetApplication(This,lPluginCookie,ppApplication)

#define ISDKChatDlg2_GetMainToolbarSlot(This,lPluginCookie,ppMainToolbarSlot)	\
    (This)->lpVtbl -> GetMainToolbarSlot(This,lPluginCookie,ppMainToolbarSlot)

#define ISDKChatDlg2_GetInputToolbarSlot(This,lPluginCookie,ppInputToolbarSlot)	\
    (This)->lpVtbl -> GetInputToolbarSlot(This,lPluginCookie,ppInputToolbarSlot)

#define ISDKChatDlg2_InsertText2InputBox(This,lPluginCookie,bstrUID,bstrText,nType)	\
    (This)->lpVtbl -> InsertText2InputBox(This,lPluginCookie,bstrUID,bstrText,nType)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISDKChatDlg2_GetActiveContact_Proxy( 
    ISDKChatDlg2 * This,
    /* [in] */ LONG lPluginCookie,
    /* [retval][out] */ IDispatch **ppContact);


void __RPC_STUB ISDKChatDlg2_GetActiveContact_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISDKChatDlg2_GetApplication_Proxy( 
    ISDKChatDlg2 * This,
    /* [in] */ LONG lPluginCookie,
    /* [retval][out] */ IDispatch **ppApplication);


void __RPC_STUB ISDKChatDlg2_GetApplication_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISDKChatDlg2_GetMainToolbarSlot_Proxy( 
    ISDKChatDlg2 * This,
    /* [in] */ LONG lPluginCookie,
    /* [retval][out] */ IDispatch **ppMainToolbarSlot);


void __RPC_STUB ISDKChatDlg2_GetMainToolbarSlot_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISDKChatDlg2_GetInputToolbarSlot_Proxy( 
    ISDKChatDlg2 * This,
    /* [in] */ LONG lPluginCookie,
    /* [retval][out] */ IDispatch **ppInputToolbarSlot);


void __RPC_STUB ISDKChatDlg2_GetInputToolbarSlot_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISDKChatDlg2_InsertText2InputBox_Proxy( 
    ISDKChatDlg2 * This,
    /* [in] */ LONG lPluginCookie,
    /* [in] */ BSTR bstrUID,
    /* [in] */ BSTR bstrText,
    /* [in] */ LONG nType);


void __RPC_STUB ISDKChatDlg2_InsertText2InputBox_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISDKChatDlg2_INTERFACE_DEFINED__ */


#ifndef __ISDKChatDlg3_INTERFACE_DEFINED__
#define __ISDKChatDlg3_INTERFACE_DEFINED__

/* interface ISDKChatDlg3 */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ISDKChatDlg3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("CC6C4553-AC02-44f1-BF11-A552200785D1")
    ISDKChatDlg3 : public ISDKChatDlg2
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE InsertText2HistoryBox( 
            /* [in] */ LONG lPluginCookie,
            /* [in] */ BSTR contact_id,
            /* [in] */ BSTR notify_content,
            /* [in] */ VARIANT_BOOL bSysStyle) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDKChatDlg3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDKChatDlg3 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDKChatDlg3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDKChatDlg3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDKChatDlg3 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDKChatDlg3 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDKChatDlg3 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDKChatDlg3 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetActiveContact )( 
            ISDKChatDlg3 * This,
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ IDispatch **ppContact);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetApplication )( 
            ISDKChatDlg3 * This,
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ IDispatch **ppApplication);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetMainToolbarSlot )( 
            ISDKChatDlg3 * This,
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ IDispatch **ppMainToolbarSlot);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInputToolbarSlot )( 
            ISDKChatDlg3 * This,
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ IDispatch **ppInputToolbarSlot);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *InsertText2InputBox )( 
            ISDKChatDlg3 * This,
            /* [in] */ LONG lPluginCookie,
            /* [in] */ BSTR bstrUID,
            /* [in] */ BSTR bstrText,
            /* [in] */ LONG nType);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *InsertText2HistoryBox )( 
            ISDKChatDlg3 * This,
            /* [in] */ LONG lPluginCookie,
            /* [in] */ BSTR contact_id,
            /* [in] */ BSTR notify_content,
            /* [in] */ VARIANT_BOOL bSysStyle);
        
        END_INTERFACE
    } ISDKChatDlg3Vtbl;

    interface ISDKChatDlg3
    {
        CONST_VTBL struct ISDKChatDlg3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDKChatDlg3_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISDKChatDlg3_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISDKChatDlg3_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISDKChatDlg3_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ISDKChatDlg3_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ISDKChatDlg3_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ISDKChatDlg3_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ISDKChatDlg3_GetActiveContact(This,lPluginCookie,ppContact)	\
    (This)->lpVtbl -> GetActiveContact(This,lPluginCookie,ppContact)

#define ISDKChatDlg3_GetApplication(This,lPluginCookie,ppApplication)	\
    (This)->lpVtbl -> GetApplication(This,lPluginCookie,ppApplication)

#define ISDKChatDlg3_GetMainToolbarSlot(This,lPluginCookie,ppMainToolbarSlot)	\
    (This)->lpVtbl -> GetMainToolbarSlot(This,lPluginCookie,ppMainToolbarSlot)

#define ISDKChatDlg3_GetInputToolbarSlot(This,lPluginCookie,ppInputToolbarSlot)	\
    (This)->lpVtbl -> GetInputToolbarSlot(This,lPluginCookie,ppInputToolbarSlot)

#define ISDKChatDlg3_InsertText2InputBox(This,lPluginCookie,bstrUID,bstrText,nType)	\
    (This)->lpVtbl -> InsertText2InputBox(This,lPluginCookie,bstrUID,bstrText,nType)


#define ISDKChatDlg3_InsertText2HistoryBox(This,lPluginCookie,contact_id,notify_content,bSysStyle)	\
    (This)->lpVtbl -> InsertText2HistoryBox(This,lPluginCookie,contact_id,notify_content,bSysStyle)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISDKChatDlg3_InsertText2HistoryBox_Proxy( 
    ISDKChatDlg3 * This,
    /* [in] */ LONG lPluginCookie,
    /* [in] */ BSTR contact_id,
    /* [in] */ BSTR notify_content,
    /* [in] */ VARIANT_BOOL bSysStyle);


void __RPC_STUB ISDKChatDlg3_InsertText2HistoryBox_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISDKChatDlg3_INTERFACE_DEFINED__ */


#ifndef __IWWContact_INTERFACE_DEFINED__
#define __IWWContact_INTERFACE_DEFINED__

/* interface IWWContact */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IWWContact;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8DF5353F-BF01-4d9b-9457-D83112DE80A6")
    IWWContact : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetInGroup( 
            /* [in] */ IDispatch *ppSDKGroup) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWWContactVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWWContact * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWWContact * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWWContact * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IWWContact * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IWWContact * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IWWContact * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWWContact * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetInGroup )( 
            IWWContact * This,
            /* [in] */ IDispatch *ppSDKGroup);
        
        END_INTERFACE
    } IWWContactVtbl;

    interface IWWContact
    {
        CONST_VTBL struct IWWContactVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWWContact_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IWWContact_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IWWContact_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IWWContact_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IWWContact_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IWWContact_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IWWContact_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IWWContact_SetInGroup(This,ppSDKGroup)	\
    (This)->lpVtbl -> SetInGroup(This,ppSDKGroup)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IWWContact_SetInGroup_Proxy( 
    IWWContact * This,
    /* [in] */ IDispatch *ppSDKGroup);


void __RPC_STUB IWWContact_SetInGroup_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IWWContact_INTERFACE_DEFINED__ */


#ifndef __ISDKContact2_INTERFACE_DEFINED__
#define __ISDKContact2_INTERFACE_DEFINED__

/* interface ISDKContact2 */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ISDKContact2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1A2828AF-A6C6-4817-8D89-9183614B9155")
    ISDKContact2 : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetUserID( 
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ BSTR *pbstrUID) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDKContact2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDKContact2 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDKContact2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDKContact2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDKContact2 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDKContact2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDKContact2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDKContact2 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetUserID )( 
            ISDKContact2 * This,
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ BSTR *pbstrUID);
        
        END_INTERFACE
    } ISDKContact2Vtbl;

    interface ISDKContact2
    {
        CONST_VTBL struct ISDKContact2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDKContact2_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISDKContact2_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISDKContact2_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISDKContact2_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ISDKContact2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ISDKContact2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ISDKContact2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ISDKContact2_GetUserID(This,lPluginCookie,pbstrUID)	\
    (This)->lpVtbl -> GetUserID(This,lPluginCookie,pbstrUID)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISDKContact2_GetUserID_Proxy( 
    ISDKContact2 * This,
    /* [in] */ LONG lPluginCookie,
    /* [retval][out] */ BSTR *pbstrUID);


void __RPC_STUB ISDKContact2_GetUserID_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISDKContact2_INTERFACE_DEFINED__ */


#ifndef __ISDKContact3_INTERFACE_DEFINED__
#define __ISDKContact3_INTERFACE_DEFINED__

/* interface ISDKContact3 */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ISDKContact3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("622E7D7B-1E85-452a-994C-828ED7CFC29C")
    ISDKContact3 : public ISDKContact2
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetNickName( 
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ BSTR *pNickName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetSiteID( 
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ BSTR *pSiteID) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetSiteName( 
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ BSTR *pSiteName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetInGroup( 
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ IDispatch **ppGroup) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetStatus( 
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ enum SDKContactStatus *lpStatus) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDKContact3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDKContact3 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDKContact3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDKContact3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDKContact3 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDKContact3 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDKContact3 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDKContact3 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetUserID )( 
            ISDKContact3 * This,
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ BSTR *pbstrUID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetNickName )( 
            ISDKContact3 * This,
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ BSTR *pNickName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSiteID )( 
            ISDKContact3 * This,
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ BSTR *pSiteID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSiteName )( 
            ISDKContact3 * This,
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ BSTR *pSiteName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInGroup )( 
            ISDKContact3 * This,
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ IDispatch **ppGroup);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetStatus )( 
            ISDKContact3 * This,
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ enum SDKContactStatus *lpStatus);
        
        END_INTERFACE
    } ISDKContact3Vtbl;

    interface ISDKContact3
    {
        CONST_VTBL struct ISDKContact3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDKContact3_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISDKContact3_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISDKContact3_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISDKContact3_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ISDKContact3_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ISDKContact3_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ISDKContact3_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ISDKContact3_GetUserID(This,lPluginCookie,pbstrUID)	\
    (This)->lpVtbl -> GetUserID(This,lPluginCookie,pbstrUID)


#define ISDKContact3_GetNickName(This,lPluginCookie,pNickName)	\
    (This)->lpVtbl -> GetNickName(This,lPluginCookie,pNickName)

#define ISDKContact3_GetSiteID(This,lPluginCookie,pSiteID)	\
    (This)->lpVtbl -> GetSiteID(This,lPluginCookie,pSiteID)

#define ISDKContact3_GetSiteName(This,lPluginCookie,pSiteName)	\
    (This)->lpVtbl -> GetSiteName(This,lPluginCookie,pSiteName)

#define ISDKContact3_GetInGroup(This,lPluginCookie,ppGroup)	\
    (This)->lpVtbl -> GetInGroup(This,lPluginCookie,ppGroup)

#define ISDKContact3_GetStatus(This,lPluginCookie,lpStatus)	\
    (This)->lpVtbl -> GetStatus(This,lPluginCookie,lpStatus)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISDKContact3_GetNickName_Proxy( 
    ISDKContact3 * This,
    /* [in] */ LONG lPluginCookie,
    /* [retval][out] */ BSTR *pNickName);


void __RPC_STUB ISDKContact3_GetNickName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISDKContact3_GetSiteID_Proxy( 
    ISDKContact3 * This,
    /* [in] */ LONG lPluginCookie,
    /* [retval][out] */ BSTR *pSiteID);


void __RPC_STUB ISDKContact3_GetSiteID_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISDKContact3_GetSiteName_Proxy( 
    ISDKContact3 * This,
    /* [in] */ LONG lPluginCookie,
    /* [retval][out] */ BSTR *pSiteName);


void __RPC_STUB ISDKContact3_GetSiteName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISDKContact3_GetInGroup_Proxy( 
    ISDKContact3 * This,
    /* [in] */ LONG lPluginCookie,
    /* [retval][out] */ IDispatch **ppGroup);


void __RPC_STUB ISDKContact3_GetInGroup_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISDKContact3_GetStatus_Proxy( 
    ISDKContact3 * This,
    /* [in] */ LONG lPluginCookie,
    /* [retval][out] */ enum SDKContactStatus *lpStatus);


void __RPC_STUB ISDKContact3_GetStatus_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISDKContact3_INTERFACE_DEFINED__ */


#ifndef __IWWSlot_INTERFACE_DEFINED__
#define __IWWSlot_INTERFACE_DEFINED__

/* interface IWWSlot */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IWWSlot;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("48B67E83-644A-444c-8247-29F6B4370034")
    IWWSlot : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnInitialize( 
            /* [in] */ IPluginMgrV2 *pPluginMgr) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnDestroy( 
            /* [in] */ IPluginMgrV2 *pPluginMgr) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnInstalledPlugin( 
            /* [in] */ ULONG PluginID,
            /* [in] */ IPluginMgrV2 *pPluginMgr) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnRemovePlugin( 
            /* [in] */ ULONG PluginID,
            /* [in] */ IPluginMgrV2 *pPluginMgr) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnNotify( 
            /* [in] */ ULONG NotifyId,
            /* [in] */ IDispatch *pParam) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE HighLight( 
            /* [in] */ LONG nPluginId,
            /* [in] */ LONG nItemId) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWWSlotVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWWSlot * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWWSlot * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWWSlot * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IWWSlot * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IWWSlot * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IWWSlot * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWWSlot * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnInitialize )( 
            IWWSlot * This,
            /* [in] */ IPluginMgrV2 *pPluginMgr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnDestroy )( 
            IWWSlot * This,
            /* [in] */ IPluginMgrV2 *pPluginMgr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnInstalledPlugin )( 
            IWWSlot * This,
            /* [in] */ ULONG PluginID,
            /* [in] */ IPluginMgrV2 *pPluginMgr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnRemovePlugin )( 
            IWWSlot * This,
            /* [in] */ ULONG PluginID,
            /* [in] */ IPluginMgrV2 *pPluginMgr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnNotify )( 
            IWWSlot * This,
            /* [in] */ ULONG NotifyId,
            /* [in] */ IDispatch *pParam);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *HighLight )( 
            IWWSlot * This,
            /* [in] */ LONG nPluginId,
            /* [in] */ LONG nItemId);
        
        END_INTERFACE
    } IWWSlotVtbl;

    interface IWWSlot
    {
        CONST_VTBL struct IWWSlotVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWWSlot_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IWWSlot_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IWWSlot_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IWWSlot_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IWWSlot_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IWWSlot_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IWWSlot_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IWWSlot_OnInitialize(This,pPluginMgr)	\
    (This)->lpVtbl -> OnInitialize(This,pPluginMgr)

#define IWWSlot_OnDestroy(This,pPluginMgr)	\
    (This)->lpVtbl -> OnDestroy(This,pPluginMgr)

#define IWWSlot_OnInstalledPlugin(This,PluginID,pPluginMgr)	\
    (This)->lpVtbl -> OnInstalledPlugin(This,PluginID,pPluginMgr)

#define IWWSlot_OnRemovePlugin(This,PluginID,pPluginMgr)	\
    (This)->lpVtbl -> OnRemovePlugin(This,PluginID,pPluginMgr)

#define IWWSlot_OnNotify(This,NotifyId,pParam)	\
    (This)->lpVtbl -> OnNotify(This,NotifyId,pParam)

#define IWWSlot_HighLight(This,nPluginId,nItemId)	\
    (This)->lpVtbl -> HighLight(This,nPluginId,nItemId)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IWWSlot_OnInitialize_Proxy( 
    IWWSlot * This,
    /* [in] */ IPluginMgrV2 *pPluginMgr);


void __RPC_STUB IWWSlot_OnInitialize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IWWSlot_OnDestroy_Proxy( 
    IWWSlot * This,
    /* [in] */ IPluginMgrV2 *pPluginMgr);


void __RPC_STUB IWWSlot_OnDestroy_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IWWSlot_OnInstalledPlugin_Proxy( 
    IWWSlot * This,
    /* [in] */ ULONG PluginID,
    /* [in] */ IPluginMgrV2 *pPluginMgr);


void __RPC_STUB IWWSlot_OnInstalledPlugin_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IWWSlot_OnRemovePlugin_Proxy( 
    IWWSlot * This,
    /* [in] */ ULONG PluginID,
    /* [in] */ IPluginMgrV2 *pPluginMgr);


void __RPC_STUB IWWSlot_OnRemovePlugin_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IWWSlot_OnNotify_Proxy( 
    IWWSlot * This,
    /* [in] */ ULONG NotifyId,
    /* [in] */ IDispatch *pParam);


void __RPC_STUB IWWSlot_OnNotify_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IWWSlot_HighLight_Proxy( 
    IWWSlot * This,
    /* [in] */ LONG nPluginId,
    /* [in] */ LONG nItemId);


void __RPC_STUB IWWSlot_HighLight_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IWWSlot_INTERFACE_DEFINED__ */


#ifndef __IWWIMChatSlot_INTERFACE_DEFINED__
#define __IWWIMChatSlot_INTERFACE_DEFINED__

/* interface IWWIMChatSlot */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IWWIMChatSlot;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3A45437B-CC5C-4aa9-B843-E3A2F98433B7")
    IWWIMChatSlot : public IWWSlot
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetChatDlg( 
            /* [in] */ ISDKChatDlg *pChatDlg) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWWIMChatSlotVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWWIMChatSlot * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWWIMChatSlot * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWWIMChatSlot * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IWWIMChatSlot * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IWWIMChatSlot * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IWWIMChatSlot * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWWIMChatSlot * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnInitialize )( 
            IWWIMChatSlot * This,
            /* [in] */ IPluginMgrV2 *pPluginMgr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnDestroy )( 
            IWWIMChatSlot * This,
            /* [in] */ IPluginMgrV2 *pPluginMgr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnInstalledPlugin )( 
            IWWIMChatSlot * This,
            /* [in] */ ULONG PluginID,
            /* [in] */ IPluginMgrV2 *pPluginMgr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnRemovePlugin )( 
            IWWIMChatSlot * This,
            /* [in] */ ULONG PluginID,
            /* [in] */ IPluginMgrV2 *pPluginMgr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnNotify )( 
            IWWIMChatSlot * This,
            /* [in] */ ULONG NotifyId,
            /* [in] */ IDispatch *pParam);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *HighLight )( 
            IWWIMChatSlot * This,
            /* [in] */ LONG nPluginId,
            /* [in] */ LONG nItemId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetChatDlg )( 
            IWWIMChatSlot * This,
            /* [in] */ ISDKChatDlg *pChatDlg);
        
        END_INTERFACE
    } IWWIMChatSlotVtbl;

    interface IWWIMChatSlot
    {
        CONST_VTBL struct IWWIMChatSlotVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWWIMChatSlot_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IWWIMChatSlot_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IWWIMChatSlot_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IWWIMChatSlot_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IWWIMChatSlot_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IWWIMChatSlot_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IWWIMChatSlot_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IWWIMChatSlot_OnInitialize(This,pPluginMgr)	\
    (This)->lpVtbl -> OnInitialize(This,pPluginMgr)

#define IWWIMChatSlot_OnDestroy(This,pPluginMgr)	\
    (This)->lpVtbl -> OnDestroy(This,pPluginMgr)

#define IWWIMChatSlot_OnInstalledPlugin(This,PluginID,pPluginMgr)	\
    (This)->lpVtbl -> OnInstalledPlugin(This,PluginID,pPluginMgr)

#define IWWIMChatSlot_OnRemovePlugin(This,PluginID,pPluginMgr)	\
    (This)->lpVtbl -> OnRemovePlugin(This,PluginID,pPluginMgr)

#define IWWIMChatSlot_OnNotify(This,NotifyId,pParam)	\
    (This)->lpVtbl -> OnNotify(This,NotifyId,pParam)

#define IWWIMChatSlot_HighLight(This,nPluginId,nItemId)	\
    (This)->lpVtbl -> HighLight(This,nPluginId,nItemId)


#define IWWIMChatSlot_SetChatDlg(This,pChatDlg)	\
    (This)->lpVtbl -> SetChatDlg(This,pChatDlg)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IWWIMChatSlot_SetChatDlg_Proxy( 
    IWWIMChatSlot * This,
    /* [in] */ ISDKChatDlg *pChatDlg);


void __RPC_STUB IWWIMChatSlot_SetChatDlg_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IWWIMChatSlot_INTERFACE_DEFINED__ */


#ifndef __ISDKIMChatInputToolbarSlot_INTERFACE_DEFINED__
#define __ISDKIMChatInputToolbarSlot_INTERFACE_DEFINED__

/* interface ISDKIMChatInputToolbarSlot */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ISDKIMChatInputToolbarSlot;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F525BE7A-FBB4-4A7F-AD29-28262D7CB705")
    ISDKIMChatInputToolbarSlot : public ISDKSlot
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetChatDlg( 
            /* [retval][out] */ ISDKChatDlg **ppChatDlg) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetApplication( 
            /* [retval][out] */ ISDKApplication **ppApplication) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDKIMChatInputToolbarSlotVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDKIMChatInputToolbarSlot * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDKIMChatInputToolbarSlot * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDKIMChatInputToolbarSlot * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDKIMChatInputToolbarSlot * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDKIMChatInputToolbarSlot * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDKIMChatInputToolbarSlot * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDKIMChatInputToolbarSlot * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ShowItem )( 
            ISDKIMChatInputToolbarSlot * This,
            /* [in] */ VARIANT_BOOL bShow,
            /* [in] */ LONG lItemCookie);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EnableItem )( 
            ISDKIMChatInputToolbarSlot * This,
            /* [in] */ VARIANT_BOOL bEnable,
            /* [in] */ LONG lItemCookie);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetChatDlg )( 
            ISDKIMChatInputToolbarSlot * This,
            /* [retval][out] */ ISDKChatDlg **ppChatDlg);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetApplication )( 
            ISDKIMChatInputToolbarSlot * This,
            /* [retval][out] */ ISDKApplication **ppApplication);
        
        END_INTERFACE
    } ISDKIMChatInputToolbarSlotVtbl;

    interface ISDKIMChatInputToolbarSlot
    {
        CONST_VTBL struct ISDKIMChatInputToolbarSlotVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDKIMChatInputToolbarSlot_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISDKIMChatInputToolbarSlot_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISDKIMChatInputToolbarSlot_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISDKIMChatInputToolbarSlot_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ISDKIMChatInputToolbarSlot_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ISDKIMChatInputToolbarSlot_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ISDKIMChatInputToolbarSlot_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ISDKIMChatInputToolbarSlot_ShowItem(This,bShow,lItemCookie)	\
    (This)->lpVtbl -> ShowItem(This,bShow,lItemCookie)

#define ISDKIMChatInputToolbarSlot_EnableItem(This,bEnable,lItemCookie)	\
    (This)->lpVtbl -> EnableItem(This,bEnable,lItemCookie)


#define ISDKIMChatInputToolbarSlot_GetChatDlg(This,ppChatDlg)	\
    (This)->lpVtbl -> GetChatDlg(This,ppChatDlg)

#define ISDKIMChatInputToolbarSlot_GetApplication(This,ppApplication)	\
    (This)->lpVtbl -> GetApplication(This,ppApplication)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISDKIMChatInputToolbarSlot_GetChatDlg_Proxy( 
    ISDKIMChatInputToolbarSlot * This,
    /* [retval][out] */ ISDKChatDlg **ppChatDlg);


void __RPC_STUB ISDKIMChatInputToolbarSlot_GetChatDlg_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISDKIMChatInputToolbarSlot_GetApplication_Proxy( 
    ISDKIMChatInputToolbarSlot * This,
    /* [retval][out] */ ISDKApplication **ppApplication);


void __RPC_STUB ISDKIMChatInputToolbarSlot_GetApplication_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISDKIMChatInputToolbarSlot_INTERFACE_DEFINED__ */


#ifndef __ISDKIMChatInputToolbarSlot2_INTERFACE_DEFINED__
#define __ISDKIMChatInputToolbarSlot2_INTERFACE_DEFINED__

/* interface ISDKIMChatInputToolbarSlot2 */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ISDKIMChatInputToolbarSlot2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("275CC9B8-0CA2-478c-812F-F4E42C06F1D0")
    ISDKIMChatInputToolbarSlot2 : public ISDKSlot
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetChatDlg( 
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ IDispatch **ppChatDlg) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetApplication( 
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ IDispatch **ppApplication) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDKIMChatInputToolbarSlot2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDKIMChatInputToolbarSlot2 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDKIMChatInputToolbarSlot2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDKIMChatInputToolbarSlot2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDKIMChatInputToolbarSlot2 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDKIMChatInputToolbarSlot2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDKIMChatInputToolbarSlot2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDKIMChatInputToolbarSlot2 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ShowItem )( 
            ISDKIMChatInputToolbarSlot2 * This,
            /* [in] */ VARIANT_BOOL bShow,
            /* [in] */ LONG lItemCookie);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EnableItem )( 
            ISDKIMChatInputToolbarSlot2 * This,
            /* [in] */ VARIANT_BOOL bEnable,
            /* [in] */ LONG lItemCookie);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetChatDlg )( 
            ISDKIMChatInputToolbarSlot2 * This,
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ IDispatch **ppChatDlg);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetApplication )( 
            ISDKIMChatInputToolbarSlot2 * This,
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ IDispatch **ppApplication);
        
        END_INTERFACE
    } ISDKIMChatInputToolbarSlot2Vtbl;

    interface ISDKIMChatInputToolbarSlot2
    {
        CONST_VTBL struct ISDKIMChatInputToolbarSlot2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDKIMChatInputToolbarSlot2_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISDKIMChatInputToolbarSlot2_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISDKIMChatInputToolbarSlot2_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISDKIMChatInputToolbarSlot2_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ISDKIMChatInputToolbarSlot2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ISDKIMChatInputToolbarSlot2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ISDKIMChatInputToolbarSlot2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ISDKIMChatInputToolbarSlot2_ShowItem(This,bShow,lItemCookie)	\
    (This)->lpVtbl -> ShowItem(This,bShow,lItemCookie)

#define ISDKIMChatInputToolbarSlot2_EnableItem(This,bEnable,lItemCookie)	\
    (This)->lpVtbl -> EnableItem(This,bEnable,lItemCookie)


#define ISDKIMChatInputToolbarSlot2_GetChatDlg(This,lPluginCookie,ppChatDlg)	\
    (This)->lpVtbl -> GetChatDlg(This,lPluginCookie,ppChatDlg)

#define ISDKIMChatInputToolbarSlot2_GetApplication(This,lPluginCookie,ppApplication)	\
    (This)->lpVtbl -> GetApplication(This,lPluginCookie,ppApplication)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISDKIMChatInputToolbarSlot2_GetChatDlg_Proxy( 
    ISDKIMChatInputToolbarSlot2 * This,
    /* [in] */ LONG lPluginCookie,
    /* [retval][out] */ IDispatch **ppChatDlg);


void __RPC_STUB ISDKIMChatInputToolbarSlot2_GetChatDlg_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISDKIMChatInputToolbarSlot2_GetApplication_Proxy( 
    ISDKIMChatInputToolbarSlot2 * This,
    /* [in] */ LONG lPluginCookie,
    /* [retval][out] */ IDispatch **ppApplication);


void __RPC_STUB ISDKIMChatInputToolbarSlot2_GetApplication_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISDKIMChatInputToolbarSlot2_INTERFACE_DEFINED__ */


#ifndef __ISDKIMChatMainToolbarSlot_INTERFACE_DEFINED__
#define __ISDKIMChatMainToolbarSlot_INTERFACE_DEFINED__

/* interface ISDKIMChatMainToolbarSlot */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ISDKIMChatMainToolbarSlot;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0F9AEEE4-A07F-4B95-B20F-A13B7FE164A1")
    ISDKIMChatMainToolbarSlot : public ISDKSlot
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetChatDlg( 
            /* [retval][out] */ ISDKChatDlg **ppChatDlg) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetApplication( 
            /* [retval][out] */ ISDKApplication **ppApplication) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDKIMChatMainToolbarSlotVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDKIMChatMainToolbarSlot * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDKIMChatMainToolbarSlot * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDKIMChatMainToolbarSlot * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDKIMChatMainToolbarSlot * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDKIMChatMainToolbarSlot * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDKIMChatMainToolbarSlot * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDKIMChatMainToolbarSlot * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ShowItem )( 
            ISDKIMChatMainToolbarSlot * This,
            /* [in] */ VARIANT_BOOL bShow,
            /* [in] */ LONG lItemCookie);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EnableItem )( 
            ISDKIMChatMainToolbarSlot * This,
            /* [in] */ VARIANT_BOOL bEnable,
            /* [in] */ LONG lItemCookie);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetChatDlg )( 
            ISDKIMChatMainToolbarSlot * This,
            /* [retval][out] */ ISDKChatDlg **ppChatDlg);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetApplication )( 
            ISDKIMChatMainToolbarSlot * This,
            /* [retval][out] */ ISDKApplication **ppApplication);
        
        END_INTERFACE
    } ISDKIMChatMainToolbarSlotVtbl;

    interface ISDKIMChatMainToolbarSlot
    {
        CONST_VTBL struct ISDKIMChatMainToolbarSlotVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDKIMChatMainToolbarSlot_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISDKIMChatMainToolbarSlot_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISDKIMChatMainToolbarSlot_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISDKIMChatMainToolbarSlot_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ISDKIMChatMainToolbarSlot_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ISDKIMChatMainToolbarSlot_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ISDKIMChatMainToolbarSlot_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ISDKIMChatMainToolbarSlot_ShowItem(This,bShow,lItemCookie)	\
    (This)->lpVtbl -> ShowItem(This,bShow,lItemCookie)

#define ISDKIMChatMainToolbarSlot_EnableItem(This,bEnable,lItemCookie)	\
    (This)->lpVtbl -> EnableItem(This,bEnable,lItemCookie)


#define ISDKIMChatMainToolbarSlot_GetChatDlg(This,ppChatDlg)	\
    (This)->lpVtbl -> GetChatDlg(This,ppChatDlg)

#define ISDKIMChatMainToolbarSlot_GetApplication(This,ppApplication)	\
    (This)->lpVtbl -> GetApplication(This,ppApplication)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISDKIMChatMainToolbarSlot_GetChatDlg_Proxy( 
    ISDKIMChatMainToolbarSlot * This,
    /* [retval][out] */ ISDKChatDlg **ppChatDlg);


void __RPC_STUB ISDKIMChatMainToolbarSlot_GetChatDlg_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISDKIMChatMainToolbarSlot_GetApplication_Proxy( 
    ISDKIMChatMainToolbarSlot * This,
    /* [retval][out] */ ISDKApplication **ppApplication);


void __RPC_STUB ISDKIMChatMainToolbarSlot_GetApplication_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISDKIMChatMainToolbarSlot_INTERFACE_DEFINED__ */


#ifndef __ISDKIMChatMainToolbarSlot2_INTERFACE_DEFINED__
#define __ISDKIMChatMainToolbarSlot2_INTERFACE_DEFINED__

/* interface ISDKIMChatMainToolbarSlot2 */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ISDKIMChatMainToolbarSlot2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("15716043-633C-4629-BF1C-5578590B52BD")
    ISDKIMChatMainToolbarSlot2 : public ISDKSlot
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetChatDlg( 
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ IDispatch **ppChatDlg) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetApplication( 
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ IDispatch **ppApplication) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDKIMChatMainToolbarSlot2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDKIMChatMainToolbarSlot2 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDKIMChatMainToolbarSlot2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDKIMChatMainToolbarSlot2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDKIMChatMainToolbarSlot2 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDKIMChatMainToolbarSlot2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDKIMChatMainToolbarSlot2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDKIMChatMainToolbarSlot2 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ShowItem )( 
            ISDKIMChatMainToolbarSlot2 * This,
            /* [in] */ VARIANT_BOOL bShow,
            /* [in] */ LONG lItemCookie);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EnableItem )( 
            ISDKIMChatMainToolbarSlot2 * This,
            /* [in] */ VARIANT_BOOL bEnable,
            /* [in] */ LONG lItemCookie);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetChatDlg )( 
            ISDKIMChatMainToolbarSlot2 * This,
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ IDispatch **ppChatDlg);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetApplication )( 
            ISDKIMChatMainToolbarSlot2 * This,
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ IDispatch **ppApplication);
        
        END_INTERFACE
    } ISDKIMChatMainToolbarSlot2Vtbl;

    interface ISDKIMChatMainToolbarSlot2
    {
        CONST_VTBL struct ISDKIMChatMainToolbarSlot2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDKIMChatMainToolbarSlot2_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISDKIMChatMainToolbarSlot2_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISDKIMChatMainToolbarSlot2_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISDKIMChatMainToolbarSlot2_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ISDKIMChatMainToolbarSlot2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ISDKIMChatMainToolbarSlot2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ISDKIMChatMainToolbarSlot2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ISDKIMChatMainToolbarSlot2_ShowItem(This,bShow,lItemCookie)	\
    (This)->lpVtbl -> ShowItem(This,bShow,lItemCookie)

#define ISDKIMChatMainToolbarSlot2_EnableItem(This,bEnable,lItemCookie)	\
    (This)->lpVtbl -> EnableItem(This,bEnable,lItemCookie)


#define ISDKIMChatMainToolbarSlot2_GetChatDlg(This,lPluginCookie,ppChatDlg)	\
    (This)->lpVtbl -> GetChatDlg(This,lPluginCookie,ppChatDlg)

#define ISDKIMChatMainToolbarSlot2_GetApplication(This,lPluginCookie,ppApplication)	\
    (This)->lpVtbl -> GetApplication(This,lPluginCookie,ppApplication)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISDKIMChatMainToolbarSlot2_GetChatDlg_Proxy( 
    ISDKIMChatMainToolbarSlot2 * This,
    /* [in] */ LONG lPluginCookie,
    /* [retval][out] */ IDispatch **ppChatDlg);


void __RPC_STUB ISDKIMChatMainToolbarSlot2_GetChatDlg_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISDKIMChatMainToolbarSlot2_GetApplication_Proxy( 
    ISDKIMChatMainToolbarSlot2 * This,
    /* [in] */ LONG lPluginCookie,
    /* [retval][out] */ IDispatch **ppApplication);


void __RPC_STUB ISDKIMChatMainToolbarSlot2_GetApplication_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISDKIMChatMainToolbarSlot2_INTERFACE_DEFINED__ */


#ifndef __ISlotItemInfor_INTERFACE_DEFINED__
#define __ISlotItemInfor_INTERFACE_DEFINED__

/* interface ISlotItemInfor */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ISlotItemInfor;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A7A822AB-89F1-4442-99B5-63167008C8F7")
    ISlotItemInfor : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PluginId( 
            /* [retval][out] */ ULONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_PluginId( 
            /* [in] */ ULONG newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ItemId( 
            /* [retval][out] */ ULONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ItemId( 
            /* [in] */ ULONG newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Style( 
            /* [retval][out] */ ULONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Style( 
            /* [in] */ ULONG newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Name( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Title( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Title( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Tip( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Tip( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Width( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Width( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Height( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Height( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ImageFileName( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ImageFileName( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ImageItemCount( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ImageItemCount( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ModuleFileName( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ModuleFileName( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CLSID( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_CLSID( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EmptySubMenuItem( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddSubMenuItem( 
            /* [in] */ ULONG Id,
            /* [in] */ BSTR title,
            /* [in] */ BSTR image,
            /* [in] */ BSTR url) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetSubMenuItems( 
            /* [retval][out] */ ISDKObjectCollection **ppInforCol) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Url( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Url( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ExecuteModule( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ExecuteModule( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MenuIcon( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_MenuIcon( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetUrlProperty( 
            /* [in] */ BSTR newVal,
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetUrlProperty( 
            /* [in] */ BSTR newVal,
            /* [in] */ VARIANT val) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EmptyNotifyMessage( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddNotifyMessage( 
            /* [in] */ enum SDKItemNotifyID msg) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetNotifyMessages( 
            /* [retval][out] */ ISDKObjectCollection **ppInforCol) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SlotId( 
            /* [retval][out] */ ULONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_SlotId( 
            /* [in] */ ULONG newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetExecuteModuleProperty( 
            /* [in] */ BSTR newVal,
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetExecuteModuleProperty( 
            /* [in] */ BSTR newVal,
            /* [in] */ VARIANT val) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IsLoadBeforeLogin( 
            /* [retval][out] */ VARIANT_BOOL *pvbPreload) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FacadeCLSID( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_FacadeCLSID( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ItemType( 
            /* [retval][out] */ enum SDKItemType *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ItemType( 
            /* [in] */ enum SDKItemType newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISlotItemInforVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISlotItemInfor * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISlotItemInfor * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISlotItemInfor * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISlotItemInfor * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISlotItemInfor * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISlotItemInfor * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISlotItemInfor * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PluginId )( 
            ISlotItemInfor * This,
            /* [retval][out] */ ULONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PluginId )( 
            ISlotItemInfor * This,
            /* [in] */ ULONG newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ItemId )( 
            ISlotItemInfor * This,
            /* [retval][out] */ ULONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ItemId )( 
            ISlotItemInfor * This,
            /* [in] */ ULONG newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Style )( 
            ISlotItemInfor * This,
            /* [retval][out] */ ULONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Style )( 
            ISlotItemInfor * This,
            /* [in] */ ULONG newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            ISlotItemInfor * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            ISlotItemInfor * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Title )( 
            ISlotItemInfor * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Title )( 
            ISlotItemInfor * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Tip )( 
            ISlotItemInfor * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Tip )( 
            ISlotItemInfor * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Width )( 
            ISlotItemInfor * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Width )( 
            ISlotItemInfor * This,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Height )( 
            ISlotItemInfor * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Height )( 
            ISlotItemInfor * This,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ImageFileName )( 
            ISlotItemInfor * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ImageFileName )( 
            ISlotItemInfor * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ImageItemCount )( 
            ISlotItemInfor * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ImageItemCount )( 
            ISlotItemInfor * This,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ModuleFileName )( 
            ISlotItemInfor * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ModuleFileName )( 
            ISlotItemInfor * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CLSID )( 
            ISlotItemInfor * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_CLSID )( 
            ISlotItemInfor * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EmptySubMenuItem )( 
            ISlotItemInfor * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddSubMenuItem )( 
            ISlotItemInfor * This,
            /* [in] */ ULONG Id,
            /* [in] */ BSTR title,
            /* [in] */ BSTR image,
            /* [in] */ BSTR url);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSubMenuItems )( 
            ISlotItemInfor * This,
            /* [retval][out] */ ISDKObjectCollection **ppInforCol);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Url )( 
            ISlotItemInfor * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Url )( 
            ISlotItemInfor * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExecuteModule )( 
            ISlotItemInfor * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ExecuteModule )( 
            ISlotItemInfor * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MenuIcon )( 
            ISlotItemInfor * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MenuIcon )( 
            ISlotItemInfor * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetUrlProperty )( 
            ISlotItemInfor * This,
            /* [in] */ BSTR newVal,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetUrlProperty )( 
            ISlotItemInfor * This,
            /* [in] */ BSTR newVal,
            /* [in] */ VARIANT val);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EmptyNotifyMessage )( 
            ISlotItemInfor * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddNotifyMessage )( 
            ISlotItemInfor * This,
            /* [in] */ enum SDKItemNotifyID msg);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetNotifyMessages )( 
            ISlotItemInfor * This,
            /* [retval][out] */ ISDKObjectCollection **ppInforCol);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SlotId )( 
            ISlotItemInfor * This,
            /* [retval][out] */ ULONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SlotId )( 
            ISlotItemInfor * This,
            /* [in] */ ULONG newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetExecuteModuleProperty )( 
            ISlotItemInfor * This,
            /* [in] */ BSTR newVal,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetExecuteModuleProperty )( 
            ISlotItemInfor * This,
            /* [in] */ BSTR newVal,
            /* [in] */ VARIANT val);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *IsLoadBeforeLogin )( 
            ISlotItemInfor * This,
            /* [retval][out] */ VARIANT_BOOL *pvbPreload);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FacadeCLSID )( 
            ISlotItemInfor * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FacadeCLSID )( 
            ISlotItemInfor * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ItemType )( 
            ISlotItemInfor * This,
            /* [retval][out] */ enum SDKItemType *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ItemType )( 
            ISlotItemInfor * This,
            /* [in] */ enum SDKItemType newVal);
        
        END_INTERFACE
    } ISlotItemInforVtbl;

    interface ISlotItemInfor
    {
        CONST_VTBL struct ISlotItemInforVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISlotItemInfor_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISlotItemInfor_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISlotItemInfor_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISlotItemInfor_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ISlotItemInfor_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ISlotItemInfor_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ISlotItemInfor_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ISlotItemInfor_get_PluginId(This,pVal)	\
    (This)->lpVtbl -> get_PluginId(This,pVal)

#define ISlotItemInfor_put_PluginId(This,newVal)	\
    (This)->lpVtbl -> put_PluginId(This,newVal)

#define ISlotItemInfor_get_ItemId(This,pVal)	\
    (This)->lpVtbl -> get_ItemId(This,pVal)

#define ISlotItemInfor_put_ItemId(This,newVal)	\
    (This)->lpVtbl -> put_ItemId(This,newVal)

#define ISlotItemInfor_get_Style(This,pVal)	\
    (This)->lpVtbl -> get_Style(This,pVal)

#define ISlotItemInfor_put_Style(This,newVal)	\
    (This)->lpVtbl -> put_Style(This,newVal)

#define ISlotItemInfor_get_Name(This,pVal)	\
    (This)->lpVtbl -> get_Name(This,pVal)

#define ISlotItemInfor_put_Name(This,newVal)	\
    (This)->lpVtbl -> put_Name(This,newVal)

#define ISlotItemInfor_get_Title(This,pVal)	\
    (This)->lpVtbl -> get_Title(This,pVal)

#define ISlotItemInfor_put_Title(This,newVal)	\
    (This)->lpVtbl -> put_Title(This,newVal)

#define ISlotItemInfor_get_Tip(This,pVal)	\
    (This)->lpVtbl -> get_Tip(This,pVal)

#define ISlotItemInfor_put_Tip(This,newVal)	\
    (This)->lpVtbl -> put_Tip(This,newVal)

#define ISlotItemInfor_get_Width(This,pVal)	\
    (This)->lpVtbl -> get_Width(This,pVal)

#define ISlotItemInfor_put_Width(This,newVal)	\
    (This)->lpVtbl -> put_Width(This,newVal)

#define ISlotItemInfor_get_Height(This,pVal)	\
    (This)->lpVtbl -> get_Height(This,pVal)

#define ISlotItemInfor_put_Height(This,newVal)	\
    (This)->lpVtbl -> put_Height(This,newVal)

#define ISlotItemInfor_get_ImageFileName(This,pVal)	\
    (This)->lpVtbl -> get_ImageFileName(This,pVal)

#define ISlotItemInfor_put_ImageFileName(This,newVal)	\
    (This)->lpVtbl -> put_ImageFileName(This,newVal)

#define ISlotItemInfor_get_ImageItemCount(This,pVal)	\
    (This)->lpVtbl -> get_ImageItemCount(This,pVal)

#define ISlotItemInfor_put_ImageItemCount(This,newVal)	\
    (This)->lpVtbl -> put_ImageItemCount(This,newVal)

#define ISlotItemInfor_get_ModuleFileName(This,pVal)	\
    (This)->lpVtbl -> get_ModuleFileName(This,pVal)

#define ISlotItemInfor_put_ModuleFileName(This,newVal)	\
    (This)->lpVtbl -> put_ModuleFileName(This,newVal)

#define ISlotItemInfor_get_CLSID(This,pVal)	\
    (This)->lpVtbl -> get_CLSID(This,pVal)

#define ISlotItemInfor_put_CLSID(This,newVal)	\
    (This)->lpVtbl -> put_CLSID(This,newVal)

#define ISlotItemInfor_EmptySubMenuItem(This)	\
    (This)->lpVtbl -> EmptySubMenuItem(This)

#define ISlotItemInfor_AddSubMenuItem(This,Id,title,image,url)	\
    (This)->lpVtbl -> AddSubMenuItem(This,Id,title,image,url)

#define ISlotItemInfor_GetSubMenuItems(This,ppInforCol)	\
    (This)->lpVtbl -> GetSubMenuItems(This,ppInforCol)

#define ISlotItemInfor_get_Url(This,pVal)	\
    (This)->lpVtbl -> get_Url(This,pVal)

#define ISlotItemInfor_put_Url(This,newVal)	\
    (This)->lpVtbl -> put_Url(This,newVal)

#define ISlotItemInfor_get_ExecuteModule(This,pVal)	\
    (This)->lpVtbl -> get_ExecuteModule(This,pVal)

#define ISlotItemInfor_put_ExecuteModule(This,newVal)	\
    (This)->lpVtbl -> put_ExecuteModule(This,newVal)

#define ISlotItemInfor_get_MenuIcon(This,pVal)	\
    (This)->lpVtbl -> get_MenuIcon(This,pVal)

#define ISlotItemInfor_put_MenuIcon(This,newVal)	\
    (This)->lpVtbl -> put_MenuIcon(This,newVal)

#define ISlotItemInfor_GetUrlProperty(This,newVal,pVal)	\
    (This)->lpVtbl -> GetUrlProperty(This,newVal,pVal)

#define ISlotItemInfor_SetUrlProperty(This,newVal,val)	\
    (This)->lpVtbl -> SetUrlProperty(This,newVal,val)

#define ISlotItemInfor_EmptyNotifyMessage(This)	\
    (This)->lpVtbl -> EmptyNotifyMessage(This)

#define ISlotItemInfor_AddNotifyMessage(This,msg)	\
    (This)->lpVtbl -> AddNotifyMessage(This,msg)

#define ISlotItemInfor_GetNotifyMessages(This,ppInforCol)	\
    (This)->lpVtbl -> GetNotifyMessages(This,ppInforCol)

#define ISlotItemInfor_get_SlotId(This,pVal)	\
    (This)->lpVtbl -> get_SlotId(This,pVal)

#define ISlotItemInfor_put_SlotId(This,newVal)	\
    (This)->lpVtbl -> put_SlotId(This,newVal)

#define ISlotItemInfor_GetExecuteModuleProperty(This,newVal,pVal)	\
    (This)->lpVtbl -> GetExecuteModuleProperty(This,newVal,pVal)

#define ISlotItemInfor_SetExecuteModuleProperty(This,newVal,val)	\
    (This)->lpVtbl -> SetExecuteModuleProperty(This,newVal,val)

#define ISlotItemInfor_IsLoadBeforeLogin(This,pvbPreload)	\
    (This)->lpVtbl -> IsLoadBeforeLogin(This,pvbPreload)

#define ISlotItemInfor_get_FacadeCLSID(This,pVal)	\
    (This)->lpVtbl -> get_FacadeCLSID(This,pVal)

#define ISlotItemInfor_put_FacadeCLSID(This,newVal)	\
    (This)->lpVtbl -> put_FacadeCLSID(This,newVal)

#define ISlotItemInfor_get_ItemType(This,pVal)	\
    (This)->lpVtbl -> get_ItemType(This,pVal)

#define ISlotItemInfor_put_ItemType(This,newVal)	\
    (This)->lpVtbl -> put_ItemType(This,newVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISlotItemInfor_get_PluginId_Proxy( 
    ISlotItemInfor * This,
    /* [retval][out] */ ULONG *pVal);


void __RPC_STUB ISlotItemInfor_get_PluginId_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ISlotItemInfor_put_PluginId_Proxy( 
    ISlotItemInfor * This,
    /* [in] */ ULONG newVal);


void __RPC_STUB ISlotItemInfor_put_PluginId_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISlotItemInfor_get_ItemId_Proxy( 
    ISlotItemInfor * This,
    /* [retval][out] */ ULONG *pVal);


void __RPC_STUB ISlotItemInfor_get_ItemId_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ISlotItemInfor_put_ItemId_Proxy( 
    ISlotItemInfor * This,
    /* [in] */ ULONG newVal);


void __RPC_STUB ISlotItemInfor_put_ItemId_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISlotItemInfor_get_Style_Proxy( 
    ISlotItemInfor * This,
    /* [retval][out] */ ULONG *pVal);


void __RPC_STUB ISlotItemInfor_get_Style_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ISlotItemInfor_put_Style_Proxy( 
    ISlotItemInfor * This,
    /* [in] */ ULONG newVal);


void __RPC_STUB ISlotItemInfor_put_Style_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISlotItemInfor_get_Name_Proxy( 
    ISlotItemInfor * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB ISlotItemInfor_get_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ISlotItemInfor_put_Name_Proxy( 
    ISlotItemInfor * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB ISlotItemInfor_put_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISlotItemInfor_get_Title_Proxy( 
    ISlotItemInfor * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB ISlotItemInfor_get_Title_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ISlotItemInfor_put_Title_Proxy( 
    ISlotItemInfor * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB ISlotItemInfor_put_Title_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISlotItemInfor_get_Tip_Proxy( 
    ISlotItemInfor * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB ISlotItemInfor_get_Tip_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ISlotItemInfor_put_Tip_Proxy( 
    ISlotItemInfor * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB ISlotItemInfor_put_Tip_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISlotItemInfor_get_Width_Proxy( 
    ISlotItemInfor * This,
    /* [retval][out] */ LONG *pVal);


void __RPC_STUB ISlotItemInfor_get_Width_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ISlotItemInfor_put_Width_Proxy( 
    ISlotItemInfor * This,
    /* [in] */ LONG newVal);


void __RPC_STUB ISlotItemInfor_put_Width_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISlotItemInfor_get_Height_Proxy( 
    ISlotItemInfor * This,
    /* [retval][out] */ LONG *pVal);


void __RPC_STUB ISlotItemInfor_get_Height_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ISlotItemInfor_put_Height_Proxy( 
    ISlotItemInfor * This,
    /* [in] */ LONG newVal);


void __RPC_STUB ISlotItemInfor_put_Height_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISlotItemInfor_get_ImageFileName_Proxy( 
    ISlotItemInfor * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB ISlotItemInfor_get_ImageFileName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ISlotItemInfor_put_ImageFileName_Proxy( 
    ISlotItemInfor * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB ISlotItemInfor_put_ImageFileName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISlotItemInfor_get_ImageItemCount_Proxy( 
    ISlotItemInfor * This,
    /* [retval][out] */ LONG *pVal);


void __RPC_STUB ISlotItemInfor_get_ImageItemCount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ISlotItemInfor_put_ImageItemCount_Proxy( 
    ISlotItemInfor * This,
    /* [in] */ LONG newVal);


void __RPC_STUB ISlotItemInfor_put_ImageItemCount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISlotItemInfor_get_ModuleFileName_Proxy( 
    ISlotItemInfor * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB ISlotItemInfor_get_ModuleFileName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ISlotItemInfor_put_ModuleFileName_Proxy( 
    ISlotItemInfor * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB ISlotItemInfor_put_ModuleFileName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISlotItemInfor_get_CLSID_Proxy( 
    ISlotItemInfor * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB ISlotItemInfor_get_CLSID_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ISlotItemInfor_put_CLSID_Proxy( 
    ISlotItemInfor * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB ISlotItemInfor_put_CLSID_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISlotItemInfor_EmptySubMenuItem_Proxy( 
    ISlotItemInfor * This);


void __RPC_STUB ISlotItemInfor_EmptySubMenuItem_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISlotItemInfor_AddSubMenuItem_Proxy( 
    ISlotItemInfor * This,
    /* [in] */ ULONG Id,
    /* [in] */ BSTR title,
    /* [in] */ BSTR image,
    /* [in] */ BSTR url);


void __RPC_STUB ISlotItemInfor_AddSubMenuItem_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISlotItemInfor_GetSubMenuItems_Proxy( 
    ISlotItemInfor * This,
    /* [retval][out] */ ISDKObjectCollection **ppInforCol);


void __RPC_STUB ISlotItemInfor_GetSubMenuItems_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISlotItemInfor_get_Url_Proxy( 
    ISlotItemInfor * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB ISlotItemInfor_get_Url_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ISlotItemInfor_put_Url_Proxy( 
    ISlotItemInfor * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB ISlotItemInfor_put_Url_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISlotItemInfor_get_ExecuteModule_Proxy( 
    ISlotItemInfor * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB ISlotItemInfor_get_ExecuteModule_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ISlotItemInfor_put_ExecuteModule_Proxy( 
    ISlotItemInfor * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB ISlotItemInfor_put_ExecuteModule_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISlotItemInfor_get_MenuIcon_Proxy( 
    ISlotItemInfor * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB ISlotItemInfor_get_MenuIcon_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ISlotItemInfor_put_MenuIcon_Proxy( 
    ISlotItemInfor * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB ISlotItemInfor_put_MenuIcon_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISlotItemInfor_GetUrlProperty_Proxy( 
    ISlotItemInfor * This,
    /* [in] */ BSTR newVal,
    /* [retval][out] */ VARIANT *pVal);


void __RPC_STUB ISlotItemInfor_GetUrlProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISlotItemInfor_SetUrlProperty_Proxy( 
    ISlotItemInfor * This,
    /* [in] */ BSTR newVal,
    /* [in] */ VARIANT val);


void __RPC_STUB ISlotItemInfor_SetUrlProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISlotItemInfor_EmptyNotifyMessage_Proxy( 
    ISlotItemInfor * This);


void __RPC_STUB ISlotItemInfor_EmptyNotifyMessage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISlotItemInfor_AddNotifyMessage_Proxy( 
    ISlotItemInfor * This,
    /* [in] */ enum SDKItemNotifyID msg);


void __RPC_STUB ISlotItemInfor_AddNotifyMessage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISlotItemInfor_GetNotifyMessages_Proxy( 
    ISlotItemInfor * This,
    /* [retval][out] */ ISDKObjectCollection **ppInforCol);


void __RPC_STUB ISlotItemInfor_GetNotifyMessages_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISlotItemInfor_get_SlotId_Proxy( 
    ISlotItemInfor * This,
    /* [retval][out] */ ULONG *pVal);


void __RPC_STUB ISlotItemInfor_get_SlotId_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ISlotItemInfor_put_SlotId_Proxy( 
    ISlotItemInfor * This,
    /* [in] */ ULONG newVal);


void __RPC_STUB ISlotItemInfor_put_SlotId_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISlotItemInfor_GetExecuteModuleProperty_Proxy( 
    ISlotItemInfor * This,
    /* [in] */ BSTR newVal,
    /* [retval][out] */ VARIANT *pVal);


void __RPC_STUB ISlotItemInfor_GetExecuteModuleProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISlotItemInfor_SetExecuteModuleProperty_Proxy( 
    ISlotItemInfor * This,
    /* [in] */ BSTR newVal,
    /* [in] */ VARIANT val);


void __RPC_STUB ISlotItemInfor_SetExecuteModuleProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISlotItemInfor_IsLoadBeforeLogin_Proxy( 
    ISlotItemInfor * This,
    /* [retval][out] */ VARIANT_BOOL *pvbPreload);


void __RPC_STUB ISlotItemInfor_IsLoadBeforeLogin_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISlotItemInfor_get_FacadeCLSID_Proxy( 
    ISlotItemInfor * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB ISlotItemInfor_get_FacadeCLSID_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ISlotItemInfor_put_FacadeCLSID_Proxy( 
    ISlotItemInfor * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB ISlotItemInfor_put_FacadeCLSID_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISlotItemInfor_get_ItemType_Proxy( 
    ISlotItemInfor * This,
    /* [retval][out] */ enum SDKItemType *pVal);


void __RPC_STUB ISlotItemInfor_get_ItemType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ISlotItemInfor_put_ItemType_Proxy( 
    ISlotItemInfor * This,
    /* [in] */ enum SDKItemType newVal);


void __RPC_STUB ISlotItemInfor_put_ItemType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISlotItemInfor_INTERFACE_DEFINED__ */


#ifndef __ISDKMainMenuSlot_INTERFACE_DEFINED__
#define __ISDKMainMenuSlot_INTERFACE_DEFINED__

/* interface ISDKMainMenuSlot */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ISDKMainMenuSlot;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("20C62234-7A48-4F4A-B22D-4507098035C7")
    ISDKMainMenuSlot : public ISDKSlot
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetApplication( 
            /* [retval][out] */ ISDKApplication **ppApplication) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDKMainMenuSlotVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDKMainMenuSlot * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDKMainMenuSlot * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDKMainMenuSlot * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDKMainMenuSlot * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDKMainMenuSlot * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDKMainMenuSlot * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDKMainMenuSlot * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ShowItem )( 
            ISDKMainMenuSlot * This,
            /* [in] */ VARIANT_BOOL bShow,
            /* [in] */ LONG lItemCookie);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EnableItem )( 
            ISDKMainMenuSlot * This,
            /* [in] */ VARIANT_BOOL bEnable,
            /* [in] */ LONG lItemCookie);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetApplication )( 
            ISDKMainMenuSlot * This,
            /* [retval][out] */ ISDKApplication **ppApplication);
        
        END_INTERFACE
    } ISDKMainMenuSlotVtbl;

    interface ISDKMainMenuSlot
    {
        CONST_VTBL struct ISDKMainMenuSlotVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDKMainMenuSlot_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISDKMainMenuSlot_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISDKMainMenuSlot_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISDKMainMenuSlot_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ISDKMainMenuSlot_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ISDKMainMenuSlot_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ISDKMainMenuSlot_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ISDKMainMenuSlot_ShowItem(This,bShow,lItemCookie)	\
    (This)->lpVtbl -> ShowItem(This,bShow,lItemCookie)

#define ISDKMainMenuSlot_EnableItem(This,bEnable,lItemCookie)	\
    (This)->lpVtbl -> EnableItem(This,bEnable,lItemCookie)


#define ISDKMainMenuSlot_GetApplication(This,ppApplication)	\
    (This)->lpVtbl -> GetApplication(This,ppApplication)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISDKMainMenuSlot_GetApplication_Proxy( 
    ISDKMainMenuSlot * This,
    /* [retval][out] */ ISDKApplication **ppApplication);


void __RPC_STUB ISDKMainMenuSlot_GetApplication_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISDKMainMenuSlot_INTERFACE_DEFINED__ */


#ifndef __ISDKMainMenuSlot2_INTERFACE_DEFINED__
#define __ISDKMainMenuSlot2_INTERFACE_DEFINED__

/* interface ISDKMainMenuSlot2 */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ISDKMainMenuSlot2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ECDB44F2-838E-4615-9C5C-B289FD2E07B9")
    ISDKMainMenuSlot2 : public ISDKSlot
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetApplication( 
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ IDispatch **ppApplication) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDKMainMenuSlot2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDKMainMenuSlot2 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDKMainMenuSlot2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDKMainMenuSlot2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDKMainMenuSlot2 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDKMainMenuSlot2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDKMainMenuSlot2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDKMainMenuSlot2 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ShowItem )( 
            ISDKMainMenuSlot2 * This,
            /* [in] */ VARIANT_BOOL bShow,
            /* [in] */ LONG lItemCookie);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EnableItem )( 
            ISDKMainMenuSlot2 * This,
            /* [in] */ VARIANT_BOOL bEnable,
            /* [in] */ LONG lItemCookie);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetApplication )( 
            ISDKMainMenuSlot2 * This,
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ IDispatch **ppApplication);
        
        END_INTERFACE
    } ISDKMainMenuSlot2Vtbl;

    interface ISDKMainMenuSlot2
    {
        CONST_VTBL struct ISDKMainMenuSlot2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDKMainMenuSlot2_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISDKMainMenuSlot2_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISDKMainMenuSlot2_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISDKMainMenuSlot2_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ISDKMainMenuSlot2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ISDKMainMenuSlot2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ISDKMainMenuSlot2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ISDKMainMenuSlot2_ShowItem(This,bShow,lItemCookie)	\
    (This)->lpVtbl -> ShowItem(This,bShow,lItemCookie)

#define ISDKMainMenuSlot2_EnableItem(This,bEnable,lItemCookie)	\
    (This)->lpVtbl -> EnableItem(This,bEnable,lItemCookie)


#define ISDKMainMenuSlot2_GetApplication(This,lPluginCookie,ppApplication)	\
    (This)->lpVtbl -> GetApplication(This,lPluginCookie,ppApplication)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISDKMainMenuSlot2_GetApplication_Proxy( 
    ISDKMainMenuSlot2 * This,
    /* [in] */ LONG lPluginCookie,
    /* [retval][out] */ IDispatch **ppApplication);


void __RPC_STUB ISDKMainMenuSlot2_GetApplication_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISDKMainMenuSlot2_INTERFACE_DEFINED__ */


#ifndef __IPluginMgr_INTERFACE_DEFINED__
#define __IPluginMgr_INTERFACE_DEFINED__

/* interface IPluginMgr */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IPluginMgr;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E51EB2AA-3963-4F34-87F8-59814B36AD36")
    IPluginMgr : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetInstalledPluginIds( 
            /* [retval][out] */ BSTR *PluginIds) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetPluginName( 
            /* [in] */ BSTR PluginId,
            /* [retval][out] */ BSTR *PluginName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetPluginDescription( 
            /* [in] */ BSTR PluginId,
            /* [retval][out] */ BSTR *PluginDescription) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetPluginCategoryId( 
            /* [in] */ BSTR PluginId,
            /* [retval][out] */ BSTR *PluginCategoryId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetPluginPictureFile( 
            /* [in] */ BSTR PluginId,
            /* [retval][out] */ BSTR *PictureFile) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetPluginTitle( 
            /* [in] */ BSTR PluginId,
            /* [retval][out] */ BSTR *PluginTitle) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetPluginHelpUrl( 
            /* [in] */ BSTR PluginId,
            /* [retval][out] */ BSTR *PluginHelpUrl) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetPluginClassId( 
            /* [in] */ BSTR PluginId,
            /* [retval][out] */ CLSID *PluginClassId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetPluginPath( 
            /* [in] */ BSTR PluginId,
            /* [retval][out] */ BSTR *PluginPath) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetPluginHasOptions( 
            /* [in] */ BSTR PluginId,
            /* [retval][out] */ VARIANT_BOOL *PluginHasOptions) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IsPluginRunning( 
            /* [in] */ BSTR PluginId,
            /* [retval][out] */ VARIANT_BOOL *Running) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE StartupPlugin( 
            /* [in] */ BSTR PluginId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ShutdownPlugin( 
            /* [in] */ BSTR PluginId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ShowPluginOptions( 
            /* [in] */ BSTR PluginId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DeletePlugin( 
            /* [in] */ BSTR PluginId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddNewPlugin( 
            /* [in] */ BSTR PluginName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE StartupMultiPlugins( 
            /* [in] */ BSTR ConfigFile,
            /* [in] */ BSTR userpluginorderpath) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetPluginVersion( 
            /* [in] */ BSTR PluginId,
            /* [retval][out] */ BSTR *plugin_version) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Init( 
            /* [in] */ BSTR pluginDir,
            /* [in] */ BSTR globalpluginorderpath,
            /* [in] */ BSTR userpluginorderpath) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DisableAllPlugins( 
            /* [in] */ VARIANT_BOOL vbSave) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Refresh( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE PurchasePlugin( 
            /* [in] */ BSTR PluginId,
            /* [in] */ BSTR reserved) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE PurchasePluginAgain( 
            /* [in] */ BSTR PluginId,
            /* [in] */ BSTR reserved) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetPluginProperty( 
            /* [in] */ BSTR pluginId,
            /* [in] */ BSTR propertyName,
            /* [out] */ BSTR *value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetPluginOrderInSlot( 
            /* [in] */ BSTR PluginSlotName,
            /* [in] */ BSTR PluginId,
            /* [in] */ BSTR PluginItemId,
            /* [retval][out] */ INT *PluginOrder) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetPluginOrderInSlotBySecurityID( 
            /* [in] */ BSTR PluginSlotName,
            /* [in] */ BSTR PluginSecurityId,
            /* [in] */ BSTR PluginItemId,
            /* [retval][out] */ INT *PluginOrder) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetPluginOrdersInSlot( 
            /* [in] */ BSTR PluginSlotName,
            /* [in] */ BSTR PluginIdsItems,
            /* [retval][out] */ BSTR *PluginIdsItemsOrders) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SaveOrder( 
            /* [in] */ BSTR sPluginId,
            /* [in] */ BSTR itemIds,
            /* [in] */ VARIANT_BOOL bAddOrErase) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DisablePlugin( 
            /* [in] */ BSTR sPluginId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EnablePlugin( 
            /* [in] */ BSTR sPluginId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE isDisablePlugin( 
            /* [in] */ BSTR sPluginId,
            /* [retval][out] */ VARIANT_BOOL *disable) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DeletePluginOrder( 
            /* [in] */ BSTR sPluginId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SaveOrder2( 
            /* [in] */ BSTR sPluginId,
            /* [in] */ BSTR sSlotName,
            /* [in] */ ULONG itemId,
            /* [in] */ VARIANT_BOOL bAddOrErase) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE StartupPluginManual( 
            /* [in] */ BSTR PluginId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Init2( 
            /* [in] */ BSTR pluginDir,
            /* [in] */ BSTR globalpluginorderpath,
            /* [in] */ BSTR userpluginorderpath) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE PostInit2( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IPluginMgrVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPluginMgr * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPluginMgr * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPluginMgr * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IPluginMgr * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IPluginMgr * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IPluginMgr * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IPluginMgr * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInstalledPluginIds )( 
            IPluginMgr * This,
            /* [retval][out] */ BSTR *PluginIds);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetPluginName )( 
            IPluginMgr * This,
            /* [in] */ BSTR PluginId,
            /* [retval][out] */ BSTR *PluginName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetPluginDescription )( 
            IPluginMgr * This,
            /* [in] */ BSTR PluginId,
            /* [retval][out] */ BSTR *PluginDescription);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetPluginCategoryId )( 
            IPluginMgr * This,
            /* [in] */ BSTR PluginId,
            /* [retval][out] */ BSTR *PluginCategoryId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetPluginPictureFile )( 
            IPluginMgr * This,
            /* [in] */ BSTR PluginId,
            /* [retval][out] */ BSTR *PictureFile);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetPluginTitle )( 
            IPluginMgr * This,
            /* [in] */ BSTR PluginId,
            /* [retval][out] */ BSTR *PluginTitle);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetPluginHelpUrl )( 
            IPluginMgr * This,
            /* [in] */ BSTR PluginId,
            /* [retval][out] */ BSTR *PluginHelpUrl);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetPluginClassId )( 
            IPluginMgr * This,
            /* [in] */ BSTR PluginId,
            /* [retval][out] */ CLSID *PluginClassId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetPluginPath )( 
            IPluginMgr * This,
            /* [in] */ BSTR PluginId,
            /* [retval][out] */ BSTR *PluginPath);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetPluginHasOptions )( 
            IPluginMgr * This,
            /* [in] */ BSTR PluginId,
            /* [retval][out] */ VARIANT_BOOL *PluginHasOptions);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *IsPluginRunning )( 
            IPluginMgr * This,
            /* [in] */ BSTR PluginId,
            /* [retval][out] */ VARIANT_BOOL *Running);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *StartupPlugin )( 
            IPluginMgr * This,
            /* [in] */ BSTR PluginId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ShutdownPlugin )( 
            IPluginMgr * This,
            /* [in] */ BSTR PluginId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ShowPluginOptions )( 
            IPluginMgr * This,
            /* [in] */ BSTR PluginId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DeletePlugin )( 
            IPluginMgr * This,
            /* [in] */ BSTR PluginId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddNewPlugin )( 
            IPluginMgr * This,
            /* [in] */ BSTR PluginName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *StartupMultiPlugins )( 
            IPluginMgr * This,
            /* [in] */ BSTR ConfigFile,
            /* [in] */ BSTR userpluginorderpath);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetPluginVersion )( 
            IPluginMgr * This,
            /* [in] */ BSTR PluginId,
            /* [retval][out] */ BSTR *plugin_version);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Init )( 
            IPluginMgr * This,
            /* [in] */ BSTR pluginDir,
            /* [in] */ BSTR globalpluginorderpath,
            /* [in] */ BSTR userpluginorderpath);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DisableAllPlugins )( 
            IPluginMgr * This,
            /* [in] */ VARIANT_BOOL vbSave);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Refresh )( 
            IPluginMgr * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *PurchasePlugin )( 
            IPluginMgr * This,
            /* [in] */ BSTR PluginId,
            /* [in] */ BSTR reserved);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *PurchasePluginAgain )( 
            IPluginMgr * This,
            /* [in] */ BSTR PluginId,
            /* [in] */ BSTR reserved);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetPluginProperty )( 
            IPluginMgr * This,
            /* [in] */ BSTR pluginId,
            /* [in] */ BSTR propertyName,
            /* [out] */ BSTR *value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetPluginOrderInSlot )( 
            IPluginMgr * This,
            /* [in] */ BSTR PluginSlotName,
            /* [in] */ BSTR PluginId,
            /* [in] */ BSTR PluginItemId,
            /* [retval][out] */ INT *PluginOrder);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetPluginOrderInSlotBySecurityID )( 
            IPluginMgr * This,
            /* [in] */ BSTR PluginSlotName,
            /* [in] */ BSTR PluginSecurityId,
            /* [in] */ BSTR PluginItemId,
            /* [retval][out] */ INT *PluginOrder);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetPluginOrdersInSlot )( 
            IPluginMgr * This,
            /* [in] */ BSTR PluginSlotName,
            /* [in] */ BSTR PluginIdsItems,
            /* [retval][out] */ BSTR *PluginIdsItemsOrders);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SaveOrder )( 
            IPluginMgr * This,
            /* [in] */ BSTR sPluginId,
            /* [in] */ BSTR itemIds,
            /* [in] */ VARIANT_BOOL bAddOrErase);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DisablePlugin )( 
            IPluginMgr * This,
            /* [in] */ BSTR sPluginId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EnablePlugin )( 
            IPluginMgr * This,
            /* [in] */ BSTR sPluginId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *isDisablePlugin )( 
            IPluginMgr * This,
            /* [in] */ BSTR sPluginId,
            /* [retval][out] */ VARIANT_BOOL *disable);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DeletePluginOrder )( 
            IPluginMgr * This,
            /* [in] */ BSTR sPluginId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SaveOrder2 )( 
            IPluginMgr * This,
            /* [in] */ BSTR sPluginId,
            /* [in] */ BSTR sSlotName,
            /* [in] */ ULONG itemId,
            /* [in] */ VARIANT_BOOL bAddOrErase);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *StartupPluginManual )( 
            IPluginMgr * This,
            /* [in] */ BSTR PluginId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Init2 )( 
            IPluginMgr * This,
            /* [in] */ BSTR pluginDir,
            /* [in] */ BSTR globalpluginorderpath,
            /* [in] */ BSTR userpluginorderpath);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *PostInit2 )( 
            IPluginMgr * This);
        
        END_INTERFACE
    } IPluginMgrVtbl;

    interface IPluginMgr
    {
        CONST_VTBL struct IPluginMgrVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPluginMgr_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IPluginMgr_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IPluginMgr_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IPluginMgr_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IPluginMgr_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IPluginMgr_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IPluginMgr_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IPluginMgr_GetInstalledPluginIds(This,PluginIds)	\
    (This)->lpVtbl -> GetInstalledPluginIds(This,PluginIds)

#define IPluginMgr_GetPluginName(This,PluginId,PluginName)	\
    (This)->lpVtbl -> GetPluginName(This,PluginId,PluginName)

#define IPluginMgr_GetPluginDescription(This,PluginId,PluginDescription)	\
    (This)->lpVtbl -> GetPluginDescription(This,PluginId,PluginDescription)

#define IPluginMgr_GetPluginCategoryId(This,PluginId,PluginCategoryId)	\
    (This)->lpVtbl -> GetPluginCategoryId(This,PluginId,PluginCategoryId)

#define IPluginMgr_GetPluginPictureFile(This,PluginId,PictureFile)	\
    (This)->lpVtbl -> GetPluginPictureFile(This,PluginId,PictureFile)

#define IPluginMgr_GetPluginTitle(This,PluginId,PluginTitle)	\
    (This)->lpVtbl -> GetPluginTitle(This,PluginId,PluginTitle)

#define IPluginMgr_GetPluginHelpUrl(This,PluginId,PluginHelpUrl)	\
    (This)->lpVtbl -> GetPluginHelpUrl(This,PluginId,PluginHelpUrl)

#define IPluginMgr_GetPluginClassId(This,PluginId,PluginClassId)	\
    (This)->lpVtbl -> GetPluginClassId(This,PluginId,PluginClassId)

#define IPluginMgr_GetPluginPath(This,PluginId,PluginPath)	\
    (This)->lpVtbl -> GetPluginPath(This,PluginId,PluginPath)

#define IPluginMgr_GetPluginHasOptions(This,PluginId,PluginHasOptions)	\
    (This)->lpVtbl -> GetPluginHasOptions(This,PluginId,PluginHasOptions)

#define IPluginMgr_IsPluginRunning(This,PluginId,Running)	\
    (This)->lpVtbl -> IsPluginRunning(This,PluginId,Running)

#define IPluginMgr_StartupPlugin(This,PluginId)	\
    (This)->lpVtbl -> StartupPlugin(This,PluginId)

#define IPluginMgr_ShutdownPlugin(This,PluginId)	\
    (This)->lpVtbl -> ShutdownPlugin(This,PluginId)

#define IPluginMgr_ShowPluginOptions(This,PluginId)	\
    (This)->lpVtbl -> ShowPluginOptions(This,PluginId)

#define IPluginMgr_DeletePlugin(This,PluginId)	\
    (This)->lpVtbl -> DeletePlugin(This,PluginId)

#define IPluginMgr_AddNewPlugin(This,PluginName)	\
    (This)->lpVtbl -> AddNewPlugin(This,PluginName)

#define IPluginMgr_StartupMultiPlugins(This,ConfigFile,userpluginorderpath)	\
    (This)->lpVtbl -> StartupMultiPlugins(This,ConfigFile,userpluginorderpath)

#define IPluginMgr_GetPluginVersion(This,PluginId,plugin_version)	\
    (This)->lpVtbl -> GetPluginVersion(This,PluginId,plugin_version)

#define IPluginMgr_Init(This,pluginDir,globalpluginorderpath,userpluginorderpath)	\
    (This)->lpVtbl -> Init(This,pluginDir,globalpluginorderpath,userpluginorderpath)

#define IPluginMgr_DisableAllPlugins(This,vbSave)	\
    (This)->lpVtbl -> DisableAllPlugins(This,vbSave)

#define IPluginMgr_Refresh(This)	\
    (This)->lpVtbl -> Refresh(This)

#define IPluginMgr_PurchasePlugin(This,PluginId,reserved)	\
    (This)->lpVtbl -> PurchasePlugin(This,PluginId,reserved)

#define IPluginMgr_PurchasePluginAgain(This,PluginId,reserved)	\
    (This)->lpVtbl -> PurchasePluginAgain(This,PluginId,reserved)

#define IPluginMgr_GetPluginProperty(This,pluginId,propertyName,value)	\
    (This)->lpVtbl -> GetPluginProperty(This,pluginId,propertyName,value)

#define IPluginMgr_GetPluginOrderInSlot(This,PluginSlotName,PluginId,PluginItemId,PluginOrder)	\
    (This)->lpVtbl -> GetPluginOrderInSlot(This,PluginSlotName,PluginId,PluginItemId,PluginOrder)

#define IPluginMgr_GetPluginOrderInSlotBySecurityID(This,PluginSlotName,PluginSecurityId,PluginItemId,PluginOrder)	\
    (This)->lpVtbl -> GetPluginOrderInSlotBySecurityID(This,PluginSlotName,PluginSecurityId,PluginItemId,PluginOrder)

#define IPluginMgr_GetPluginOrdersInSlot(This,PluginSlotName,PluginIdsItems,PluginIdsItemsOrders)	\
    (This)->lpVtbl -> GetPluginOrdersInSlot(This,PluginSlotName,PluginIdsItems,PluginIdsItemsOrders)

#define IPluginMgr_SaveOrder(This,sPluginId,itemIds,bAddOrErase)	\
    (This)->lpVtbl -> SaveOrder(This,sPluginId,itemIds,bAddOrErase)

#define IPluginMgr_DisablePlugin(This,sPluginId)	\
    (This)->lpVtbl -> DisablePlugin(This,sPluginId)

#define IPluginMgr_EnablePlugin(This,sPluginId)	\
    (This)->lpVtbl -> EnablePlugin(This,sPluginId)

#define IPluginMgr_isDisablePlugin(This,sPluginId,disable)	\
    (This)->lpVtbl -> isDisablePlugin(This,sPluginId,disable)

#define IPluginMgr_DeletePluginOrder(This,sPluginId)	\
    (This)->lpVtbl -> DeletePluginOrder(This,sPluginId)

#define IPluginMgr_SaveOrder2(This,sPluginId,sSlotName,itemId,bAddOrErase)	\
    (This)->lpVtbl -> SaveOrder2(This,sPluginId,sSlotName,itemId,bAddOrErase)

#define IPluginMgr_StartupPluginManual(This,PluginId)	\
    (This)->lpVtbl -> StartupPluginManual(This,PluginId)

#define IPluginMgr_Init2(This,pluginDir,globalpluginorderpath,userpluginorderpath)	\
    (This)->lpVtbl -> Init2(This,pluginDir,globalpluginorderpath,userpluginorderpath)

#define IPluginMgr_PostInit2(This)	\
    (This)->lpVtbl -> PostInit2(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IPluginMgr_GetInstalledPluginIds_Proxy( 
    IPluginMgr * This,
    /* [retval][out] */ BSTR *PluginIds);


void __RPC_STUB IPluginMgr_GetInstalledPluginIds_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IPluginMgr_GetPluginName_Proxy( 
    IPluginMgr * This,
    /* [in] */ BSTR PluginId,
    /* [retval][out] */ BSTR *PluginName);


void __RPC_STUB IPluginMgr_GetPluginName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IPluginMgr_GetPluginDescription_Proxy( 
    IPluginMgr * This,
    /* [in] */ BSTR PluginId,
    /* [retval][out] */ BSTR *PluginDescription);


void __RPC_STUB IPluginMgr_GetPluginDescription_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IPluginMgr_GetPluginCategoryId_Proxy( 
    IPluginMgr * This,
    /* [in] */ BSTR PluginId,
    /* [retval][out] */ BSTR *PluginCategoryId);


void __RPC_STUB IPluginMgr_GetPluginCategoryId_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IPluginMgr_GetPluginPictureFile_Proxy( 
    IPluginMgr * This,
    /* [in] */ BSTR PluginId,
    /* [retval][out] */ BSTR *PictureFile);


void __RPC_STUB IPluginMgr_GetPluginPictureFile_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IPluginMgr_GetPluginTitle_Proxy( 
    IPluginMgr * This,
    /* [in] */ BSTR PluginId,
    /* [retval][out] */ BSTR *PluginTitle);


void __RPC_STUB IPluginMgr_GetPluginTitle_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IPluginMgr_GetPluginHelpUrl_Proxy( 
    IPluginMgr * This,
    /* [in] */ BSTR PluginId,
    /* [retval][out] */ BSTR *PluginHelpUrl);


void __RPC_STUB IPluginMgr_GetPluginHelpUrl_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IPluginMgr_GetPluginClassId_Proxy( 
    IPluginMgr * This,
    /* [in] */ BSTR PluginId,
    /* [retval][out] */ CLSID *PluginClassId);


void __RPC_STUB IPluginMgr_GetPluginClassId_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IPluginMgr_GetPluginPath_Proxy( 
    IPluginMgr * This,
    /* [in] */ BSTR PluginId,
    /* [retval][out] */ BSTR *PluginPath);


void __RPC_STUB IPluginMgr_GetPluginPath_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IPluginMgr_GetPluginHasOptions_Proxy( 
    IPluginMgr * This,
    /* [in] */ BSTR PluginId,
    /* [retval][out] */ VARIANT_BOOL *PluginHasOptions);


void __RPC_STUB IPluginMgr_GetPluginHasOptions_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IPluginMgr_IsPluginRunning_Proxy( 
    IPluginMgr * This,
    /* [in] */ BSTR PluginId,
    /* [retval][out] */ VARIANT_BOOL *Running);


void __RPC_STUB IPluginMgr_IsPluginRunning_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IPluginMgr_StartupPlugin_Proxy( 
    IPluginMgr * This,
    /* [in] */ BSTR PluginId);


void __RPC_STUB IPluginMgr_StartupPlugin_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IPluginMgr_ShutdownPlugin_Proxy( 
    IPluginMgr * This,
    /* [in] */ BSTR PluginId);


void __RPC_STUB IPluginMgr_ShutdownPlugin_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IPluginMgr_ShowPluginOptions_Proxy( 
    IPluginMgr * This,
    /* [in] */ BSTR PluginId);


void __RPC_STUB IPluginMgr_ShowPluginOptions_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IPluginMgr_DeletePlugin_Proxy( 
    IPluginMgr * This,
    /* [in] */ BSTR PluginId);


void __RPC_STUB IPluginMgr_DeletePlugin_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IPluginMgr_AddNewPlugin_Proxy( 
    IPluginMgr * This,
    /* [in] */ BSTR PluginName);


void __RPC_STUB IPluginMgr_AddNewPlugin_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IPluginMgr_StartupMultiPlugins_Proxy( 
    IPluginMgr * This,
    /* [in] */ BSTR ConfigFile,
    /* [in] */ BSTR userpluginorderpath);


void __RPC_STUB IPluginMgr_StartupMultiPlugins_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IPluginMgr_GetPluginVersion_Proxy( 
    IPluginMgr * This,
    /* [in] */ BSTR PluginId,
    /* [retval][out] */ BSTR *plugin_version);


void __RPC_STUB IPluginMgr_GetPluginVersion_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IPluginMgr_Init_Proxy( 
    IPluginMgr * This,
    /* [in] */ BSTR pluginDir,
    /* [in] */ BSTR globalpluginorderpath,
    /* [in] */ BSTR userpluginorderpath);


void __RPC_STUB IPluginMgr_Init_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IPluginMgr_DisableAllPlugins_Proxy( 
    IPluginMgr * This,
    /* [in] */ VARIANT_BOOL vbSave);


void __RPC_STUB IPluginMgr_DisableAllPlugins_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IPluginMgr_Refresh_Proxy( 
    IPluginMgr * This);


void __RPC_STUB IPluginMgr_Refresh_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IPluginMgr_PurchasePlugin_Proxy( 
    IPluginMgr * This,
    /* [in] */ BSTR PluginId,
    /* [in] */ BSTR reserved);


void __RPC_STUB IPluginMgr_PurchasePlugin_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IPluginMgr_PurchasePluginAgain_Proxy( 
    IPluginMgr * This,
    /* [in] */ BSTR PluginId,
    /* [in] */ BSTR reserved);


void __RPC_STUB IPluginMgr_PurchasePluginAgain_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IPluginMgr_GetPluginProperty_Proxy( 
    IPluginMgr * This,
    /* [in] */ BSTR pluginId,
    /* [in] */ BSTR propertyName,
    /* [out] */ BSTR *value);


void __RPC_STUB IPluginMgr_GetPluginProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IPluginMgr_GetPluginOrderInSlot_Proxy( 
    IPluginMgr * This,
    /* [in] */ BSTR PluginSlotName,
    /* [in] */ BSTR PluginId,
    /* [in] */ BSTR PluginItemId,
    /* [retval][out] */ INT *PluginOrder);


void __RPC_STUB IPluginMgr_GetPluginOrderInSlot_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IPluginMgr_GetPluginOrderInSlotBySecurityID_Proxy( 
    IPluginMgr * This,
    /* [in] */ BSTR PluginSlotName,
    /* [in] */ BSTR PluginSecurityId,
    /* [in] */ BSTR PluginItemId,
    /* [retval][out] */ INT *PluginOrder);


void __RPC_STUB IPluginMgr_GetPluginOrderInSlotBySecurityID_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IPluginMgr_GetPluginOrdersInSlot_Proxy( 
    IPluginMgr * This,
    /* [in] */ BSTR PluginSlotName,
    /* [in] */ BSTR PluginIdsItems,
    /* [retval][out] */ BSTR *PluginIdsItemsOrders);


void __RPC_STUB IPluginMgr_GetPluginOrdersInSlot_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IPluginMgr_SaveOrder_Proxy( 
    IPluginMgr * This,
    /* [in] */ BSTR sPluginId,
    /* [in] */ BSTR itemIds,
    /* [in] */ VARIANT_BOOL bAddOrErase);


void __RPC_STUB IPluginMgr_SaveOrder_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IPluginMgr_DisablePlugin_Proxy( 
    IPluginMgr * This,
    /* [in] */ BSTR sPluginId);


void __RPC_STUB IPluginMgr_DisablePlugin_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IPluginMgr_EnablePlugin_Proxy( 
    IPluginMgr * This,
    /* [in] */ BSTR sPluginId);


void __RPC_STUB IPluginMgr_EnablePlugin_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IPluginMgr_isDisablePlugin_Proxy( 
    IPluginMgr * This,
    /* [in] */ BSTR sPluginId,
    /* [retval][out] */ VARIANT_BOOL *disable);


void __RPC_STUB IPluginMgr_isDisablePlugin_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IPluginMgr_DeletePluginOrder_Proxy( 
    IPluginMgr * This,
    /* [in] */ BSTR sPluginId);


void __RPC_STUB IPluginMgr_DeletePluginOrder_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IPluginMgr_SaveOrder2_Proxy( 
    IPluginMgr * This,
    /* [in] */ BSTR sPluginId,
    /* [in] */ BSTR sSlotName,
    /* [in] */ ULONG itemId,
    /* [in] */ VARIANT_BOOL bAddOrErase);


void __RPC_STUB IPluginMgr_SaveOrder2_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IPluginMgr_StartupPluginManual_Proxy( 
    IPluginMgr * This,
    /* [in] */ BSTR PluginId);


void __RPC_STUB IPluginMgr_StartupPluginManual_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IPluginMgr_Init2_Proxy( 
    IPluginMgr * This,
    /* [in] */ BSTR pluginDir,
    /* [in] */ BSTR globalpluginorderpath,
    /* [in] */ BSTR userpluginorderpath);


void __RPC_STUB IPluginMgr_Init2_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IPluginMgr_PostInit2_Proxy( 
    IPluginMgr * This);


void __RPC_STUB IPluginMgr_PostInit2_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IPluginMgr_INTERFACE_DEFINED__ */


#ifndef __IPluginMgrV2_INTERFACE_DEFINED__
#define __IPluginMgrV2_INTERFACE_DEFINED__

/* interface IPluginMgrV2 */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IPluginMgrV2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("58A60582-AA00-44d9-8E41-EB272395D0B8")
    IPluginMgrV2 : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Initialize( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetItemInfor( 
            /* [in] */ enum SDKSlotID SlotID,
            /* [retval][out] */ ISDKObjectCollection **ppInforCol) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetPluginItemInfor( 
            /* [in] */ ULONG pluginId,
            /* [in] */ enum SDKSlotID SlotID,
            /* [retval][out] */ ISDKObjectCollection **ppInforCol) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE UnloadPlugin( 
            /* [in] */ ULONG pluginId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE InstallPlugin( 
            /* [in] */ BSTR pluginPath) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetItemOrderIndex( 
            /* [in] */ ULONG pluginId,
            /* [in] */ ULONG itemId,
            /* [retval][out] */ ULONG *pIndex) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetPluginPath( 
            /* [in] */ ULONG pluginId,
            /* [retval][out] */ BSTR *path) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE isLoaded( 
            /* [in] */ ULONG pluginId,
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetInstalledPlugins( 
            /* [retval][out] */ BSTR *ids) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetPluginHasOptions( 
            /* [in] */ ULONG pid,
            /* [retval][out] */ VARIANT_BOOL *pHas) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ShowPluginOptions( 
            /* [in] */ ULONG bstrPluginId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DisablePlugin( 
            /* [in] */ ULONG pluginId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EnablePlugin( 
            /* [in] */ ULONG pluginId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE StopPlugin( 
            /* [in] */ ULONG pluginId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DeletePlugin( 
            /* [in] */ ULONG pluginId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE isFree( 
            /* [in] */ ULONG pluginId,
            /* [retval][out] */ VARIANT_BOOL *pFree) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetAppID( 
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ LONG *lpAppID) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetPluginSecurityLevel( 
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ enum SDKSecurityLevel *pRet) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetServiceLevel( 
            /* [in] */ BSTR bstrServiceName,
            /* [retval][out] */ enum SDKSecurityLevel *pLevel) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CheckServiceLevel( 
            /* [in] */ BSTR bstrServiceName,
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ VARIANT_BOOL *vbResult) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE UpdateSvrInfo( 
            /* [in] */ LONG lReesrved) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetPluginInSlotPos( 
            /* [in] */ BSTR sPluginId,
            /* [retval][out] */ BSTR *sPluginSlotPos) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetPluginTitle( 
            /* [in] */ LONG cookie,
            /* [retval][out] */ BSTR *title) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DestroyPlugin( 
            /* [in] */ ULONG pluginId) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IPluginMgrV2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPluginMgrV2 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPluginMgrV2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPluginMgrV2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IPluginMgrV2 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IPluginMgrV2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IPluginMgrV2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IPluginMgrV2 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IPluginMgrV2 * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetItemInfor )( 
            IPluginMgrV2 * This,
            /* [in] */ enum SDKSlotID SlotID,
            /* [retval][out] */ ISDKObjectCollection **ppInforCol);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetPluginItemInfor )( 
            IPluginMgrV2 * This,
            /* [in] */ ULONG pluginId,
            /* [in] */ enum SDKSlotID SlotID,
            /* [retval][out] */ ISDKObjectCollection **ppInforCol);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *UnloadPlugin )( 
            IPluginMgrV2 * This,
            /* [in] */ ULONG pluginId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *InstallPlugin )( 
            IPluginMgrV2 * This,
            /* [in] */ BSTR pluginPath);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetItemOrderIndex )( 
            IPluginMgrV2 * This,
            /* [in] */ ULONG pluginId,
            /* [in] */ ULONG itemId,
            /* [retval][out] */ ULONG *pIndex);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetPluginPath )( 
            IPluginMgrV2 * This,
            /* [in] */ ULONG pluginId,
            /* [retval][out] */ BSTR *path);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *isLoaded )( 
            IPluginMgrV2 * This,
            /* [in] */ ULONG pluginId,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInstalledPlugins )( 
            IPluginMgrV2 * This,
            /* [retval][out] */ BSTR *ids);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetPluginHasOptions )( 
            IPluginMgrV2 * This,
            /* [in] */ ULONG pid,
            /* [retval][out] */ VARIANT_BOOL *pHas);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ShowPluginOptions )( 
            IPluginMgrV2 * This,
            /* [in] */ ULONG bstrPluginId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DisablePlugin )( 
            IPluginMgrV2 * This,
            /* [in] */ ULONG pluginId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EnablePlugin )( 
            IPluginMgrV2 * This,
            /* [in] */ ULONG pluginId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *StopPlugin )( 
            IPluginMgrV2 * This,
            /* [in] */ ULONG pluginId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DeletePlugin )( 
            IPluginMgrV2 * This,
            /* [in] */ ULONG pluginId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *isFree )( 
            IPluginMgrV2 * This,
            /* [in] */ ULONG pluginId,
            /* [retval][out] */ VARIANT_BOOL *pFree);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetAppID )( 
            IPluginMgrV2 * This,
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ LONG *lpAppID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetPluginSecurityLevel )( 
            IPluginMgrV2 * This,
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ enum SDKSecurityLevel *pRet);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetServiceLevel )( 
            IPluginMgrV2 * This,
            /* [in] */ BSTR bstrServiceName,
            /* [retval][out] */ enum SDKSecurityLevel *pLevel);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CheckServiceLevel )( 
            IPluginMgrV2 * This,
            /* [in] */ BSTR bstrServiceName,
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ VARIANT_BOOL *vbResult);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *UpdateSvrInfo )( 
            IPluginMgrV2 * This,
            /* [in] */ LONG lReesrved);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetPluginInSlotPos )( 
            IPluginMgrV2 * This,
            /* [in] */ BSTR sPluginId,
            /* [retval][out] */ BSTR *sPluginSlotPos);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetPluginTitle )( 
            IPluginMgrV2 * This,
            /* [in] */ LONG cookie,
            /* [retval][out] */ BSTR *title);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DestroyPlugin )( 
            IPluginMgrV2 * This,
            /* [in] */ ULONG pluginId);
        
        END_INTERFACE
    } IPluginMgrV2Vtbl;

    interface IPluginMgrV2
    {
        CONST_VTBL struct IPluginMgrV2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPluginMgrV2_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IPluginMgrV2_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IPluginMgrV2_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IPluginMgrV2_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IPluginMgrV2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IPluginMgrV2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IPluginMgrV2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IPluginMgrV2_Initialize(This)	\
    (This)->lpVtbl -> Initialize(This)

#define IPluginMgrV2_GetItemInfor(This,SlotID,ppInforCol)	\
    (This)->lpVtbl -> GetItemInfor(This,SlotID,ppInforCol)

#define IPluginMgrV2_GetPluginItemInfor(This,pluginId,SlotID,ppInforCol)	\
    (This)->lpVtbl -> GetPluginItemInfor(This,pluginId,SlotID,ppInforCol)

#define IPluginMgrV2_UnloadPlugin(This,pluginId)	\
    (This)->lpVtbl -> UnloadPlugin(This,pluginId)

#define IPluginMgrV2_InstallPlugin(This,pluginPath)	\
    (This)->lpVtbl -> InstallPlugin(This,pluginPath)

#define IPluginMgrV2_GetItemOrderIndex(This,pluginId,itemId,pIndex)	\
    (This)->lpVtbl -> GetItemOrderIndex(This,pluginId,itemId,pIndex)

#define IPluginMgrV2_GetPluginPath(This,pluginId,path)	\
    (This)->lpVtbl -> GetPluginPath(This,pluginId,path)

#define IPluginMgrV2_isLoaded(This,pluginId,pVal)	\
    (This)->lpVtbl -> isLoaded(This,pluginId,pVal)

#define IPluginMgrV2_GetInstalledPlugins(This,ids)	\
    (This)->lpVtbl -> GetInstalledPlugins(This,ids)

#define IPluginMgrV2_GetPluginHasOptions(This,pid,pHas)	\
    (This)->lpVtbl -> GetPluginHasOptions(This,pid,pHas)

#define IPluginMgrV2_ShowPluginOptions(This,bstrPluginId)	\
    (This)->lpVtbl -> ShowPluginOptions(This,bstrPluginId)

#define IPluginMgrV2_DisablePlugin(This,pluginId)	\
    (This)->lpVtbl -> DisablePlugin(This,pluginId)

#define IPluginMgrV2_EnablePlugin(This,pluginId)	\
    (This)->lpVtbl -> EnablePlugin(This,pluginId)

#define IPluginMgrV2_StopPlugin(This,pluginId)	\
    (This)->lpVtbl -> StopPlugin(This,pluginId)

#define IPluginMgrV2_DeletePlugin(This,pluginId)	\
    (This)->lpVtbl -> DeletePlugin(This,pluginId)

#define IPluginMgrV2_isFree(This,pluginId,pFree)	\
    (This)->lpVtbl -> isFree(This,pluginId,pFree)

#define IPluginMgrV2_GetAppID(This,lPluginCookie,lpAppID)	\
    (This)->lpVtbl -> GetAppID(This,lPluginCookie,lpAppID)

#define IPluginMgrV2_GetPluginSecurityLevel(This,lPluginCookie,pRet)	\
    (This)->lpVtbl -> GetPluginSecurityLevel(This,lPluginCookie,pRet)

#define IPluginMgrV2_GetServiceLevel(This,bstrServiceName,pLevel)	\
    (This)->lpVtbl -> GetServiceLevel(This,bstrServiceName,pLevel)

#define IPluginMgrV2_CheckServiceLevel(This,bstrServiceName,lPluginCookie,vbResult)	\
    (This)->lpVtbl -> CheckServiceLevel(This,bstrServiceName,lPluginCookie,vbResult)

#define IPluginMgrV2_UpdateSvrInfo(This,lReesrved)	\
    (This)->lpVtbl -> UpdateSvrInfo(This,lReesrved)

#define IPluginMgrV2_GetPluginInSlotPos(This,sPluginId,sPluginSlotPos)	\
    (This)->lpVtbl -> GetPluginInSlotPos(This,sPluginId,sPluginSlotPos)

#define IPluginMgrV2_GetPluginTitle(This,cookie,title)	\
    (This)->lpVtbl -> GetPluginTitle(This,cookie,title)

#define IPluginMgrV2_DestroyPlugin(This,pluginId)	\
    (This)->lpVtbl -> DestroyPlugin(This,pluginId)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IPluginMgrV2_Initialize_Proxy( 
    IPluginMgrV2 * This);


void __RPC_STUB IPluginMgrV2_Initialize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IPluginMgrV2_GetItemInfor_Proxy( 
    IPluginMgrV2 * This,
    /* [in] */ enum SDKSlotID SlotID,
    /* [retval][out] */ ISDKObjectCollection **ppInforCol);


void __RPC_STUB IPluginMgrV2_GetItemInfor_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IPluginMgrV2_GetPluginItemInfor_Proxy( 
    IPluginMgrV2 * This,
    /* [in] */ ULONG pluginId,
    /* [in] */ enum SDKSlotID SlotID,
    /* [retval][out] */ ISDKObjectCollection **ppInforCol);


void __RPC_STUB IPluginMgrV2_GetPluginItemInfor_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IPluginMgrV2_UnloadPlugin_Proxy( 
    IPluginMgrV2 * This,
    /* [in] */ ULONG pluginId);


void __RPC_STUB IPluginMgrV2_UnloadPlugin_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IPluginMgrV2_InstallPlugin_Proxy( 
    IPluginMgrV2 * This,
    /* [in] */ BSTR pluginPath);


void __RPC_STUB IPluginMgrV2_InstallPlugin_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IPluginMgrV2_GetItemOrderIndex_Proxy( 
    IPluginMgrV2 * This,
    /* [in] */ ULONG pluginId,
    /* [in] */ ULONG itemId,
    /* [retval][out] */ ULONG *pIndex);


void __RPC_STUB IPluginMgrV2_GetItemOrderIndex_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IPluginMgrV2_GetPluginPath_Proxy( 
    IPluginMgrV2 * This,
    /* [in] */ ULONG pluginId,
    /* [retval][out] */ BSTR *path);


void __RPC_STUB IPluginMgrV2_GetPluginPath_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IPluginMgrV2_isLoaded_Proxy( 
    IPluginMgrV2 * This,
    /* [in] */ ULONG pluginId,
    /* [retval][out] */ VARIANT_BOOL *pVal);


void __RPC_STUB IPluginMgrV2_isLoaded_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IPluginMgrV2_GetInstalledPlugins_Proxy( 
    IPluginMgrV2 * This,
    /* [retval][out] */ BSTR *ids);


void __RPC_STUB IPluginMgrV2_GetInstalledPlugins_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IPluginMgrV2_GetPluginHasOptions_Proxy( 
    IPluginMgrV2 * This,
    /* [in] */ ULONG pid,
    /* [retval][out] */ VARIANT_BOOL *pHas);


void __RPC_STUB IPluginMgrV2_GetPluginHasOptions_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IPluginMgrV2_ShowPluginOptions_Proxy( 
    IPluginMgrV2 * This,
    /* [in] */ ULONG bstrPluginId);


void __RPC_STUB IPluginMgrV2_ShowPluginOptions_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IPluginMgrV2_DisablePlugin_Proxy( 
    IPluginMgrV2 * This,
    /* [in] */ ULONG pluginId);


void __RPC_STUB IPluginMgrV2_DisablePlugin_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IPluginMgrV2_EnablePlugin_Proxy( 
    IPluginMgrV2 * This,
    /* [in] */ ULONG pluginId);


void __RPC_STUB IPluginMgrV2_EnablePlugin_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IPluginMgrV2_StopPlugin_Proxy( 
    IPluginMgrV2 * This,
    /* [in] */ ULONG pluginId);


void __RPC_STUB IPluginMgrV2_StopPlugin_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IPluginMgrV2_DeletePlugin_Proxy( 
    IPluginMgrV2 * This,
    /* [in] */ ULONG pluginId);


void __RPC_STUB IPluginMgrV2_DeletePlugin_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IPluginMgrV2_isFree_Proxy( 
    IPluginMgrV2 * This,
    /* [in] */ ULONG pluginId,
    /* [retval][out] */ VARIANT_BOOL *pFree);


void __RPC_STUB IPluginMgrV2_isFree_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IPluginMgrV2_GetAppID_Proxy( 
    IPluginMgrV2 * This,
    /* [in] */ LONG lPluginCookie,
    /* [retval][out] */ LONG *lpAppID);


void __RPC_STUB IPluginMgrV2_GetAppID_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IPluginMgrV2_GetPluginSecurityLevel_Proxy( 
    IPluginMgrV2 * This,
    /* [in] */ LONG lPluginCookie,
    /* [retval][out] */ enum SDKSecurityLevel *pRet);


void __RPC_STUB IPluginMgrV2_GetPluginSecurityLevel_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IPluginMgrV2_GetServiceLevel_Proxy( 
    IPluginMgrV2 * This,
    /* [in] */ BSTR bstrServiceName,
    /* [retval][out] */ enum SDKSecurityLevel *pLevel);


void __RPC_STUB IPluginMgrV2_GetServiceLevel_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IPluginMgrV2_CheckServiceLevel_Proxy( 
    IPluginMgrV2 * This,
    /* [in] */ BSTR bstrServiceName,
    /* [in] */ LONG lPluginCookie,
    /* [retval][out] */ VARIANT_BOOL *vbResult);


void __RPC_STUB IPluginMgrV2_CheckServiceLevel_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IPluginMgrV2_UpdateSvrInfo_Proxy( 
    IPluginMgrV2 * This,
    /* [in] */ LONG lReesrved);


void __RPC_STUB IPluginMgrV2_UpdateSvrInfo_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IPluginMgrV2_GetPluginInSlotPos_Proxy( 
    IPluginMgrV2 * This,
    /* [in] */ BSTR sPluginId,
    /* [retval][out] */ BSTR *sPluginSlotPos);


void __RPC_STUB IPluginMgrV2_GetPluginInSlotPos_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IPluginMgrV2_GetPluginTitle_Proxy( 
    IPluginMgrV2 * This,
    /* [in] */ LONG cookie,
    /* [retval][out] */ BSTR *title);


void __RPC_STUB IPluginMgrV2_GetPluginTitle_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IPluginMgrV2_DestroyPlugin_Proxy( 
    IPluginMgrV2 * This,
    /* [in] */ ULONG pluginId);


void __RPC_STUB IPluginMgrV2_DestroyPlugin_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IPluginMgrV2_INTERFACE_DEFINED__ */


#ifndef __IPluginMgrV3_INTERFACE_DEFINED__
#define __IPluginMgrV3_INTERFACE_DEFINED__

/* interface IPluginMgrV3 */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IPluginMgrV3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7CAF158C-4082-44bb-9BEA-391680694D71")
    IPluginMgrV3 : public IPluginMgrV2
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetPluginInfoV3( 
            /* [in] */ LONG lAppID,
            /* [retval][out] */ IDispatch **ppPluginInfo) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetPluginProxy( 
            /* [in] */ LONG lAppID,
            /* [retval][out] */ IDispatch **ppPluginProxy) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreatePluginInLoader( 
            /* [in] */ LONG lAppID,
            /* [in] */ LONG lPluginCookie,
            /* [in] */ LONG lRunMode,
            /* [in] */ IDispatch *pPluginInfo,
            /* [retval][out] */ IDispatch **ppPluginStub) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE NotifyLoaderExit( 
            /* [in] */ LONG lRunMode) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE HandleNoReportLoader( 
            /* [in] */ LONG lRunMode) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE HandleDisappearLoader( 
            /* [in] */ LONG lRunMode) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetIWWPluginMonitor( 
            /* [retval][out] */ IDispatch **ppMonitor) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetISDKApplication( 
            /* [retval][out] */ IDispatch **ppSDKApplication) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE InternalBrowserUrl( 
            /* [in] */ BSTR url) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetProessId( 
            /* [retval][out] */ LONG *pProcId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetOrderOptimize( 
            /* [in] */ LONG nAppId,
            /* [retval][out] */ LONG *pValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IsPluginDisable( 
            /* [in] */ LONG nAppId,
            /* [retval][out] */ VARIANT_BOOL *pvbDisable) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetSubsInfoFromDB( 
            /* [in] */ BSTR appId,
            /* [in] */ BSTR userId,
            /* [retval][out] */ ISDKPluginQueryResult2 **ppQueryRet2) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SDKBrowserUrl( 
            /* [in] */ BSTR url) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SDKTransUrl( 
            /* [in] */ BSTR srcUrl,
            /* [retval][out] */ BSTR *pDestUrl) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IPluginMgrV3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPluginMgrV3 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPluginMgrV3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPluginMgrV3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IPluginMgrV3 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IPluginMgrV3 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IPluginMgrV3 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IPluginMgrV3 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IPluginMgrV3 * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetItemInfor )( 
            IPluginMgrV3 * This,
            /* [in] */ enum SDKSlotID SlotID,
            /* [retval][out] */ ISDKObjectCollection **ppInforCol);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetPluginItemInfor )( 
            IPluginMgrV3 * This,
            /* [in] */ ULONG pluginId,
            /* [in] */ enum SDKSlotID SlotID,
            /* [retval][out] */ ISDKObjectCollection **ppInforCol);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *UnloadPlugin )( 
            IPluginMgrV3 * This,
            /* [in] */ ULONG pluginId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *InstallPlugin )( 
            IPluginMgrV3 * This,
            /* [in] */ BSTR pluginPath);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetItemOrderIndex )( 
            IPluginMgrV3 * This,
            /* [in] */ ULONG pluginId,
            /* [in] */ ULONG itemId,
            /* [retval][out] */ ULONG *pIndex);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetPluginPath )( 
            IPluginMgrV3 * This,
            /* [in] */ ULONG pluginId,
            /* [retval][out] */ BSTR *path);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *isLoaded )( 
            IPluginMgrV3 * This,
            /* [in] */ ULONG pluginId,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInstalledPlugins )( 
            IPluginMgrV3 * This,
            /* [retval][out] */ BSTR *ids);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetPluginHasOptions )( 
            IPluginMgrV3 * This,
            /* [in] */ ULONG pid,
            /* [retval][out] */ VARIANT_BOOL *pHas);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ShowPluginOptions )( 
            IPluginMgrV3 * This,
            /* [in] */ ULONG bstrPluginId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DisablePlugin )( 
            IPluginMgrV3 * This,
            /* [in] */ ULONG pluginId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EnablePlugin )( 
            IPluginMgrV3 * This,
            /* [in] */ ULONG pluginId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *StopPlugin )( 
            IPluginMgrV3 * This,
            /* [in] */ ULONG pluginId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DeletePlugin )( 
            IPluginMgrV3 * This,
            /* [in] */ ULONG pluginId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *isFree )( 
            IPluginMgrV3 * This,
            /* [in] */ ULONG pluginId,
            /* [retval][out] */ VARIANT_BOOL *pFree);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetAppID )( 
            IPluginMgrV3 * This,
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ LONG *lpAppID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetPluginSecurityLevel )( 
            IPluginMgrV3 * This,
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ enum SDKSecurityLevel *pRet);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetServiceLevel )( 
            IPluginMgrV3 * This,
            /* [in] */ BSTR bstrServiceName,
            /* [retval][out] */ enum SDKSecurityLevel *pLevel);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CheckServiceLevel )( 
            IPluginMgrV3 * This,
            /* [in] */ BSTR bstrServiceName,
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ VARIANT_BOOL *vbResult);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *UpdateSvrInfo )( 
            IPluginMgrV3 * This,
            /* [in] */ LONG lReesrved);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetPluginInSlotPos )( 
            IPluginMgrV3 * This,
            /* [in] */ BSTR sPluginId,
            /* [retval][out] */ BSTR *sPluginSlotPos);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetPluginTitle )( 
            IPluginMgrV3 * This,
            /* [in] */ LONG cookie,
            /* [retval][out] */ BSTR *title);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DestroyPlugin )( 
            IPluginMgrV3 * This,
            /* [in] */ ULONG pluginId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetPluginInfoV3 )( 
            IPluginMgrV3 * This,
            /* [in] */ LONG lAppID,
            /* [retval][out] */ IDispatch **ppPluginInfo);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetPluginProxy )( 
            IPluginMgrV3 * This,
            /* [in] */ LONG lAppID,
            /* [retval][out] */ IDispatch **ppPluginProxy);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreatePluginInLoader )( 
            IPluginMgrV3 * This,
            /* [in] */ LONG lAppID,
            /* [in] */ LONG lPluginCookie,
            /* [in] */ LONG lRunMode,
            /* [in] */ IDispatch *pPluginInfo,
            /* [retval][out] */ IDispatch **ppPluginStub);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *NotifyLoaderExit )( 
            IPluginMgrV3 * This,
            /* [in] */ LONG lRunMode);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *HandleNoReportLoader )( 
            IPluginMgrV3 * This,
            /* [in] */ LONG lRunMode);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *HandleDisappearLoader )( 
            IPluginMgrV3 * This,
            /* [in] */ LONG lRunMode);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetIWWPluginMonitor )( 
            IPluginMgrV3 * This,
            /* [retval][out] */ IDispatch **ppMonitor);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetISDKApplication )( 
            IPluginMgrV3 * This,
            /* [retval][out] */ IDispatch **ppSDKApplication);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *InternalBrowserUrl )( 
            IPluginMgrV3 * This,
            /* [in] */ BSTR url);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetProessId )( 
            IPluginMgrV3 * This,
            /* [retval][out] */ LONG *pProcId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetOrderOptimize )( 
            IPluginMgrV3 * This,
            /* [in] */ LONG nAppId,
            /* [retval][out] */ LONG *pValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *IsPluginDisable )( 
            IPluginMgrV3 * This,
            /* [in] */ LONG nAppId,
            /* [retval][out] */ VARIANT_BOOL *pvbDisable);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSubsInfoFromDB )( 
            IPluginMgrV3 * This,
            /* [in] */ BSTR appId,
            /* [in] */ BSTR userId,
            /* [retval][out] */ ISDKPluginQueryResult2 **ppQueryRet2);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SDKBrowserUrl )( 
            IPluginMgrV3 * This,
            /* [in] */ BSTR url);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SDKTransUrl )( 
            IPluginMgrV3 * This,
            /* [in] */ BSTR srcUrl,
            /* [retval][out] */ BSTR *pDestUrl);
        
        END_INTERFACE
    } IPluginMgrV3Vtbl;

    interface IPluginMgrV3
    {
        CONST_VTBL struct IPluginMgrV3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPluginMgrV3_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IPluginMgrV3_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IPluginMgrV3_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IPluginMgrV3_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IPluginMgrV3_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IPluginMgrV3_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IPluginMgrV3_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IPluginMgrV3_Initialize(This)	\
    (This)->lpVtbl -> Initialize(This)

#define IPluginMgrV3_GetItemInfor(This,SlotID,ppInforCol)	\
    (This)->lpVtbl -> GetItemInfor(This,SlotID,ppInforCol)

#define IPluginMgrV3_GetPluginItemInfor(This,pluginId,SlotID,ppInforCol)	\
    (This)->lpVtbl -> GetPluginItemInfor(This,pluginId,SlotID,ppInforCol)

#define IPluginMgrV3_UnloadPlugin(This,pluginId)	\
    (This)->lpVtbl -> UnloadPlugin(This,pluginId)

#define IPluginMgrV3_InstallPlugin(This,pluginPath)	\
    (This)->lpVtbl -> InstallPlugin(This,pluginPath)

#define IPluginMgrV3_GetItemOrderIndex(This,pluginId,itemId,pIndex)	\
    (This)->lpVtbl -> GetItemOrderIndex(This,pluginId,itemId,pIndex)

#define IPluginMgrV3_GetPluginPath(This,pluginId,path)	\
    (This)->lpVtbl -> GetPluginPath(This,pluginId,path)

#define IPluginMgrV3_isLoaded(This,pluginId,pVal)	\
    (This)->lpVtbl -> isLoaded(This,pluginId,pVal)

#define IPluginMgrV3_GetInstalledPlugins(This,ids)	\
    (This)->lpVtbl -> GetInstalledPlugins(This,ids)

#define IPluginMgrV3_GetPluginHasOptions(This,pid,pHas)	\
    (This)->lpVtbl -> GetPluginHasOptions(This,pid,pHas)

#define IPluginMgrV3_ShowPluginOptions(This,bstrPluginId)	\
    (This)->lpVtbl -> ShowPluginOptions(This,bstrPluginId)

#define IPluginMgrV3_DisablePlugin(This,pluginId)	\
    (This)->lpVtbl -> DisablePlugin(This,pluginId)

#define IPluginMgrV3_EnablePlugin(This,pluginId)	\
    (This)->lpVtbl -> EnablePlugin(This,pluginId)

#define IPluginMgrV3_StopPlugin(This,pluginId)	\
    (This)->lpVtbl -> StopPlugin(This,pluginId)

#define IPluginMgrV3_DeletePlugin(This,pluginId)	\
    (This)->lpVtbl -> DeletePlugin(This,pluginId)

#define IPluginMgrV3_isFree(This,pluginId,pFree)	\
    (This)->lpVtbl -> isFree(This,pluginId,pFree)

#define IPluginMgrV3_GetAppID(This,lPluginCookie,lpAppID)	\
    (This)->lpVtbl -> GetAppID(This,lPluginCookie,lpAppID)

#define IPluginMgrV3_GetPluginSecurityLevel(This,lPluginCookie,pRet)	\
    (This)->lpVtbl -> GetPluginSecurityLevel(This,lPluginCookie,pRet)

#define IPluginMgrV3_GetServiceLevel(This,bstrServiceName,pLevel)	\
    (This)->lpVtbl -> GetServiceLevel(This,bstrServiceName,pLevel)

#define IPluginMgrV3_CheckServiceLevel(This,bstrServiceName,lPluginCookie,vbResult)	\
    (This)->lpVtbl -> CheckServiceLevel(This,bstrServiceName,lPluginCookie,vbResult)

#define IPluginMgrV3_UpdateSvrInfo(This,lReesrved)	\
    (This)->lpVtbl -> UpdateSvrInfo(This,lReesrved)

#define IPluginMgrV3_GetPluginInSlotPos(This,sPluginId,sPluginSlotPos)	\
    (This)->lpVtbl -> GetPluginInSlotPos(This,sPluginId,sPluginSlotPos)

#define IPluginMgrV3_GetPluginTitle(This,cookie,title)	\
    (This)->lpVtbl -> GetPluginTitle(This,cookie,title)

#define IPluginMgrV3_DestroyPlugin(This,pluginId)	\
    (This)->lpVtbl -> DestroyPlugin(This,pluginId)


#define IPluginMgrV3_GetPluginInfoV3(This,lAppID,ppPluginInfo)	\
    (This)->lpVtbl -> GetPluginInfoV3(This,lAppID,ppPluginInfo)

#define IPluginMgrV3_GetPluginProxy(This,lAppID,ppPluginProxy)	\
    (This)->lpVtbl -> GetPluginProxy(This,lAppID,ppPluginProxy)

#define IPluginMgrV3_CreatePluginInLoader(This,lAppID,lPluginCookie,lRunMode,pPluginInfo,ppPluginStub)	\
    (This)->lpVtbl -> CreatePluginInLoader(This,lAppID,lPluginCookie,lRunMode,pPluginInfo,ppPluginStub)

#define IPluginMgrV3_NotifyLoaderExit(This,lRunMode)	\
    (This)->lpVtbl -> NotifyLoaderExit(This,lRunMode)

#define IPluginMgrV3_HandleNoReportLoader(This,lRunMode)	\
    (This)->lpVtbl -> HandleNoReportLoader(This,lRunMode)

#define IPluginMgrV3_HandleDisappearLoader(This,lRunMode)	\
    (This)->lpVtbl -> HandleDisappearLoader(This,lRunMode)

#define IPluginMgrV3_GetIWWPluginMonitor(This,ppMonitor)	\
    (This)->lpVtbl -> GetIWWPluginMonitor(This,ppMonitor)

#define IPluginMgrV3_GetISDKApplication(This,ppSDKApplication)	\
    (This)->lpVtbl -> GetISDKApplication(This,ppSDKApplication)

#define IPluginMgrV3_InternalBrowserUrl(This,url)	\
    (This)->lpVtbl -> InternalBrowserUrl(This,url)

#define IPluginMgrV3_GetProessId(This,pProcId)	\
    (This)->lpVtbl -> GetProessId(This,pProcId)

#define IPluginMgrV3_GetOrderOptimize(This,nAppId,pValue)	\
    (This)->lpVtbl -> GetOrderOptimize(This,nAppId,pValue)

#define IPluginMgrV3_IsPluginDisable(This,nAppId,pvbDisable)	\
    (This)->lpVtbl -> IsPluginDisable(This,nAppId,pvbDisable)

#define IPluginMgrV3_GetSubsInfoFromDB(This,appId,userId,ppQueryRet2)	\
    (This)->lpVtbl -> GetSubsInfoFromDB(This,appId,userId,ppQueryRet2)

#define IPluginMgrV3_SDKBrowserUrl(This,url)	\
    (This)->lpVtbl -> SDKBrowserUrl(This,url)

#define IPluginMgrV3_SDKTransUrl(This,srcUrl,pDestUrl)	\
    (This)->lpVtbl -> SDKTransUrl(This,srcUrl,pDestUrl)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IPluginMgrV3_GetPluginInfoV3_Proxy( 
    IPluginMgrV3 * This,
    /* [in] */ LONG lAppID,
    /* [retval][out] */ IDispatch **ppPluginInfo);


void __RPC_STUB IPluginMgrV3_GetPluginInfoV3_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IPluginMgrV3_GetPluginProxy_Proxy( 
    IPluginMgrV3 * This,
    /* [in] */ LONG lAppID,
    /* [retval][out] */ IDispatch **ppPluginProxy);


void __RPC_STUB IPluginMgrV3_GetPluginProxy_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IPluginMgrV3_CreatePluginInLoader_Proxy( 
    IPluginMgrV3 * This,
    /* [in] */ LONG lAppID,
    /* [in] */ LONG lPluginCookie,
    /* [in] */ LONG lRunMode,
    /* [in] */ IDispatch *pPluginInfo,
    /* [retval][out] */ IDispatch **ppPluginStub);


void __RPC_STUB IPluginMgrV3_CreatePluginInLoader_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IPluginMgrV3_NotifyLoaderExit_Proxy( 
    IPluginMgrV3 * This,
    /* [in] */ LONG lRunMode);


void __RPC_STUB IPluginMgrV3_NotifyLoaderExit_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IPluginMgrV3_HandleNoReportLoader_Proxy( 
    IPluginMgrV3 * This,
    /* [in] */ LONG lRunMode);


void __RPC_STUB IPluginMgrV3_HandleNoReportLoader_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IPluginMgrV3_HandleDisappearLoader_Proxy( 
    IPluginMgrV3 * This,
    /* [in] */ LONG lRunMode);


void __RPC_STUB IPluginMgrV3_HandleDisappearLoader_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IPluginMgrV3_GetIWWPluginMonitor_Proxy( 
    IPluginMgrV3 * This,
    /* [retval][out] */ IDispatch **ppMonitor);


void __RPC_STUB IPluginMgrV3_GetIWWPluginMonitor_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IPluginMgrV3_GetISDKApplication_Proxy( 
    IPluginMgrV3 * This,
    /* [retval][out] */ IDispatch **ppSDKApplication);


void __RPC_STUB IPluginMgrV3_GetISDKApplication_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IPluginMgrV3_InternalBrowserUrl_Proxy( 
    IPluginMgrV3 * This,
    /* [in] */ BSTR url);


void __RPC_STUB IPluginMgrV3_InternalBrowserUrl_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IPluginMgrV3_GetProessId_Proxy( 
    IPluginMgrV3 * This,
    /* [retval][out] */ LONG *pProcId);


void __RPC_STUB IPluginMgrV3_GetProessId_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IPluginMgrV3_GetOrderOptimize_Proxy( 
    IPluginMgrV3 * This,
    /* [in] */ LONG nAppId,
    /* [retval][out] */ LONG *pValue);


void __RPC_STUB IPluginMgrV3_GetOrderOptimize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IPluginMgrV3_IsPluginDisable_Proxy( 
    IPluginMgrV3 * This,
    /* [in] */ LONG nAppId,
    /* [retval][out] */ VARIANT_BOOL *pvbDisable);


void __RPC_STUB IPluginMgrV3_IsPluginDisable_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IPluginMgrV3_GetSubsInfoFromDB_Proxy( 
    IPluginMgrV3 * This,
    /* [in] */ BSTR appId,
    /* [in] */ BSTR userId,
    /* [retval][out] */ ISDKPluginQueryResult2 **ppQueryRet2);


void __RPC_STUB IPluginMgrV3_GetSubsInfoFromDB_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IPluginMgrV3_SDKBrowserUrl_Proxy( 
    IPluginMgrV3 * This,
    /* [in] */ BSTR url);


void __RPC_STUB IPluginMgrV3_SDKBrowserUrl_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IPluginMgrV3_SDKTransUrl_Proxy( 
    IPluginMgrV3 * This,
    /* [in] */ BSTR srcUrl,
    /* [retval][out] */ BSTR *pDestUrl);


void __RPC_STUB IPluginMgrV3_SDKTransUrl_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IPluginMgrV3_INTERFACE_DEFINED__ */


#ifndef __IWWApplication_INTERFACE_DEFINED__
#define __IWWApplication_INTERFACE_DEFINED__

/* interface IWWApplication */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IWWApplication;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1C588FFF-2F76-42fd-9AAF-E16F5FA2B48B")
    IWWApplication : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnMainMenuSlotCreated( 
            /* [in] */ IPluginMgrV2 *pPluginMgr,
            /* [retval][out] */ ISDKMainMenuSlot **ppMainMenuSlot) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnMainMenuSlotDestroyed( 
            /* [in] */ IPluginMgrV2 *pPluginMgr) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetAepQuery( 
            /* [retval][out] */ IWWAEP_PluginQuery **ppQuery) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetPluginMgr( 
            /* [retval][out] */ IPluginMgrV2 **ppPluginMgr) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetLoginUser( 
            /* [retval][out] */ BSTR *bstrLoginUser) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnLogout( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetVersion( 
            /* [out] */ BSTR *bstrDispVersion,
            /* [out] */ LONG *pVersion) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWWApplicationVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWWApplication * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWWApplication * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWWApplication * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IWWApplication * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IWWApplication * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IWWApplication * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWWApplication * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnMainMenuSlotCreated )( 
            IWWApplication * This,
            /* [in] */ IPluginMgrV2 *pPluginMgr,
            /* [retval][out] */ ISDKMainMenuSlot **ppMainMenuSlot);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnMainMenuSlotDestroyed )( 
            IWWApplication * This,
            /* [in] */ IPluginMgrV2 *pPluginMgr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetAepQuery )( 
            IWWApplication * This,
            /* [retval][out] */ IWWAEP_PluginQuery **ppQuery);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetPluginMgr )( 
            IWWApplication * This,
            /* [retval][out] */ IPluginMgrV2 **ppPluginMgr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetLoginUser )( 
            IWWApplication * This,
            /* [retval][out] */ BSTR *bstrLoginUser);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnLogout )( 
            IWWApplication * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetVersion )( 
            IWWApplication * This,
            /* [out] */ BSTR *bstrDispVersion,
            /* [out] */ LONG *pVersion);
        
        END_INTERFACE
    } IWWApplicationVtbl;

    interface IWWApplication
    {
        CONST_VTBL struct IWWApplicationVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWWApplication_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IWWApplication_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IWWApplication_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IWWApplication_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IWWApplication_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IWWApplication_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IWWApplication_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IWWApplication_OnMainMenuSlotCreated(This,pPluginMgr,ppMainMenuSlot)	\
    (This)->lpVtbl -> OnMainMenuSlotCreated(This,pPluginMgr,ppMainMenuSlot)

#define IWWApplication_OnMainMenuSlotDestroyed(This,pPluginMgr)	\
    (This)->lpVtbl -> OnMainMenuSlotDestroyed(This,pPluginMgr)

#define IWWApplication_GetAepQuery(This,ppQuery)	\
    (This)->lpVtbl -> GetAepQuery(This,ppQuery)

#define IWWApplication_GetPluginMgr(This,ppPluginMgr)	\
    (This)->lpVtbl -> GetPluginMgr(This,ppPluginMgr)

#define IWWApplication_GetLoginUser(This,bstrLoginUser)	\
    (This)->lpVtbl -> GetLoginUser(This,bstrLoginUser)

#define IWWApplication_OnLogout(This)	\
    (This)->lpVtbl -> OnLogout(This)

#define IWWApplication_GetVersion(This,bstrDispVersion,pVersion)	\
    (This)->lpVtbl -> GetVersion(This,bstrDispVersion,pVersion)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IWWApplication_OnMainMenuSlotCreated_Proxy( 
    IWWApplication * This,
    /* [in] */ IPluginMgrV2 *pPluginMgr,
    /* [retval][out] */ ISDKMainMenuSlot **ppMainMenuSlot);


void __RPC_STUB IWWApplication_OnMainMenuSlotCreated_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IWWApplication_OnMainMenuSlotDestroyed_Proxy( 
    IWWApplication * This,
    /* [in] */ IPluginMgrV2 *pPluginMgr);


void __RPC_STUB IWWApplication_OnMainMenuSlotDestroyed_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IWWApplication_GetAepQuery_Proxy( 
    IWWApplication * This,
    /* [retval][out] */ IWWAEP_PluginQuery **ppQuery);


void __RPC_STUB IWWApplication_GetAepQuery_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IWWApplication_GetPluginMgr_Proxy( 
    IWWApplication * This,
    /* [retval][out] */ IPluginMgrV2 **ppPluginMgr);


void __RPC_STUB IWWApplication_GetPluginMgr_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IWWApplication_GetLoginUser_Proxy( 
    IWWApplication * This,
    /* [retval][out] */ BSTR *bstrLoginUser);


void __RPC_STUB IWWApplication_GetLoginUser_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IWWApplication_OnLogout_Proxy( 
    IWWApplication * This);


void __RPC_STUB IWWApplication_OnLogout_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IWWApplication_GetVersion_Proxy( 
    IWWApplication * This,
    /* [out] */ BSTR *bstrDispVersion,
    /* [out] */ LONG *pVersion);


void __RPC_STUB IWWApplication_GetVersion_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IWWApplication_INTERFACE_DEFINED__ */


#ifndef __IWWChatDlg_INTERFACE_DEFINED__
#define __IWWChatDlg_INTERFACE_DEFINED__

/* interface IWWChatDlg */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IWWChatDlg;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("21169F5C-7745-41ff-A728-6FAAAC96E9D2")
    IWWChatDlg : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnMainToolbarSlotCreated( 
            /* [in] */ IPluginMgrV2 *pPluginMgr,
            /* [retval][out] */ ISDKIMChatMainToolbarSlot **ppMainToolbarSlot) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnMainToolbarSlotDestroyed( 
            /* [in] */ IPluginMgrV2 *pPluginMgr) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnInputToolbarSlotCreated( 
            /* [in] */ IPluginMgrV2 *pPluginMgr,
            /* [retval][out] */ ISDKIMChatInputToolbarSlot **ppInputToolbarSlot) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnInputToolbarSlotDestroyed( 
            /* [in] */ IPluginMgrV2 *pPluginMgr) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetContact( 
            /* [in] */ BSTR bstrContactUID) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IsContactInChat( 
            /* [in] */ BSTR bstrUID,
            /* [retval][out] */ VARIANT_BOOL *bIn) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IsSingleChat( 
            /* [in] */ BSTR bstrUID,
            /* [retval][out] */ VARIANT_BOOL *bIn) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetGroupID( 
            /* [retval][out] */ BSTR *pbstrGroupID) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWWChatDlgVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWWChatDlg * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWWChatDlg * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWWChatDlg * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IWWChatDlg * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IWWChatDlg * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IWWChatDlg * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWWChatDlg * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnMainToolbarSlotCreated )( 
            IWWChatDlg * This,
            /* [in] */ IPluginMgrV2 *pPluginMgr,
            /* [retval][out] */ ISDKIMChatMainToolbarSlot **ppMainToolbarSlot);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnMainToolbarSlotDestroyed )( 
            IWWChatDlg * This,
            /* [in] */ IPluginMgrV2 *pPluginMgr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnInputToolbarSlotCreated )( 
            IWWChatDlg * This,
            /* [in] */ IPluginMgrV2 *pPluginMgr,
            /* [retval][out] */ ISDKIMChatInputToolbarSlot **ppInputToolbarSlot);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnInputToolbarSlotDestroyed )( 
            IWWChatDlg * This,
            /* [in] */ IPluginMgrV2 *pPluginMgr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetContact )( 
            IWWChatDlg * This,
            /* [in] */ BSTR bstrContactUID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *IsContactInChat )( 
            IWWChatDlg * This,
            /* [in] */ BSTR bstrUID,
            /* [retval][out] */ VARIANT_BOOL *bIn);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *IsSingleChat )( 
            IWWChatDlg * This,
            /* [in] */ BSTR bstrUID,
            /* [retval][out] */ VARIANT_BOOL *bIn);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetGroupID )( 
            IWWChatDlg * This,
            /* [retval][out] */ BSTR *pbstrGroupID);
        
        END_INTERFACE
    } IWWChatDlgVtbl;

    interface IWWChatDlg
    {
        CONST_VTBL struct IWWChatDlgVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWWChatDlg_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IWWChatDlg_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IWWChatDlg_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IWWChatDlg_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IWWChatDlg_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IWWChatDlg_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IWWChatDlg_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IWWChatDlg_OnMainToolbarSlotCreated(This,pPluginMgr,ppMainToolbarSlot)	\
    (This)->lpVtbl -> OnMainToolbarSlotCreated(This,pPluginMgr,ppMainToolbarSlot)

#define IWWChatDlg_OnMainToolbarSlotDestroyed(This,pPluginMgr)	\
    (This)->lpVtbl -> OnMainToolbarSlotDestroyed(This,pPluginMgr)

#define IWWChatDlg_OnInputToolbarSlotCreated(This,pPluginMgr,ppInputToolbarSlot)	\
    (This)->lpVtbl -> OnInputToolbarSlotCreated(This,pPluginMgr,ppInputToolbarSlot)

#define IWWChatDlg_OnInputToolbarSlotDestroyed(This,pPluginMgr)	\
    (This)->lpVtbl -> OnInputToolbarSlotDestroyed(This,pPluginMgr)

#define IWWChatDlg_SetContact(This,bstrContactUID)	\
    (This)->lpVtbl -> SetContact(This,bstrContactUID)

#define IWWChatDlg_IsContactInChat(This,bstrUID,bIn)	\
    (This)->lpVtbl -> IsContactInChat(This,bstrUID,bIn)

#define IWWChatDlg_IsSingleChat(This,bstrUID,bIn)	\
    (This)->lpVtbl -> IsSingleChat(This,bstrUID,bIn)

#define IWWChatDlg_GetGroupID(This,pbstrGroupID)	\
    (This)->lpVtbl -> GetGroupID(This,pbstrGroupID)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IWWChatDlg_OnMainToolbarSlotCreated_Proxy( 
    IWWChatDlg * This,
    /* [in] */ IPluginMgrV2 *pPluginMgr,
    /* [retval][out] */ ISDKIMChatMainToolbarSlot **ppMainToolbarSlot);


void __RPC_STUB IWWChatDlg_OnMainToolbarSlotCreated_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IWWChatDlg_OnMainToolbarSlotDestroyed_Proxy( 
    IWWChatDlg * This,
    /* [in] */ IPluginMgrV2 *pPluginMgr);


void __RPC_STUB IWWChatDlg_OnMainToolbarSlotDestroyed_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IWWChatDlg_OnInputToolbarSlotCreated_Proxy( 
    IWWChatDlg * This,
    /* [in] */ IPluginMgrV2 *pPluginMgr,
    /* [retval][out] */ ISDKIMChatInputToolbarSlot **ppInputToolbarSlot);


void __RPC_STUB IWWChatDlg_OnInputToolbarSlotCreated_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IWWChatDlg_OnInputToolbarSlotDestroyed_Proxy( 
    IWWChatDlg * This,
    /* [in] */ IPluginMgrV2 *pPluginMgr);


void __RPC_STUB IWWChatDlg_OnInputToolbarSlotDestroyed_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IWWChatDlg_SetContact_Proxy( 
    IWWChatDlg * This,
    /* [in] */ BSTR bstrContactUID);


void __RPC_STUB IWWChatDlg_SetContact_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IWWChatDlg_IsContactInChat_Proxy( 
    IWWChatDlg * This,
    /* [in] */ BSTR bstrUID,
    /* [retval][out] */ VARIANT_BOOL *bIn);


void __RPC_STUB IWWChatDlg_IsContactInChat_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IWWChatDlg_IsSingleChat_Proxy( 
    IWWChatDlg * This,
    /* [in] */ BSTR bstrUID,
    /* [retval][out] */ VARIANT_BOOL *bIn);


void __RPC_STUB IWWChatDlg_IsSingleChat_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IWWChatDlg_GetGroupID_Proxy( 
    IWWChatDlg * This,
    /* [retval][out] */ BSTR *pbstrGroupID);


void __RPC_STUB IWWChatDlg_GetGroupID_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IWWChatDlg_INTERFACE_DEFINED__ */


#ifndef __IWWChatDlgMgr_INTERFACE_DEFINED__
#define __IWWChatDlgMgr_INTERFACE_DEFINED__

/* interface IWWChatDlgMgr */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IWWChatDlgMgr;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("398FC5FB-96BD-4046-83AE-55A4206DAA8E")
    IWWChatDlgMgr : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnChatDlgCreated( 
            /* [in] */ BSTR bstrUID,
            /* [retval][out] */ ISDKChatDlg **ppChatDlg) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnChatDlgDestroyed( 
            /* [in] */ BSTR bstrUID) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnLogout( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWWChatDlgMgrVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWWChatDlgMgr * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWWChatDlgMgr * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWWChatDlgMgr * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IWWChatDlgMgr * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IWWChatDlgMgr * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IWWChatDlgMgr * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWWChatDlgMgr * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnChatDlgCreated )( 
            IWWChatDlgMgr * This,
            /* [in] */ BSTR bstrUID,
            /* [retval][out] */ ISDKChatDlg **ppChatDlg);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnChatDlgDestroyed )( 
            IWWChatDlgMgr * This,
            /* [in] */ BSTR bstrUID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnLogout )( 
            IWWChatDlgMgr * This);
        
        END_INTERFACE
    } IWWChatDlgMgrVtbl;

    interface IWWChatDlgMgr
    {
        CONST_VTBL struct IWWChatDlgMgrVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWWChatDlgMgr_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IWWChatDlgMgr_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IWWChatDlgMgr_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IWWChatDlgMgr_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IWWChatDlgMgr_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IWWChatDlgMgr_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IWWChatDlgMgr_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IWWChatDlgMgr_OnChatDlgCreated(This,bstrUID,ppChatDlg)	\
    (This)->lpVtbl -> OnChatDlgCreated(This,bstrUID,ppChatDlg)

#define IWWChatDlgMgr_OnChatDlgDestroyed(This,bstrUID)	\
    (This)->lpVtbl -> OnChatDlgDestroyed(This,bstrUID)

#define IWWChatDlgMgr_OnLogout(This)	\
    (This)->lpVtbl -> OnLogout(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IWWChatDlgMgr_OnChatDlgCreated_Proxy( 
    IWWChatDlgMgr * This,
    /* [in] */ BSTR bstrUID,
    /* [retval][out] */ ISDKChatDlg **ppChatDlg);


void __RPC_STUB IWWChatDlgMgr_OnChatDlgCreated_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IWWChatDlgMgr_OnChatDlgDestroyed_Proxy( 
    IWWChatDlgMgr * This,
    /* [in] */ BSTR bstrUID);


void __RPC_STUB IWWChatDlgMgr_OnChatDlgDestroyed_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IWWChatDlgMgr_OnLogout_Proxy( 
    IWWChatDlgMgr * This);


void __RPC_STUB IWWChatDlgMgr_OnLogout_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IWWChatDlgMgr_INTERFACE_DEFINED__ */


#ifndef __IWWMainFrame_INTERFACE_DEFINED__
#define __IWWMainFrame_INTERFACE_DEFINED__

/* interface IWWMainFrame */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IWWMainFrame;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("14834560-634A-4c05-81A3-6078EC802162")
    IWWMainFrame : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnImportantPanelCreated( 
            /* [in] */ IPluginMgrV2 *pPluginMgr,
            /* [retval][out] */ ISDKImportantPanelSlot **ppImportantSlot) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnImportantPanelDestroyed( 
            /* [in] */ IPluginMgrV2 *pPluginMgr) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnBottomPanelCreated( 
            /* [in] */ IPluginMgrV2 *pPluginMgr,
            /* [retval][out] */ ISDKBottomPanelSlot **ppImportantSlot) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnBottomPanelDestroyed( 
            /* [in] */ IPluginMgrV2 *pPluginMgr) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWWMainFrameVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWWMainFrame * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWWMainFrame * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWWMainFrame * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IWWMainFrame * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IWWMainFrame * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IWWMainFrame * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWWMainFrame * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnImportantPanelCreated )( 
            IWWMainFrame * This,
            /* [in] */ IPluginMgrV2 *pPluginMgr,
            /* [retval][out] */ ISDKImportantPanelSlot **ppImportantSlot);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnImportantPanelDestroyed )( 
            IWWMainFrame * This,
            /* [in] */ IPluginMgrV2 *pPluginMgr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnBottomPanelCreated )( 
            IWWMainFrame * This,
            /* [in] */ IPluginMgrV2 *pPluginMgr,
            /* [retval][out] */ ISDKBottomPanelSlot **ppImportantSlot);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnBottomPanelDestroyed )( 
            IWWMainFrame * This,
            /* [in] */ IPluginMgrV2 *pPluginMgr);
        
        END_INTERFACE
    } IWWMainFrameVtbl;

    interface IWWMainFrame
    {
        CONST_VTBL struct IWWMainFrameVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWWMainFrame_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IWWMainFrame_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IWWMainFrame_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IWWMainFrame_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IWWMainFrame_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IWWMainFrame_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IWWMainFrame_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IWWMainFrame_OnImportantPanelCreated(This,pPluginMgr,ppImportantSlot)	\
    (This)->lpVtbl -> OnImportantPanelCreated(This,pPluginMgr,ppImportantSlot)

#define IWWMainFrame_OnImportantPanelDestroyed(This,pPluginMgr)	\
    (This)->lpVtbl -> OnImportantPanelDestroyed(This,pPluginMgr)

#define IWWMainFrame_OnBottomPanelCreated(This,pPluginMgr,ppImportantSlot)	\
    (This)->lpVtbl -> OnBottomPanelCreated(This,pPluginMgr,ppImportantSlot)

#define IWWMainFrame_OnBottomPanelDestroyed(This,pPluginMgr)	\
    (This)->lpVtbl -> OnBottomPanelDestroyed(This,pPluginMgr)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IWWMainFrame_OnImportantPanelCreated_Proxy( 
    IWWMainFrame * This,
    /* [in] */ IPluginMgrV2 *pPluginMgr,
    /* [retval][out] */ ISDKImportantPanelSlot **ppImportantSlot);


void __RPC_STUB IWWMainFrame_OnImportantPanelCreated_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IWWMainFrame_OnImportantPanelDestroyed_Proxy( 
    IWWMainFrame * This,
    /* [in] */ IPluginMgrV2 *pPluginMgr);


void __RPC_STUB IWWMainFrame_OnImportantPanelDestroyed_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IWWMainFrame_OnBottomPanelCreated_Proxy( 
    IWWMainFrame * This,
    /* [in] */ IPluginMgrV2 *pPluginMgr,
    /* [retval][out] */ ISDKBottomPanelSlot **ppImportantSlot);


void __RPC_STUB IWWMainFrame_OnBottomPanelCreated_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IWWMainFrame_OnBottomPanelDestroyed_Proxy( 
    IWWMainFrame * This,
    /* [in] */ IPluginMgrV2 *pPluginMgr);


void __RPC_STUB IWWMainFrame_OnBottomPanelDestroyed_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IWWMainFrame_INTERFACE_DEFINED__ */


#ifndef __ISDKNotifyUserLogin_INTERFACE_DEFINED__
#define __ISDKNotifyUserLogin_INTERFACE_DEFINED__

/* interface ISDKNotifyUserLogin */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ISDKNotifyUserLogin;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D3880504-4B4B-4DD3-AA7E-E9956B72B83A")
    ISDKNotifyUserLogin : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_userId( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_userId( 
            /* [in] */ BSTR newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDKNotifyUserLoginVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDKNotifyUserLogin * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDKNotifyUserLogin * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDKNotifyUserLogin * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDKNotifyUserLogin * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDKNotifyUserLogin * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDKNotifyUserLogin * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDKNotifyUserLogin * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_userId )( 
            ISDKNotifyUserLogin * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_userId )( 
            ISDKNotifyUserLogin * This,
            /* [in] */ BSTR newVal);
        
        END_INTERFACE
    } ISDKNotifyUserLoginVtbl;

    interface ISDKNotifyUserLogin
    {
        CONST_VTBL struct ISDKNotifyUserLoginVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDKNotifyUserLogin_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISDKNotifyUserLogin_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISDKNotifyUserLogin_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISDKNotifyUserLogin_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ISDKNotifyUserLogin_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ISDKNotifyUserLogin_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ISDKNotifyUserLogin_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ISDKNotifyUserLogin_get_userId(This,pVal)	\
    (This)->lpVtbl -> get_userId(This,pVal)

#define ISDKNotifyUserLogin_put_userId(This,newVal)	\
    (This)->lpVtbl -> put_userId(This,newVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISDKNotifyUserLogin_get_userId_Proxy( 
    ISDKNotifyUserLogin * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB ISDKNotifyUserLogin_get_userId_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ISDKNotifyUserLogin_put_userId_Proxy( 
    ISDKNotifyUserLogin * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB ISDKNotifyUserLogin_put_userId_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISDKNotifyUserLogin_INTERFACE_DEFINED__ */


#ifndef __ISDKNotifyOffline_INTERFACE_DEFINED__
#define __ISDKNotifyOffline_INTERFACE_DEFINED__

/* interface ISDKNotifyOffline */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ISDKNotifyOffline;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E7315843-A3C1-4081-9747-5FB92EC36F0F")
    ISDKNotifyOffline : public IDispatch
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct ISDKNotifyOfflineVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDKNotifyOffline * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDKNotifyOffline * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDKNotifyOffline * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDKNotifyOffline * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDKNotifyOffline * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDKNotifyOffline * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDKNotifyOffline * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } ISDKNotifyOfflineVtbl;

    interface ISDKNotifyOffline
    {
        CONST_VTBL struct ISDKNotifyOfflineVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDKNotifyOffline_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISDKNotifyOffline_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISDKNotifyOffline_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISDKNotifyOffline_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ISDKNotifyOffline_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ISDKNotifyOffline_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ISDKNotifyOffline_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISDKNotifyOffline_INTERFACE_DEFINED__ */


#ifndef __ISubMenuItemInfo_INTERFACE_DEFINED__
#define __ISubMenuItemInfo_INTERFACE_DEFINED__

/* interface ISubMenuItemInfo */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ISubMenuItemInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("163A7C81-AF7A-4972-9FD5-52E1A92A65EA")
    ISubMenuItemInfo : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Id( 
            /* [retval][out] */ ULONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Id( 
            /* [in] */ ULONG newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Title( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Title( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Image( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Image( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Url( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Url( 
            /* [in] */ BSTR newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISubMenuItemInfoVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISubMenuItemInfo * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISubMenuItemInfo * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISubMenuItemInfo * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISubMenuItemInfo * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISubMenuItemInfo * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISubMenuItemInfo * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISubMenuItemInfo * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Id )( 
            ISubMenuItemInfo * This,
            /* [retval][out] */ ULONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Id )( 
            ISubMenuItemInfo * This,
            /* [in] */ ULONG newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Title )( 
            ISubMenuItemInfo * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Title )( 
            ISubMenuItemInfo * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Image )( 
            ISubMenuItemInfo * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Image )( 
            ISubMenuItemInfo * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Url )( 
            ISubMenuItemInfo * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Url )( 
            ISubMenuItemInfo * This,
            /* [in] */ BSTR newVal);
        
        END_INTERFACE
    } ISubMenuItemInfoVtbl;

    interface ISubMenuItemInfo
    {
        CONST_VTBL struct ISubMenuItemInfoVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISubMenuItemInfo_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISubMenuItemInfo_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISubMenuItemInfo_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISubMenuItemInfo_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ISubMenuItemInfo_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ISubMenuItemInfo_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ISubMenuItemInfo_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ISubMenuItemInfo_get_Id(This,pVal)	\
    (This)->lpVtbl -> get_Id(This,pVal)

#define ISubMenuItemInfo_put_Id(This,newVal)	\
    (This)->lpVtbl -> put_Id(This,newVal)

#define ISubMenuItemInfo_get_Title(This,pVal)	\
    (This)->lpVtbl -> get_Title(This,pVal)

#define ISubMenuItemInfo_put_Title(This,newVal)	\
    (This)->lpVtbl -> put_Title(This,newVal)

#define ISubMenuItemInfo_get_Image(This,pVal)	\
    (This)->lpVtbl -> get_Image(This,pVal)

#define ISubMenuItemInfo_put_Image(This,newVal)	\
    (This)->lpVtbl -> put_Image(This,newVal)

#define ISubMenuItemInfo_get_Url(This,pVal)	\
    (This)->lpVtbl -> get_Url(This,pVal)

#define ISubMenuItemInfo_put_Url(This,newVal)	\
    (This)->lpVtbl -> put_Url(This,newVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISubMenuItemInfo_get_Id_Proxy( 
    ISubMenuItemInfo * This,
    /* [retval][out] */ ULONG *pVal);


void __RPC_STUB ISubMenuItemInfo_get_Id_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ISubMenuItemInfo_put_Id_Proxy( 
    ISubMenuItemInfo * This,
    /* [in] */ ULONG newVal);


void __RPC_STUB ISubMenuItemInfo_put_Id_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISubMenuItemInfo_get_Title_Proxy( 
    ISubMenuItemInfo * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB ISubMenuItemInfo_get_Title_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ISubMenuItemInfo_put_Title_Proxy( 
    ISubMenuItemInfo * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB ISubMenuItemInfo_put_Title_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISubMenuItemInfo_get_Image_Proxy( 
    ISubMenuItemInfo * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB ISubMenuItemInfo_get_Image_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ISubMenuItemInfo_put_Image_Proxy( 
    ISubMenuItemInfo * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB ISubMenuItemInfo_put_Image_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISubMenuItemInfo_get_Url_Proxy( 
    ISubMenuItemInfo * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB ISubMenuItemInfo_get_Url_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ISubMenuItemInfo_put_Url_Proxy( 
    ISubMenuItemInfo * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB ISubMenuItemInfo_put_Url_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISubMenuItemInfo_INTERFACE_DEFINED__ */


#ifndef __ISDKNotifyChatMessage_INTERFACE_DEFINED__
#define __ISDKNotifyChatMessage_INTERFACE_DEFINED__

/* interface ISDKNotifyChatMessage */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ISDKNotifyChatMessage;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9E1DA6CB-30E2-45ED-88D1-5324F4DF0C1D")
    ISDKNotifyChatMessage : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_userId( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_userId( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_textMessage( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_textMessage( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_receive( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_receive( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDKNotifyChatMessageVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDKNotifyChatMessage * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDKNotifyChatMessage * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDKNotifyChatMessage * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDKNotifyChatMessage * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDKNotifyChatMessage * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDKNotifyChatMessage * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDKNotifyChatMessage * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_userId )( 
            ISDKNotifyChatMessage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_userId )( 
            ISDKNotifyChatMessage * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_textMessage )( 
            ISDKNotifyChatMessage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_textMessage )( 
            ISDKNotifyChatMessage * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_receive )( 
            ISDKNotifyChatMessage * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_receive )( 
            ISDKNotifyChatMessage * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        END_INTERFACE
    } ISDKNotifyChatMessageVtbl;

    interface ISDKNotifyChatMessage
    {
        CONST_VTBL struct ISDKNotifyChatMessageVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDKNotifyChatMessage_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISDKNotifyChatMessage_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISDKNotifyChatMessage_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISDKNotifyChatMessage_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ISDKNotifyChatMessage_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ISDKNotifyChatMessage_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ISDKNotifyChatMessage_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ISDKNotifyChatMessage_get_userId(This,pVal)	\
    (This)->lpVtbl -> get_userId(This,pVal)

#define ISDKNotifyChatMessage_put_userId(This,newVal)	\
    (This)->lpVtbl -> put_userId(This,newVal)

#define ISDKNotifyChatMessage_get_textMessage(This,pVal)	\
    (This)->lpVtbl -> get_textMessage(This,pVal)

#define ISDKNotifyChatMessage_put_textMessage(This,newVal)	\
    (This)->lpVtbl -> put_textMessage(This,newVal)

#define ISDKNotifyChatMessage_get_receive(This,pVal)	\
    (This)->lpVtbl -> get_receive(This,pVal)

#define ISDKNotifyChatMessage_put_receive(This,newVal)	\
    (This)->lpVtbl -> put_receive(This,newVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISDKNotifyChatMessage_get_userId_Proxy( 
    ISDKNotifyChatMessage * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB ISDKNotifyChatMessage_get_userId_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ISDKNotifyChatMessage_put_userId_Proxy( 
    ISDKNotifyChatMessage * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB ISDKNotifyChatMessage_put_userId_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISDKNotifyChatMessage_get_textMessage_Proxy( 
    ISDKNotifyChatMessage * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB ISDKNotifyChatMessage_get_textMessage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ISDKNotifyChatMessage_put_textMessage_Proxy( 
    ISDKNotifyChatMessage * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB ISDKNotifyChatMessage_put_textMessage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISDKNotifyChatMessage_get_receive_Proxy( 
    ISDKNotifyChatMessage * This,
    /* [retval][out] */ VARIANT_BOOL *pVal);


void __RPC_STUB ISDKNotifyChatMessage_get_receive_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ISDKNotifyChatMessage_put_receive_Proxy( 
    ISDKNotifyChatMessage * This,
    /* [in] */ VARIANT_BOOL newVal);


void __RPC_STUB ISDKNotifyChatMessage_put_receive_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISDKNotifyChatMessage_INTERFACE_DEFINED__ */


#ifndef __ISDKNotifyShowOption_INTERFACE_DEFINED__
#define __ISDKNotifyShowOption_INTERFACE_DEFINED__

/* interface ISDKNotifyShowOption */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ISDKNotifyShowOption;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B90C9697-AF48-41CB-8AC2-2100D8DBED2C")
    ISDKNotifyShowOption : public IDispatch
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct ISDKNotifyShowOptionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDKNotifyShowOption * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDKNotifyShowOption * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDKNotifyShowOption * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDKNotifyShowOption * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDKNotifyShowOption * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDKNotifyShowOption * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDKNotifyShowOption * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } ISDKNotifyShowOptionVtbl;

    interface ISDKNotifyShowOption
    {
        CONST_VTBL struct ISDKNotifyShowOptionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDKNotifyShowOption_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISDKNotifyShowOption_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISDKNotifyShowOption_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISDKNotifyShowOption_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ISDKNotifyShowOption_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ISDKNotifyShowOption_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ISDKNotifyShowOption_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISDKNotifyShowOption_INTERFACE_DEFINED__ */


#ifndef __ISDKNotifyContactTabChanging_INTERFACE_DEFINED__
#define __ISDKNotifyContactTabChanging_INTERFACE_DEFINED__

/* interface ISDKNotifyContactTabChanging */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ISDKNotifyContactTabChanging;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B7E2380A-8C04-4E41-8418-3ED3F9A34000")
    ISDKNotifyContactTabChanging : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_OldContact( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_OldContact( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_NewContact( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_NewContact( 
            /* [in] */ BSTR newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDKNotifyContactTabChangingVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDKNotifyContactTabChanging * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDKNotifyContactTabChanging * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDKNotifyContactTabChanging * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDKNotifyContactTabChanging * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDKNotifyContactTabChanging * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDKNotifyContactTabChanging * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDKNotifyContactTabChanging * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_OldContact )( 
            ISDKNotifyContactTabChanging * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_OldContact )( 
            ISDKNotifyContactTabChanging * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NewContact )( 
            ISDKNotifyContactTabChanging * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_NewContact )( 
            ISDKNotifyContactTabChanging * This,
            /* [in] */ BSTR newVal);
        
        END_INTERFACE
    } ISDKNotifyContactTabChangingVtbl;

    interface ISDKNotifyContactTabChanging
    {
        CONST_VTBL struct ISDKNotifyContactTabChangingVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDKNotifyContactTabChanging_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISDKNotifyContactTabChanging_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISDKNotifyContactTabChanging_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISDKNotifyContactTabChanging_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ISDKNotifyContactTabChanging_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ISDKNotifyContactTabChanging_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ISDKNotifyContactTabChanging_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ISDKNotifyContactTabChanging_get_OldContact(This,pVal)	\
    (This)->lpVtbl -> get_OldContact(This,pVal)

#define ISDKNotifyContactTabChanging_put_OldContact(This,newVal)	\
    (This)->lpVtbl -> put_OldContact(This,newVal)

#define ISDKNotifyContactTabChanging_get_NewContact(This,pVal)	\
    (This)->lpVtbl -> get_NewContact(This,pVal)

#define ISDKNotifyContactTabChanging_put_NewContact(This,newVal)	\
    (This)->lpVtbl -> put_NewContact(This,newVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISDKNotifyContactTabChanging_get_OldContact_Proxy( 
    ISDKNotifyContactTabChanging * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB ISDKNotifyContactTabChanging_get_OldContact_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ISDKNotifyContactTabChanging_put_OldContact_Proxy( 
    ISDKNotifyContactTabChanging * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB ISDKNotifyContactTabChanging_put_OldContact_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISDKNotifyContactTabChanging_get_NewContact_Proxy( 
    ISDKNotifyContactTabChanging * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB ISDKNotifyContactTabChanging_get_NewContact_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ISDKNotifyContactTabChanging_put_NewContact_Proxy( 
    ISDKNotifyContactTabChanging * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB ISDKNotifyContactTabChanging_put_NewContact_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISDKNotifyContactTabChanging_INTERFACE_DEFINED__ */


#ifndef __ISDKNotifyContactTabChanged_INTERFACE_DEFINED__
#define __ISDKNotifyContactTabChanged_INTERFACE_DEFINED__

/* interface ISDKNotifyContactTabChanged */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ISDKNotifyContactTabChanged;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1D9285ED-C9E8-40D4-8149-8EC3221DAA37")
    ISDKNotifyContactTabChanged : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_OldContact( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_OldContact( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_NewContact( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_NewContact( 
            /* [in] */ BSTR newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDKNotifyContactTabChangedVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDKNotifyContactTabChanged * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDKNotifyContactTabChanged * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDKNotifyContactTabChanged * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDKNotifyContactTabChanged * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDKNotifyContactTabChanged * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDKNotifyContactTabChanged * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDKNotifyContactTabChanged * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_OldContact )( 
            ISDKNotifyContactTabChanged * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_OldContact )( 
            ISDKNotifyContactTabChanged * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NewContact )( 
            ISDKNotifyContactTabChanged * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_NewContact )( 
            ISDKNotifyContactTabChanged * This,
            /* [in] */ BSTR newVal);
        
        END_INTERFACE
    } ISDKNotifyContactTabChangedVtbl;

    interface ISDKNotifyContactTabChanged
    {
        CONST_VTBL struct ISDKNotifyContactTabChangedVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDKNotifyContactTabChanged_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISDKNotifyContactTabChanged_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISDKNotifyContactTabChanged_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISDKNotifyContactTabChanged_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ISDKNotifyContactTabChanged_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ISDKNotifyContactTabChanged_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ISDKNotifyContactTabChanged_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ISDKNotifyContactTabChanged_get_OldContact(This,pVal)	\
    (This)->lpVtbl -> get_OldContact(This,pVal)

#define ISDKNotifyContactTabChanged_put_OldContact(This,newVal)	\
    (This)->lpVtbl -> put_OldContact(This,newVal)

#define ISDKNotifyContactTabChanged_get_NewContact(This,pVal)	\
    (This)->lpVtbl -> get_NewContact(This,pVal)

#define ISDKNotifyContactTabChanged_put_NewContact(This,newVal)	\
    (This)->lpVtbl -> put_NewContact(This,newVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISDKNotifyContactTabChanged_get_OldContact_Proxy( 
    ISDKNotifyContactTabChanged * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB ISDKNotifyContactTabChanged_get_OldContact_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ISDKNotifyContactTabChanged_put_OldContact_Proxy( 
    ISDKNotifyContactTabChanged * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB ISDKNotifyContactTabChanged_put_OldContact_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISDKNotifyContactTabChanged_get_NewContact_Proxy( 
    ISDKNotifyContactTabChanged * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB ISDKNotifyContactTabChanged_get_NewContact_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ISDKNotifyContactTabChanged_put_NewContact_Proxy( 
    ISDKNotifyContactTabChanged * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB ISDKNotifyContactTabChanged_put_NewContact_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISDKNotifyContactTabChanged_INTERFACE_DEFINED__ */


#ifndef __IWWPluginKey_INTERFACE_DEFINED__
#define __IWWPluginKey_INTERFACE_DEFINED__

/* interface IWWPluginKey */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IWWPluginKey;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D3508402-65C2-4490-866D-9CAC55FBB770")
    IWWPluginKey : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_AppID( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_AppID( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Version( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Version( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PluginInfoFlag( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_PluginInfoFlag( 
            /* [in] */ LONG newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWWPluginKeyVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWWPluginKey * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWWPluginKey * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWWPluginKey * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IWWPluginKey * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IWWPluginKey * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IWWPluginKey * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWWPluginKey * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AppID )( 
            IWWPluginKey * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AppID )( 
            IWWPluginKey * This,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Version )( 
            IWWPluginKey * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Version )( 
            IWWPluginKey * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PluginInfoFlag )( 
            IWWPluginKey * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PluginInfoFlag )( 
            IWWPluginKey * This,
            /* [in] */ LONG newVal);
        
        END_INTERFACE
    } IWWPluginKeyVtbl;

    interface IWWPluginKey
    {
        CONST_VTBL struct IWWPluginKeyVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWWPluginKey_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IWWPluginKey_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IWWPluginKey_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IWWPluginKey_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IWWPluginKey_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IWWPluginKey_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IWWPluginKey_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IWWPluginKey_get_AppID(This,pVal)	\
    (This)->lpVtbl -> get_AppID(This,pVal)

#define IWWPluginKey_put_AppID(This,newVal)	\
    (This)->lpVtbl -> put_AppID(This,newVal)

#define IWWPluginKey_get_Version(This,pVal)	\
    (This)->lpVtbl -> get_Version(This,pVal)

#define IWWPluginKey_put_Version(This,newVal)	\
    (This)->lpVtbl -> put_Version(This,newVal)

#define IWWPluginKey_get_PluginInfoFlag(This,pVal)	\
    (This)->lpVtbl -> get_PluginInfoFlag(This,pVal)

#define IWWPluginKey_put_PluginInfoFlag(This,newVal)	\
    (This)->lpVtbl -> put_PluginInfoFlag(This,newVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWWPluginKey_get_AppID_Proxy( 
    IWWPluginKey * This,
    /* [retval][out] */ LONG *pVal);


void __RPC_STUB IWWPluginKey_get_AppID_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IWWPluginKey_put_AppID_Proxy( 
    IWWPluginKey * This,
    /* [in] */ LONG newVal);


void __RPC_STUB IWWPluginKey_put_AppID_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWWPluginKey_get_Version_Proxy( 
    IWWPluginKey * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IWWPluginKey_get_Version_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IWWPluginKey_put_Version_Proxy( 
    IWWPluginKey * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IWWPluginKey_put_Version_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWWPluginKey_get_PluginInfoFlag_Proxy( 
    IWWPluginKey * This,
    /* [retval][out] */ LONG *pVal);


void __RPC_STUB IWWPluginKey_get_PluginInfoFlag_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IWWPluginKey_put_PluginInfoFlag_Proxy( 
    IWWPluginKey * This,
    /* [in] */ LONG newVal);


void __RPC_STUB IWWPluginKey_put_PluginInfoFlag_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IWWPluginKey_INTERFACE_DEFINED__ */


#ifndef __IWWPluginQueryRes_INTERFACE_DEFINED__
#define __IWWPluginQueryRes_INTERFACE_DEFINED__

/* interface IWWPluginQueryRes */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IWWPluginQueryRes;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("67E25B01-8EE1-45FA-8F8B-D583594F5C54")
    IWWPluginQueryRes : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_AppId( 
            /* [retval][out] */ LONG *pID) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_AppId( 
            /* [in] */ LONG id) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Version( 
            /* [retval][out] */ BSTR *pVersion) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Version( 
            /* [in] */ BSTR version) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SecurityLevel( 
            /* [retval][out] */ enum SDKSecurityLevel *pLevel) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_SecurityLevel( 
            /* [in] */ enum SDKSecurityLevel level) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PluginXmlChecksum( 
            /* [retval][out] */ BSTR *pChecksum) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_PluginXmlChecksum( 
            /* [in] */ BSTR checksum) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PluginInfoFlag( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_PluginInfoFlag( 
            /* [in] */ LONG newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWWPluginQueryResVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWWPluginQueryRes * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWWPluginQueryRes * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWWPluginQueryRes * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IWWPluginQueryRes * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IWWPluginQueryRes * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IWWPluginQueryRes * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWWPluginQueryRes * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AppId )( 
            IWWPluginQueryRes * This,
            /* [retval][out] */ LONG *pID);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AppId )( 
            IWWPluginQueryRes * This,
            /* [in] */ LONG id);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Version )( 
            IWWPluginQueryRes * This,
            /* [retval][out] */ BSTR *pVersion);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Version )( 
            IWWPluginQueryRes * This,
            /* [in] */ BSTR version);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SecurityLevel )( 
            IWWPluginQueryRes * This,
            /* [retval][out] */ enum SDKSecurityLevel *pLevel);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SecurityLevel )( 
            IWWPluginQueryRes * This,
            /* [in] */ enum SDKSecurityLevel level);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PluginXmlChecksum )( 
            IWWPluginQueryRes * This,
            /* [retval][out] */ BSTR *pChecksum);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PluginXmlChecksum )( 
            IWWPluginQueryRes * This,
            /* [in] */ BSTR checksum);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PluginInfoFlag )( 
            IWWPluginQueryRes * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PluginInfoFlag )( 
            IWWPluginQueryRes * This,
            /* [in] */ LONG newVal);
        
        END_INTERFACE
    } IWWPluginQueryResVtbl;

    interface IWWPluginQueryRes
    {
        CONST_VTBL struct IWWPluginQueryResVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWWPluginQueryRes_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IWWPluginQueryRes_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IWWPluginQueryRes_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IWWPluginQueryRes_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IWWPluginQueryRes_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IWWPluginQueryRes_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IWWPluginQueryRes_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IWWPluginQueryRes_get_AppId(This,pID)	\
    (This)->lpVtbl -> get_AppId(This,pID)

#define IWWPluginQueryRes_put_AppId(This,id)	\
    (This)->lpVtbl -> put_AppId(This,id)

#define IWWPluginQueryRes_get_Version(This,pVersion)	\
    (This)->lpVtbl -> get_Version(This,pVersion)

#define IWWPluginQueryRes_put_Version(This,version)	\
    (This)->lpVtbl -> put_Version(This,version)

#define IWWPluginQueryRes_get_SecurityLevel(This,pLevel)	\
    (This)->lpVtbl -> get_SecurityLevel(This,pLevel)

#define IWWPluginQueryRes_put_SecurityLevel(This,level)	\
    (This)->lpVtbl -> put_SecurityLevel(This,level)

#define IWWPluginQueryRes_get_PluginXmlChecksum(This,pChecksum)	\
    (This)->lpVtbl -> get_PluginXmlChecksum(This,pChecksum)

#define IWWPluginQueryRes_put_PluginXmlChecksum(This,checksum)	\
    (This)->lpVtbl -> put_PluginXmlChecksum(This,checksum)

#define IWWPluginQueryRes_get_PluginInfoFlag(This,pVal)	\
    (This)->lpVtbl -> get_PluginInfoFlag(This,pVal)

#define IWWPluginQueryRes_put_PluginInfoFlag(This,newVal)	\
    (This)->lpVtbl -> put_PluginInfoFlag(This,newVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWWPluginQueryRes_get_AppId_Proxy( 
    IWWPluginQueryRes * This,
    /* [retval][out] */ LONG *pID);


void __RPC_STUB IWWPluginQueryRes_get_AppId_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IWWPluginQueryRes_put_AppId_Proxy( 
    IWWPluginQueryRes * This,
    /* [in] */ LONG id);


void __RPC_STUB IWWPluginQueryRes_put_AppId_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWWPluginQueryRes_get_Version_Proxy( 
    IWWPluginQueryRes * This,
    /* [retval][out] */ BSTR *pVersion);


void __RPC_STUB IWWPluginQueryRes_get_Version_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IWWPluginQueryRes_put_Version_Proxy( 
    IWWPluginQueryRes * This,
    /* [in] */ BSTR version);


void __RPC_STUB IWWPluginQueryRes_put_Version_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWWPluginQueryRes_get_SecurityLevel_Proxy( 
    IWWPluginQueryRes * This,
    /* [retval][out] */ enum SDKSecurityLevel *pLevel);


void __RPC_STUB IWWPluginQueryRes_get_SecurityLevel_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IWWPluginQueryRes_put_SecurityLevel_Proxy( 
    IWWPluginQueryRes * This,
    /* [in] */ enum SDKSecurityLevel level);


void __RPC_STUB IWWPluginQueryRes_put_SecurityLevel_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWWPluginQueryRes_get_PluginXmlChecksum_Proxy( 
    IWWPluginQueryRes * This,
    /* [retval][out] */ BSTR *pChecksum);


void __RPC_STUB IWWPluginQueryRes_get_PluginXmlChecksum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IWWPluginQueryRes_put_PluginXmlChecksum_Proxy( 
    IWWPluginQueryRes * This,
    /* [in] */ BSTR checksum);


void __RPC_STUB IWWPluginQueryRes_put_PluginXmlChecksum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWWPluginQueryRes_get_PluginInfoFlag_Proxy( 
    IWWPluginQueryRes * This,
    /* [retval][out] */ LONG *pVal);


void __RPC_STUB IWWPluginQueryRes_get_PluginInfoFlag_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IWWPluginQueryRes_put_PluginInfoFlag_Proxy( 
    IWWPluginQueryRes * This,
    /* [in] */ LONG newVal);


void __RPC_STUB IWWPluginQueryRes_put_PluginInfoFlag_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IWWPluginQueryRes_INTERFACE_DEFINED__ */


#ifndef __ISDKGroup_INTERFACE_DEFINED__
#define __ISDKGroup_INTERFACE_DEFINED__

/* interface ISDKGroup */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ISDKGroup;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6586EF06-F071-4944-8D13-1C198B943A47")
    ISDKGroup : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetParentGroup( 
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ IDispatch **ppSDKGroup) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetSubGroupCollection( 
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ ISDKObjectCollection **ppGroupCollection) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetContactCollection( 
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ ISDKObjectCollection **ppContactCollection) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetGroupID( 
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ BSTR *pGroupID) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetGroupName( 
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ BSTR *pGroupName) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDKGroupVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDKGroup * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDKGroup * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDKGroup * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDKGroup * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDKGroup * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDKGroup * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDKGroup * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetParentGroup )( 
            ISDKGroup * This,
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ IDispatch **ppSDKGroup);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSubGroupCollection )( 
            ISDKGroup * This,
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ ISDKObjectCollection **ppGroupCollection);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetContactCollection )( 
            ISDKGroup * This,
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ ISDKObjectCollection **ppContactCollection);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetGroupID )( 
            ISDKGroup * This,
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ BSTR *pGroupID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetGroupName )( 
            ISDKGroup * This,
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ BSTR *pGroupName);
        
        END_INTERFACE
    } ISDKGroupVtbl;

    interface ISDKGroup
    {
        CONST_VTBL struct ISDKGroupVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDKGroup_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISDKGroup_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISDKGroup_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISDKGroup_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ISDKGroup_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ISDKGroup_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ISDKGroup_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ISDKGroup_GetParentGroup(This,lPluginCookie,ppSDKGroup)	\
    (This)->lpVtbl -> GetParentGroup(This,lPluginCookie,ppSDKGroup)

#define ISDKGroup_GetSubGroupCollection(This,lPluginCookie,ppGroupCollection)	\
    (This)->lpVtbl -> GetSubGroupCollection(This,lPluginCookie,ppGroupCollection)

#define ISDKGroup_GetContactCollection(This,lPluginCookie,ppContactCollection)	\
    (This)->lpVtbl -> GetContactCollection(This,lPluginCookie,ppContactCollection)

#define ISDKGroup_GetGroupID(This,lPluginCookie,pGroupID)	\
    (This)->lpVtbl -> GetGroupID(This,lPluginCookie,pGroupID)

#define ISDKGroup_GetGroupName(This,lPluginCookie,pGroupName)	\
    (This)->lpVtbl -> GetGroupName(This,lPluginCookie,pGroupName)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISDKGroup_GetParentGroup_Proxy( 
    ISDKGroup * This,
    /* [in] */ LONG lPluginCookie,
    /* [retval][out] */ IDispatch **ppSDKGroup);


void __RPC_STUB ISDKGroup_GetParentGroup_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISDKGroup_GetSubGroupCollection_Proxy( 
    ISDKGroup * This,
    /* [in] */ LONG lPluginCookie,
    /* [retval][out] */ ISDKObjectCollection **ppGroupCollection);


void __RPC_STUB ISDKGroup_GetSubGroupCollection_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISDKGroup_GetContactCollection_Proxy( 
    ISDKGroup * This,
    /* [in] */ LONG lPluginCookie,
    /* [retval][out] */ ISDKObjectCollection **ppContactCollection);


void __RPC_STUB ISDKGroup_GetContactCollection_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISDKGroup_GetGroupID_Proxy( 
    ISDKGroup * This,
    /* [in] */ LONG lPluginCookie,
    /* [retval][out] */ BSTR *pGroupID);


void __RPC_STUB ISDKGroup_GetGroupID_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISDKGroup_GetGroupName_Proxy( 
    ISDKGroup * This,
    /* [in] */ LONG lPluginCookie,
    /* [retval][out] */ BSTR *pGroupName);


void __RPC_STUB ISDKGroup_GetGroupName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISDKGroup_INTERFACE_DEFINED__ */


#ifndef __IWWGroup_INTERFACE_DEFINED__
#define __IWWGroup_INTERFACE_DEFINED__

/* interface IWWGroup */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IWWGroup;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3CB88DA5-C3E6-4b0e-8C08-0206426706DC")
    IWWGroup : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetGroupInfo( 
            /* [in] */ BSTR bstrGroupID) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWWGroupVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWWGroup * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWWGroup * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWWGroup * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IWWGroup * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IWWGroup * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IWWGroup * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWWGroup * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetGroupInfo )( 
            IWWGroup * This,
            /* [in] */ BSTR bstrGroupID);
        
        END_INTERFACE
    } IWWGroupVtbl;

    interface IWWGroup
    {
        CONST_VTBL struct IWWGroupVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWWGroup_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IWWGroup_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IWWGroup_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IWWGroup_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IWWGroup_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IWWGroup_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IWWGroup_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IWWGroup_SetGroupInfo(This,bstrGroupID)	\
    (This)->lpVtbl -> SetGroupInfo(This,bstrGroupID)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IWWGroup_SetGroupInfo_Proxy( 
    IWWGroup * This,
    /* [in] */ BSTR bstrGroupID);


void __RPC_STUB IWWGroup_SetGroupInfo_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IWWGroup_INTERFACE_DEFINED__ */


#ifndef __IWWPluginMonitor_INTERFACE_DEFINED__
#define __IWWPluginMonitor_INTERFACE_DEFINED__

/* interface IWWPluginMonitor */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IWWPluginMonitor;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("DDB11430-F716-47FA-8546-B4DFFEF8CCF9")
    IWWPluginMonitor : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Init( 
            /* [in] */ IDispatch *spPluginMgr) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE UnInit( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ IDispatch *pDisp) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Remove( 
            /* [in] */ IDispatch *pDisp) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ReportStatus( 
            /* [in] */ IDispatch *pDisp) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE KillLoader( 
            /* [in] */ LONG lRunMode) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWWPluginMonitorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWWPluginMonitor * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWWPluginMonitor * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWWPluginMonitor * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IWWPluginMonitor * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IWWPluginMonitor * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IWWPluginMonitor * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWWPluginMonitor * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Init )( 
            IWWPluginMonitor * This,
            /* [in] */ IDispatch *spPluginMgr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *UnInit )( 
            IWWPluginMonitor * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Add )( 
            IWWPluginMonitor * This,
            /* [in] */ IDispatch *pDisp);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            IWWPluginMonitor * This,
            /* [in] */ IDispatch *pDisp);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ReportStatus )( 
            IWWPluginMonitor * This,
            /* [in] */ IDispatch *pDisp);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *KillLoader )( 
            IWWPluginMonitor * This,
            /* [in] */ LONG lRunMode);
        
        END_INTERFACE
    } IWWPluginMonitorVtbl;

    interface IWWPluginMonitor
    {
        CONST_VTBL struct IWWPluginMonitorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWWPluginMonitor_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IWWPluginMonitor_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IWWPluginMonitor_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IWWPluginMonitor_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IWWPluginMonitor_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IWWPluginMonitor_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IWWPluginMonitor_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IWWPluginMonitor_Init(This,spPluginMgr)	\
    (This)->lpVtbl -> Init(This,spPluginMgr)

#define IWWPluginMonitor_UnInit(This)	\
    (This)->lpVtbl -> UnInit(This)

#define IWWPluginMonitor_Add(This,pDisp)	\
    (This)->lpVtbl -> Add(This,pDisp)

#define IWWPluginMonitor_Remove(This,pDisp)	\
    (This)->lpVtbl -> Remove(This,pDisp)

#define IWWPluginMonitor_ReportStatus(This,pDisp)	\
    (This)->lpVtbl -> ReportStatus(This,pDisp)

#define IWWPluginMonitor_KillLoader(This,lRunMode)	\
    (This)->lpVtbl -> KillLoader(This,lRunMode)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IWWPluginMonitor_Init_Proxy( 
    IWWPluginMonitor * This,
    /* [in] */ IDispatch *spPluginMgr);


void __RPC_STUB IWWPluginMonitor_Init_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IWWPluginMonitor_UnInit_Proxy( 
    IWWPluginMonitor * This);


void __RPC_STUB IWWPluginMonitor_UnInit_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IWWPluginMonitor_Add_Proxy( 
    IWWPluginMonitor * This,
    /* [in] */ IDispatch *pDisp);


void __RPC_STUB IWWPluginMonitor_Add_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IWWPluginMonitor_Remove_Proxy( 
    IWWPluginMonitor * This,
    /* [in] */ IDispatch *pDisp);


void __RPC_STUB IWWPluginMonitor_Remove_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IWWPluginMonitor_ReportStatus_Proxy( 
    IWWPluginMonitor * This,
    /* [in] */ IDispatch *pDisp);


void __RPC_STUB IWWPluginMonitor_ReportStatus_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IWWPluginMonitor_KillLoader_Proxy( 
    IWWPluginMonitor * This,
    /* [in] */ LONG lRunMode);


void __RPC_STUB IWWPluginMonitor_KillLoader_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IWWPluginMonitor_INTERFACE_DEFINED__ */


#ifndef __IWWPluginProxy_INTERFACE_DEFINED__
#define __IWWPluginProxy_INTERFACE_DEFINED__

/* interface IWWPluginProxy */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IWWPluginProxy;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("25C46B70-081C-4FA1-8B73-8A6E0960DBB9")
    IWWPluginProxy : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Init( 
            /* [in] */ IDispatch *spPluginMgr,
            /* [in] */ LONG lAppID) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE UnInit( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddItem( 
            /* [in] */ BSTR bstrItemID,
            /* [in] */ IDispatch *pItemInfo,
            /* [in] */ IDispatch *pItemFacade) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE JITCreateItem( 
            /* [in] */ LONG lAppID,
            /* [in] */ BSTR bstrItemKey,
            /* [in] */ IDispatch *pIemInfo,
            /* [retval][out] */ IDispatch **ppRealItem) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RemoveItem( 
            /* [in] */ BSTR bstrItemID) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE StopPlugin( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWWPluginProxyVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWWPluginProxy * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWWPluginProxy * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWWPluginProxy * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IWWPluginProxy * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IWWPluginProxy * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IWWPluginProxy * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWWPluginProxy * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Init )( 
            IWWPluginProxy * This,
            /* [in] */ IDispatch *spPluginMgr,
            /* [in] */ LONG lAppID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *UnInit )( 
            IWWPluginProxy * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddItem )( 
            IWWPluginProxy * This,
            /* [in] */ BSTR bstrItemID,
            /* [in] */ IDispatch *pItemInfo,
            /* [in] */ IDispatch *pItemFacade);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *JITCreateItem )( 
            IWWPluginProxy * This,
            /* [in] */ LONG lAppID,
            /* [in] */ BSTR bstrItemKey,
            /* [in] */ IDispatch *pIemInfo,
            /* [retval][out] */ IDispatch **ppRealItem);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RemoveItem )( 
            IWWPluginProxy * This,
            /* [in] */ BSTR bstrItemID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *StopPlugin )( 
            IWWPluginProxy * This);
        
        END_INTERFACE
    } IWWPluginProxyVtbl;

    interface IWWPluginProxy
    {
        CONST_VTBL struct IWWPluginProxyVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWWPluginProxy_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IWWPluginProxy_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IWWPluginProxy_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IWWPluginProxy_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IWWPluginProxy_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IWWPluginProxy_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IWWPluginProxy_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IWWPluginProxy_Init(This,spPluginMgr,lAppID)	\
    (This)->lpVtbl -> Init(This,spPluginMgr,lAppID)

#define IWWPluginProxy_UnInit(This)	\
    (This)->lpVtbl -> UnInit(This)

#define IWWPluginProxy_AddItem(This,bstrItemID,pItemInfo,pItemFacade)	\
    (This)->lpVtbl -> AddItem(This,bstrItemID,pItemInfo,pItemFacade)

#define IWWPluginProxy_JITCreateItem(This,lAppID,bstrItemKey,pIemInfo,ppRealItem)	\
    (This)->lpVtbl -> JITCreateItem(This,lAppID,bstrItemKey,pIemInfo,ppRealItem)

#define IWWPluginProxy_RemoveItem(This,bstrItemID)	\
    (This)->lpVtbl -> RemoveItem(This,bstrItemID)

#define IWWPluginProxy_StopPlugin(This)	\
    (This)->lpVtbl -> StopPlugin(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IWWPluginProxy_Init_Proxy( 
    IWWPluginProxy * This,
    /* [in] */ IDispatch *spPluginMgr,
    /* [in] */ LONG lAppID);


void __RPC_STUB IWWPluginProxy_Init_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IWWPluginProxy_UnInit_Proxy( 
    IWWPluginProxy * This);


void __RPC_STUB IWWPluginProxy_UnInit_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IWWPluginProxy_AddItem_Proxy( 
    IWWPluginProxy * This,
    /* [in] */ BSTR bstrItemID,
    /* [in] */ IDispatch *pItemInfo,
    /* [in] */ IDispatch *pItemFacade);


void __RPC_STUB IWWPluginProxy_AddItem_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IWWPluginProxy_JITCreateItem_Proxy( 
    IWWPluginProxy * This,
    /* [in] */ LONG lAppID,
    /* [in] */ BSTR bstrItemKey,
    /* [in] */ IDispatch *pIemInfo,
    /* [retval][out] */ IDispatch **ppRealItem);


void __RPC_STUB IWWPluginProxy_JITCreateItem_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IWWPluginProxy_RemoveItem_Proxy( 
    IWWPluginProxy * This,
    /* [in] */ BSTR bstrItemID);


void __RPC_STUB IWWPluginProxy_RemoveItem_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IWWPluginProxy_StopPlugin_Proxy( 
    IWWPluginProxy * This);


void __RPC_STUB IWWPluginProxy_StopPlugin_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IWWPluginProxy_INTERFACE_DEFINED__ */


#ifndef __IWWItemFacade_INTERFACE_DEFINED__
#define __IWWItemFacade_INTERFACE_DEFINED__

/* interface IWWItemFacade */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IWWItemFacade;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5634A90C-B2B6-4A33-BBF9-8E75347A5B01")
    IWWItemFacade : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Init( 
            /* [in] */ BSTR bstrItemKey,
            /* [in] */ IDispatch *pItemInfo) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE UnInit( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWWItemFacadeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWWItemFacade * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWWItemFacade * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWWItemFacade * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IWWItemFacade * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IWWItemFacade * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IWWItemFacade * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWWItemFacade * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Init )( 
            IWWItemFacade * This,
            /* [in] */ BSTR bstrItemKey,
            /* [in] */ IDispatch *pItemInfo);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *UnInit )( 
            IWWItemFacade * This);
        
        END_INTERFACE
    } IWWItemFacadeVtbl;

    interface IWWItemFacade
    {
        CONST_VTBL struct IWWItemFacadeVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWWItemFacade_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IWWItemFacade_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IWWItemFacade_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IWWItemFacade_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IWWItemFacade_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IWWItemFacade_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IWWItemFacade_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IWWItemFacade_Init(This,bstrItemKey,pItemInfo)	\
    (This)->lpVtbl -> Init(This,bstrItemKey,pItemInfo)

#define IWWItemFacade_UnInit(This)	\
    (This)->lpVtbl -> UnInit(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IWWItemFacade_Init_Proxy( 
    IWWItemFacade * This,
    /* [in] */ BSTR bstrItemKey,
    /* [in] */ IDispatch *pItemInfo);


void __RPC_STUB IWWItemFacade_Init_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IWWItemFacade_UnInit_Proxy( 
    IWWItemFacade * This);


void __RPC_STUB IWWItemFacade_UnInit_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IWWItemFacade_INTERFACE_DEFINED__ */


#ifndef __IWWPluginInfo_INTERFACE_DEFINED__
#define __IWWPluginInfo_INTERFACE_DEFINED__

/* interface IWWPluginInfo */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IWWPluginInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("51B9A953-8DEC-43B9-A222-C37FB763B1CD")
    IWWPluginInfo : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_AppID( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_AppID( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SDKVersion( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_SDKVersion( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IsLoadBeforeLogin( 
            /* [retval][out] */ VARIANT_BOOL *vbPreload) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Preload( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Preload( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_AutoSubscribe( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_AutoSubscribe( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_RunMode( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_RunMode( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PluginGUID( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_PluginGUID( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PluginType( 
            /* [retval][out] */ enum SDKPluginType *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_PluginType( 
            /* [in] */ enum SDKPluginType newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ConfigFile( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ConfigFile( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Silent( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Silent( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWWPluginInfoVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWWPluginInfo * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWWPluginInfo * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWWPluginInfo * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IWWPluginInfo * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IWWPluginInfo * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IWWPluginInfo * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWWPluginInfo * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AppID )( 
            IWWPluginInfo * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AppID )( 
            IWWPluginInfo * This,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SDKVersion )( 
            IWWPluginInfo * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SDKVersion )( 
            IWWPluginInfo * This,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *IsLoadBeforeLogin )( 
            IWWPluginInfo * This,
            /* [retval][out] */ VARIANT_BOOL *vbPreload);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Preload )( 
            IWWPluginInfo * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Preload )( 
            IWWPluginInfo * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AutoSubscribe )( 
            IWWPluginInfo * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AutoSubscribe )( 
            IWWPluginInfo * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RunMode )( 
            IWWPluginInfo * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RunMode )( 
            IWWPluginInfo * This,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PluginGUID )( 
            IWWPluginInfo * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PluginGUID )( 
            IWWPluginInfo * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PluginType )( 
            IWWPluginInfo * This,
            /* [retval][out] */ enum SDKPluginType *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PluginType )( 
            IWWPluginInfo * This,
            /* [in] */ enum SDKPluginType newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ConfigFile )( 
            IWWPluginInfo * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ConfigFile )( 
            IWWPluginInfo * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Silent )( 
            IWWPluginInfo * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Silent )( 
            IWWPluginInfo * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        END_INTERFACE
    } IWWPluginInfoVtbl;

    interface IWWPluginInfo
    {
        CONST_VTBL struct IWWPluginInfoVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWWPluginInfo_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IWWPluginInfo_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IWWPluginInfo_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IWWPluginInfo_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IWWPluginInfo_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IWWPluginInfo_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IWWPluginInfo_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IWWPluginInfo_get_AppID(This,pVal)	\
    (This)->lpVtbl -> get_AppID(This,pVal)

#define IWWPluginInfo_put_AppID(This,newVal)	\
    (This)->lpVtbl -> put_AppID(This,newVal)

#define IWWPluginInfo_get_SDKVersion(This,pVal)	\
    (This)->lpVtbl -> get_SDKVersion(This,pVal)

#define IWWPluginInfo_put_SDKVersion(This,newVal)	\
    (This)->lpVtbl -> put_SDKVersion(This,newVal)

#define IWWPluginInfo_IsLoadBeforeLogin(This,vbPreload)	\
    (This)->lpVtbl -> IsLoadBeforeLogin(This,vbPreload)

#define IWWPluginInfo_get_Preload(This,pVal)	\
    (This)->lpVtbl -> get_Preload(This,pVal)

#define IWWPluginInfo_put_Preload(This,newVal)	\
    (This)->lpVtbl -> put_Preload(This,newVal)

#define IWWPluginInfo_get_AutoSubscribe(This,pVal)	\
    (This)->lpVtbl -> get_AutoSubscribe(This,pVal)

#define IWWPluginInfo_put_AutoSubscribe(This,newVal)	\
    (This)->lpVtbl -> put_AutoSubscribe(This,newVal)

#define IWWPluginInfo_get_RunMode(This,pVal)	\
    (This)->lpVtbl -> get_RunMode(This,pVal)

#define IWWPluginInfo_put_RunMode(This,newVal)	\
    (This)->lpVtbl -> put_RunMode(This,newVal)

#define IWWPluginInfo_get_PluginGUID(This,pVal)	\
    (This)->lpVtbl -> get_PluginGUID(This,pVal)

#define IWWPluginInfo_put_PluginGUID(This,newVal)	\
    (This)->lpVtbl -> put_PluginGUID(This,newVal)

#define IWWPluginInfo_get_PluginType(This,pVal)	\
    (This)->lpVtbl -> get_PluginType(This,pVal)

#define IWWPluginInfo_put_PluginType(This,newVal)	\
    (This)->lpVtbl -> put_PluginType(This,newVal)

#define IWWPluginInfo_get_ConfigFile(This,pVal)	\
    (This)->lpVtbl -> get_ConfigFile(This,pVal)

#define IWWPluginInfo_put_ConfigFile(This,newVal)	\
    (This)->lpVtbl -> put_ConfigFile(This,newVal)

#define IWWPluginInfo_get_Silent(This,pVal)	\
    (This)->lpVtbl -> get_Silent(This,pVal)

#define IWWPluginInfo_put_Silent(This,newVal)	\
    (This)->lpVtbl -> put_Silent(This,newVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWWPluginInfo_get_AppID_Proxy( 
    IWWPluginInfo * This,
    /* [retval][out] */ LONG *pVal);


void __RPC_STUB IWWPluginInfo_get_AppID_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IWWPluginInfo_put_AppID_Proxy( 
    IWWPluginInfo * This,
    /* [in] */ LONG newVal);


void __RPC_STUB IWWPluginInfo_put_AppID_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWWPluginInfo_get_SDKVersion_Proxy( 
    IWWPluginInfo * This,
    /* [retval][out] */ LONG *pVal);


void __RPC_STUB IWWPluginInfo_get_SDKVersion_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IWWPluginInfo_put_SDKVersion_Proxy( 
    IWWPluginInfo * This,
    /* [in] */ LONG newVal);


void __RPC_STUB IWWPluginInfo_put_SDKVersion_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IWWPluginInfo_IsLoadBeforeLogin_Proxy( 
    IWWPluginInfo * This,
    /* [retval][out] */ VARIANT_BOOL *vbPreload);


void __RPC_STUB IWWPluginInfo_IsLoadBeforeLogin_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWWPluginInfo_get_Preload_Proxy( 
    IWWPluginInfo * This,
    /* [retval][out] */ VARIANT_BOOL *pVal);


void __RPC_STUB IWWPluginInfo_get_Preload_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IWWPluginInfo_put_Preload_Proxy( 
    IWWPluginInfo * This,
    /* [in] */ VARIANT_BOOL newVal);


void __RPC_STUB IWWPluginInfo_put_Preload_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWWPluginInfo_get_AutoSubscribe_Proxy( 
    IWWPluginInfo * This,
    /* [retval][out] */ VARIANT_BOOL *pVal);


void __RPC_STUB IWWPluginInfo_get_AutoSubscribe_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IWWPluginInfo_put_AutoSubscribe_Proxy( 
    IWWPluginInfo * This,
    /* [in] */ VARIANT_BOOL newVal);


void __RPC_STUB IWWPluginInfo_put_AutoSubscribe_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWWPluginInfo_get_RunMode_Proxy( 
    IWWPluginInfo * This,
    /* [retval][out] */ LONG *pVal);


void __RPC_STUB IWWPluginInfo_get_RunMode_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IWWPluginInfo_put_RunMode_Proxy( 
    IWWPluginInfo * This,
    /* [in] */ LONG newVal);


void __RPC_STUB IWWPluginInfo_put_RunMode_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWWPluginInfo_get_PluginGUID_Proxy( 
    IWWPluginInfo * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IWWPluginInfo_get_PluginGUID_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IWWPluginInfo_put_PluginGUID_Proxy( 
    IWWPluginInfo * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IWWPluginInfo_put_PluginGUID_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWWPluginInfo_get_PluginType_Proxy( 
    IWWPluginInfo * This,
    /* [retval][out] */ enum SDKPluginType *pVal);


void __RPC_STUB IWWPluginInfo_get_PluginType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IWWPluginInfo_put_PluginType_Proxy( 
    IWWPluginInfo * This,
    /* [in] */ enum SDKPluginType newVal);


void __RPC_STUB IWWPluginInfo_put_PluginType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWWPluginInfo_get_ConfigFile_Proxy( 
    IWWPluginInfo * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IWWPluginInfo_get_ConfigFile_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IWWPluginInfo_put_ConfigFile_Proxy( 
    IWWPluginInfo * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IWWPluginInfo_put_ConfigFile_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWWPluginInfo_get_Silent_Proxy( 
    IWWPluginInfo * This,
    /* [retval][out] */ VARIANT_BOOL *pVal);


void __RPC_STUB IWWPluginInfo_get_Silent_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IWWPluginInfo_put_Silent_Proxy( 
    IWWPluginInfo * This,
    /* [in] */ VARIANT_BOOL newVal);


void __RPC_STUB IWWPluginInfo_put_Silent_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IWWPluginInfo_INTERFACE_DEFINED__ */



#ifndef __wwsdkcomLib_LIBRARY_DEFINED__
#define __wwsdkcomLib_LIBRARY_DEFINED__

/* library wwsdkcomLib */
/* [helpstring][version][uuid] */ 


enum SDKSlotID
    {	SLOTID_IMPORTANTPANELSLOT	= 0,
	SLOTID_BOTTOMPANELSLOT	= 1,
	SLOTID_MAINMENUSLOT	= 2,
	SLOTID_IMCHATMAINTOOLBARSLOT	= 3,
	SLOTID_IMCHATINPUTTOOLBARSLOT	= 4
    } ;

enum SDKMessageID
    {	NOTIFY_USERLOGIN	= 0,
	NOTIFY_OFFLINE	= 1,
	NOTIFY_SHOW_OPTION	= 2,
	NOTIFY_CHATMESSAGE	= 3,
	NOTIFY_AEPINFO	= 4
    } ;

enum SDKItemNotifyID
    {	NOTIFY_CONTACT_TAB_CHANGING	= 0,
	NOTIFY_CONTACT_TAB_CHANGED	= 1
    } ;

enum SDKItemStyle
    {	ITEM_STYLE_CONTROL	= 0,
	ITEM_STYLE_BROWSE	= 1,
	ITEM_STYLE_BUTTON	= 2,
	ITEM_STYLE_MENU_BUTTON	= 3
    } ;

enum SDKSubscResult
    {	RESULT_UNKNOWN	= 0,
	RESULT_SUBSCRIBED	= 1,
	RESULT_UNSUBSCRIBED	= 2,
	RESULT_EXPIRED	= 3,
	RESULT_ERROR	= 4
    } ;

enum SDKShowWinPos
    {	SHOW_ERROR	= 0,
	SHOW_WIN_CENTER	= 1,
	SHOW_WIN_LEFTTOP	= 2,
	SHOW_WIN_RIGHTTOP	= 3,
	SHOW_WIN_LEFTDOWN	= 4,
	SHOW_WIN_RIGHTDOWN	= 5,
	SHOW_WIN_MAXIMAL	= 6
    } ;

enum SDKSecurityLevel
    {	LEVEL_DISABLE	= 10,
	LEVEL_ABOVE_DISABLE	= 13,
	LEVEL_BELOW_NORMAL	= 18,
	LEVEL_NORMAL	= 20,
	LEVEL_ABOVE_NORMAL	= 23,
	LEVEL_BELOW_SAFE	= 28,
	LEVEL_SAFE	= 30
    } ;

enum SDKContactStatus
    {	STATUS_OFFLINE	= 0,
	STATUS_ONLINE	= 1,
	STATUS_MOBILEONLINE	= 2
    } ;

enum SDKItemType
    {	ITEMTYPE_UNKNOWN	= 0,
	ITEMTYPE_PROGRAM	= ITEMTYPE_UNKNOWN + 1,
	ITEMTYPE_CONFIG_URL	= ITEMTYPE_PROGRAM + 1,
	ITEMTYPE_CONFIG_EXE	= ITEMTYPE_CONFIG_URL + 1
    } ;

enum SDKPluginType
    {	PLUGINTYPE_UNKNOWN	= 0,
	PLUGINTYPE_PROGRAM	= PLUGINTYPE_UNKNOWN + 1,
	PLUGINTYPE_CONFIG	= PLUGINTYPE_PROGRAM + 1
    } ;

EXTERN_C const IID LIBID_wwsdkcomLib;

#ifndef __IAEP_PluginQueryNotify_INTERFACE_DEFINED__
#define __IAEP_PluginQueryNotify_INTERFACE_DEFINED__

/* interface IAEP_PluginQueryNotify */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IAEP_PluginQueryNotify;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9BC790B6-D01F-443c-B2FF-FA0DD571B5F2")
    IAEP_PluginQueryNotify : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnComplete( 
            /* [in] */ IDispatch *pNotify) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAEP_PluginQueryNotifyVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAEP_PluginQueryNotify * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAEP_PluginQueryNotify * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAEP_PluginQueryNotify * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAEP_PluginQueryNotify * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAEP_PluginQueryNotify * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAEP_PluginQueryNotify * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAEP_PluginQueryNotify * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnComplete )( 
            IAEP_PluginQueryNotify * This,
            /* [in] */ IDispatch *pNotify);
        
        END_INTERFACE
    } IAEP_PluginQueryNotifyVtbl;

    interface IAEP_PluginQueryNotify
    {
        CONST_VTBL struct IAEP_PluginQueryNotifyVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAEP_PluginQueryNotify_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IAEP_PluginQueryNotify_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IAEP_PluginQueryNotify_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IAEP_PluginQueryNotify_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IAEP_PluginQueryNotify_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IAEP_PluginQueryNotify_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IAEP_PluginQueryNotify_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IAEP_PluginQueryNotify_OnComplete(This,pNotify)	\
    (This)->lpVtbl -> OnComplete(This,pNotify)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAEP_PluginQueryNotify_OnComplete_Proxy( 
    IAEP_PluginQueryNotify * This,
    /* [in] */ IDispatch *pNotify);


void __RPC_STUB IAEP_PluginQueryNotify_OnComplete_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IAEP_PluginQueryNotify_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_AEP_PluginQuery;

#ifdef __cplusplus

class DECLSPEC_UUID("15441836-1D39-4D25-AC37-CD4798C2E2B1")
AEP_PluginQuery;
#endif

EXTERN_C const CLSID CLSID_SDKPluginQueryResult;

#ifdef __cplusplus

class DECLSPEC_UUID("ED14F852-C522-41CF-9CFB-177190DAFE66")
SDKPluginQueryResult;
#endif

#ifndef __ISDKPlugin_INTERFACE_DEFINED__
#define __ISDKPlugin_INTERFACE_DEFINED__

/* interface ISDKPlugin */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ISDKPlugin;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("76ACD737-E58B-4035-9D03-1D37255190DC")
    ISDKPlugin : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnConnect( 
            /* [in] */ ISDKApplication *pApplication,
            /* [in] */ LONG lPluginCookie) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnDisconnect( 
            /* [in] */ ISDKApplication *pApplication,
            /* [in] */ LONG lPluginCookie) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnNotify( 
            /* [in] */ enum SDKMessageID MsgID,
            /* [in] */ IDispatch *pParam) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnUninstall( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDKPluginVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDKPlugin * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDKPlugin * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDKPlugin * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDKPlugin * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDKPlugin * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDKPlugin * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDKPlugin * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnConnect )( 
            ISDKPlugin * This,
            /* [in] */ ISDKApplication *pApplication,
            /* [in] */ LONG lPluginCookie);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnDisconnect )( 
            ISDKPlugin * This,
            /* [in] */ ISDKApplication *pApplication,
            /* [in] */ LONG lPluginCookie);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnNotify )( 
            ISDKPlugin * This,
            /* [in] */ enum SDKMessageID MsgID,
            /* [in] */ IDispatch *pParam);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnUninstall )( 
            ISDKPlugin * This);
        
        END_INTERFACE
    } ISDKPluginVtbl;

    interface ISDKPlugin
    {
        CONST_VTBL struct ISDKPluginVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDKPlugin_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISDKPlugin_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISDKPlugin_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISDKPlugin_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ISDKPlugin_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ISDKPlugin_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ISDKPlugin_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ISDKPlugin_OnConnect(This,pApplication,lPluginCookie)	\
    (This)->lpVtbl -> OnConnect(This,pApplication,lPluginCookie)

#define ISDKPlugin_OnDisconnect(This,pApplication,lPluginCookie)	\
    (This)->lpVtbl -> OnDisconnect(This,pApplication,lPluginCookie)

#define ISDKPlugin_OnNotify(This,MsgID,pParam)	\
    (This)->lpVtbl -> OnNotify(This,MsgID,pParam)

#define ISDKPlugin_OnUninstall(This)	\
    (This)->lpVtbl -> OnUninstall(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISDKPlugin_OnConnect_Proxy( 
    ISDKPlugin * This,
    /* [in] */ ISDKApplication *pApplication,
    /* [in] */ LONG lPluginCookie);


void __RPC_STUB ISDKPlugin_OnConnect_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISDKPlugin_OnDisconnect_Proxy( 
    ISDKPlugin * This,
    /* [in] */ ISDKApplication *pApplication,
    /* [in] */ LONG lPluginCookie);


void __RPC_STUB ISDKPlugin_OnDisconnect_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISDKPlugin_OnNotify_Proxy( 
    ISDKPlugin * This,
    /* [in] */ enum SDKMessageID MsgID,
    /* [in] */ IDispatch *pParam);


void __RPC_STUB ISDKPlugin_OnNotify_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISDKPlugin_OnUninstall_Proxy( 
    ISDKPlugin * This);


void __RPC_STUB ISDKPlugin_OnUninstall_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISDKPlugin_INTERFACE_DEFINED__ */


#ifndef __ISDKPlugin2_INTERFACE_DEFINED__
#define __ISDKPlugin2_INTERFACE_DEFINED__

/* interface ISDKPlugin2 */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ISDKPlugin2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("205D5A1E-B245-43dc-A7C5-C0C6D663C164")
    ISDKPlugin2 : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnConnect( 
            /* [in] */ IDispatch *pApplication2,
            /* [in] */ LONG lPluginCookie) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnDisconnect( 
            /* [in] */ IDispatch *pApplication2,
            /* [in] */ LONG lPluginCookie) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnNotify( 
            /* [in] */ enum SDKMessageID MsgID,
            /* [in] */ IDispatch *pParam) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnUninstall( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDKPlugin2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDKPlugin2 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDKPlugin2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDKPlugin2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDKPlugin2 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDKPlugin2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDKPlugin2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDKPlugin2 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnConnect )( 
            ISDKPlugin2 * This,
            /* [in] */ IDispatch *pApplication2,
            /* [in] */ LONG lPluginCookie);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnDisconnect )( 
            ISDKPlugin2 * This,
            /* [in] */ IDispatch *pApplication2,
            /* [in] */ LONG lPluginCookie);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnNotify )( 
            ISDKPlugin2 * This,
            /* [in] */ enum SDKMessageID MsgID,
            /* [in] */ IDispatch *pParam);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnUninstall )( 
            ISDKPlugin2 * This);
        
        END_INTERFACE
    } ISDKPlugin2Vtbl;

    interface ISDKPlugin2
    {
        CONST_VTBL struct ISDKPlugin2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDKPlugin2_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISDKPlugin2_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISDKPlugin2_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISDKPlugin2_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ISDKPlugin2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ISDKPlugin2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ISDKPlugin2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ISDKPlugin2_OnConnect(This,pApplication2,lPluginCookie)	\
    (This)->lpVtbl -> OnConnect(This,pApplication2,lPluginCookie)

#define ISDKPlugin2_OnDisconnect(This,pApplication2,lPluginCookie)	\
    (This)->lpVtbl -> OnDisconnect(This,pApplication2,lPluginCookie)

#define ISDKPlugin2_OnNotify(This,MsgID,pParam)	\
    (This)->lpVtbl -> OnNotify(This,MsgID,pParam)

#define ISDKPlugin2_OnUninstall(This)	\
    (This)->lpVtbl -> OnUninstall(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISDKPlugin2_OnConnect_Proxy( 
    ISDKPlugin2 * This,
    /* [in] */ IDispatch *pApplication2,
    /* [in] */ LONG lPluginCookie);


void __RPC_STUB ISDKPlugin2_OnConnect_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISDKPlugin2_OnDisconnect_Proxy( 
    ISDKPlugin2 * This,
    /* [in] */ IDispatch *pApplication2,
    /* [in] */ LONG lPluginCookie);


void __RPC_STUB ISDKPlugin2_OnDisconnect_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISDKPlugin2_OnNotify_Proxy( 
    ISDKPlugin2 * This,
    /* [in] */ enum SDKMessageID MsgID,
    /* [in] */ IDispatch *pParam);


void __RPC_STUB ISDKPlugin2_OnNotify_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISDKPlugin2_OnUninstall_Proxy( 
    ISDKPlugin2 * This);


void __RPC_STUB ISDKPlugin2_OnUninstall_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISDKPlugin2_INTERFACE_DEFINED__ */


#ifndef __ISDKDevPlugin_INTERFACE_DEFINED__
#define __ISDKDevPlugin_INTERFACE_DEFINED__

/* interface ISDKDevPlugin */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISDKDevPlugin;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("EB01E827-1D3F-41a0-8C3D-EBBCE9C492DE")
    ISDKDevPlugin : public IUnknown
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Require( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDKDevPluginVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDKDevPlugin * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDKDevPlugin * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDKDevPlugin * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Require )( 
            ISDKDevPlugin * This);
        
        END_INTERFACE
    } ISDKDevPluginVtbl;

    interface ISDKDevPlugin
    {
        CONST_VTBL struct ISDKDevPluginVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDKDevPlugin_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISDKDevPlugin_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISDKDevPlugin_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISDKDevPlugin_Require(This)	\
    (This)->lpVtbl -> Require(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISDKDevPlugin_Require_Proxy( 
    ISDKDevPlugin * This);


void __RPC_STUB ISDKDevPlugin_Require_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISDKDevPlugin_INTERFACE_DEFINED__ */


#ifndef __ISDKPluginItem_INTERFACE_DEFINED__
#define __ISDKPluginItem_INTERFACE_DEFINED__

/* interface ISDKPluginItem */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ISDKPluginItem;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("62BF5E6F-9FAA-4083-AC26-771C64C3E203")
    ISDKPluginItem : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnCreate( 
            /* [in] */ IDispatch *pSlot,
            /* [in] */ LONG hParentWnd,
            /* [in] */ LONG lItemCookie) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnDestroy( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnNotify( 
            /* [in] */ enum SDKItemNotifyID MsgID,
            /* [in] */ IDispatch *pParam) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnClick( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnSize( 
            /* [in] */ int cx,
            /* [in] */ int cy) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnMenuClick( 
            /* [in] */ LONG lCmdID) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDKPluginItemVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDKPluginItem * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDKPluginItem * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDKPluginItem * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDKPluginItem * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDKPluginItem * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDKPluginItem * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDKPluginItem * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnCreate )( 
            ISDKPluginItem * This,
            /* [in] */ IDispatch *pSlot,
            /* [in] */ LONG hParentWnd,
            /* [in] */ LONG lItemCookie);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnDestroy )( 
            ISDKPluginItem * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnNotify )( 
            ISDKPluginItem * This,
            /* [in] */ enum SDKItemNotifyID MsgID,
            /* [in] */ IDispatch *pParam);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnClick )( 
            ISDKPluginItem * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnSize )( 
            ISDKPluginItem * This,
            /* [in] */ int cx,
            /* [in] */ int cy);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnMenuClick )( 
            ISDKPluginItem * This,
            /* [in] */ LONG lCmdID);
        
        END_INTERFACE
    } ISDKPluginItemVtbl;

    interface ISDKPluginItem
    {
        CONST_VTBL struct ISDKPluginItemVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDKPluginItem_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISDKPluginItem_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISDKPluginItem_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISDKPluginItem_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ISDKPluginItem_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ISDKPluginItem_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ISDKPluginItem_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ISDKPluginItem_OnCreate(This,pSlot,hParentWnd,lItemCookie)	\
    (This)->lpVtbl -> OnCreate(This,pSlot,hParentWnd,lItemCookie)

#define ISDKPluginItem_OnDestroy(This)	\
    (This)->lpVtbl -> OnDestroy(This)

#define ISDKPluginItem_OnNotify(This,MsgID,pParam)	\
    (This)->lpVtbl -> OnNotify(This,MsgID,pParam)

#define ISDKPluginItem_OnClick(This)	\
    (This)->lpVtbl -> OnClick(This)

#define ISDKPluginItem_OnSize(This,cx,cy)	\
    (This)->lpVtbl -> OnSize(This,cx,cy)

#define ISDKPluginItem_OnMenuClick(This,lCmdID)	\
    (This)->lpVtbl -> OnMenuClick(This,lCmdID)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISDKPluginItem_OnCreate_Proxy( 
    ISDKPluginItem * This,
    /* [in] */ IDispatch *pSlot,
    /* [in] */ LONG hParentWnd,
    /* [in] */ LONG lItemCookie);


void __RPC_STUB ISDKPluginItem_OnCreate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISDKPluginItem_OnDestroy_Proxy( 
    ISDKPluginItem * This);


void __RPC_STUB ISDKPluginItem_OnDestroy_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISDKPluginItem_OnNotify_Proxy( 
    ISDKPluginItem * This,
    /* [in] */ enum SDKItemNotifyID MsgID,
    /* [in] */ IDispatch *pParam);


void __RPC_STUB ISDKPluginItem_OnNotify_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISDKPluginItem_OnClick_Proxy( 
    ISDKPluginItem * This);


void __RPC_STUB ISDKPluginItem_OnClick_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISDKPluginItem_OnSize_Proxy( 
    ISDKPluginItem * This,
    /* [in] */ int cx,
    /* [in] */ int cy);


void __RPC_STUB ISDKPluginItem_OnSize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISDKPluginItem_OnMenuClick_Proxy( 
    ISDKPluginItem * This,
    /* [in] */ LONG lCmdID);


void __RPC_STUB ISDKPluginItem_OnMenuClick_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISDKPluginItem_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_SDKApplication;

#ifdef __cplusplus

class DECLSPEC_UUID("4D4569ED-5C5D-4D7D-ACB5-D5A797FC33FD")
SDKApplication;
#endif

EXTERN_C const CLSID CLSID_SDKContactMgr;

#ifdef __cplusplus

class DECLSPEC_UUID("C9D49BC3-7EBA-4409-92A7-AB4C7A246CE1")
SDKContactMgr;
#endif

EXTERN_C const CLSID CLSID_SDKMainFrame;

#ifdef __cplusplus

class DECLSPEC_UUID("0889ACCB-CF7B-4712-B975-F0E7B986013A")
SDKMainFrame;
#endif

EXTERN_C const CLSID CLSID_SDKLoginUser;

#ifdef __cplusplus

class DECLSPEC_UUID("88E2BA4E-F633-47EF-82F8-59FAAB3CF67F")
SDKLoginUser;
#endif

EXTERN_C const CLSID CLSID_SDKChatDlgMgr;

#ifdef __cplusplus

class DECLSPEC_UUID("4583121D-DFE3-48A0-BF56-173DBB2BE626")
SDKChatDlgMgr;
#endif

EXTERN_C const CLSID CLSID_SDKObjectCollection;

#ifdef __cplusplus

class DECLSPEC_UUID("7F14D8CB-5C27-470A-9C14-EBA624FFB023")
SDKObjectCollection;
#endif

EXTERN_C const CLSID CLSID_SDKImportantPanelSlot;

#ifdef __cplusplus

class DECLSPEC_UUID("CE1058B0-8A54-4A70-9A9F-7437393A1AF2")
SDKImportantPanelSlot;
#endif

EXTERN_C const CLSID CLSID_SDKBottomPanelSlot;

#ifdef __cplusplus

class DECLSPEC_UUID("738A6E66-3842-4A4A-B297-4EE9110FAE86")
SDKBottomPanelSlot;
#endif

EXTERN_C const CLSID CLSID_SDKChatDlg;

#ifdef __cplusplus

class DECLSPEC_UUID("067627B0-6A5F-40D8-B3AE-3E85EF350D08")
SDKChatDlg;
#endif

EXTERN_C const CLSID CLSID_SDKContact;

#ifdef __cplusplus

class DECLSPEC_UUID("F558C788-2B2E-4028-A0F4-28359F9900EF")
SDKContact;
#endif

EXTERN_C const CLSID CLSID_SDKIMInputToolbarSlot;

#ifdef __cplusplus

class DECLSPEC_UUID("A3AD6463-5B20-4CC7-A7B4-7AF1D6A4FAF3")
SDKIMInputToolbarSlot;
#endif

EXTERN_C const CLSID CLSID_SDKIMMainToolbarSlot;

#ifdef __cplusplus

class DECLSPEC_UUID("BDEA2387-2EB5-4FA1-A46A-C123BEA6CDA7")
SDKIMMainToolbarSlot;
#endif

EXTERN_C const CLSID CLSID_PluginMgr;

#ifdef __cplusplus

class DECLSPEC_UUID("2A34AE66-834D-41EF-94A9-30866C35736D")
PluginMgr;
#endif

EXTERN_C const CLSID CLSID_PluginMgrV2;

#ifdef __cplusplus

class DECLSPEC_UUID("BBEE963D-ED61-4df5-B632-A81F9F725824")
PluginMgrV2;
#endif

EXTERN_C const CLSID CLSID_SlotItemInfor;

#ifdef __cplusplus

class DECLSPEC_UUID("631A3ED5-0CE4-40CF-9DAC-99161ACFAE4C")
SlotItemInfor;
#endif

EXTERN_C const CLSID CLSID_SDKMainMenuSlot;

#ifdef __cplusplus

class DECLSPEC_UUID("5549D001-5E34-4FB1-894C-BE6CDED22AEC")
SDKMainMenuSlot;
#endif

EXTERN_C const CLSID CLSID_SDKNotifyUserLogin;

#ifdef __cplusplus

class DECLSPEC_UUID("22FC1700-9A36-4C66-A2ED-7EB1847FAAB4")
SDKNotifyUserLogin;
#endif

EXTERN_C const CLSID CLSID_SDKNotifyOffline;

#ifdef __cplusplus

class DECLSPEC_UUID("DF3F690A-37B4-40E8-8046-E028D975A813")
SDKNotifyOffline;
#endif

EXTERN_C const CLSID CLSID_SubMenuItemInfo;

#ifdef __cplusplus

class DECLSPEC_UUID("7BCE6F5B-8F96-42C8-A94E-40E46214C56D")
SubMenuItemInfo;
#endif

EXTERN_C const CLSID CLSID_SDKNotifyChatMessage;

#ifdef __cplusplus

class DECLSPEC_UUID("CB441CB8-744A-4E27-9E97-A7B669EAF0C8")
SDKNotifyChatMessage;
#endif

EXTERN_C const CLSID CLSID_SDKNotifyShowOption;

#ifdef __cplusplus

class DECLSPEC_UUID("3544C377-69A1-4A3C-807F-758B1D2031C0")
SDKNotifyShowOption;
#endif

EXTERN_C const CLSID CLSID_SDKNotifyContactTabChanging;

#ifdef __cplusplus

class DECLSPEC_UUID("842527BA-DD66-4608-B3F3-D697D9B26C45")
SDKNotifyContactTabChanging;
#endif

EXTERN_C const CLSID CLSID_SDKNotifyContactTabChanged;

#ifdef __cplusplus

class DECLSPEC_UUID("929A220A-3C0E-4DD0-9CE3-C4918CCBB194")
SDKNotifyContactTabChanged;
#endif

EXTERN_C const CLSID CLSID_WWPluginKey;

#ifdef __cplusplus

class DECLSPEC_UUID("AAA19146-4543-4A54-A88E-0826BDF8D8C8")
WWPluginKey;
#endif

EXTERN_C const CLSID CLSID_WWPluginQueryRes;

#ifdef __cplusplus

class DECLSPEC_UUID("B1108F93-B421-40A4-BD75-3A643070C734")
WWPluginQueryRes;
#endif

EXTERN_C const CLSID CLSID_SDKGroup;

#ifdef __cplusplus

class DECLSPEC_UUID("E48153F3-B244-4A7F-8B3B-9B0F4A6FC062")
SDKGroup;
#endif

EXTERN_C const CLSID CLSID_WWPluginMonitor;

#ifdef __cplusplus

class DECLSPEC_UUID("AECD09A4-E3D7-473B-8058-70EC276F1B0D")
WWPluginMonitor;
#endif

EXTERN_C const CLSID CLSID_WWPluginProxy;

#ifdef __cplusplus

class DECLSPEC_UUID("619A679E-E6CC-4597-A918-5C43E53CCDAB")
WWPluginProxy;
#endif

EXTERN_C const CLSID CLSID_WWPluginItemFacade;

#ifdef __cplusplus

class DECLSPEC_UUID("E3463972-A30E-4151-BADD-C20171D0537F")
WWPluginItemFacade;
#endif

EXTERN_C const CLSID CLSID_WWPluginInfo;

#ifdef __cplusplus

class DECLSPEC_UUID("7E6D4094-12BD-4C48-939D-EDB5E6070008")
WWPluginInfo;
#endif

EXTERN_C const CLSID CLSID_WWWindowItemFacade;

#ifdef __cplusplus

class DECLSPEC_UUID("A6CAF5FC-D9DF-412C-B0F3-5B5E4906BD37")
WWWindowItemFacade;
#endif

EXTERN_C const CLSID CLSID_WWMsgFilter;

#ifdef __cplusplus

class DECLSPEC_UUID("61A8D917-B388-43CA-8942-1DE35B27B716")
WWMsgFilter;
#endif
#endif /* __wwsdkcomLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

unsigned long             __RPC_USER  VARIANT_UserSize(     unsigned long *, unsigned long            , VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserMarshal(  unsigned long *, unsigned char *, VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserUnmarshal(unsigned long *, unsigned char *, VARIANT * ); 
void                      __RPC_USER  VARIANT_UserFree(     unsigned long *, VARIANT * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


