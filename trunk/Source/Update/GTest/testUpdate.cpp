// GTest.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "testUpdate.h"

IUpdateVersion* TestUpdate::pUpdate = NULL;

//
// Ҫͨ��������Ե㣬��Ҫ���������ļ�ProductVersion=1.0.0001.1
//
// TEST_F(TestUpdate, Update)
// {
//     ASSERT_EQ(S_OK, TestUpdate::pUpdate->ConnectUpdateServer(L"www.52xianjian.com"));
//     ASSERT_EQ(S_OK, TestUpdate::pUpdate->CheckUpdate());
//     ASSERT_EQ(S_OK, TestUpdate::pUpdate->DownloadUpdateFile());
// }

TEST_F(TestUpdate, NonUpdate)
{
    ASSERT_EQ(S_OK, TestUpdate::pUpdate->ConnectUpdateServer(L"www.52xianjian.com"));
    ASSERT_EQ(E_NOUPDATE, TestUpdate::pUpdate->CheckUpdate());
    ASSERT_EQ(E_NOUPDATE, TestUpdate::pUpdate->DownloadUpdateFile());
}

TEST_F(TestUpdate, OtherServer)
{
    ASSERT_EQ(E_INVALIDARG, TestUpdate::pUpdate->ConnectUpdateServer(NULL));
    ASSERT_EQ(E_NOREQUEST, TestUpdate::pUpdate->CheckUpdate());
    ASSERT_EQ(E_NOUPDATE, TestUpdate::pUpdate->DownloadUpdateFile());
}

int _tmain(int argc, _TCHAR* argv[])
{
    testing::GTEST_FLAG(output) = "xml:TestResult.xml";

    testing::InitGoogleTest(&argc, argv);    
    return RUN_ALL_TESTS();
}

