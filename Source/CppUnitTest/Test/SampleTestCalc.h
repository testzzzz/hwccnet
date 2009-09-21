//////////////////////////////////////////////////////////
///
/// @file      SampleTestCalc.h 
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
#include <cppunit/extensions/HelperMacros.h>
#ifndef CPP_UNIT_SAMPLETESTCLAC_H
#define CPP_UNIT_SAMPLETESTCLAC_H
#include "LWCalculator_i.h"
#ifdef _DEBUG
#    pragma comment(lib, "cppunitd.lib")
#    pragma comment(lib, "testrunnerd.lib")
#else 
#    pragma comment(lib, "testrunner.lib")
#    pragma comment(lib, "cppunit.lib")
#endif

/////////////////////////////////////////////////////////
///
/// @brief 定义测试类
///
/// 基类为cppunit的TestFixture
///
/////////////////////////////////////////////////////////
class CSampleTestCalc : public CPPUNIT_NS::TestFixture
{
    /// @brief 添加一个TestCase到一个TestSuite
    CPPUNIT_TEST_SUITE( CSampleTestCalc );
    /// @brief 添加测试(InitiCominterface)
    CPPUNIT_TEST( InitiCominterface );
    /// @brief 添加测试( TestDataIn )
    CPPUNIT_TEST( TestDataIn );

    CPPUNIT_TEST_SUITE_END();
public:
    CSampleTestCalc(void);
    ~CSampleTestCalc(void);
    /// @brief 初始化com接口
    /// @param void
    /// @retval void
    void InitiCominterface(void);
    /// @brief 进行数据输入和结果测试
    /// @param void
    /// @retval void
    void TestDataIn(void);
private:   
    /// @param  获取接口指针
    ICalculator* pCalc;
    /// @var 获取计算结果
    long lResult;
};

#endif