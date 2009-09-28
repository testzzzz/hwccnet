// GTest.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <windows.h>
#include "gtest/gtest.h"

TEST(testWinService, HANDLE)
{
    SC_HANDLE hManager = ::OpenSCManager(
                             NULL,
                             NULL,
                             SC_MANAGER_ALL_ACCESS
                             );
    if (hManager == NULL)
    {
        ADD_FAILURE();
    }

    TCHAR fileName[256] = {0};
    DWORD bufLen = ::GetModuleFileName(
                        NULL,
                        fileName,
                        255
                        );
    if (bufLen == 0)
    {
        ADD_FAILURE();
    }

    ASSERT_TRUE(::CloseServiceHandle(hManager));

    //
    // 下面的测试代码将创建一个系统服务
    //
//     SC_HANDLE hService = ::CreateService(
//                             hManager,
//                             _T("gtest"),
//                             _T("gtest"),
//                             SERVICE_ALL_ACCESS,
//                             SERVICE_WIN32_OWN_PROCESS,
//                             SERVICE_DEMAND_START,
//                             SERVICE_ERROR_IGNORE,
//                             fileName,
//                             NULL,
//                             NULL,
//                             NULL,
//                             NULL,
//                             NULL
//                             );
// 
//     if (hService == NULL)
//     {
//         ADD_FAILURE();
//     }

//    ASSERT_TRUE(::CloseServiceHandle(hService));
}
int _tmain(int argc, _TCHAR* argv[])
{
    testing::GTEST_FLAG(output) = "xml:TestResult.xml";

    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}