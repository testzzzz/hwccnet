//==================================================================//
//
// 版权所有: 乐为软件
//
// 文件名称: LWCTool.cpp
//
// 文件描述: 通过命令行参数完成计算
//
// 版本信息: 1.0
//
// 作    者: 游枭
//
// 开发日期: 2009-07-14
//
// 备注信息: 
//
// 修改记录: 
// 修改日期       修改者   修改内容描述
// 2009-07-15      游枭     创建
// 2009-07-17      游枭     增加对C、Backspace、CE键和非法字符的处理
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
    if( argc != 2 )            //保证只接受一个表达式
    {
        cout << "参数不正确，只接受一个参数\n"
             << "请按照如下格式进行输入：\n"
             << "LWCTool.exe 19+8-7*12/25= ";

        return 0;
    }

    HRESULT Error = S_OK;
    Error = CoInitialize(NULL);     //初始化COM库

    if ( FAILED(Error) )
    {
        cout << "初始化COM库失败!" <<endl;
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
        cout << "创建组件失败!" <<endl;
        goto exit;
    }


    char* strExpression = NULL;         
    strExpression = argv[1];            //保存表达式的值

    //开始处理表达式,调用接口ICalculator进行计算
    while (*strExpression != '\0')       
    {
        switch ( *strExpression )
        {
            case '0':
                Error = pCalc->PutKey(LWK_0);

                if (FAILED(Error))
                {
                    cout << "数据越界，范围-65536至65535" << endl;
                    goto exit;
                }

                break;

            case '1':
                Error = pCalc->PutKey(LWK_1);

                if (FAILED(Error))
                {
                    cout << "数据越界，范围-65536至65535" << endl;
                    goto exit;
                }

                break;

            case '2':
                Error = pCalc->PutKey(LWK_2);

                if (FAILED(Error))
                {
                    cout << "数据越界，范围-65536至65535" << endl;
                    goto exit;
                }

                break;

            case '3':
                Error = pCalc->PutKey(LWK_3);

                if (FAILED(Error))
                {
                    cout << "数据越界，范围-65536至65535" << endl;
                    goto exit;
                }

                break;

            case '4':
                Error = pCalc->PutKey(LWK_4);

                if (FAILED(Error))
                {
                    cout << "数据越界，范围-65536至65535" << endl;
                    goto exit;
                }

                break;

            case '5':
                Error = pCalc->PutKey(LWK_5);

                if (FAILED(Error))
                {
                    cout << "数据越界，范围-65536至65535" << endl;
                    goto exit;
                }

                break;

            case '6':
                Error = pCalc->PutKey(LWK_6);

                if (FAILED(Error))
                {
                    cout << "数据越界，范围-65536至65535" << endl;
                    goto exit;
                }

                break;

            case '7':
                Error = pCalc->PutKey(LWK_7);

                if (FAILED(Error))
                {
                    cout << "数据越界，范围-65536至65535" << endl;
                    goto exit;
                }

                break;

            case '8':
                Error = pCalc->PutKey(LWK_8);

                if (FAILED(Error))
                {
                    cout << "数据越界，范围-65536至65535" << endl;
                    goto exit;
                }

                break;

            case '9':
                Error = pCalc->PutKey(LWK_9);

                if (FAILED(Error))
                {
                    cout << "数据越界，范围-65536至65535" << endl;
                    goto exit;
                }

                break;

            case '+':
                Error = pCalc->PutKey(LWK_ADD);

                if (FAILED(Error))
                {
                    if ( Error == DIV_ZERO )
                    {
                        cout << "除数不能为零！" << endl;
                        goto exit;
                    }

                    cout << "数据越界，范围-65536至65535" << endl;
                    goto exit;
                }

                break;

            case '-':
                Error = pCalc->PutKey(LWK_SUB);

                if (FAILED(Error))
                {
                    if ( Error == DIV_ZERO )
                    {
                        cout << "除数不能为零！" << endl;
                        goto exit;
                    }

                    cout << "数据越界，范围-65536至65535" << endl;
                    goto exit;
                }

                break;

            case '*':
                Error = pCalc->PutKey(LWK_MUL);

                if (FAILED(Error))
                {
                    if ( Error == DIV_ZERO )
                    {
                        cout << "除数不能为零！" << endl;
                        goto exit;
                    }

                    cout << "数据越界，范围-65536至65535" << endl;
                    goto exit;
                }

                break;

            case '/':
                Error = pCalc->PutKey(LWK_DIV);

                if (FAILED(Error))
                {
                    if ( Error == DIV_ZERO )
                    {
                        cout << "除数不能为零！" << endl;
                        goto exit;
                    }

                    cout << "数据越界，范围-65536至65535" << endl;
                    goto exit;
                }

                break;

            case '=':
                Error = pCalc->PutKey(LWK_EQU);

                if (FAILED(Error))
                {
                    if ( Error == DIV_ZERO )
                    {
                        cout << "除数不能为零！" << endl;
                        goto exit;
                    }

                    cout << "数据越界，范围-65536至65535" << endl;
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
                cout << "输入有非法字符！" << endl;
                
                goto exit;
        }

        strExpression++;

    }
    long lResult = 0;
    pCalc->QueryResult(&lResult);                           //获取计算结果

    pCalc->Release();

    cout << argv[1] 
         << lResult
         << "\n按任意键结束";

exit:
    CoUninitialize();
    getchar();
    return 0;
}

