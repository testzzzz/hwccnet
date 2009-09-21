// RSSImportant.cpp : CRSSImportant 的实现

#include "stdafx.h"
#include "RSSImportant.h"
#include "RssGlobal.h"
#include "RssError.h"
#include "RSSDlg.h"
#include <assert.h>

extern CComPtr<ISDKApplication3> g_spApplication3;

///////////////////////////////////////////////////////////////////////
///
/// @brief  插件被挂接到插槽
///
/// @param  __in IDispatch* pSlot - 插槽接口类型，与配置文件的Insert_Slot相关
/// @param  __in long hParentWnd  - 父窗口句柄，此参数仅仅在插件配置文件中设定的Style 为STYLE_CONTROL 时候有效
/// @param  __in long lCookie     - 唯一标示插件
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
CRSSImportant::OnCreate(
                        __in IDispatch* pSlot, 
                        __in long hParentWnd, 
                        __in long lCookie
                        )
{
    //
    // 父亲窗口句柄不使用
    //
    UNREFERENCED(hParentWnd);

    DEBUG_TRACE(L"CTKDImportant::OnCreate");

    m_pSlot   = CComQIPtr<ISDKImportantPanelSlot>(pSlot);
    m_nCookie = lCookie;

    //
    // 确保转换成重要区的插槽不为空
    //
    assert(m_pSlot != NULL);

    return S_OK;
}


///////////////////////////////////////////////////////////////////////
///
/// @brief  插件从插槽脱离
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
CRSSImportant::OnDestroy(
                         )
{
    return S_OK;
}


///////////////////////////////////////////////////////////////////////
///
/// @brief  插件相关的消息
///
/// @param  __in SDKItemNotifyID MsgID - 消息类型
/// @param  __in IDispatch* pParam     - 消息参数
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
CRSSImportant::OnNotify(
                        __in SDKItemNotifyID MsgID,
                        __in IDispatch* pParam
                        )
{
    UNREFERENCED(MsgID);
    UNREFERENCED(pParam);

    return S_OK;
}

///////////////////////////////////////////////////////////////////////
///
/// @brief  用户点击插件
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
CRSSImportant::OnClick(
                       )
{
    CRSSDlg dlg;
    dlg.DoModal();
    return S_OK;
}

///////////////////////////////////////////////////////////////////////
///
/// @brief  插件响应窗口变化消息
///
/// @param  __in int x - 父窗口目前的宽度
/// @param  __in int y - 父窗口目前的高度
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
CRSSImportant::OnSize(
                      __in int x, 
                      __in int y
                      )
{
    UNREFERENCED(x);
    UNREFERENCED(y);
    return S_OK;
}

///////////////////////////////////////////////////////////////////////
///
/// @brief  菜单项被点击后触发
///
/// @param  __in long lCmdID - 菜单插件的ID
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
CRSSImportant::OnMenuClick(
                           __in long lCmdID
                           )
{
    UNREFERENCED(lCmdID);
    return S_OK;
}


