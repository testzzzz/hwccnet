// RSSImportant.h : CRSSImportant 的声明

#pragma once
#include "resource.h"       // 主符号

#include "RSSPlugin_i.h"


#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Windows CE 平台(如不提供完全 DCOM 支持的 Windows Mobile 平台)上无法正确支持单线程 COM 对象。定义 _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA 可强制 ATL 支持创建单线程 COM 对象实现并允许使用其单线程 COM 对象实现。rgs 文件中的线程模型已被设置为“Free”，原因是该模型是非 DCOM Windows CE 平台支持的唯一线程模型。"
#endif



// CRSSImportant

class ATL_NO_VTABLE CRSSImportant :
    public CComObjectRootEx<CComSingleThreadModel>,
    public CComCoClass<CRSSImportant, &CLSID_RSSImportant>,
    public IDispatchImpl<ISDKPluginItem, &__uuidof(ISDKPluginItem), &LIBID_RSSPluginLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
    CRSSImportant()
    {
    }

DECLARE_REGISTRY_RESOURCEID(IDR_RSSIMPORTANT)


BEGIN_COM_MAP(CRSSImportant)
    COM_INTERFACE_ENTRY(ISDKPluginItem)
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
    /// @brief  插件被挂接到插槽
    ///
    /// 当阿里旺旺的插槽对象创建后，\n
    /// 由阿里旺旺调用而通知插件，表示插件被加载到插槽
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
    STDMETHOD(OnCreate)(
        __in IDispatch* pSlot, 
        __in long hParentWnd, 
        __in long lCookie
        );

    ///////////////////////////////////////////////////////////////////////
    ///
    /// @brief  插件从插槽脱离
    ///
    /// 当阿里旺旺旺插槽对象销毁时，\n
    /// 由阿里旺旺调用而通知插件，表示插件将从插槽上被销毁
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
    STDMETHOD(OnDestroy)(
        );

    ///////////////////////////////////////////////////////////////////////
    ///
    /// @brief  插件相关的消息
    ///
    /// 此方法在阿里旺旺所开放的事件发生情况下，\n
    /// 由阿里旺旺调用而通知插件
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
    STDMETHOD(OnNotify)(
        __in SDKItemNotifyID MsgID, 
        __in IDispatch* pParam
        );

    ///////////////////////////////////////////////////////////////////////
    ///
    /// @brief  用户点击插件
    ///
    /// 用户在相关插槽上点击了插件，那么此方法得到通知
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
    STDMETHOD(OnClick)(
        );

    ///////////////////////////////////////////////////////////////////////
    ///
    /// @brief  插件响应窗口变化消息
    ///
    /// 此方法当用户在配置文件中的 Item 下设定了 Style 设定了STYLE_CONTROL , \n
    /// Insert_Slot 设定了SLOTID_BOTTOMPANELSLOT,\n
    /// 当父窗口的大小发生变化时候,阿里旺旺将调用本方法。
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
    STDMETHOD(OnSize)(
        __in int x, 
        __in int y
        );

    ///////////////////////////////////////////////////////////////////////
    ///
    /// @brief  菜单项被点击后触发
    /// 
    /// 此方法当用户在配置文件中的 Item 下 Style 设定了STYLE_BUTTON;\n
    /// Insert_Slot 设定了SLOT_MAINMENU,\n
    /// 当用户在主菜单菜单项上点击时候,阿里旺旺调用本方法。\n
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
    STDMETHOD(OnMenuClick)(
        __in long lCmdID 
        );

private:
    CComPtr<ISDKImportantPanelSlot> m_pSlot;    ///< 重要区插槽
    LONG                            m_nCookie;  ///< 插件ID
};

OBJECT_ENTRY_AUTO(__uuidof(RSSImportant), CRSSImportant)
