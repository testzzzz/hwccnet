//////////////////////////////////////////////////////////
///
/// @file      testWinHTTPLW.cpp
///
/// @brief     ����WinHTTPLW���ṩ�ĸ�������
///
/// @version   1.0
///
/// @author    ����
///
/// @date      2009-07-24
/// 
////////////////////////////////////////////////////////////

#include "WinHTTPLW.h"

////////////////////////////////////////////////////////////
///
/// @brief ��ʾ������Ϣ�����
///
/// @param __in HRESULT ErrorCode �������
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

    Error = WinHTTPLW::Initialize();                       // ΪӦ�ó��򴴽�һ���Ự����          
    if (FAILED(Error))
    {
        ShowError(Error);                                  // ��ʾ������Ϣ�����           

        return -1;
    }

    WinHTTPLW* pLewei = new WinHTTPLW();                   // ����һ��WinHTTPLW����
    delete pLewei;
    pLewei = new WinHTTPLW();

    Error = pLewei->Connect(L"www.52xianjian.com");        // ����һ�����Ӷ���    
    if (FAILED(Error))
    {
        ShowError(Error);

        delete pLewei;
        return -1;
    }

    Error = pLewei->Request(L"GET", L"/jay.rar");          // ����������󣬲���������  
    if (FAILED(Error))
    {
        ShowError(Error);

        delete pLewei;
        return -1;
    }

    //
    // �����ļ� 
    //
    Error = pLewei->downloadFile("c:\\jay.rar");  // �����ļ���ָ��Ŀ¼
    if (FAILED(Error))
    {
        ShowError(Error);

        delete pLewei;
        return -1;
    }
    cout << "�������" << endl;

    delete pLewei;

    WinHTTPLW::Uninitialize();
    
    return 0;
}