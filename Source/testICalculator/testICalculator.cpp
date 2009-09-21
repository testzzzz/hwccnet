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
/// @date      2009-07-23
///
//////////////////////////////////////////////////////////
#include "stdafx.h"
#include "testICalc.h"

/// @brief 添加一个TestCase到一个TestSuite\n
/// TEST(TestICalc, NormalData)将测试所有正常的数据
TEST(TestICalc, NormalData)
{
    for (int i=0; i<42; i++)
    {
        EXPECT_EQ( NormalResult[i], GetResult(NormalData[i]) ) << "Error at index :" << i;
    }
}

/// @brief 添加一个TestCase到一个TestSuite\n
/// TEST(TestICalc, ExceptionData)将测试所有异常的数据
TEST(TestICalc, ExceptionData)
{
    for (int i=0; i<8; i++)
    {
        EXPECT_EQ( ExceptionResult[i], GetResult(ExceptionData[i]) ) << "Error at index :" << i;
    }
}

/// @brife 让测试用例执行起来\n
/// testing::AddGlobalTestEnviroment(new Basic)添加一个全局事件\n
/// testing::InitGoogleTest(&argc, argv);进行初始化操作\n
/// RUN_ALL_TESTS();运行所有的TestCase
int _tmain(int argc, _TCHAR* argv[])
{
    testing::AddGlobalTestEnvironment(new Basic);
    testing::InitGoogleTest(&argc, argv);      

    return RUN_ALL_TESTS();                 
}