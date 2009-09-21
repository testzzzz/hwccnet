//////////////////////////////////////////////////////////
///
/// @file      testUpdate.cpp
///
/// @brief     测试Update组件
///
/// @version   1.0
///
/// @author    游枭
///
/// @date      2009-09-17
///
/// <修改日期>      <修改者>        <修改描述>\n
///  2009-09-17      游枭            创建
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
        cout << "命令行参数错误" << endl;
        system("pause");

        return -1;
    }

    HRESULT Error = S_OK;

    Error = CoInitialize(NULL);
    if (FAILED(Error))
    {
        cout << "初始化com库失败" << endl;
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
        cout << "创建组件失败" << endl;
        return -1;
    }

    Error = pUpdate->ConnectUpdateServer(argv[1]);
    if (FAILED(Error))
    {
        cout << "连接到更新服务器失败" << endl;
        return -1;
    }

    Error = pUpdate->CheckUpdate();
    if (FAILED(Error))
    {
        if (Error == E_NOUPDATE)
        {
            cout << "没有可用的更新" << endl;
            system("pause");
            return -1;
        }
        if (Error == E_INIFAILED)
        {
            cout << "打开配置文件失败" << endl;
            system("pause");
            return -1;
        }

        cout << "检查更新失败，Error Code：" << Error << endl;
        return -1;
    }
    else
    {
        cout << "服务器端有更新" << endl;
    }

    cout << "开始下载更新文件，请稍后……" << endl;
    Error = pUpdate->DownloadUpdateFile();
    if (FAILED(Error))
    {
        cout << "下载更新文件失败，Error Code：" << Error << endl;
        return -1;
    }
    else
    {
        cout << "更新成功" << endl;
        system("pause");
    }

    return 0;
}

