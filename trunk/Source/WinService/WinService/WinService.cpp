//////////////////////////////////////////////////////////
///
/// @file      WinService.cpp
///
/// @brief     一个简单的Windows Service示例程序，Log文件存放目录在Windows\System32
///
/// @version   1.0
///
/// @author    游枭
///
/// @date      2009-09-02
/// 
/// <修改日期>      <修改者>        <修改描述>\n
///
///  2009-09-02      游枭            创建
///
////////////////////////////////////////////////////////////

#include "stdafx.h"
#include <Windows.h>
#include <fstream>
using namespace std;

/// @def SERVICE_NAME
/// @brief 服务的名称
#define SERVICE_NAME L"YXService"

////////////////////////////////////////////////////////////
///
/// @brief 服务的主函数，每个服务拥有与自己唯一对应的ServiceMain函数
///
/// @note 由操作系统调用，并执行能完成服务的代码。
///
/// @param __in DWORD dwArgc,   
/// @param __in LPTSTR* lpszArgv
///
/// @return VOID
///
////////////////////////////////////////////////////////////
VOID WINAPI YXServiceMain(
    __in DWORD dwArgc,
    __in LPTSTR* lpszArgv
    );

////////////////////////////////////////////////////////////
///
/// @brief 改变服务的状态接受到的通知代码
///
/// @note 用户必须为它的服务程序中每一个服务写一个单独的CtrlHandler函数
///
/// @param __in DWORD fdwControl 服务状态通知码
///
/// @return VOID
///
////////////////////////////////////////////////////////////
VOID WINAPI YXHandler(
    __in DWORD fdwControl
    );

SERVICE_STATUS serStatus;
SERVICE_STATUS_HANDLE ssHandle;
SYSTEMTIME time;

SERVICE_TABLE_ENTRY serviceEntry[] =
{
    { SERVICE_NAME, YXServiceMain },
    { NULL, NULL }
};

int _tmain(int argc, _TCHAR* argv[])
{
    if ((argc == 2) && lstrcmp(argv[1], L"Install") == 0)
    {
        //
        // 获得SCM数据库的句柄
        //
        SC_HANDLE hManager = ::OpenSCManager(
                                 NULL,
                                 NULL,
                                 SC_MANAGER_ALL_ACCESS
                                 );

        TCHAR fileName[256] = {0};
        ::GetModuleFileName(
            NULL,
            fileName,
            255
            );

        //
        // 将服务的信息添加到SCM的数据库
        //
        SC_HANDLE hService = ::CreateService(
                                hManager,
                                SERVICE_NAME,
                                SERVICE_NAME,
                                SERVICE_ALL_ACCESS,
                                SERVICE_WIN32_OWN_PROCESS,
                                SERVICE_DEMAND_START,
                                SERVICE_ERROR_IGNORE,
                                fileName,
                                NULL,
                                NULL,
                                NULL,
                                NULL,
                                NULL
                                );

        ::CloseServiceHandle(hManager);
        ::CloseServiceHandle(hService);

        return 0;
    }

    //
    // 为各服务创建线程
    //
    ::StartServiceCtrlDispatcher(
        serviceEntry
        );

    return 0;
}

VOID WINAPI YXServiceMain(
    __in DWORD dwArgc,
    __in LPTSTR* lpszArgv
    )
{
    serStatus.dwServiceType = SERVICE_WIN32_OWN_PROCESS;
    serStatus.dwCurrentState = SERVICE_START_PENDING;
    serStatus.dwControlsAccepted = SERVICE_ACCEPT_STOP | SERVICE_ACCEPT_PAUSE_CONTINUE;
    serStatus.dwWin32ExitCode = 0;
    serStatus.dwServiceSpecificExitCode = 0;
    serStatus.dwCheckPoint = 0;
    serStatus.dwWaitHint = 0;

    ofstream ofs("YXServiceLog.txt");

    GetLocalTime(&time);
    ofs << time.wYear << "-"
        << time.wMonth << "-" 
        << time.wDay << " "
        << time.wHour << ":"
        << time.wMinute << ":"
        << time.wSecond << " "
        <<"Service Initialized" << endl;

    //
    // 注册服务对应的Handler程序
    //
    ssHandle = ::RegisterServiceCtrlHandler(
                    SERVICE_NAME,
                    YXHandler
                    );

    if (ssHandle == reinterpret_cast<SERVICE_STATUS_HANDLE>(0))
    {
        serStatus.dwCurrentState = SERVICE_STOPPED;
        serStatus.dwWin32ExitCode = ERROR_SERVICE_SPECIFIC_ERROR;
        serStatus.dwServiceSpecificExitCode = 1;
        return;
    }

    serStatus.dwCurrentState = SERVICE_RUNNING;

    //
    // 设置服务状态
    //
    ::SetServiceStatus(
        ssHandle,
        &serStatus
        );
}

VOID WINAPI YXHandler(
    __in DWORD fdwControl
    )
{
    ofstream ofs("YXServiceLog.txt", ios::app);

    switch (fdwControl)
    {
        case SERVICE_CONTROL_PAUSE:
            serStatus.dwCurrentState = SERVICE_PAUSE_PENDING;
            ::SetServiceStatus(ssHandle, &serStatus);
            serStatus.dwCurrentState = SERVICE_PAUSED;

            GetLocalTime(&time);
            ofs << time.wYear << "-"
                << time.wMonth << "-" 
                << time.wDay << " "
                << time.wHour << ":"
                << time.wMinute << ":"
                << time.wSecond << " "
                <<"Service Paused" << endl;

            break;

        case SERVICE_CONTROL_CONTINUE:
            serStatus.dwCurrentState = SERVICE_CONTINUE_PENDING;     
            ::SetServiceStatus(ssHandle, &serStatus);
            serStatus.dwCurrentState = SERVICE_RUNNING;

            GetLocalTime(&time);
            ofs << time.wYear << "-"
                << time.wMonth << "-" 
                << time.wDay << " "
                << time.wHour << ":"
                << time.wMinute << ":"
                << time.wSecond << " "
                <<"Servic Continue" << endl;

            break;

        case SERVICE_CONTROL_STOP:
            serStatus.dwCurrentState = SERVICE_STOP_PENDING;
            ::SetServiceStatus(ssHandle, &serStatus);
            serStatus.dwCurrentState = SERVICE_STOPPED;

            GetLocalTime(&time);
            ofs << time.wYear << "-"
                << time.wMonth << "-" 
                << time.wDay << " "
                << time.wHour << ":"
                << time.wMinute << ":"
                << time.wSecond << " "
                <<"Service Stopped" << endl;

            break;

        case SERVICE_CONTROL_SHUTDOWN:
            break;

        case SERVICE_CONTROL_INTERROGATE:
            serStatus.dwCurrentState = SERVICE_RUNNING;

            break;
    }

    ::SetServiceStatus(ssHandle, &serStatus);
}