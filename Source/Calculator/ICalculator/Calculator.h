// Calculator.h : CCalculator ������

#pragma once
#include "resource.h"       // ������

#include "LWCalculator_i.h"


#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Windows CE ƽ̨(�粻�ṩ��ȫ DCOM ֧�ֵ� Windows Mobile ƽ̨)���޷���ȷ֧�ֵ��߳� COM ���󡣶��� _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA ��ǿ�� ATL ֧�ִ������߳� COM ����ʵ�ֲ�����ʹ���䵥�߳� COM ����ʵ�֡�rgs �ļ��е��߳�ģ���ѱ�����Ϊ��Free����ԭ���Ǹ�ģ���Ƿ� DCOM Windows CE ƽ̨֧�ֵ�Ψһ�߳�ģ�͡�"
#endif



// CCalculator

class ATL_NO_VTABLE CCalculator :
    public CComObjectRootEx<CComSingleThreadModel>,
    public CComCoClass<CCalculator, &CLSID_Calculator>,
    public ICalculator
{
public:
    CCalculator()
        : m_LeftOperand(0),
          m_RightOperand(0),
          m_Result(0),
          m_Operator('#'),
          m_CntOperator(0),
          m_OperatorFlag(false),
          m_bEqual(false)
    {
    }

DECLARE_REGISTRY_RESOURCEID(IDR_CALCULATOR)


BEGIN_COM_MAP(CCalculator)
    COM_INTERFACE_ENTRY(ICalculator)
END_COM_MAP()



    DECLARE_PROTECT_FINAL_CONSTRUCT()

    HRESULT FinalConstruct()
    {
        return S_OK;
    }

    void FinalRelease()
    {
    }

public:
    //���������������յļ�������
    STDMETHOD(PutKey)(
        __in LONG key
        );

    //��ȡ��ǰ������
    STDMETHOD(QueryResult)(__out LONG* RetVal);
private:
    long m_LeftOperand;               //�����������
    long m_RightOperand;              //�����Ҳ�����
    long m_Result;                    //m_Result����ÿһ��������
    char m_Operator;                  //���������
    unsigned int m_CntOperator;       //ͳ�Ʋ�����
    bool m_OperatorFlag;              //��־��һ��������Ƿ��ǲ�����
    bool m_bEqual;                    //��־��һ���Ƿ��ǵȺ�

    // ������ռ��㹤��
    long make(__in char chOperator);

    // ������Ҳ������ͽ���Ƿ�Խ��
    bool CheckBound( void );

    // �����ݻָ�����ʼֵ
    void Revert( void );
};

OBJECT_ENTRY_AUTO(__uuidof(Calculator), CCalculator)
