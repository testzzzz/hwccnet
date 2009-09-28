//////////////////////////////////////////////////////////
/// @file      DcomConsole.cpp
/// @brief     一个简单的Dcom示例程序客户端部分          
/// @version   1.0
/// @author    甘先志
/// @date      2009-09-02
/// <修改日期>      <修改者>        <修改描述>\n
///  2009-09-02      甘先志          创建
////////////////////////////////////////////////////////////


#include "stdafx.h"

void UseDcomSvr()
{
    HRESULT hr;
    COSERVERINFO serverinfo;
    MULTI_QI Result;
    ZeroMemory(&serverinfo,sizeof(serverinfo));
    ZeroMemory(&Result,sizeof(Result));

    hr = CoInitializeSecurity( 
        NULL, 
        -1, 
        NULL, 
        NULL,
        RPC_C_AUTHN_LEVEL_DEFAULT, 
        RPC_C_IMP_LEVEL_IDENTIFY, 
        NULL, 
        EOAC_NONE, 
        NULL 
        );
    if (FAILED(hr))
    {
        cout << "init right fail!" <<endl;
        return;
    }
    serverinfo.dwReserved1 = 0;
    serverinfo.dwReserved2 = 0;
    serverinfo.pAuthInfo   = NULL;
    serverinfo.pwszName    = L"127.0.0.1";
    Result.pIID            = &IID_IMyObject;
    Result.pItf            = NULL;

    hr = CoCreateInstanceEx(
        CLSID_MyObject,
        NULL,
        CLSCTX_REMOTE_SERVER,
        &serverinfo,
        1,
        &Result
        );
    if (FAILED(hr))
    {
        cout << "cannot create object1 :" << GetLastError() << endl;
        return;
    }
    if (FAILED(Result.hr))
    {
        cout << "cannot create object2 :" << GetLastError() <<endl;
        return;
    }
    IMyObject *pt = NULL;
    long data     = 0;
    Result.pItf->QueryInterface(&pt);
    Result.pItf->Release();
    pt->GetData(&data);
    cout << data << endl;
    pt->Release();

}
int main(int argc, char* argv[])
{
    HRESULT hr;
    hr = CoInitialize(NULL);
    if (FAILED(hr))
    {
        cout << "error " <<endl;
        return 0;
    }
    UseDcomSvr();
    CoUninitialize();
    system("pause");
    return 0;
}
