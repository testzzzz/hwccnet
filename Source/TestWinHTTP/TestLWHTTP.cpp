#include "WinHTTPLW.h"
#include "gtest/gtest.h"

HRESULT testHTTP( 
                 __in LPCWSTR pswzServerName,
                 __out ostream& os
                 )
{

    WinHTTPLW* pTest = new WinHTTPLW();
    HRESULT Error = S_OK;

    Error = WinHTTPLW::Initialize();                      
    if (FAILED(Error))
    {
        WinHTTPLW::ShowError(Error);                         

        delete pTest;
        return Error;
    }

    Error = pTest->Connect(pswzServerName);       
    if (FAILED(Error))
    {
        WinHTTPLW::ShowError(Error);

        delete pTest;
        return Error;
    }

    Error = pTest->Request(L"GET");              
    if (FAILED(Error))
    {
        WinHTTPLW::ShowError(Error);

        delete pTest;
        return Error;
    }

    Error = pTest->GetData(cout);           
    if (FAILED(Error))
    {
        WinHTTPLW::ShowError(Error);

        delete pTest;
        return Error;
    }

    delete pTest;
    return S_OK;
}

TEST(testHTTP, SimpleTest)
{
    EXPECT_EQ(S_OK, testHTTP(L"www.baidu.com", cout));
  //  EXPECT_EQ(S_OK, testHTTP(L"www.52xianjian.com", cout));
}

int main(int argc, char* argv[])
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}