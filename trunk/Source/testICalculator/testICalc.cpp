//////////////////////////////////////////////////////////
///
/// @file      testICalc.cpp
///
/// @brief     �����������Ҫ�ĺ����ͱ���
///
/// @version   1.0
///
/// @author    ����
///
/// @date      2009-07-23
/// 
////////////////////////////////////////////////////////////
#include "stdafx.h"
#include "testICalc.h"
#include "LWCalculator_i.h"
#include "LWCalculator_i.c"

/// @brief �������������������
char* NormalData[42] = {    "1+2=",         "2-1=",         "2*3=",         "6/3=",         "1-2=",           
                            "0+0=",         "0-0=",         "100!=",        "100E+2=",      "1+100D=", 
                            "1+=",          "1+++1=",       "1---1=",       "1*+1=",        "1+2===E===",    
                            "/8/2=",        "*1/1=",        "1/1!====",     "1/1!===",      "1!*0=",    
                            "1!/1=",        "1!/2=",        "9!/3==",       "9!/3!=",       "1!*1=",   
                            "1!+4=",        "9!/+-*3=",     "111/*-+111=",  "11*11d=",      "11/2=",
                            "1+2+3+4+5=",   "20/5/5/5=",    "20+5*2/5=",    "20=+5!=",      "2+3=4+2=",
                            "3+2*-7C2*3=",  "3*-2=3*8!=",   "2+3=====",     "2/3=====",     "10e+20*10*8!=",
                            "2*3E88D=",     "2+++++-*3="};

/// @brief ������쳣���������
char* ExceptionData[8] = {  "6/0=",         "10/11DD=",     "1!/0=",        "65535+2=",     "65535!-2=",  
                            "60000*100=",   "60000!*100!=", "32s+2=",};

/// @brief �������ݲ����Ľ��
long NormalResult[42] = {    3,1,6,2,-1,0,0,-100,2,11,
                             1,2,0,2,13,0,0,1,-1,0,
                             -1,0,-1,3,-1,3,-27,222,11,5,
                             15,0,10,15,6,6,-24,17,0,-1600,
                             16,6};

/// @brief �������ݲ����Ľ��
long ExceptionResult[8] = {  E_DIV_ZERO,    E_DIV_ZERO,     E_DIV_ZERO,     E_INVALIDARG,
                             E_INVALIDARG,  E_INVALIDARG,   E_INVALIDARG,   E_INVALIDARG};

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

long GetResult(__in char *strExpression)
{
    HRESULT Error = S_OK;
    ICalculator* pCalc = NULL;      
    long Result = 0;            //�洢���ʽ��ֵ

    Error = CoCreateInstance(
        CLSID_Calculator, 
        NULL, 
        CLSCTX_INPROC_SERVER, 
        IID_ICalculator, 
        reinterpret_cast<void**>(&pCalc)
        );

    if ( FAILED(Error) )
    {
        std::cout << "�������ʧ��!" << std::endl;
        
        pCalc->Release();
        CoUninitialize();
        
        exit(0);
    }

    while (*strExpression != '\0')       
    {
        switch ( *strExpression )
        {
        case '0':
            Error = pCalc->PutKey(LWK_0);
            if ( FAILED(Error) )
            {
                return E_INVALIDARG;
            }
            break;

        case '1':
            Error = pCalc->PutKey(LWK_1);
            if ( FAILED(Error) )
            {
                return E_INVALIDARG;
            }
            break;

        case '2':
            Error = pCalc->PutKey(LWK_2);
            if ( FAILED(Error) )
            {
                return E_INVALIDARG;
            }
            break;

        case '3':
            Error = pCalc->PutKey(LWK_3);
            if ( FAILED(Error) )
            {
                return E_INVALIDARG;
            }
            break;

        case '4':
            Error = pCalc->PutKey(LWK_4);
            if ( FAILED(Error) )
            {
                return E_INVALIDARG;
            }
            break;

        case '5':
            Error = pCalc->PutKey(LWK_5);
            if ( FAILED(Error) )
            {
                return E_INVALIDARG;
            }
            break;

        case '6':
            Error = pCalc->PutKey(LWK_6);
            if ( FAILED(Error) )
            {
                return E_INVALIDARG;
            }
            break;

        case '7':
            Error = pCalc->PutKey(LWK_7);
            if ( FAILED(Error) )
            {
                return E_INVALIDARG;
            }
            break;

        case '8':
            Error = pCalc->PutKey(LWK_8);
            if ( FAILED(Error) )
            {
                return E_INVALIDARG;
            }
            break;

        case '9':
            Error = pCalc->PutKey(LWK_9);
            if ( FAILED(Error) )
            {
                return E_INVALIDARG;
            }
            break;

        case '+':
            Error = pCalc->PutKey(LWK_ADD);
            if ( FAILED(Error) )
            {
                if ( Error == E_DIV_ZERO )
                {
                    return E_DIV_ZERO;
                }
                else
                {
                    return E_INVALIDARG;
                }
            }

            break;

        case '-':
            Error = pCalc->PutKey(LWK_SUB);
            if ( FAILED(Error) )
            {
                if ( Error == E_DIV_ZERO )
                {
                    return E_DIV_ZERO;
                }
                else
                {
                    return E_INVALIDARG;
                }
            }

            break;

        case '*':
            Error = pCalc->PutKey(LWK_MUL);
            if ( FAILED(Error) )
            {
                if ( Error == E_DIV_ZERO )
                {
                    return E_DIV_ZERO;
                }
                else
                {
                    return E_INVALIDARG;
                }
            }

            break;

        case '/':
            Error = pCalc->PutKey(LWK_DIV);
            if ( FAILED(Error) )
            {
                if ( Error == E_DIV_ZERO )
                {
                    return E_DIV_ZERO;
                }
                else
                {
                    return E_INVALIDARG;
                }
            }

            break;

        case '=':
            Error = pCalc->PutKey(LWK_EQU);
            if ( FAILED(Error) )
            {
                if ( Error == E_DIV_ZERO )
                {
                    return E_DIV_ZERO;
                }
                else
                {
                    return E_INVALIDARG;
                }
            }

            break;

        case '!':
            Error = pCalc->PutKey(LWK_REV);

            break;

        case 'C':
        case 'c':
            Error = pCalc->PutKey(LWK_C);

            break;

        case 'E':
        case 'e':
            Error = pCalc->PutKey(LWK_CE);

            break;

        case 'D':
        case 'd':
            Error = pCalc->PutKey(LWK_D);

            break;

        default:

            return E_INVALIDARG;
        }

        strExpression++;
    }

    pCalc->QueryResult(&Result);

    pCalc->Release();

    return Result;

}

/// @brief �����в�������ִ��ǰִ�У���ʼ��COM��
/// @param void
/// @return void
void Basic::SetUp()
{
    HRESULT Error = S_OK;

    Error = CoInitialize(NULL);

    if (FAILED(Error))
    {
        std::cout << "��ʼ��COM��ʧ��" << std::endl;

        exit(0);
    }
    else
    {
        std::cout << "��ʼ��COM��ɹ�" << std::endl;
    }

}

/// @brief �����в�������ִ��ǰִ�У���ʼ��COM��
/// @param void
/// @return void
void Basic::TearDown()
{
    CoUninitialize();

    std::cout << "ж��COM��ɹ�" << std::endl;
}