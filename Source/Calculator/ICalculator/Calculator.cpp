// Calculator.cpp : CCalculator 的实现

#include "stdafx.h"
#include "Calculator.h"


// CCalculator


//==================================================================//
//
// 函 数 名: PutKey
//
// 功能描述: 接受键盘请求
//
// 参数描述: 
//
//             __in LONG key    //将要进行处理的键值
//
// 返回描述: 
//
//     [HRESULT]: 
//
// 修改记录: 
//
//      <修改日期>     <修改者>   <修改内容描述>
//
//      2009-07-15      游枭       创建
//     
//      2009-07-16      游枭       增加了对数据越界除零和错误的输入的处理
//
//      2009-07-17      游枭       增加了对CE、Backspace键和连等的情况的处理
// 备注信息: 
// 
//==================================================================//
STDMETHODIMP CCalculator::PutKey(
                                 __in LONG key
                                 )
{
    switch ( key )
    {
        case LWK_0:
            {
                if ( m_bEqual )                             //如果前面是'='则重新进行处理
                {

                    Revert();

                    m_Result = 0;

                }
                if ( m_Operator == '#' )                        //如果还没碰到操作符，则处理左操作数，否则处理右操作数
                {
                    m_LeftOperand = m_LeftOperand * 10 + 0; 

                    m_Result = m_LeftOperand;

                    if ( !CheckBound())                         //如果数据越界，则调用Revert使数据复位初始化值
                    {
                        Revert();

                        return E_INVALIDARG;
                    }

                    if ( m_OperatorFlag )                       //保证不出现连续的操作符
                    {
                        m_OperatorFlag = false;
                    }
                }
                else
                {
                    m_RightOperand = m_RightOperand * 10 + 0;

                    m_Result = m_RightOperand;

                    if ( !CheckBound())                         //如果数据越界，则调用Revert使数据复位初始化值
                    {
                        Revert();

                        return E_INVALIDARG;
                    }

                    if ( m_OperatorFlag )                       //保证不出现连续的操作符
                    {
                        m_OperatorFlag = false;
                    }
                }

                break;
            }

        case LWK_1:
            {
                if ( m_bEqual )                                 //如果前面是'='则重新进行处理
                {

                    Revert();

                    m_Result = 1;

                }

                if ( m_Operator == '#' )                        //如果还没碰到操作符，则处理左操作数，否则处理右操作数
                {
                    m_LeftOperand = m_LeftOperand * 10 + 1; 

                    m_Result = m_LeftOperand;

                    if ( !CheckBound())                         //如果数据越界，则调用Revert使数据复位初始化值
                    {
                        Revert();

                        return E_INVALIDARG;
                    }

                    if ( m_OperatorFlag )                       //保证不出现连续的操作符
                    {
                        m_OperatorFlag = false;
                    }
                }
                else
                {
                    m_RightOperand = m_RightOperand * 10 + 1;

                    m_Result = m_RightOperand;

                    if ( !CheckBound())                         //如果数据越界，则调用Revert使数据复位初始化值
                    {
                        Revert();

                        return E_INVALIDARG;
                    }

                    if ( m_OperatorFlag )                       //保证不出现连续的操作符
                    {
                        m_OperatorFlag = false;
                    }
                }

                break;
            }

        case LWK_2:
            {
                if ( m_bEqual )                                 //如果前面是'='则重新进行处理
                {

                    Revert();

                    m_Result = 2;

                }

                if ( m_Operator == '#' )                        //如果还没碰到操作符，则处理左操作数，否则处理右操作数
                {
                    m_LeftOperand = m_LeftOperand * 10 + 2; 

                    m_Result = m_LeftOperand;

                    if ( !CheckBound())                         //如果数据越界，则调用Revert使数据复位初始化值
                    {
                        Revert();

                        return E_INVALIDARG;
                    }

                    if ( m_OperatorFlag )                       //保证不出现连续的操作符
                    {
                        m_OperatorFlag = false;
                    }
                }
                else
                {
                    m_RightOperand = m_RightOperand * 10 + 2;

                    m_Result = m_RightOperand;

                    if ( !CheckBound())                         //如果数据越界，则调用Revert使数据复位初始化值
                    {
                        Revert();

                        return E_INVALIDARG;
                    }

                    if ( m_OperatorFlag )                       //保证不出现连续的操作符
                    {
                        m_OperatorFlag = false;
                    }
                }

                break;
            }

        case LWK_3:
            {
                if ( m_bEqual )                                 //如果前面是'='则重新进行处理
                {

                    Revert();

                    m_Result = 3;

                }

                if ( m_Operator == '#' )                        //如果还没碰到操作符，则处理左操作数，否则处理右操作数
                {
                    m_LeftOperand = m_LeftOperand * 10 + 3; 

                    m_Result = m_LeftOperand;

                    if ( !CheckBound())                         //如果数据越界，则调用Revert使数据复位初始化值
                    {
                        Revert();

                        return E_INVALIDARG;
                    }

                    if ( m_OperatorFlag )                       //保证不出现连续的操作符
                    {
                        m_OperatorFlag = false;
                    }
                }
                else
                {
                    m_RightOperand = m_RightOperand * 10 + 3;

                    m_Result = m_RightOperand;

                    if ( !CheckBound())                         //如果数据越界，则调用Revert使数据复位初始化值
                    {
                        Revert();

                        return E_INVALIDARG;
                    }

                    if ( m_OperatorFlag )                       //保证不出现连续的操作符
                    {
                        m_OperatorFlag = false;
                    }
                }

                break;
            }

        case LWK_4:
            {
                if ( m_bEqual )                                 //如果前面是'='则重新进行处理
                {

                    Revert();

                    m_Result = 4;

                }

                if ( m_Operator == '#' )                        //如果还没碰到操作符，则处理左操作数，否则处理右操作数
                {
                    m_LeftOperand = m_LeftOperand * 10 + 4; 

                    m_Result = m_LeftOperand;

                    if ( !CheckBound())                         //如果数据越界，则调用Revert使数据复位初始化值
                    {
                        Revert();

                        return E_INVALIDARG;
                    }

                    if ( m_OperatorFlag )                       //保证不出现连续的操作符
                    {
                        m_OperatorFlag = false;
                    }
                }
                else
                {
                    m_RightOperand = m_RightOperand * 10 + 4;

                    m_Result = m_RightOperand;

                    if ( !CheckBound())                         //如果数据越界，则调用Revert使数据复位初始化值
                    {
                        Revert();

                        return E_INVALIDARG;
                    }

                    if ( m_OperatorFlag )                       //保证不出现连续的操作符
                    {
                        m_OperatorFlag = false;
                    }
                }

                break;
            }

        case LWK_5:
            {
                if ( m_bEqual )                                 //如果前面是'='则重新进行处理
                {

                    Revert();

                    m_Result = 5;

                }

                if ( m_Operator == '#' )                        //如果还没碰到操作符，则处理左操作数，否则处理右操作数
                {
                    m_LeftOperand = m_LeftOperand * 10 + 5; 

                    m_Result = m_LeftOperand;

                    if ( !CheckBound())                         //如果数据越界，则调用Revert使数据复位初始化值
                    {
                        Revert();

                        return E_INVALIDARG;
                    }

                    if ( m_OperatorFlag )                       //保证不出现连续的操作符
                    {
                        m_OperatorFlag = false;
                    }
                }
                else
                {
                    m_RightOperand = m_RightOperand * 10 + 5;

                    m_Result = m_RightOperand;

                    if ( !CheckBound())                         //如果数据越界，则调用Revert使数据复位初始化值
                    {
                        Revert();

                        return E_INVALIDARG;
                    }

                    if ( m_OperatorFlag )                       //保证不出现连续的操作符
                    {
                        m_OperatorFlag = false;
                    }
                }

                break;
            }

        case LWK_6:
            {
                if ( m_bEqual )                                 //如果前面是'='则重新进行处理
                {

                    Revert();

                    m_Result = 6;

                }

                if ( m_Operator == '#' )                        //如果还没碰到操作符，则处理左操作数，否则处理右操作数
                {
                    m_LeftOperand = m_LeftOperand * 10 + 6; 

                    m_Result = m_LeftOperand;

                    if ( !CheckBound())                         //如果数据越界，则调用Revert使数据复位初始化值
                    {
                        Revert();

                        return E_INVALIDARG;
                    }

                    if ( m_OperatorFlag )                       //保证不出现连续的操作符
                    {
                        m_OperatorFlag = false;
                    }
                }
                else
                {
                    m_RightOperand = m_RightOperand * 10 + 6;

                    m_Result = m_RightOperand;

                    if ( !CheckBound())                         //如果数据越界，则调用Revert使数据复位初始化值
                    {
                        Revert();

                        return E_INVALIDARG;
                    }

                    if ( m_OperatorFlag )                       //保证不出现连续的操作符
                    {
                        m_OperatorFlag = false;
                    }
                }

                break;
            }

        case LWK_7:
            {
                if ( m_bEqual )                                 //如果前面是'='则重新进行处理
                {

                    Revert();

                    m_Result = 7;

                }

                if ( m_Operator == '#' )                        //如果还没碰到操作符，则处理左操作数，否则处理右操作数
                {
                    m_LeftOperand = m_LeftOperand * 10 + 7; 

                    m_Result = m_LeftOperand;

                    if ( !CheckBound())                         //如果数据越界，则调用Revert使数据复位初始化值
                    {
                        Revert();

                        return E_INVALIDARG;
                    }

                    if ( m_OperatorFlag )                       //保证不出现连续的操作符
                    {
                        m_OperatorFlag = false;
                    }
                }
                else
                {
                    m_RightOperand = m_RightOperand * 10 + 7;

                    m_Result = m_RightOperand;

                    if ( !CheckBound())                         //如果数据越界，则调用Revert使数据复位初始化值
                    {
                        Revert();

                        return E_INVALIDARG;
                    }

                    if ( m_OperatorFlag )                       //保证不出现连续的操作符
                    {
                        m_OperatorFlag = false;
                    }
                }

                break;
            }

        case LWK_8:
            {
                if ( m_bEqual )                                 //如果前面是'='则重新进行处理
                {

                    Revert();

                    m_Result = 8;

                }

                if ( m_Operator == '#' )                        //如果还没碰到操作符，则处理左操作数，否则处理右操作数
                {
                    m_LeftOperand = m_LeftOperand * 10 + 8; 

                    m_Result = m_LeftOperand;

                    if ( !CheckBound())                         //如果数据越界，则调用Revert使数据复位初始化值
                    {
                        Revert();

                        return E_INVALIDARG;
                    }

                    if ( m_OperatorFlag )                       //保证不出现连续的操作符
                    {
                        m_OperatorFlag = false;
                    }
                }
                else
                {
                    m_RightOperand = m_RightOperand * 10 + 8;

                    m_Result = m_RightOperand;

                    if ( !CheckBound())                         //如果数据越界，则调用Revert使数据复位初始化值
                    {
                        Revert();

                        return E_INVALIDARG;
                    }

                    if ( m_OperatorFlag )                       //保证不出现连续的操作符
                    {
                        m_OperatorFlag = false;
                    }
                }

                break;
            }

        case LWK_9:
            {
                if ( m_bEqual )                                 //如果前面是'='则重新进行处理
                {

                    Revert();

                    m_Result = 9;

                }

                if ( m_Operator == '#' )                        //如果还没碰到操作符，则处理左操作数，否则处理右操作数
                {
                    m_LeftOperand = m_LeftOperand * 10 + 9; 

                    m_Result = m_LeftOperand;

                    if ( !CheckBound())                         //如果数据越界，则调用Revert使数据复位初始化值
                    {
                        Revert();

                        return E_INVALIDARG;
                    }

                    if ( m_OperatorFlag )                       //保证不出现连续的操作符
                    {
                        m_OperatorFlag = false;
                    }
                }
                else
                {
                    m_RightOperand = m_RightOperand * 10 + 9;

                    m_Result = m_RightOperand;

                    if ( !CheckBound())                         //如果数据越界，则调用Revert使数据复位初始化值
                    {
                        Revert();

                        return E_INVALIDARG;
                    }

                    if ( m_OperatorFlag )                       //保证不出现连续的操作符
                    {
                        m_OperatorFlag = false;
                    }
                }

                break;
            }

        case LWK_ADD:
            {
                if ( m_OperatorFlag )                           //处理现连续的操作符
                {
                    m_Operator = '+';

                    break;
                }

                if ( m_CntOperator != 0 )                       //如果不是第一次出现的操作符，则进行运算  
                {
                    if ( m_bEqual )                             //如果前面是'='准备重新进行计算
                    {
                        m_Operator = '+';

                        m_bEqual = false;

                        m_RightOperand = 0;

                        break;
                    }

                    m_Result = make( m_Operator );

                    if ( m_Result == DIV_ZERO )                 //除数为0则退出
                    {
                        Revert();

                        return DIV_ZERO;
                    }

                    if ( !CheckBound())                         //如果数据越界，则调用Revert使数据复位初始化值
                    {
                        Revert();

                        return E_INVALIDARG;
                    }

                    m_LeftOperand = m_Result;
                    m_RightOperand = 0;
                }
                
                m_Operator = '+';

                m_CntOperator++;

                m_OperatorFlag = true;

                m_bEqual = false;

                break;
            }

        case LWK_SUB:
            {
                if ( m_OperatorFlag )                           //处理现连续的操作符
                {
                    m_Operator = '-';

                    break;
                }

                if ( m_CntOperator != 0 )                       //如果不是第一次出现的操作符，则进行运算    
                {
                    if ( m_bEqual )                             //如果前面是'='准备重新进行计算
                    {
                        m_Operator = '-';

                        m_bEqual = false;

                        m_RightOperand = 0;

                        break;
                    }

                    m_Result = make( m_Operator );

                    if ( m_Result == DIV_ZERO )                 //除数为0则退出
                    {
                        Revert();

                        return DIV_ZERO;
                    }

                    if ( !CheckBound())                         //如果数据越界，则调用Revert使数据复位初始化值
                    {
                        Revert();

                        return E_INVALIDARG;
                    }

                    m_LeftOperand = m_Result;
                    m_RightOperand = 0;
                }

                m_Operator = '-';

                m_CntOperator++;

                m_OperatorFlag = true;

                m_bEqual = false;

                break;
            }

        case LWK_MUL:                   
            {
                if ( m_OperatorFlag )                           //处理现连续的操作符
                {
                    m_Operator = '*';

                    break;
                }

                if ( m_CntOperator != 0 )                       //如果不是第一次出现的操作符，则进行运算  
                {
                    if ( m_bEqual )                             //如果前面是'='准备重新进行计算
                    {
                        m_Operator = '*';
                        
                        m_bEqual = false;

                        m_RightOperand = 0;

                        break;
                    }

                    m_Result = make( m_Operator );

                    if ( m_Result == DIV_ZERO )                 //除数为0则退出
                    {
                        Revert();

                        return DIV_ZERO;
                    }

                    if ( !CheckBound())                         //如果数据越界，则调用Revert使数据复位初始化值
                    {
                        Revert();

                        return E_INVALIDARG;
                    }

                    m_LeftOperand = m_Result;
                    m_RightOperand = 0;
                }

                m_Operator = '*';

                m_CntOperator++;

                m_OperatorFlag = true;

                m_bEqual = false;

                break;
            }

        case LWK_DIV:
            {
                if ( m_OperatorFlag )                           //处理现连续的操作符
                {
                    m_Operator = '/';

                    break;
                }

                if ( m_CntOperator != 0 )                       //如果不是第一次出现的操作符，则进行运算    
                {
                    if ( m_bEqual )                             //如果前面是'='准备重新进行计算
                    {
                        m_Operator = '/';

                        m_bEqual = false;

                        m_RightOperand = 0;

                        break;
                    }

                    m_Result = make( m_Operator );

                    if ( m_Result == DIV_ZERO )                 //除数为0则退出
                    {
                        Revert();

                        return DIV_ZERO;
                    }

                    if ( !CheckBound())                         //如果数据越界，则调用Revert使数据复位初始化值
                    {
                        Revert();

                        return E_INVALIDARG;
                    }

                    m_LeftOperand = m_Result;
                    m_RightOperand = 0;
                }

                m_Operator = '/';

                m_CntOperator++;

                m_OperatorFlag = true;

                m_bEqual = false;

                break;
            }

        case LWK_EQU:
            {
                if ( m_OperatorFlag )                           //处理现连续的操作符
                {
                    break;
                }

                if ( m_CntOperator == 0 )                       //防止'='前没有操作符
                {
                    m_Result = m_LeftOperand;
                }
                else
                {
                    m_Result = make( m_Operator );              

                    if ( m_Result == DIV_ZERO )                 //除数为0则退出
                    {
                        Revert();

                        return DIV_ZERO;
                    }

                    if ( !CheckBound())                         //如果数据越界，则调用Revert使数据复位初始化值
                    {
                        Revert();

                        return E_INVALIDARG;
                    }

                    m_LeftOperand = m_Result;


                    m_bEqual = true;

                }
                break;
            }

        case LWK_C:
            {
                Revert();

                break;
            }

        case LWK_CE:
            {
                if ( m_OperatorFlag )
                {
                    break;
                }

                if ( m_bEqual )
                {
                    m_Result = 0;

                    break;
                }

                if ( m_CntOperator % 2 == 0 )                   //此时为左操作数
                {
                    m_LeftOperand = 0;
                    m_Result = m_LeftOperand;
                }
                else                                            //此时为右操作数
                {
                    m_RightOperand = 0;   
                    m_Result = m_RightOperand;
                }

                break;
            }

        case LWK_D:
            {
                if ( m_CntOperator % 2 == 0 )                   //此时为左操作数
                {
                    m_LeftOperand = m_LeftOperand / 10;
                    m_Result = m_LeftOperand;
                }
                else                                            //此时为右操作数
                {
                    m_RightOperand = m_RightOperand / 10;   
                    m_Result = m_RightOperand;
                }

                break;
            }

        case LWK_REV:
            {
                if ( m_CntOperator % 2 == 0 )                   //此时为左操作数
                {
                    m_LeftOperand = -m_LeftOperand;
                    m_Result = m_LeftOperand;
                }
                else                                            //此时为右操作数
                {
                    m_RightOperand = -m_RightOperand;   
                    m_Result = m_RightOperand;
                }

                break;
            }
        
        default:
            return E_INVALIDARG;
    }

    return S_OK;
}

