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
#include "../WindowsPowerLW/WindowsPowerLW.h"
#include "gtest/gtest.h"



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