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
#include "../WindowsPowerLW/WindowsPowerLW.h"
#include <gtest/gtest.h>
#ifdef _DEBUG
#pragma comment (lib,"gtestd.lib")
#else
#pragma comment (lib,"gtest.lib")
#endif

class gTestWinPwr : public testing::Test
{
    public:
        static void SetUpTestCase()
        {
            pLW = new WindowsPowerLW();
        }
        static void TearDownTestCase()
        {
            if (pLW != NULL)
            {
                delete pLW;
                pLW = NULL;
            }
        }

        static WindowsPowerLW* pLW;

};