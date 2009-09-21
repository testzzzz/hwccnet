//==================================================================//
//
// ��Ȩ����: ��Ϊ���
//
// �ļ�����: Test.cpp
//
// �ļ�����: �Բ����������в���
//
// �汾��Ϣ: 1.0
//
// ��    ��: ����
//
// ��������: 2009-07-16
//
// ��ע��Ϣ: 
//
// �޸ļ�¼: 
// �޸�����       �޸���   �޸���������
// 2009-07-16      ����     ���� 
// 2009-07-17      ����     ���Ӷ�C��Backspace��CE���ͷǷ��ַ��Ĵ���
//------------------------------------------------------------
//
//==================================================================//

#include <iostream>
#include "../include/LWC.h"
#include "../ICalculator/LWCalculator_i.h"
#include "../ICalculator/LWCalculator_i.c"
using std::cout;
using std::endl;

int main(int argc, char* argv[])
{
    UNREFERENCED(argc);
    UNREFERENCED(argv);

    HRESULT Error = S_OK;
    Error = CoInitialize(NULL);     //��ʼ��COM��

    if ( FAILED(Error) )
    {
        cout << "��ʼ��COM��ʧ��!" <<endl;
        goto exit;
    }

    long lResult = 0;               //����������

    ICalculator* pCalc = NULL;

    char* strExpression = NULL;       

    bool bException = false;

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

    //��ʼ������ʽ,���ýӿ�ICalculator���м���
    for( int i=0; i<50; i++)
    {
        bException = false;

        Error = CoCreateInstance(
            CLSID_Calculator, 
            NULL, 
            CLSCTX_INPROC_SERVER, 
            IID_ICalculator, 
            reinterpret_cast<void**>(&pCalc)
            );

        if ( FAILED(Error) )
        {
            cout << "�������ʧ��!" <<endl;
            goto exit;
        }

        strExpression = str[i];

        while (*strExpression != '\0')       
        {
            if ( bException )           //������쳣����������һ�����ʽ
            {
                break;
            }
            switch ( *strExpression )
            {
                case '0':
                    Error = pCalc->PutKey(LWK_0);

                    if (FAILED(Error))
                    {
                        cout << "����Խ�磬��Χ-65536��65535" << endl;
                        bException = true;
                    }

                    break;

                case '1':
                    Error = pCalc->PutKey(LWK_1);

                    if (FAILED(Error))
                    {
                        cout << "����Խ�磬��Χ-65536��65535" << endl;
                        bException = true;
                    }

                    break;

                case '2':
                    Error = pCalc->PutKey(LWK_2);

                    if (FAILED(Error))
                    {
                        cout << "����Խ�磬��Χ-65536��65535" << endl;
                        bException = true;
                    }

                    break;

                case '3':
                    Error = pCalc->PutKey(LWK_3);

                    if (FAILED(Error))
                    {
                        cout << "����Խ�磬��Χ-65536��65535" << endl;
                        bException = true;
                    }

                    break;

                case '4':
                    Error = pCalc->PutKey(LWK_4);

                    if (FAILED(Error))
                    {
                        cout << "����Խ�磬��Χ-65536��65535" << endl;
                        bException = true;
                    }

                    break;

                case '5':
                    Error = pCalc->PutKey(LWK_5);

                    if (FAILED(Error))
                    {
                        cout << "����Խ�磬��Χ-65536��65535" << endl;
                        bException = true;
                    }

                    break;

                case '6':
                    Error = pCalc->PutKey(LWK_6);

                    if (FAILED(Error))
                    {
                        cout << "����Խ�磬��Χ-65536��65535" << endl;
                        bException = true;
                    }

                    break;

                case '7':
                    Error = pCalc->PutKey(LWK_7);

                    if (FAILED(Error))
                    {
                        cout << "����Խ�磬��Χ-65536��65535" << endl;
                        bException = true;
                    }

                    break;

                case '8':
                    Error = pCalc->PutKey(LWK_8);

                    if (FAILED(Error))
                    {
                        cout << "����Խ�磬��Χ-65536��65535" << endl;
                        bException = true;
                    }

                    break;

                case '9':
                    Error = pCalc->PutKey(LWK_9);

                    if (FAILED(Error))
                    {
                        cout << "����Խ�磬��Χ-65536��65535" << endl;
                        bException = true;
                    }

                    break;

                case '+':
                    Error = pCalc->PutKey(LWK_ADD);

                    if (FAILED(Error))
                    {
                        if ( Error == DIV_ZERO )
                        {
                            cout << "��������Ϊ�㣡" << endl;
                            bException = true;

                            break;
                        }

                        cout << "����Խ�磬��Χ-65536��65535" << endl;
                        bException = true;
                    }

                    break;

                case '-':
                    Error = pCalc->PutKey(LWK_SUB);

                    if (FAILED(Error))
                    {
                        if ( Error == DIV_ZERO )
                        {
                            cout << "��������Ϊ�㣡" << endl;
                            bException = true;

                            break;
                        }

                        cout << "����Խ�磬��Χ-65536��65535" << endl;
                        bException = true;
                    }

                    break;

                case '*':
                    Error = pCalc->PutKey(LWK_MUL);

                    if (FAILED(Error))
                    {
                        if ( Error == DIV_ZERO )
                        {
                            cout << "��������Ϊ�㣡" << endl;
                            bException = true;

                            break;
                        }

                        cout << "����Խ�磬��Χ-65536��65535" << endl;
                        bException = true;
                    }

                    break;

                case '/':
                    Error = pCalc->PutKey(LWK_DIV);

                    if (FAILED(Error))
                    {
                        if ( Error == DIV_ZERO )
                        {
                            cout << "��������Ϊ�㣡" << endl;
                            bException = true;

                            break;
                        }

                        cout << "����Խ�磬��Χ-65536��65535" << endl;
                        bException = true;
                    }

                    break;

                case '=':
                    Error = pCalc->PutKey(LWK_EQU);

                    if (FAILED(Error))
                    {
                        if ( Error == DIV_ZERO )
                        {
                            cout << "��������Ϊ�㣡" << endl;
                            bException = true;

                            break;
                        }

                        cout << "����Խ�磬��Χ-65536��65535" << endl;
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
                    cout << "�����зǷ��ַ���" << endl;
                    bException = true;

                    break;
            }

            strExpression++;

        }

        if ( !bException )                                      //û���쳣�����ͽ������
        {
            pCalc->QueryResult(&lResult);                       //��ȡ������

            cout << i + 1 << ". "
                 << str[i] << lResult << endl;
        }

        pCalc->Release(); 
      }
exit:
    CoUninitialize();

    getchar();
    return 0;
}


