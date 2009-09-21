// dllmain.cpp : DllMain 的实现。

#include "stdafx.h"
#include "resource.h"
#include "RSSPlugin_i.h"
#include "RssError.h"
#include "RssGlobal.h"
#include "dllmain.h"

CRSSPluginModule _AtlModule;

class CRSSPluginApp : public CWinApp
{
public:

// 重写
    virtual BOOL InitInstance();
    virtual int ExitInstance();

    DECLARE_MESSAGE_MAP()
};

BEGIN_MESSAGE_MAP(CRSSPluginApp, CWinApp)
END_MESSAGE_MAP()

CRSSPluginApp theApp;

BOOL CRSSPluginApp::InitInstance()
{
/*    int Error = RSS_SUCCESS;
    Error = InitSkinMagicLib(
        AfxGetInstanceHandle(),
        NULL, 
        NULL, 
        NULL
        );
    if (Error == 0)
    {
        ERROR_EXIT(Error);
    }

    Error = LoadSkinFromResource(
        AfxGetInstanceHandle(), 
        LPCTSTR(IDR_ALIWANGWANG), 
        RESOURCE_SKIN
        );

    Error = SetDialogSkin(RESOURCE_DIALOG);

Exit:*/

    return CWinApp::InitInstance();
}

int CRSSPluginApp::ExitInstance()
{
//    ExitSkinMagicLib();
    return CWinApp::ExitInstance();
}
