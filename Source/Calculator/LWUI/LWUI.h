// LWUI.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
    #error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CLWUIApp:
// �йش����ʵ�֣������ LWUI.cpp
//

class CLWUIApp : public CWinApp
{
public:
    CLWUIApp();

// ��д
    public:
    virtual BOOL InitInstance();

// ʵ��

    DECLARE_MESSAGE_MAP()
};

extern CLWUIApp theApp;