// WinHTTPTestUI.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
    #error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CWinHTTPTestUIApp:
// �йش����ʵ�֣������ WinHTTPTestUI.cpp
//

class CWinHTTPTestUIApp : public CWinApp
{
    public:
        CWinHTTPTestUIApp();

    // ��д
    public:
        virtual BOOL InitInstance();

    // ʵ��

        DECLARE_MESSAGE_MAP()
};

extern CWinHTTPTestUIApp theApp;