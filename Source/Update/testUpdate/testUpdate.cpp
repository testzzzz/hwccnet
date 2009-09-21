//////////////////////////////////////////////////////////
///
/// @file      testUpdate.cpp
///
/// @brief     ����Update���
///
/// @version   1.0
///
/// @author    ����
///
/// @date      2009-09-17
///
/// <�޸�����>      <�޸���>        <�޸�����>\n
///  2009-09-17      ����            ����
///
////////////////////////////////////////////////////////////

#include "stdafx.h"
#include <iostream>
#include "../Update/Update_i.h"
#include "../Update/Update_i.c"
using namespace std;

#define E_NOUPDATE     0x80010100
#define E_INIFAILED     0x80010101
#define E_DOWNLOAD_FAILED     0x80010102

int _tmain(int argc, _TCHAR* argv[])
{
    if (argc != 2)
    {
        cout << "�����в�������" << endl;
        system("pause");

        return -1;
    }

    HRESULT Error = S_OK;

    Error = CoInitialize(NULL);
    if (FAILED(Error))
    {
        cout << "��ʼ��com��ʧ��" << endl;
        return -1;
    }

    IUpdateVersion* pUpdate = NULL;

    Error = CoCreateInstance(
        CLSID_UpdateVersion,
        NULL,
        CLSCTX_INPROC_SERVER,
        IID_IUpdateVersion,
        reinterpret_cast<LPVOID*>(&pUpdate)
        );
    if (FAILED(Error))
    {
        cout << "�������ʧ��" << endl;
        return -1;
    }

    Error = pUpdate->ConnectUpdateServer(argv[1]);
    if (FAILED(Error))
    {
        cout << "���ӵ����·�����ʧ��" << endl;
        return -1;
    }

    Error = pUpdate->CheckUpdate();
    if (FAILED(Error))
    {
        if (Error == E_NOUPDATE)
        {
            cout << "û�п��õĸ���" << endl;
            system("pause");
            return -1;
        }
        if (Error == E_INIFAILED)
        {
            cout << "�������ļ�ʧ��" << endl;
            system("pause");
            return -1;
        }

        cout << "������ʧ�ܣ�Error Code��" << Error << endl;
        return -1;
    }
    else
    {
        cout << "���������и���" << endl;
    }

    cout << "��ʼ���ظ����ļ������Ժ󡭡�" << endl;
    Error = pUpdate->DownloadUpdateFile();
    if (FAILED(Error))
    {
        cout << "���ظ����ļ�ʧ�ܣ�Error Code��" << Error << endl;
        return -1;
    }
    else
    {
        cout << "���³ɹ�" << endl;
        system("pause");
    }

    return 0;
}

