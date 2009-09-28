//////////////////////////////////////////////////////////
///
/// @file      testICalculator.cpp
///
/// @brief     利用GoogleTest测试ICalculator接口
///
/// @version   1.0
///
/// @author    游枭
///
/// @date      2009-09-27
///
//////////////////////////////////////////////////////////
#include "stdafx.h"
#include "testICalc.h"

/// @brief 添加一个TestCase到一个TestSuite
/// TEST_F(ICalcTest, PutKey_Normal)将测试所有正常的数据
TEST_F(ICalcTest, PutKey_Normal)
{
    for (int i=0; i<42; i++)
    {
        EXPECT_EQ( NormalResult[i], GetResult(NormalData[i]) );
    }
}

/// @brief 添加一个TestCase到一个TestSuite
/// TEST_F(ICalcTest, PutKey_Normal)将测试所有异常的数据
TEST_F(ICalcTest, PutKey_Exception)
{
    for (int i=0; i<8; i++)
    {
        EXPECT_EQ( ExceptionResult[i], GetResult(ExceptionData[i]) );
    }
}

/// testing::InitGoogleTest(&argc, argv);进行初始化操作
/// RUN_ALL_TESTS();运行所有的TestCase
int _tmain(int argc, _TCHAR* argv[])
{
    testing::GTEST_FLAG(output) = "xml:TestResult.xml";

    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}