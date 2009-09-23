// TestCalculation.h: interface for the CTestCalculation class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_TESTCALCULATION_H__CE60C0FA_DDA5_47E6_BA33_7E7491637582__INCLUDED_)
#define AFX_TESTCALCULATION_H__CE60C0FA_DDA5_47E6_BA33_7E7491637582__INCLUDED_

#include <cppunit/extensions/HelperMacros.h>
#include "Calculation.h"

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class CTestCalculation : public CPPUNIT_NS::TestFixture
{
	CPPUNIT_TEST_SUITE(CTestCalculation);
	CPPUNIT_TEST(TestAdd);
	CPPUNIT_TEST(TestSub);
	CPPUNIT_TEST(TestMul);
	CPPUNIT_TEST(TestDiv);
	CPPUNIT_TEST_SUITE_END();

public:
	CTestCalculation();
	virtual ~CTestCalculation();

	void setUp();
	void tearDown();

protected:
	void TestAdd();
	void TestSub();
	void TestMul();
	void TestDiv();

	CCalculation m_hCal;

};

#endif // !defined(AFX_TESTCALCULATION_H__CE60C0FA_DDA5_47E6_BA33_7E7491637582__INCLUDED_)
