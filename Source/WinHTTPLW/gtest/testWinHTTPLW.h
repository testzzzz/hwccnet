#ifndef TEST_WINHTTPLW_H
#define TEST_WINHTTPLW_H

#include "gtest/gtest.h"
#include "..\WinHTTPLW\WinHTTPLW.h"

/// @class TestWinHTTPLW
/// @brief 为响应TestSuite事件，在TestSuite事件开始和结束时候执行一些初始化和清理操作
class TestWinHTTPLW : public testing::Test
{
    public:
        static void SetUpTestCase()
        {
            pLW = new WinHTTPLW();
        }
        static void TearDownTestCase()
        {
            if (pLW != NULL)
            {
                delete pLW;
                pLW = NULL;
            }
        }

        static WinHTTPLW* pLW;
};

#endif