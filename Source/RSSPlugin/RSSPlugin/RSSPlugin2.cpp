// RSSPlugin2.cpp : CRSSPlugin2 的实现

#include "stdafx.h"
#include "RSSPlugin2.h"
#include "RssError.h"
#include "RssGlobal.h"

LONG g_plugincookie                         = 0;
CComPtr<ISDKApplication3> g_spApplication3  = NULL;

///////////////////////////////////////////////////////////////////////
///
/// @brief  此方法在阿里旺旺初始化阶段中，由阿里旺旺调用而通知插件，表示插件被加载了
///
/// @param  __in IDispatch *pApplication   - 应用程序对象
/// @param  __in LONG lPluginCookie        - 插件标示
///
/// @retval HRESULT
///
/// 修改记录: \n
///
///      <修改日期>     <修改者>   <修改内容描述>\n
///
///      2009-08-06      游枭       创建\n
///
/// 备注信息: 
///
///////////////////////////////////////////////////////////////////////
STDMETHODIMP 
CRSSPlugin2::OnConnect(
                       __in IDispatch *pApplication, 
                       __in LONG lPluginCookie
                       )
{
    CComQIPtr<ISDKApplication3> spSDKApplication3(pApplication);
    if (spSDKApplication3)
    {
        g_spApplication3=spSDKApplication3;
    }

    DEBUG_TRACE(_T("CRssPlugin2::OnConnect"));

    g_plugincookie = lPluginCookie;

    return S_OK;
} 

///////////////////////////////////////////////////////////////////////
///
/// @brief  此方法在阿里旺旺退出过程中，由阿里旺旺调用而通知插件，表示插件将被卸载
///
/// @param  __in IDispatch *pApplication   - 应用程序对象
/// @param  __in LONG lPluginCookie        - 插件标示
///
/// @retval HRESULT
///
/// 修改记录: \n
///
///      <修改日期>     <修改者>   <修改内容描述>\n
///
///      2009-08-06      游枭       创建\n
///
/// 备注信息: 
///
///////////////////////////////////////////////////////////////////////
STDMETHODIMP 
CRSSPlugin2::OnDisconnect(
                          __in IDispatch *pApplication, 
                          __in LONG lPluginCookie
                          )
{
    UNREFERENCED(pApplication);
    UNREFERENCED(lPluginCookie);

    return S_OK;
}

///////////////////////////////////////////////////////////////////////
///
/// @brief  阿里旺旺所开放的事件发生情况下，由阿里旺旺调用而通知插件
///
/// @param  __in enum SDKMessageID MsgID   - 消息类型
/// @param  __in IDispatch *pParam         - 表示消息的参数，这个将取决于具体的消息而定
///
/// @retval HRESULT
///
/// 修改记录: \n
///
///      <修改日期>     <修改者>   <修改内容描述>\n
///
///      2009-08-06      游枭       创建\n
///
/// 备注信息: 
///
///////////////////////////////////////////////////////////////////////
STDMETHODIMP 
CRSSPlugin2::OnNotify(
                      __in enum SDKMessageID MsgID, 
                      __in IDispatch *pParam
                      )
{
//    int Error = TKD_SUCCESS;

    UNREFERENCED(MsgID);
    UNREFERENCED(pParam);

    switch (MsgID)
    {
            //
            // 阿里旺旺已经处理登录状态
            //
        case NOTIFY_USERLOGIN:
            break;

            //
            // 阿里旺旺处于离线状态
            //
        case NOTIFY_OFFLINE:
            break;

            //
            // 请求插件的配置
            //
        case NOTIFY_SHOW_OPTION:
            break;

            //
            // 处理旺旺聊天消息
            //
        case NOTIFY_CHATMESSAGE:
            break;

            //
            // 通知插件关于当前登录用户对插件的订购信息
            //
        case NOTIFY_AEPINFO:
            break;

            //
            // 从未到达此处
            //
        default:
            break;
    }

    return S_OK;
}

///////////////////////////////////////////////////////////////////////
///
/// @brief  通知插件用户将插件从磁盘上删除
///
/// @param  void
///
/// @retval HRESULT
///
/// 修改记录: \n
///
///      <修改日期>     <修改者>   <修改内容描述>\n
///
///      2009-08-06      游枭       创建\n
///
/// 备注信息: 
///
///////////////////////////////////////////////////////////////////////
STDMETHODIMP 
CRSSPlugin2::OnUninstall(
                         )
{
    return S_OK;
}

// CRSSPlugin2

