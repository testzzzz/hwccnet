// Calculation.h: interface for the CCalculation class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_CALCULATION_H__37A188B1_8F17_4B6E_8266_666640356A52__INCLUDED_)
#define AFX_CALCULATION_H__37A188B1_8F17_4B6E_8266_666640356A52__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class CCalculation  
{
public:
	CCalculation();
	virtual ~CCalculation();

	int Add(int a, int b);
	int Sub(int a, int b);
	int Mul(int a, int b);
	int Div(int a, int b);
};

#endif // !defined(AFX_CALCULATION_H__37A188B1_8F17_4B6E_8266_666640356A52__INCLUDED_)
