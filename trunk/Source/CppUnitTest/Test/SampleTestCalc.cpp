//////////////////////////////////////////////////////////
///
/// @file      SampleTestCalc.cpp 
///
/// @brief     利用CppUnit测试ICalculator接口
///
/// @version   1.0
///
/// @author    甘先志
///
/// @date      2009-07-22
///
//////////////////////////////////////////////////////////

#include <cppunit/config/SourcePrefix.h>
#include "SampleTestCalc.h"
#include "LWCalculator_i.c"
#include "../include/LWC.h"


CPPUNIT_TEST_SUITE_REGISTRATION( CSampleTestCalc );       //将CSampleTestCalc注册到testfactory

CSampleTestCalc::CSampleTestCalc(void)
: pCalc(NULL)
, lResult(0)
{
    
}

CSampleTestCalc::~CSampleTestCalc(void)
{
}


////////////////////////////////////////////////////////////
///
/// @brief 初始化com接口
///
/// @param 无
///
/// @return 是否成功初始化
///
////////////////////////////////////////////////////////////
void CSampleTestCalc::InitiCominterface(void)
{
    HRESULT Error = S_OK;
    Error = CoInitialize(NULL);     //初始化COM库
    if ( FAILED(Error) )
    {
        CPPUNIT_FAIL( "初始化COM库失败!");
        CoUninitialize();
    }


}
////////////////////////////////////////////////////////////
///
/// @brief 完成表达式输入并计算
///
/// @param void
///
/// @return 结果与期望值是否一致
///
////////////////////////////////////////////////////////////
void CSampleTestCalc::TestDataIn(void)
{
    //定义测试用例数据
    char* str[50] = { "1+2=",           "2-1=",         "2*3=",         "6/3=",         "6/0=",
                      "1-2=",           "0+0=",         "0-0=",         "100!=",        "100E+2=",
                      "1+100D=",        "1+=",          "1+++1=",       "1---1=",       "1*+1=", 
                      "1+2===E===",     "10/11DD=",     "/8/2=",        "*1/1=",        "1/1!====", 
                      "1/1!===",        "1!/0=",        "1!*0=",        "1!/1=",        "1!/2=", 
                      "9!/3==",         "9!/3!=",       "1!*1=",        "1!+4=",        "9!/+-*3=",
                      "111/*-+111=",    "11*11d=",      "11/2=",        "65535+2=",     "65535!-2=",  
                      "60000*100=",     "60000!*100!=", "1+2+3+4+5=",   "32s+2=",       "20/5/5/5=", 
                      "20+5*2/5=",      "20=+5!=",      "2+3=4+2=",     "3+2*-7C2*3=",  "3*-2=3*8!=", 
                      "2+3=====",       "2/3=====",     "10e+20*10*8!=", "2*3E88D=",     "2+++++-*3="};
    
    //测试用例的结果，-888888表示输入异常的情况
    long expected[50] = { 3,        1,           6,      2,          -888888,
                          -1,       0,           0,      -100,       2,
                          11,       1,           2,      0,          2,
                          13,       -888888,     0,      0,          1,
                          -1,       -888888,     0,     -1,          0,
                          -1,       3,           -1,    3,           -27,
                          222,      11,          5,     -888888,     -888888,
                          -888888,  -888888,     15,    1,           0,
                          10,       15,          6,     6,           -24,
                          17,       0,           -1600,     16,       6 };

    bool bException = false;                //是否有错误产生
    char* strExpression = NULL;             //保存进行字符串输入的指针

    for (int i =0;i < 50;i ++)
    {
        int temp = 0;                       //获得当前运行例子的位置
        bException =false;                  //每次运行测试的时候将bException置为假
        char strError[20] = {""};           //输出错误的测试数据的位置

        HRESULT Error = CoCreateInstance(
            CLSID_Calculator, 
            NULL, 
            CLSCTX_INPROC_SERVER, 
            IID_ICalculator, 
            reinterpret_cast<void**>(&pCalc)
            );

        CPPUNIT_ASSERT_MESSAGE("创建组件失败!",FAILED(Error) == false);

        strExpression = str[i];                             //进行数据传递

        while( *strExpression != '\0' )                     //准备输入数据到接口进行处理
        {
            if (bException)                                 //有异常则进行下一条
            {
                break;
            }
            switch ( *strExpression )                       //按字符串中的类容进行接口函数调用
            {
            case '0':
                Error = pCalc->PutKey(LWK_0);

                if (FAILED(Error))
                {
                    bException = true;
                }

                break;

            case '1':
                Error = pCalc->PutKey(LWK_1);

                if (FAILED(Error))
                {
                    bException = true;
                }

                break;

            case '2':
                Error = pCalc->PutKey(LWK_2);

                if (FAILED(Error))
                {
                    bException = true;
                }

                break;

            case '3':
                Error = pCalc->PutKey(LWK_3);

                if (FAILED(Error))
                {
                    bException = true;
                }

                break;

            case '4':
                Error = pCalc->PutKey(LWK_4);

                if (FAILED(Error))
                {
                    bException = true;
                }

                break;

            case '5':
                Error = pCalc->PutKey(LWK_5);

                if (FAILED(Error))
                {
                    bException = true;
                }

                break;

            case '6':
                Error = pCalc->PutKey(LWK_6);

                if (FAILED(Error))
                {
                    bException = true;
                }

                break;

            case '7':
                Error = pCalc->PutKey(LWK_7);

                if (FAILED(Error))
                {
                    bException = true;
                }

                break;

            case '8':
                Error = pCalc->PutKey(LWK_8);

                if (FAILED(Error))
                {
                    bException = true;
                }

                break;

            case '9':
                Error = pCalc->PutKey(LWK_9);

                if (FAILED(Error))
                {
                    bException = true;
                }

                break;

            case '+':
                Error = pCalc->PutKey(LWK_ADD);

                if (FAILED(Error))
                {
                    if ( Error == DIV_ZERO )
                    {
                        bException = true;
                        break;
                    }
                    bException = true;
                }

                break;

            case '-':
                Error = pCalc->PutKey(LWK_SUB);

                if (FAILED(Error))
                {
                    if ( Error == DIV_ZERO )
                    {
                        bException = true;
                        break;
                    }

                    bException = true;
                }

                break;

            case '*':
                Error = pCalc->PutKey(LWK_MUL);

                if (FAILED(Error))
                {
                    if ( Error == DIV_ZERO )
                    {
                        bException = true;

                        break;
                    }

                    bException = true;
                }

                break;

            case '/':
                Error = pCalc->PutKey(LWK_DIV);

                if (FAILED(Error))
                {
                    if ( Error == DIV_ZERO )
                    {
                        bException = true;

                        break;
                    }

                    bException = true;
                }

                break;

            case '=':
                Error = pCalc->PutKey(LWK_EQU);

                if (FAILED(Error))
                {
                    if ( Error == DIV_ZERO )
                    {
                        bException = true;

                        break;
                    }

                    bException = true;
                }

                break;

            case '!':
                pCalc->PutKey(LWK_REV);

                break;

            case 'C':
            case 'c':
                pCalc->PutKey(LWK_C);

                break;

            case 'E':
            case 'e':
                pCalc->PutKey(LWK_CE);

                break;

            case 'D':
            case 'd':
                pCalc->PutKey(LWK_D);

                break;

            default:
                bException = true;

                break;
            }
            strExpression++;
        }
        if ( !bException )                                      //没有异常产生就进行输出
        {
            pCalc->QueryResult(&lResult);                       //获取计算结果

            temp = i + 1;
            itoa(temp,strError,10);                             //将int temp类型转换为 char类型

            //遇到错误的结果输出异常
            CPPUNIT_ASSERT_EQUAL_MESSAGE(strError,expected[i],lResult);     
        }

    }

}