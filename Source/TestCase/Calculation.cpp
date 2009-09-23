// Calculation.cpp: implementation of the CCalculation class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "Calculation.h"

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CCalculation::CCalculation()
{

}

CCalculation::~CCalculation()
{

}

int CCalculation::Add(int a, int b)
{
	return a + b;
}

int CCalculation::Sub(int a, int b)
{
	return a - b;
}

int CCalculation::Mul(int a, int b)
{
	return a * b;
}

int CCalculation::Div(int a, int b)
{
	return a / b;
}