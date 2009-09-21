// test.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "test.h"
#include "..\RSSPlugin\RSSDlg.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// 唯一的应用程序对象

CWinApp theApp;

using namespace std;

int _tmain(int argc, TCHAR* argv[], TCHAR* envp[])
{
    int nRetCode = 0;

    // 初始化 MFC 并在失败时显示错误
    if (!AfxWinInit(::GetModuleHandle(NULL), NULL, ::GetCommandLine(), 0))
    {
        _tprintf(_T("错误: MFC 初始化失败\n"));
        nRetCode = 1;
    }
    else
    {
        argc;
        argv;
        envp;
        CRSSDlg dlg;
        dlg.DoModal();
    }

    return nRetCode;
}
