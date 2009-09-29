//////////////////////////////////////////////////////////
///
/// @file      gTestRSS.h
///
/// @brief     ����GoogleTest����RSSLW��
///
/// @version   1.0
///
/// @author    ����־
///
/// @date      2009-09-28
///
//////////////////////////////////////////////////////////
#pragma once
#include "../RSSParser/RSSParser.h"
#include "gtest/gtest.h"
class gTestRSS : public testing::Test
{
public:
    static void SetUpTestCase()
    {
        ASSERT_HRESULT_SUCCEEDED(CoInitialize(NULL));
        pLW = new RSSLW();
    }
    static void TearDownTestCase()
    {
        if (pLW != NULL)
        {
            pLW->UninitParser();
            delete pLW;
            pLW = NULL;
        }
        CoUninitialize();
    }
    static RSSLW * pLW;
};
