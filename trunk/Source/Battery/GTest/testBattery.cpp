// GTest.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <windows.h>
#include "gtest/gtest.h"

TEST(testBattery, GetSystemPowerStatus)
{
    SYSTEM_POWER_STATUS sps;
    ASSERT_TRUE(GetSystemPowerStatus(&sps));
}

int _tmain(int argc, _TCHAR* argv[])
{
    testing::GTEST_FLAG(output) = "xml:TestResult.xml";

    testing::InitGoogleTest(&argc, argv);    
    return RUN_ALL_TESTS();
}

