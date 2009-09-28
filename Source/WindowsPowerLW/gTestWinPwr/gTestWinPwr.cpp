//////////////////////////////////////////////////////////
///
/// @file      gTestWinPwr.cpp
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

#include "stdafx.h"
#include "gTestWinPwr.h"

WindowsPowerLW* gTestWinPwr::pLW = NULL;

ULONG nStandby          = 0;                       /// 待机时间
ULONG nHibernate        = 0;                       /// 休眠时间
ULONG nVideoOffTime     = 0;                       /// 关闭监视器时间
ULONG nSpindownTime     = 0;                       /// 关闭硬盘时间
bool flag               = false;                   /// 读写权限标志

TEST_F(gTestWinPwr,SystemPowerTest1)
{
    ASSERT_EQ(S_OK,gTestWinPwr::pLW->CanUserWritePowerScheme(&flag));
    ASSERT_EQ(S_OK,gTestWinPwr::pLW->GetCurrentPowerScheme());
    ASSERT_EQ(S_OK,gTestWinPwr::pLW->GetDiskSpindownTime(nSpindownTime));
    ASSERT_EQ(S_OK,gTestWinPwr::pLW->GetSuspendTime(nStandby,nHibernate));
    ASSERT_EQ(S_OK,gTestWinPwr::pLW->GetVideoOffTime(nVideoOffTime));
    ASSERT_EQ(S_OK,gTestWinPwr::pLW->UpdateCurrentPowerScheme());

}
TEST_F(gTestWinPwr,SystemPowerTest2)
{
    ASSERT_EQ(S_OK,gTestWinPwr::pLW->GetCurrentPowerScheme());
    ASSERT_EQ(S_OK,gTestWinPwr::pLW->GetDiskSpindownTime(nSpindownTime));
    ASSERT_EQ(S_OK,gTestWinPwr::pLW->GetSuspendTime(nStandby,nHibernate));
    ASSERT_EQ(S_OK,gTestWinPwr::pLW->GetVideoOffTime(nVideoOffTime));
    ASSERT_EQ(S_OK,gTestWinPwr::pLW->UpdateCurrentPowerScheme(600,1200,600,300));
}
int _tmain(int argc, _TCHAR* argv[])
{
    testing::GTEST_FLAG(output) = "xml:TestResult.xml";
    testing::InitGoogleTest(&argc,argv);
    return RUN_ALL_TESTS();
}

