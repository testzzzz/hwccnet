//////////////////////////////////////////////////////////
///
/// @file      SampleTestCalc.cpp 
///
/// @brief     ����CppUnit����ICalculator�ӿ�
///
/// @version   1.0
///
/// @author    ����־
///
/// @date      2009-07-22
///
//////////////////////////////////////////////////////////

#include <cppunit/config/SourcePrefix.h>
#include "SampleTestCalc.h"
#include "LWCalculator_i.c"
#include "../include/LWC.h"


CPPUNIT_TEST_SUITE_REGISTRATION( CSampleTestCalc );       //��CSampleTestCalcע�ᵽtestfactory

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
/// @brief ��ʼ��com�ӿ�
///
/// @param ��
///
/// @return �Ƿ�ɹ���ʼ��
///
////////////////////////////////////////////////////////////
void CSampleTestCalc::InitiCominterface(void)
{
    HRESULT Error = S_OK;
    Error = CoInitialize(NULL);     //��ʼ��COM��
    if ( FAILED(Error) )
    {
        CPPUNIT_FAIL( "��ʼ��COM��ʧ��!");
        CoUninitialize();
    }


}
////////////////////////////////////////////////////////////
///
/// @brief ��ɱ��ʽ���벢����
///
/// @param void
///
/// @return ���������ֵ�Ƿ�һ��
///
////////////////////////////////////////////////////////////
void CSampleTestCalc::TestDataIn(void)
{
    //���������������
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
    
    //���������Ľ����-888888��ʾ�����쳣�����
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

    bool bException = false;                //�Ƿ��д������
    char* strExpression = NULL;             //��������ַ��������ָ��

    for (int i =0;i < 50;i ++)
    {
        int temp = 0;                       //��õ�ǰ�������ӵ�λ��
        bException =false;                  //ÿ�����в��Ե�ʱ��bException��Ϊ��
        char strError[20] = {""};           //�������Ĳ������ݵ�λ��

        HRESULT Error = CoCreateInstance(
            CLSID_Calculator, 
            NULL, 
            CLSCTX_INPROC_SERVER, 
            IID_ICalculator, 
            reinterpret_cast<void**>(&pCalc)
            );

        CPPUNIT_ASSERT_MESSAGE("�������ʧ��!",FAILED(Error) == false);

        strExpression = str[i];                             //�������ݴ���

        while( *strExpression != '\0' )                     //׼���������ݵ��ӿڽ��д���
        {
            if (bException)                                 //���쳣�������һ��
            {
                break;
            }
            switch ( *strExpression )                       //���ַ����е����ݽ��нӿں�������
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
        if ( !bException )                                      //û���쳣�����ͽ������
        {
            pCalc->QueryResult(&lResult);                       //��ȡ������

            temp = i + 1;
            itoa(temp,strError,10);                             //��int temp����ת��Ϊ char����

            //��������Ľ������쳣
            CPPUNIT_ASSERT_EQUAL_MESSAGE(strError,expected[i],lResult);     
        }

    }

}