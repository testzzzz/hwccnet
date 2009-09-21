//////////////////////////////////////////////////////////
///
/// @file      testICalc.h
///
/// @brief     声明程序所需要的函数、变量、类和宏定义
///
/// @version   1.0
///
/// @author    游枭
///
/// @date      2009-07-23
/// 
////////////////////////////////////////////////////////////
#ifndef GTESTIC_H
#define GTESTIC_H
#include "stdafx.h"
#include "gtest/gtest.h"


/// @def E_DIV_ZERO
/// 当除数为零时返回的错误值
#define E_DIV_ZERO    _HRESULT_TYPEDEF_(0x80020001L)

////////////////////////////////////////////////////////////
///
/// @brief 完成表达式的计算
///
/// @param [in] __in char* strExpression 
///
/// @return 返回表达式的值
///
/// @retval E_INVALIDARG 数据溢出
///
/// @retval E_DIV_ZERO 除数为零
///
////////////////////////////////////////////////////////////
long GetResult(__in char* strExpression);

extern char* NormalData[42];                ///< 能正常产生结果的数据
extern char* ExceptionData[8];              ///< 会产生异常结果的数据  
extern long NormalResult[42];               ///< 正常数据产生的结果
extern long ExceptionResult[8];             ///< 异常数据产生的结果


/// @class Basic
/// @brief 在所有测试用例执行前初始化COM库，所有测试用例执行后卸载COM库\n
/// 实现全局事件需继承testing::Environment类并实现里面的SetUp和TearDown方法 
class Basic : public testing::Environment
{
    public:

        /// @brief 在所有测试用例执行前执行，初始化COM库
        /// @param void
        /// @return void
        virtual void SetUp(void);

        /// @brief 在所有测试用例执行后执行，卸载COM库
        /// @param void
        /// @return void
        virtual void TearDown(void);
};


/// @enum LW_KEY
/// 定义了ICalculator接口所能处理的键值
typedef enum
{
    LWK_0,          ///<数字键0
    LWK_1,          ///<数字键1
    LWK_2,          ///<数字键2
    LWK_3,          ///<数字键3
    LWK_4,          ///<数字键4
    LWK_5,          ///<数字键5
    LWK_6,          ///<数字键6
    LWK_7,          ///<数字键7
    LWK_8,          ///<数字键8
    LWK_9,          ///<数字键9
    LWK_C,          ///<清除键C
    LWK_CE,         ///<清空键CE
    LWK_D,          ///<退格键Backspace
    LWK_ADD,        ///<加法
    LWK_SUB,        ///<减法
    LWK_MUL,        ///<乘法
    LWK_DIV,        ///<除法
    LWK_EQU,        ///<回车键
    LWK_REV         ///<正负键
}LW_KEY;

#endif