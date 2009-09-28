// MyObject.cpp : CMyObject µÄÊµÏÖ

#include "stdafx.h"
#include "MyObject.h"


// CMyObject


STDMETHODIMP CMyObject::GetData(LONG* lpData)
{
   *lpData = 1000;
    return S_OK;
}