//==================================================================//
//
// 函 数 名: QueryResult
//
// 功能描述: 获取当前计算结果
//
// 参数描述: 
//
//             __out LONG* RetVal            //保存计算结果
//
// 返回描述: 
//
//     [HRESULT]: 
//
// 修改记录: 
//
//      <修改日期>     <修改者>   <修改内容描述>
//
//      2009-07-14      游枭       创建
//
// 备注信息: 
//
//==================================================================//
STDMETHODIMP CCalculator::QueryResult(__out LONG* RetVal)
{
    if ( RetVal == NULL )
    {
        return E_INVALIDARG;
    }

    *RetVal = m_Result; 

    return S_OK;
}

//==================================================================//
//
// 函 数 名: make
//
// 功能描述: 完成最终计算功能,被PutKey()调用
//
// 参数描述: 
//
//          __in char chOperator         //将要进行运算的操作符号
//
// 返回描述: 
//
//     long:                                //返回计算结果 
//
// 修改记录: 
//
//      <修改日期>     <修改者>   <修改内容描述>
//
//      2009-07-15      游枭       创建
//
// 备注信息: 
//
//==================================================================//
long CCalculator::make(__in char chOperator)
{
    switch ( chOperator )
    {
        case '+':
            return m_LeftOperand + m_RightOperand;

        case '-':
            return m_LeftOperand - m_RightOperand;

        case '*':
            return m_LeftOperand * m_RightOperand;

        case '/':
            if ( m_RightOperand == 0 )          //除数为0
            {
                return DIV_ZERO;
            }
            return m_LeftOperand / m_RightOperand;

        default:
            break;
    }

    return 0;
}

