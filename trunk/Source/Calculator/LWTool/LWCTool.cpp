//==================================================================//
//
// ��Ȩ����: ��Ϊ���
//
// �ļ�����: LWCTool.cpp
//
// �ļ�����: ͨ�������в�����ɼ���
//
// �汾��Ϣ: 1.0
//
// ��    ��: ����
//
// ��������: 2009-07-14
//
// ��ע��Ϣ: 
//
// �޸ļ�¼: 
// �޸�����       �޸���   �޸���������
// 2009-07-15      ����     ����
// 2009-07-17      ����     ���Ӷ�C��Backspace��CE���ͷǷ��ַ��Ĵ���
//------------------------------------------------------------
//
//==================================================================//

#include "stdafx.h"
#include <assert.h>
#include <iostream>
#include "../include/LWC.h"
#include "..\ICalculator\LWCalculator_i.h"
#include "..\ICalculator\LWCalculator_i.c"
using std::cout;
using std::endl;

int main(int argc, char* argv[])
{
    if( argc != 2 )            //��ֻ֤����һ�����ʽ
    {
        cout << "��������ȷ��ֻ����һ������\n"
             << "�밴�����¸�ʽ�������룺\n"
             << "LWCTool.exe 19+8-7*12/25= ";

        return 0;
    }

    HRESULT Error = S_OK;
    Error = CoInitialize(NULL);     //��ʼ��COM��

    if ( FAILED(Error) )
    {
        cout << "��ʼ��COM��ʧ��!" <<endl;
        goto exit;
    }
    ICalculator* pCalc = NULL;

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


    char* strExpression = NULL;         
    strExpression = argv[1];            //������ʽ��ֵ

    //��ʼ������ʽ,���ýӿ�ICalculator���м���
    while (*strExpression != '\0')       
    {
        switch ( *strExpression )
        {
            case '0':
                Error = pCalc->PutKey(LWK_0);

                if (FAILED(Error))
                {
                    cout << "����Խ�磬��Χ-65536��65535" << endl;
                    goto exit;
                }

                break;

            case '1':
                Error = pCalc->PutKey(LWK_1);

                if (FAILED(Error))
                {
                    cout << "����Խ�磬��Χ-65536��65535" << endl;
                    goto exit;
                }

                break;

            case '2':
                Error = pCalc->PutKey(LWK_2);

                if (FAILED(Error))
                {
                    cout << "����Խ�磬��Χ-65536��65535" << endl;
                    goto exit;
                }

                break;

            case '3':
                Error = pCalc->PutKey(LWK_3);

                if (FAILED(Error))
                {
                    cout << "����Խ�磬��Χ-65536��65535" << endl;
                    goto exit;
                }

                break;

            case '4':
                Error = pCalc->PutKey(LWK_4);

                if (FAILED(Error))
                {
                    cout << "����Խ�磬��Χ-65536��65535" << endl;
                    goto exit;
                }

                break;

            case '5':
                Error = pCalc->PutKey(LWK_5);

                if (FAILED(Error))
                {
                    cout << "����Խ�磬��Χ-65536��65535" << endl;
                    goto exit;
                }

                break;

            case '6':
                Error = pCalc->PutKey(LWK_6);

                if (FAILED(Error))
                {
                    cout << "����Խ�磬��Χ-65536��65535" << endl;
                    goto exit;
                }

                break;

            case '7':
                Error = pCalc->PutKey(LWK_7);

                if (FAILED(Error))
                {
                    cout << "����Խ�磬��Χ-65536��65535" << endl;
                    goto exit;
                }

                break;

            case '8':
                Error = pCalc->PutKey(LWK_8);

                if (FAILED(Error))
                {
                    cout << "����Խ�磬��Χ-65536��65535" << endl;
                    goto exit;
                }

                break;

            case '9':
                Error = pCalc->PutKey(LWK_9);

                if (FAILED(Error))
                {
                    cout << "����Խ�磬��Χ-65536��65535" << endl;
                    goto exit;
                }

                break;

            case '+':
                Error = pCalc->PutKey(LWK_ADD);

                if (FAILED(Error))
                {
                    if ( Error == DIV_ZERO )
                    {
                        cout << "��������Ϊ�㣡" << endl;
                        goto exit;
                    }

                    cout << "����Խ�磬��Χ-65536��65535" << endl;
                    goto exit;
                }

                break;

            case '-':
                Error = pCalc->PutKey(LWK_SUB);

                if (FAILED(Error))
                {
                    if ( Error == DIV_ZERO )
                    {
                        cout << "��������Ϊ�㣡" << endl;
                        goto exit;
                    }

                    cout << "����Խ�磬��Χ-65536��65535" << endl;
                    goto exit;
                }

                break;

            case '*':
                Error = pCalc->PutKey(LWK_MUL);

                if (FAILED(Error))
                {
                    if ( Error == DIV_ZERO )
                    {
                        cout << "��������Ϊ�㣡" << endl;
                        goto exit;
                    }

                    cout << "����Խ�磬��Χ-65536��65535" << endl;
                    goto exit;
                }

                break;

            case '/':
                Error = pCalc->PutKey(LWK_DIV);

                if (FAILED(Error))
                {
                    if ( Error == DIV_ZERO )
                    {
                        cout << "��������Ϊ�㣡" << endl;
                        goto exit;
                    }

                    cout << "����Խ�磬��Χ-65536��65535" << endl;
                    goto exit;
                }

                break;

            case '=':
                Error = pCalc->PutKey(LWK_EQU);

                if (FAILED(Error))
                {
                    if ( Error == DIV_ZERO )
                    {
                        cout << "��������Ϊ�㣡" << endl;
                        goto exit;
                    }

                    cout << "����Խ�磬��Χ-65536��65535" << endl;
                    goto exit;
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
                
                goto exit;
        }

        strExpression++;

    }
    long lResult = 0;
    pCalc->QueryResult(&lResult);                           //��ȡ������

    pCalc->Release();

    cout << argv[1] 
         << lResult
         << "\n�����������";

exit:
    CoUninitialize();
    getchar();
    return 0;
}

