// TestCase.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cppunit/BriefTestProgressListener.h>
#include <cppunit/CompilerOutputter.h>
#include <cppunit/extensions/TestFactoryRegistry.h>
#include <cppunit/TestResult.h>
#include <cppunit/TestResultCollector.h>
#include <cppunit/TestRunner.h>
#include <cppunit/XmlOutputter.h>
#include "TestCalculation.h"

int main(int argc, char* argv[])
{
	argc;
	argv;

	// Create the event manager and test controller
	CPPUNIT_NS::TestResult controller;
	
	// Add a listener that colllects test result
	CPPUNIT_NS::TestResultCollector result;
	controller.addListener( &result );        
	
	// Add a listener that print dots as test run.
	//CPPUNIT_NS::BriefTestProgressListener progress;
	//controller.addListener( &progress );      
	
	//CppUnit::TestCaller<CTestCalculation> runner("TestAdd", &CTestCalculation::TestAdd);     	
	//CppUnit::TestResult result;                                          	
	//test.run( &result );     

	// Add the top suite to the test runner
	CPPUNIT_NS::TestRunner runner;
	runner.addTest( CPPUNIT_NS::TestFactoryRegistry::getRegistry().makeTest() );
	runner.run( controller );
	
	// Print test in a compiler compatible format.
	//CPPUNIT_NS::CompilerOutputter outputter( &result, CPPUNIT_NS::stdCOut() );
	//outputter.write(); 
	
	//std::ofstream file("tests.xml");
	
	CPPUNIT_NS::XmlOutputter out(&result, CPPUNIT_NS::stdCOut());
	out.write();
	
	//getchar();
	
	return result.wasSuccessful() ? 0 : 1;
}

