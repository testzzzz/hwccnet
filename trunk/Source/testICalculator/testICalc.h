//////////////////////////////////////////////////////////
///
/// @file      testICalc.h
///
/// @brief     ������������Ҫ�ĺ�������������ͺ궨��
///
/// @version   1.0
///
/// @author    ����
///
/// @date      2009-07-23
/// 
////////////////////////////////////////////////////////////
#ifndef GTESTIC_H
#define GTESTIC_H
#include "stdafx.h"
#include "gtest/gtest.h"


/// @def E_DIV_ZERO
/// ������Ϊ��ʱ���صĴ���ֵ
#define E_DIV_ZERO    _HRESULT_TYPEDEF_(0x80020001L)

////////////////////////////////////////////////////////////
///
/// @brief ��ɱ��ʽ�ļ���
///
/// @param [in] __in char* strExpression 
///
/// @return ���ر��ʽ��ֵ
///
/// @retval E_INVALIDARG �������
///
/// @retval E_DIV_ZERO ����Ϊ��
///
////////////////////////////////////////////////////////////
long GetResult(__in char* strExpression);

extern char* NormalData[42];                ///< �������������������
extern char* ExceptionData[8];              ///< ������쳣���������  
extern long NormalResult[42];               ///< �������ݲ����Ľ��
extern long ExceptionResult[8];             ///< �쳣���ݲ����Ľ��


/// @class Basic
/// @brief �����в�������ִ��ǰ��ʼ��COM�⣬���в�������ִ�к�ж��COM��\n
/// ʵ��ȫ���¼���̳�testing::Environment�ಢʵ�������SetUp��TearDown���� 
class Basic : public testing::Environment
{
    public:

        /// @brief �����в�������ִ��ǰִ�У���ʼ��COM��
        /// @param void
        /// @return void
        virtual void SetUp(void);

        /// @brief �����в�������ִ�к�ִ�У�ж��COM��
        /// @param void
        /// @return void
        virtual void TearDown(void);
};


/// @enum LW_KEY
/// ������ICalculator�ӿ����ܴ���ļ�ֵ
typedef enum
{
    LWK_0,          ///<���ּ�0
    LWK_1,          ///<���ּ�1
    LWK_2,          ///<���ּ�2
    LWK_3,          ///<���ּ�3
    LWK_4,          ///<���ּ�4
    LWK_5,          ///<���ּ�5
    LWK_6,          ///<���ּ�6
    LWK_7,          ///<���ּ�7
    LWK_8,          ///<���ּ�8
    LWK_9,          ///<���ּ�9
    LWK_C,          ///<�����C
    LWK_CE,         ///<��ռ�CE
    LWK_D,          ///<�˸��Backspace
    LWK_ADD,        ///<�ӷ�
    LWK_SUB,        ///<����
    LWK_MUL,        ///<�˷�
    LWK_DIV,        ///<����
    LWK_EQU,        ///<�س���
    LWK_REV         ///<������
}LW_KEY;

#endif