//////////////////////////////////////////////////////////
///
/// @file      gTestWinPwr.h
///
/// @brief     ����GoogleTest����WindowsPowerLW��
///
/// @version   1.0
///
/// @author    ����־
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
