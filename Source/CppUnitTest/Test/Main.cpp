//////////////////////////////////////////////////////////
///
/// @file      Main.cpp 
///
/// @brief     利用CppUnit测试ICalculator接口的主函数
///
/// @version   1.0
///
/// @author    甘先志
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
    // 建立事件管理器和测试控制器
    CPPUNIT_NS::TestResult controller;

    //  添加一个监听colllects测试结果
    CPPUNIT_NS::TestResultCollector result;
    controller.addListener( &result );        

    //  添加测试运行的监听
    CPPUNIT_NS::BriefTestProgressListener progress;
    controller.addListener( &progress );      

    // 为测试注册
    CPPUNIT_NS::TestRunner runner;
    runner.addTest( CPPUNIT_NS::TestFactoryRegistry::getRegistry().makeTest() );
    runner.run( controller );

    // 输出测试结果.
    CPPUNIT_NS::CompilerOutputter outputter( &result, CPPUNIT_NS::stdCOut() );
    outputter.write(); 

    return result.wasSuccessful() ? 0 : 1;
}

