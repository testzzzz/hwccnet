//////////////////////////////////////////////////////////
///
/// @file      WinService.cpp
///
/// @brief     һ���򵥵�Windows Serviceʾ������Log�ļ����Ŀ¼��Windows\System32
///
/// @version   1.0
///
/// @author    ����
///
/// @date      2009-09-02
/// 
/// <�޸�����>      <�޸���>        <�޸�����>\n
///
///  2009-09-02      ����            ����
///
////////////////////////////////////////////////////////////

#include "stdafx.h"
#include <Windows.h>
#include <fstream>
using namespace std;

/// @def SERVICE_NAME
/// @brief ���������
#define SERVICE_NAME L"YXService"

////////////////////////////////////////////////////////////
///
/// @brief �������������ÿ������ӵ�����Լ�Ψһ��Ӧ��ServiceMain����
///
/// @note �ɲ���ϵͳ���ã���ִ������ɷ���Ĵ��롣
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
/// @brief �ı�����״̬���ܵ���֪ͨ����
///
/// @note �û�����Ϊ���ķ��������ÿһ������дһ��������CtrlHandler����
///
/// @param __in DWORD fdwControl ����״̬֪ͨ��
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
        // ���SCM���ݿ�ľ��
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
        // ���������Ϣ��ӵ�SCM�����ݿ�
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
    // Ϊ�����񴴽��߳�
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
    // ע������Ӧ��Handler����
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
    // ���÷���״̬
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