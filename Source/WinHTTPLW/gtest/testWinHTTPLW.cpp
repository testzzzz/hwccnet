//////////////////////////////////////////////////////////
///
/// @file      testWinHTTPLW.cpp
///
/// @brief     利用GoogleTest测试WinHTTPLW类
///
/// @version   1.0
///
/// @author    游枭
///
/// @date      2009-09-27
///
//////////////////////////////////////////////////////////

#include "stdafx.h"
#include "testWinHTTPLW.h"

WinHTTPLW* TestWinHTTPLW::pLW = NULL;

TEST_F(TestWinHTTPLW, 52xianjian)
{
    ASSERT_EQ(S_OK, WinHTTPLW::Initialize());
    ASSERT_EQ(S_OK, TestWinHTTPLW::pLW->Connect(L"www.52xianjian.com"));
    ASSERT_EQ(S_OK, TestWinHTTPLW::pLW->Request(L"GET", L"/ip.php"));
    ASSERT_EQ(S_OK, TestWinHTTPLW::pLW->downloadFile(L"ip"));
}

TEST_F(TestWinHTTPLW, baidu)
{
    ASSERT_EQ(S_OK, WinHTTPLW::Initialize());
    ASSERT_EQ(S_OK, TestWinHTTPLW::pLW->Connect(L"www.baidu.com"));
    ASSERT_EQ(S_OK, TestWinHTTPLW::pLW->Request());
    ASSERT_EQ(S_OK, TestWinHTTPLW::pLW->downloadFile(L"baidu"));
}

TEST_F(TestWinHTTPLW, google)
{
    ASSERT_EQ(S_OK, WinHTTPLW::Initialize());
    ASSERT_EQ(S_OK, TestWinHTTPLW::pLW->Connect(L"www.google.com"));
    ASSERT_EQ(S_OK, TestWinHTTPLW::pLW->Request());
    ASSERT_EQ(S_OK, TestWinHTTPLW::pLW->downloadFile(L"google"));
}

int _tmain(int argc, _TCHAR* argv[])
{
    testing::GTEST_FLAG(output) = "xml:TestResult.xml";

    testing::InitGoogleTest(&argc, argv);    
	return RUN_ALL_TESTS();
}