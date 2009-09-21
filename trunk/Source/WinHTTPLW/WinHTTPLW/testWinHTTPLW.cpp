//////////////////////////////////////////////////////////
///
/// @file      testWinHTTPLW.cpp
///
/// @brief     测试WinHTTPLW类提供的各个函数
///
/// @version   1.0
///
/// @author    游枭
///
/// @date      2009-07-24
/// 
////////////////////////////////////////////////////////////

#include "WinHTTPLW.h"

////////////////////////////////////////////////////////////
///
/// @brief 显示错误信息或代码
///
/// @param __in HRESULT ErrorCode 错误代码
///
/// @return void
///
////////////////////////////////////////////////////////////
void ShowError(HRESULT ErrorCode)
{
    switch (ErrorCode)
    {
    case E_NOSESSION:
        cout << "Error: Session Handle is Empty"<< endl;
        break;
    case E_NOCONNECT:
        cout << "Error: Connect Handle is Empty"<< endl;
        break;
    case E_NOREQUEST:
        cout << "Error: Request Handle is Empty"<< endl;
        break;
    default:
        cout << "Error Code: " << ::GetLastError() << endl;
        break;
    }
}

int main(int argc, char* argv[])
{
    argc;
    argv;

    HRESULT Error = S_OK;

    Error = WinHTTPLW::Initialize();                       // 为应用程序创建一个会话对象          
    if (FAILED(Error))
    {
        ShowError(Error);                                  // 显示错误信息或代码           

        return -1;
    }

    WinHTTPLW* pLewei = new WinHTTPLW();                   // 创建一个WinHTTPLW对象
    delete pLewei;
    pLewei = new WinHTTPLW();

    Error = pLewei->Connect(L"www.52xianjian.com");        // 创建一个连接对象    
    if (FAILED(Error))
    {
        ShowError(Error);

        delete pLewei;
        return -1;
    }

    Error = pLewei->Request(L"GET", L"/jay.rar");          // 创建请求对象，并发送请求  
    if (FAILED(Error))
    {
        ShowError(Error);

        delete pLewei;
        return -1;
    }

    //
    // 下载文件 
    //
    Error = pLewei->downloadFile("c:\\jay.rar");  // 下载文件到指定目录
    if (FAILED(Error))
    {
        ShowError(Error);

        delete pLewei;
        return -1;
    }
    cout << "下载完成" << endl;

    delete pLewei;

    WinHTTPLW::Uninitialize();
    
    return 0;
}