//==================================================================//
//
// 函 数 名: ChenkBound
//
// 功能描述: 检查左、右操作数和计算结果是否越界
//
// 参数描述: 
//
//          void
//
// 返回描述: 
//
//     bool:                 //返回值为false越界,true则没越界
//
// 修改记录: 
//
//      <修改日期>     <修改者>   <修改内容描述>
//
//      2009-07-16      游枭       创建
//
// 备注信息: 
//
//==================================================================//
bool CCalculator::CheckBound( void )
{
    if ( m_LeftOperand < -65536 || m_LeftOperand > 65535 )
    {
        return false;
    }

    if ( m_RightOperand < -65536 || m_RightOperand > 65535 )
    {
        return false;
    }

    if ( m_Result < -65536 || m_Result > 65535 )
    {
        return false;
    }

    return true;
}


//==================================================================//
//
// 函 数 名: Revert
//
// 功能描述: 将数据恢复到初始值
//
// 参数描述: 
//
//          void
//
// 返回描述: 
//
//     void:                 
//
// 修改记录: 
//
//      <修改日期>     <修改者>   <修改内容描述>
//
//      2009-07-16      游枭       创建
//
// 备注信息: 
//
//==================================================================//
void CCalculator::Revert( void )
{
    m_LeftOperand = 0;
    m_RightOperand = 0;
    m_Result = 0;
    m_CntOperator = 0;
    m_Operator = '#';
    m_OperatorFlag = false;
    m_bEqual = false;
}
