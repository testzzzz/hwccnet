// RSSPlugin2.h : CRSSPlugin2 的声明

#pragma once
#include "resource.h"       // 主符号

#include "RSSPlugin_i.h"


#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Windows CE 平台(如不提供完全 DCOM 支持的 Windows Mobile 平台)上无法正确支持单线程 COM 对象。定义 _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA 可强制 ATL 支持创建单线程 COM 对象实现并允许使用其单线程 COM 对象实现。rgs 文件中的线程模型已被设置为“Free”，原因是该模型是非 DCOM Windows CE 平台支持的唯一线程模型。"
#endif



// CRSSPlugin2

class ATL_NO_VTABLE CRSSPlugin2 :
    public CComObjectRootEx<CComSingleThreadModel>,
    public CComCoClass<CRSSPlugin2, &CLSID_RSSPlugin2>,
    public IDispatchImpl<ISDKPlugin2, &__uuidof(ISDKPlugin2), &LIBID_RSSPluginLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
    CRSSPlugin2()
    {
    }

DECLARE_REGISTRY_RESOURCEID(IDR_RSSPLUGIN2)


BEGIN_COM_MAP(CRSSPlugin2)
    COM_INTERFACE_ENTRY(ISDKPlugin2)
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
    STDMETHOD(OnConnect)(
        __in IDispatch *pApplication, 
        __in LONG lPluginCookie
        );

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
    //////////////////////////////////////////////////////////////////////
    STDMETHOD(OnDisconnect)(
        __in IDispatch *pApplication, 
        __in LONG lPluginCookie
        );

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
    STDMETHOD(OnNotify)(
        __in enum SDKMessageID MsgID, 
        __in IDispatch *pParam
        );

    ///////////////////////////////////////////////////////////////////////
    ///
    /// @brief  删除插件、二进制模块等将被从最终用户机器上删除
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
    STDMETHOD(OnUninstall)(
        );
};

OBJECT_ENTRY_AUTO(__uuidof(RSSPlugin2), CRSSPlugin2)
