//////////////////////////////////////////////////////////
///
/// @file      SampleTestCalc.h 
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
/// @brief ���������
///
/// ����Ϊcppunit��TestFixture
///
/////////////////////////////////////////////////////////
class CSampleTestCalc : public CPPUNIT_NS::TestFixture
{
    /// @brief ���һ��TestCase��һ��TestSuite
    CPPUNIT_TEST_SUITE( CSampleTestCalc );
    /// @brief ��Ӳ���(InitiCominterface)
    CPPUNIT_TEST( InitiCominterface );
    /// @brief ��Ӳ���( TestDataIn )
    CPPUNIT_TEST( TestDataIn );

    CPPUNIT_TEST_SUITE_END();
public:
    CSampleTestCalc(void);
    ~CSampleTestCalc(void);
    /// @brief ��ʼ��com�ӿ�
    /// @param void
    /// @retval void
    void InitiCominterface(void);
    /// @brief ������������ͽ������
    /// @param void
    /// @retval void
    void TestDataIn(void);
private:   
    /// @param  ��ȡ�ӿ�ָ��
    ICalculator* pCalc;
    /// @var ��ȡ������
    long lResult;
};

#endif