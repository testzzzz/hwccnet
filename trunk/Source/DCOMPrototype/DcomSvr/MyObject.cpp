// MyObject.cpp : CMyObject ��ʵ��

#include "stdafx.h"
#include "MyObject.h"


// CMyObject


STDMETHODIMP CMyObject::GetData(LONG* lpData)
{
   *lpData = 1000;
    return S_OK;
}
