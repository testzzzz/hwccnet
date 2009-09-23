// TestCalculation.cpp: implementation of the CTestCalculation class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "TestCalculation.h"

#include <cppunit/config/SourcePrefix.h>

CPPUNIT_TEST_SUITE_REGISTRATION(CTestCalculation);

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CTestCalculation::CTestCalculation()
{

}

CTestCalculation::~CTestCalculation()
{

}

void CTestCalculation::setUp()
{
}

void CTestCalculation::tearDown()
{
}

void CTestCalculation::TestAdd()
{
	CPPUNIT_ASSERT_EQUAL(3, m_hCal.Add(1, 2));
}

void CTestCalculation::TestSub()
{
	CPPUNIT_ASSERT_EQUAL(-1, m_hCal.Sub(1, 2));
}

void CTestCalculation::TestMul()
{
	CPPUNIT_ASSERT_EQUAL(2, m_hCal.Mul(1, 2));
}

void CTestCalculation::TestDiv()
{
	CPPUNIT_ASSERT_EQUAL(1, m_hCal.Div(2, 2));
}