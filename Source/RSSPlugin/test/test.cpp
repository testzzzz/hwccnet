// test.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "test.h"
#include "..\RSSPlugin\RSSDlg.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ψһ��Ӧ�ó������

CWinApp theApp;

using namespace std;

int _tmain(int argc, TCHAR* argv[], TCHAR* envp[])
{
    int nRetCode = 0;

    // ��ʼ�� MFC ����ʧ��ʱ��ʾ����
    if (!AfxWinInit(::GetModuleHandle(NULL), NULL, ::GetCommandLine(), 0))
    {
        _tprintf(_T("����: MFC ��ʼ��ʧ��\n"));
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
