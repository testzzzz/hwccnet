// DcomSvr.cpp : WinMain 的实现


#include "stdafx.h"
#include "resource.h"
#include "DcomSvr_i.h"

#include <stdio.h>

class CDcomSvrModule : public CAtlServiceModuleT< CDcomSvrModule, IDS_SERVICENAME >
{
public :
    DECLARE_LIBID(LIBID_DcomSvrLib)
    DECLARE_REGISTRY_APPID_RESOURCEID(IDR_DCOMSVR, "{94EA68FB-B164-401A-85C3-399255FFEEA7}")
    HRESULT InitializeSecurity() throw()
    {
        // TODO : 调用 CoInitializeSecurity 并为服务提供适当的 
        // 安全设置
        // 建议 - PKT 级别的身份验证、
        // RPC_C_IMP_LEVEL_IDENTIFY 的模拟级别
        // 以及适当的非 NULL 安全说明符。

        HRESULT hr = CoInitializeSecurity(
            NULL,        
            -1,
            NULL,
            NULL,
            RPC_C_AUTHN_LEVEL_NONE,                     //代理访问验证级别
            RPC_C_IMP_LEVEL_IDENTIFY,                   //代理模拟级别
            NULL,
            EOAC_NONE,
            NULL
            );

        return hr;
    }
    HRESULT PostMessageLoop();
    HRESULT PreMessageLoop(int nShowCmd);
};

CDcomSvrModule _AtlModule;



//
extern "C" int WINAPI _tWinMain(HINSTANCE /*hInstance*/, HINSTANCE /*hPrevInstance*/, 
                                LPTSTR /*lpCmdLine*/, int nShowCmd)
{
    return _AtlModule.WinMain(nShowCmd);
}


HRESULT CDcomSvrModule::PostMessageLoop()
{
    HRESULT hr = __super::PostMessageLoop();

    if (SUCCEEDED(hr))
    {
        // Add any custom code to uninitialize your service
        //         LogEvent(_T("widebright 的服务退出咯，一点都不好玩呵呵 "));
    }
    return hr;

}

HRESULT CDcomSvrModule::PreMessageLoop(int nShowCmd)
{
    HRESULT hr = __super::PreMessageLoop(nShowCmd);

    // 微软的BUG
    if (hr == S_FALSE) hr = S_OK; 
    if (SUCCEEDED(hr))
    {
        // Add any custom code to initialize your service
        //         LogEvent(_T("widebright 的服务启动咯，呵呵 "));
    }
    return hr;
}
