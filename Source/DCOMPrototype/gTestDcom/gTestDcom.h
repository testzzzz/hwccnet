//////////////////////////////////////////////////////////
///
/// @file      gTestWinPwr.h
///
/// @brief     利用GoogleTest测试WindowsPowerLW类
///
/// @version   1.0
///
/// @author    甘先志
///
/// @date      2009-09-28
///
//////////////////////////////////////////////////////////
#pragma once

#include "gtest/gtest.h"

class gTestDcom : public testing::Test
{
    public:
        static void SetUpTestCase()
        {
            HRESULT hr = CoInitialize(NULL);
            if (FAILED(hr))
            {
                cout << "error " <<endl;
                return ;
            }
        }
        static void TearDownTestCase()
        {
            CoUninitialize();
        }
    static IMyObject* pt;
};
