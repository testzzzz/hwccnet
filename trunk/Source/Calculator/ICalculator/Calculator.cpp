// Calculator.cpp : CCalculator ��ʵ��

#include "stdafx.h"
#include "Calculator.h"


// CCalculator


//==================================================================//
//
// �� �� ��: PutKey
//
// ��������: ���ܼ�������
//
// ��������: 
//
//             __in LONG key    //��Ҫ���д���ļ�ֵ
//
// ��������: 
//
//     [HRESULT]: 
//
// �޸ļ�¼: 
//
//      <�޸�����>     <�޸���>   <�޸���������>
//
//      2009-07-15      ����       ����
//     
//      2009-07-16      ����       �����˶�����Խ�����ʹ��������Ĵ���
//
//      2009-07-17      ����       �����˶�CE��Backspace�������ȵ�����Ĵ���
// ��ע��Ϣ: 
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
                if ( m_bEqual )                             //���ǰ����'='�����½��д���
                {

                    Revert();

                    m_Result = 0;

                }
                if ( m_Operator == '#' )                        //�����û��������������������������������Ҳ�����
                {
                    m_LeftOperand = m_LeftOperand * 10 + 0; 

                    m_Result = m_LeftOperand;

                    if ( !CheckBound())                         //�������Խ�磬�����Revertʹ���ݸ�λ��ʼ��ֵ
                    {
                        Revert();

                        return E_INVALIDARG;
                    }

                    if ( m_OperatorFlag )                       //��֤�����������Ĳ�����
                    {
                        m_OperatorFlag = false;
                    }
                }
                else
                {
                    m_RightOperand = m_RightOperand * 10 + 0;

                    m_Result = m_RightOperand;

                    if ( !CheckBound())                         //�������Խ�磬�����Revertʹ���ݸ�λ��ʼ��ֵ
                    {
                        Revert();

                        return E_INVALIDARG;
                    }

                    if ( m_OperatorFlag )                       //��֤�����������Ĳ�����
                    {
                        m_OperatorFlag = false;
                    }
                }

                break;
            }

        case LWK_1:
            {
                if ( m_bEqual )                                 //���ǰ����'='�����½��д���
                {

                    Revert();

                    m_Result = 1;

                }

                if ( m_Operator == '#' )                        //�����û��������������������������������Ҳ�����
                {
                    m_LeftOperand = m_LeftOperand * 10 + 1; 

                    m_Result = m_LeftOperand;

                    if ( !CheckBound())                         //�������Խ�磬�����Revertʹ���ݸ�λ��ʼ��ֵ
                    {
                        Revert();

                        return E_INVALIDARG;
                    }

                    if ( m_OperatorFlag )                       //��֤�����������Ĳ�����
                    {
                        m_OperatorFlag = false;
                    }
                }
                else
                {
                    m_RightOperand = m_RightOperand * 10 + 1;

                    m_Result = m_RightOperand;

                    if ( !CheckBound())                         //�������Խ�磬�����Revertʹ���ݸ�λ��ʼ��ֵ
                    {
                        Revert();

                        return E_INVALIDARG;
                    }

                    if ( m_OperatorFlag )                       //��֤�����������Ĳ�����
                    {
                        m_OperatorFlag = false;
                    }
                }

                break;
            }

        case LWK_2:
            {
                if ( m_bEqual )                                 //���ǰ����'='�����½��д���
                {

                    Revert();

                    m_Result = 2;

                }

                if ( m_Operator == '#' )                        //�����û��������������������������������Ҳ�����
                {
                    m_LeftOperand = m_LeftOperand * 10 + 2; 

                    m_Result = m_LeftOperand;

                    if ( !CheckBound())                         //�������Խ�磬�����Revertʹ���ݸ�λ��ʼ��ֵ
                    {
                        Revert();

                        return E_INVALIDARG;
                    }

                    if ( m_OperatorFlag )                       //��֤�����������Ĳ�����
                    {
                        m_OperatorFlag = false;
                    }
                }
                else
                {
                    m_RightOperand = m_RightOperand * 10 + 2;

                    m_Result = m_RightOperand;

                    if ( !CheckBound())                         //�������Խ�磬�����Revertʹ���ݸ�λ��ʼ��ֵ
                    {
                        Revert();

                        return E_INVALIDARG;
                    }

                    if ( m_OperatorFlag )                       //��֤�����������Ĳ�����
                    {
                        m_OperatorFlag = false;
                    }
                }

                break;
            }

        case LWK_3:
            {
                if ( m_bEqual )                                 //���ǰ����'='�����½��д���
                {

                    Revert();

                    m_Result = 3;

                }

                if ( m_Operator == '#' )                        //�����û��������������������������������Ҳ�����
                {
                    m_LeftOperand = m_LeftOperand * 10 + 3; 

                    m_Result = m_LeftOperand;

                    if ( !CheckBound())                         //�������Խ�磬�����Revertʹ���ݸ�λ��ʼ��ֵ
                    {
                        Revert();

                        return E_INVALIDARG;
                    }

                    if ( m_OperatorFlag )                       //��֤�����������Ĳ�����
                    {
                        m_OperatorFlag = false;
                    }
                }
                else
                {
                    m_RightOperand = m_RightOperand * 10 + 3;

                    m_Result = m_RightOperand;

                    if ( !CheckBound())                         //�������Խ�磬�����Revertʹ���ݸ�λ��ʼ��ֵ
                    {
                        Revert();

                        return E_INVALIDARG;
                    }

                    if ( m_OperatorFlag )                       //��֤�����������Ĳ�����
                    {
                        m_OperatorFlag = false;
                    }
                }

                break;
            }

        case LWK_4:
            {
                if ( m_bEqual )                                 //���ǰ����'='�����½��д���
                {

                    Revert();

                    m_Result = 4;

                }

                if ( m_Operator == '#' )                        //�����û��������������������������������Ҳ�����
                {
                    m_LeftOperand = m_LeftOperand * 10 + 4; 

                    m_Result = m_LeftOperand;

                    if ( !CheckBound())                         //�������Խ�磬�����Revertʹ���ݸ�λ��ʼ��ֵ
                    {
                        Revert();

                        return E_INVALIDARG;
                    }

                    if ( m_OperatorFlag )                       //��֤�����������Ĳ�����
                    {
                        m_OperatorFlag = false;
                    }
                }
                else
                {
                    m_RightOperand = m_RightOperand * 10 + 4;

                    m_Result = m_RightOperand;

                    if ( !CheckBound())                         //�������Խ�磬�����Revertʹ���ݸ�λ��ʼ��ֵ
                    {
                        Revert();

                        return E_INVALIDARG;
                    }

                    if ( m_OperatorFlag )                       //��֤�����������Ĳ�����
                    {
                        m_OperatorFlag = false;
                    }
                }

                break;
            }

        case LWK_5:
            {
                if ( m_bEqual )                                 //���ǰ����'='�����½��д���
                {

                    Revert();

                    m_Result = 5;

                }

                if ( m_Operator == '#' )                        //�����û��������������������������������Ҳ�����
                {
                    m_LeftOperand = m_LeftOperand * 10 + 5; 

                    m_Result = m_LeftOperand;

                    if ( !CheckBound())                         //�������Խ�磬�����Revertʹ���ݸ�λ��ʼ��ֵ
                    {
                        Revert();

                        return E_INVALIDARG;
                    }

                    if ( m_OperatorFlag )                       //��֤�����������Ĳ�����
                    {
                        m_OperatorFlag = false;
                    }
                }
                else
                {
                    m_RightOperand = m_RightOperand * 10 + 5;

                    m_Result = m_RightOperand;

                    if ( !CheckBound())                         //�������Խ�磬�����Revertʹ���ݸ�λ��ʼ��ֵ
                    {
                        Revert();

                        return E_INVALIDARG;
                    }

                    if ( m_OperatorFlag )                       //��֤�����������Ĳ�����
                    {
                        m_OperatorFlag = false;
                    }
                }

                break;
            }

        case LWK_6:
            {
                if ( m_bEqual )                                 //���ǰ����'='�����½��д���
                {

                    Revert();

                    m_Result = 6;

                }

                if ( m_Operator == '#' )                        //�����û��������������������������������Ҳ�����
                {
                    m_LeftOperand = m_LeftOperand * 10 + 6; 

                    m_Result = m_LeftOperand;

                    if ( !CheckBound())                         //�������Խ�磬�����Revertʹ���ݸ�λ��ʼ��ֵ
                    {
                        Revert();

                        return E_INVALIDARG;
                    }

                    if ( m_OperatorFlag )                       //��֤�����������Ĳ�����
                    {
                        m_OperatorFlag = false;
                    }
                }
                else
                {
                    m_RightOperand = m_RightOperand * 10 + 6;

                    m_Result = m_RightOperand;

                    if ( !CheckBound())                         //�������Խ�磬�����Revertʹ���ݸ�λ��ʼ��ֵ
                    {
                        Revert();

                        return E_INVALIDARG;
                    }

                    if ( m_OperatorFlag )                       //��֤�����������Ĳ�����
                    {
                        m_OperatorFlag = false;
                    }
                }

                break;
            }

        case LWK_7:
            {
                if ( m_bEqual )                                 //���ǰ����'='�����½��д���
                {

                    Revert();

                    m_Result = 7;

                }

                if ( m_Operator == '#' )                        //�����û��������������������������������Ҳ�����
                {
                    m_LeftOperand = m_LeftOperand * 10 + 7; 

                    m_Result = m_LeftOperand;

                    if ( !CheckBound())                         //�������Խ�磬�����Revertʹ���ݸ�λ��ʼ��ֵ
                    {
                        Revert();

                        return E_INVALIDARG;
                    }

                    if ( m_OperatorFlag )                       //��֤�����������Ĳ�����
                    {
                        m_OperatorFlag = false;
                    }
                }
                else
                {
                    m_RightOperand = m_RightOperand * 10 + 7;

                    m_Result = m_RightOperand;

                    if ( !CheckBound())                         //�������Խ�磬�����Revertʹ���ݸ�λ��ʼ��ֵ
                    {
                        Revert();

                        return E_INVALIDARG;
                    }

                    if ( m_OperatorFlag )                       //��֤�����������Ĳ�����
                    {
                        m_OperatorFlag = false;
                    }
                }

                break;
            }

        case LWK_8:
            {
                if ( m_bEqual )                                 //���ǰ����'='�����½��д���
                {

                    Revert();

                    m_Result = 8;

                }

                if ( m_Operator == '#' )                        //�����û��������������������������������Ҳ�����
                {
                    m_LeftOperand = m_LeftOperand * 10 + 8; 

                    m_Result = m_LeftOperand;

                    if ( !CheckBound())                         //�������Խ�磬�����Revertʹ���ݸ�λ��ʼ��ֵ
                    {
                        Revert();

                        return E_INVALIDARG;
                    }

                    if ( m_OperatorFlag )                       //��֤�����������Ĳ�����
                    {
                        m_OperatorFlag = false;
                    }
                }
                else
                {
                    m_RightOperand = m_RightOperand * 10 + 8;

                    m_Result = m_RightOperand;

                    if ( !CheckBound())                         //�������Խ�磬�����Revertʹ���ݸ�λ��ʼ��ֵ
                    {
                        Revert();

                        return E_INVALIDARG;
                    }

                    if ( m_OperatorFlag )                       //��֤�����������Ĳ�����
                    {
                        m_OperatorFlag = false;
                    }
                }

                break;
            }

        case LWK_9:
            {
                if ( m_bEqual )                                 //���ǰ����'='�����½��д���
                {

                    Revert();

                    m_Result = 9;

                }

                if ( m_Operator == '#' )                        //�����û��������������������������������Ҳ�����
                {
                    m_LeftOperand = m_LeftOperand * 10 + 9; 

                    m_Result = m_LeftOperand;

                    if ( !CheckBound())                         //�������Խ�磬�����Revertʹ���ݸ�λ��ʼ��ֵ
                    {
                        Revert();

                        return E_INVALIDARG;
                    }

                    if ( m_OperatorFlag )                       //��֤�����������Ĳ�����
                    {
                        m_OperatorFlag = false;
                    }
                }
                else
                {
                    m_RightOperand = m_RightOperand * 10 + 9;

                    m_Result = m_RightOperand;

                    if ( !CheckBound())                         //�������Խ�磬�����Revertʹ���ݸ�λ��ʼ��ֵ
                    {
                        Revert();

                        return E_INVALIDARG;
                    }

                    if ( m_OperatorFlag )                       //��֤�����������Ĳ�����
                    {
                        m_OperatorFlag = false;
                    }
                }

                break;
            }

        case LWK_ADD:
            {
                if ( m_OperatorFlag )                           //�����������Ĳ�����
                {
                    m_Operator = '+';

                    break;
                }

                if ( m_CntOperator != 0 )                       //������ǵ�һ�γ��ֵĲ����������������  
                {
                    if ( m_bEqual )                             //���ǰ����'='׼�����½��м���
                    {
                        m_Operator = '+';

                        m_bEqual = false;

                        m_RightOperand = 0;

                        break;
                    }

                    m_Result = make( m_Operator );

                    if ( m_Result == DIV_ZERO )                 //����Ϊ0���˳�
                    {
                        Revert();

                        return DIV_ZERO;
                    }

                    if ( !CheckBound())                         //�������Խ�磬�����Revertʹ���ݸ�λ��ʼ��ֵ
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
                if ( m_OperatorFlag )                           //�����������Ĳ�����
                {
                    m_Operator = '-';

                    break;
                }

                if ( m_CntOperator != 0 )                       //������ǵ�һ�γ��ֵĲ����������������    
                {
                    if ( m_bEqual )                             //���ǰ����'='׼�����½��м���
                    {
                        m_Operator = '-';

                        m_bEqual = false;

                        m_RightOperand = 0;

                        break;
                    }

                    m_Result = make( m_Operator );

                    if ( m_Result == DIV_ZERO )                 //����Ϊ0���˳�
                    {
                        Revert();

                        return DIV_ZERO;
                    }

                    if ( !CheckBound())                         //�������Խ�磬�����Revertʹ���ݸ�λ��ʼ��ֵ
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
                if ( m_OperatorFlag )                           //�����������Ĳ�����
                {
                    m_Operator = '*';

                    break;
                }

                if ( m_CntOperator != 0 )                       //������ǵ�һ�γ��ֵĲ����������������  
                {
                    if ( m_bEqual )                             //���ǰ����'='׼�����½��м���
                    {
                        m_Operator = '*';
                        
                        m_bEqual = false;

                        m_RightOperand = 0;

                        break;
                    }

                    m_Result = make( m_Operator );

                    if ( m_Result == DIV_ZERO )                 //����Ϊ0���˳�
                    {
                        Revert();

                        return DIV_ZERO;
                    }

                    if ( !CheckBound())                         //�������Խ�磬�����Revertʹ���ݸ�λ��ʼ��ֵ
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
                if ( m_OperatorFlag )                           //�����������Ĳ�����
                {
                    m_Operator = '/';

                    break;
                }

                if ( m_CntOperator != 0 )                       //������ǵ�һ�γ��ֵĲ����������������    
                {
                    if ( m_bEqual )                             //���ǰ����'='׼�����½��м���
                    {
                        m_Operator = '/';

                        m_bEqual = false;

                        m_RightOperand = 0;

                        break;
                    }

                    m_Result = make( m_Operator );

                    if ( m_Result == DIV_ZERO )                 //����Ϊ0���˳�
                    {
                        Revert();

                        return DIV_ZERO;
                    }

                    if ( !CheckBound())                         //�������Խ�磬�����Revertʹ���ݸ�λ��ʼ��ֵ
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
                if ( m_OperatorFlag )                           //�����������Ĳ�����
                {
                    break;
                }

                if ( m_CntOperator == 0 )                       //��ֹ'='ǰû�в�����
                {
                    m_Result = m_LeftOperand;
                }
                else
                {
                    m_Result = make( m_Operator );              

                    if ( m_Result == DIV_ZERO )                 //����Ϊ0���˳�
                    {
                        Revert();

                        return DIV_ZERO;
                    }

                    if ( !CheckBound())                         //�������Խ�磬�����Revertʹ���ݸ�λ��ʼ��ֵ
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

                if ( m_CntOperator % 2 == 0 )                   //��ʱΪ�������
                {
                    m_LeftOperand = 0;
                    m_Result = m_LeftOperand;
                }
                else                                            //��ʱΪ�Ҳ�����
                {
                    m_RightOperand = 0;   
                    m_Result = m_RightOperand;
                }

                break;
            }

        case LWK_D:
            {
                if ( m_CntOperator % 2 == 0 )                   //��ʱΪ�������
                {
                    m_LeftOperand = m_LeftOperand / 10;
                    m_Result = m_LeftOperand;
                }
                else                                            //��ʱΪ�Ҳ�����
                {
                    m_RightOperand = m_RightOperand / 10;   
                    m_Result = m_RightOperand;
                }

                break;
            }

        case LWK_REV:
            {
                if ( m_CntOperator % 2 == 0 )                   //��ʱΪ�������
                {
                    m_LeftOperand = -m_LeftOperand;
                    m_Result = m_LeftOperand;
                }
                else                                            //��ʱΪ�Ҳ�����
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
// �� �� ��: QueryResult
//
// ��������: ��ȡ��ǰ������
//
// ��������: 
//
//             __out LONG* RetVal            //���������
//
// ��������: 
//
//     [HRESULT]: 
//
// �޸ļ�¼: 
//
//      <�޸�����>     <�޸���>   <�޸���������>
//
//      2009-07-14      ����       ����
//
// ��ע��Ϣ: 
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
// �� �� ��: make
//
// ��������: ������ռ��㹦��,��PutKey()����
//
// ��������: 
//
//          __in char chOperator         //��Ҫ��������Ĳ�������
//
// ��������: 
//
//     long:                                //���ؼ����� 
//
// �޸ļ�¼: 
//
//      <�޸�����>     <�޸���>   <�޸���������>
//
//      2009-07-15      ����       ����
//
// ��ע��Ϣ: 
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
            if ( m_RightOperand == 0 )          //����Ϊ0
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
// �� �� ��: ChenkBound
//
// ��������: ������Ҳ������ͼ������Ƿ�Խ��
//
// ��������: 
//
//          void
//
// ��������: 
//
//     bool:                 //����ֵΪfalseԽ��,true��ûԽ��
//
// �޸ļ�¼: 
//
//      <�޸�����>     <�޸���>   <�޸���������>
//
//      2009-07-16      ����       ����
//
// ��ע��Ϣ: 
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
// �� �� ��: Revert
//
// ��������: �����ݻָ�����ʼֵ
//
// ��������: 
//
//          void
//
// ��������: 
//
//     void:                 
//
// �޸ļ�¼: 
//
//      <�޸�����>     <�޸���>   <�޸���������>
//
//      2009-07-16      ����       ����
//
// ��ע��Ϣ: 
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
