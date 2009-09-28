#ifndef TEST_WINHTTPLW_H
#define TEST_WINHTTPLW_H

#include "gtest/gtest.h"
#include "..\WinHTTPLW\WinHTTPLW.h"

/// @class TestWinHTTPLW
/// @brief Ϊ��ӦTestSuite�¼�����TestSuite�¼���ʼ�ͽ���ʱ��ִ��һЩ��ʼ�����������
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