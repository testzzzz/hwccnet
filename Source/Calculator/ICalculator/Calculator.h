// Calculator.h : CCalculator 的声明

#pragma once
#include "resource.h"       // 主符号

#include "LWCalculator_i.h"


#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Windows CE 平台(如不提供完全 DCOM 支持的 Windows Mobile 平台)上无法正确支持单线程 COM 对象。定义 _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA 可强制 ATL 支持创建单线程 COM 对象实现并允许使用其单线程 COM 对象实现。rgs 文件中的线程模型已被设置为“Free”，原因是该模型是非 DCOM Windows CE 平台支持的唯一线程模型。"
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
    //接受请求和完成最终的计算任务
    STDMETHOD(PutKey)(
        __in LONG key
        );

    //获取当前计算结果
    STDMETHOD(QueryResult)(__out LONG* RetVal);
private:
    long m_LeftOperand;               //保存左操作数
    long m_RightOperand;              //保存右操作数
    long m_Result;                    //m_Result保存每一次运算结果
    char m_Operator;                  //保存操作符
    unsigned int m_CntOperator;       //统计操作符
    bool m_OperatorFlag;              //标志上一步处理的是否是操作符
    bool m_bEqual;                    //标志上一步是否是等号

    // 完成最终计算工作
    long make(__in char chOperator);

    // 检查左、右操作数和结果是否越界
    bool CheckBound( void );

    // 将数据恢复到初始值
    void Revert( void );
};

OBJECT_ENTRY_AUTO(__uuidof(Calculator), CCalculator)
