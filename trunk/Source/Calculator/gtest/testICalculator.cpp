//////////////////////////////////////////////////////////
///
/// @file      testICalculator.cpp
///
/// @brief     ����GoogleTest����ICalculator�ӿ�
///
/// @version   1.0
///
/// @author    ����
///
/// @date      2009-09-27
///
//////////////////////////////////////////////////////////
#include "stdafx.h"
#include "testICalc.h"

/// @brief ���һ��TestCase��һ��TestSuite
/// TEST_F(ICalcTest, PutKey_Normal)��������������������
TEST_F(ICalcTest, PutKey_Normal)
{
    for (int i=0; i<42; i++)
    {
        EXPECT_EQ( NormalResult[i], GetResult(NormalData[i]) );
    }
}

/// @brief ���һ��TestCase��һ��TestSuite
/// TEST_F(ICalcTest, PutKey_Normal)�����������쳣������
TEST_F(ICalcTest, PutKey_Exception)
{
    for (int i=0; i<8; i++)
    {
        EXPECT_EQ( ExceptionResult[i], GetResult(ExceptionData[i]) );
    }
}

/// testing::InitGoogleTest(&argc, argv);���г�ʼ������
/// RUN_ALL_TESTS();�������е�TestCase
int _tmain(int argc, _TCHAR* argv[])
{
    testing::GTEST_FLAG(output) = "xml:TestResult.xml";

    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}