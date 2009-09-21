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
/// @date      2009-07-23
///
//////////////////////////////////////////////////////////
#include "stdafx.h"
#include "testICalc.h"

/// @brief ���һ��TestCase��һ��TestSuite\n
/// TEST(TestICalc, NormalData)��������������������
TEST(TestICalc, NormalData)
{
    for (int i=0; i<42; i++)
    {
        EXPECT_EQ( NormalResult[i], GetResult(NormalData[i]) ) << "Error at index :" << i;
    }
}

/// @brief ���һ��TestCase��һ��TestSuite\n
/// TEST(TestICalc, ExceptionData)�����������쳣������
TEST(TestICalc, ExceptionData)
{
    for (int i=0; i<8; i++)
    {
        EXPECT_EQ( ExceptionResult[i], GetResult(ExceptionData[i]) ) << "Error at index :" << i;
    }
}

/// @brife �ò�������ִ������\n
/// testing::AddGlobalTestEnviroment(new Basic)���һ��ȫ���¼�\n
/// testing::InitGoogleTest(&argc, argv);���г�ʼ������\n
/// RUN_ALL_TESTS();�������е�TestCase
int _tmain(int argc, _TCHAR* argv[])
{
    testing::AddGlobalTestEnvironment(new Basic);
    testing::InitGoogleTest(&argc, argv);      

    return RUN_ALL_TESTS();                 
}