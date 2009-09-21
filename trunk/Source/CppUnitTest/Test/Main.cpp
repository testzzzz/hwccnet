//////////////////////////////////////////////////////////
///
/// @file      Main.cpp 
///
/// @brief     ����CppUnit����ICalculator�ӿڵ�������
///
/// @version   1.0
///
/// @author    ����־
///
/// @date      2009-07-22
///
//////////////////////////////////////////////////////////
#include <cppunit/BriefTestProgressListener.h>
#include <cppunit/CompilerOutputter.h>
#include <cppunit/extensions/TestFactoryRegistry.h>
#include <cppunit/TestResult.h>
#include <cppunit/TestResultCollector.h>
#include <cppunit/TestRunner.h>


int
main( int argc, char* argv[] )
{
    // �����¼��������Ͳ��Կ�����
    CPPUNIT_NS::TestResult controller;

    //  ���һ������colllects���Խ��
    CPPUNIT_NS::TestResultCollector result;
    controller.addListener( &result );        

    //  ��Ӳ������еļ���
    CPPUNIT_NS::BriefTestProgressListener progress;
    controller.addListener( &progress );      

    // Ϊ����ע��
    CPPUNIT_NS::TestRunner runner;
    runner.addTest( CPPUNIT_NS::TestFactoryRegistry::getRegistry().makeTest() );
    runner.run( controller );

    // ������Խ��.
    CPPUNIT_NS::CompilerOutputter outputter( &result, CPPUNIT_NS::stdCOut() );
    outputter.write(); 

    return result.wasSuccessful() ? 0 : 1;
}

