// MyObject.cpp : Implementation of CMyObject
#include "stdafx.h"
#include "DcomSvr.h"
#include "MyObject.h"

/////////////////////////////////////////////////////////////////////////////
// CMyObject


STDMETHODIMP CMyObject::GetData(long *lpData)
{
    *lpData = 1000;
	return S_OK;
}
