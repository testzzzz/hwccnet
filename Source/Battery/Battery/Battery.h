
// Battery.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
    #error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CBatteryApp:
// �йش����ʵ�֣������ Battery.cpp
//

class CBatteryApp : public CWinAppEx
{
public:
    CBatteryApp();

// ��д
    public:
    virtual BOOL InitInstance();

// ʵ��

    DECLARE_MESSAGE_MAP()
};

extern CBatteryApp theApp;