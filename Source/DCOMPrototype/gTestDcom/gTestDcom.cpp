// gTestDcom.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "gTestDcom.h"

long data        = 0;
COSERVERINFO serverinfo;
MULTI_QI Result;
IMyObject* gTestDcom::pt = NULL;


TEST_F(gTestDcom,UseDcomSvrF)
{
    serverinfo.dwReserved1 = 0;
    serverinfo.dwReserved2 = 0;
    serverinfo.pAuthInfo   = NULL;
    serverinfo.pwszName    = L"127.0.0.1";
    Result.pIID            = &IID_IMyObject;
    Result.pItf            = NULL;

    ASSERT_EQ(S_OK,CoCreateInstanceEx(
        CLSID_MyObject,
        NULL,
        CLSCTX_REMOTE_SERVER,
        &serverinfo,
        1,
        &Result
        ));
    ASSERT_EQ(S_OK,Result.hr);
    ASSERT_EQ(S_OK,Result.pItf->QueryInterface(&gTestDcom::pt));
    ASSERT_EQ(1,Result.pItf->Release());
    ASSERT_EQ(S_OK,gTestDcom::pt->GetData(&data));
    ASSERT_EQ(0,gTestDcom::pt->Release());
}

TEST_F(gTestDcom,UseDcomSvrS)
{
    serverinfo.dwReserved1 = 0;
    serverinfo.dwReserved2 = 0;
    serverinfo.pAuthInfo   = NULL;
    serverinfo.pwszName    = L"192.168.1.105";
    Result.pIID            = &IID_IMyObject;
    Result.pItf            = NULL;

    ASSERT_EQ(S_OK,CoCreateInstanceEx(
        CLSID_MyObject,
        NULL,
        CLSCTX_REMOTE_SERVER,
        &serverinfo,
        1,
        &Result
        ));
    ASSERT_EQ(S_OK,Result.hr);
    ASSERT_EQ(S_OK,Result.pItf->QueryInterface(&gTestDcom::pt));
    ASSERT_EQ(1,Result.pItf->Release());
    ASSERT_EQ(S_OK,gTestDcom::pt->GetData(&data));
    ASSERT_EQ(0,gTestDcom::pt->Release());
}
int _tmain(int argc, _TCHAR* argv[])
{
    HRESULT hr = CoInitialize(NULL);
    if (FAILED(hr))
    {
        cout << "error " << endl;
        return 0;
    }

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
        cout << "error " << endl;
        return 0;
    }
    ZeroMemory(&serverinfo,sizeof(serverinfo));
    ZeroMemory(&Result,sizeof(Result));
    testing::GTEST_FLAG(output) = "xml:TestResult.xml";
    testing::InitGoogleTest(&argc,argv);
    return RUN_ALL_TESTS();
}
