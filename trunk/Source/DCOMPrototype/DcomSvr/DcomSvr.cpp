// DcomSvr.cpp : WinMain ��ʵ��


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
        // TODO : ���� CoInitializeSecurity ��Ϊ�����ṩ�ʵ��� 
        // ��ȫ����
        // ���� - PKT ����������֤��
        // RPC_C_IMP_LEVEL_IDENTIFY ��ģ�⼶��
        // �Լ��ʵ��ķ� NULL ��ȫ˵������

        HRESULT hr = CoInitializeSecurity(
            NULL,        
            -1,
            NULL,
            NULL,
            RPC_C_AUTHN_LEVEL_NONE,                     //���������֤����
            RPC_C_IMP_LEVEL_IDENTIFY,                   //����ģ�⼶��
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
        //         LogEvent(_T("widebright �ķ����˳�����һ�㶼������Ǻ� "));
    }
    return hr;

}

HRESULT CDcomSvrModule::PreMessageLoop(int nShowCmd)
{
    HRESULT hr = __super::PreMessageLoop(nShowCmd);

    // ΢���BUG
    if (hr == S_FALSE) hr = S_OK; 
    if (SUCCEEDED(hr))
    {
        // Add any custom code to initialize your service
        //         LogEvent(_T("widebright �ķ������������Ǻ� "));
    }
    return hr;
}
