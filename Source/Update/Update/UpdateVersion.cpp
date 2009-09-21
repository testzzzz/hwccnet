//////////////////////////////////////////////////////////
///
/// @file      UpdateVersion.cpp
///
/// @brief     CUpdateVersion类的实现
///
/// @version   1.0
///
/// @author    游枭
///
/// @date      2009-09-16
///
/// <修改日期>      <修改者>        <修改描述>\n
///  2009-09-16      游枭            创建
///  2009-09-17      游枭            增加了DirectoryExist函数
///  2009-09-18      游枭            更新DownloadUpdateFile，增加了对更\n
///                                  新过程中网络中断的情况进行了处理
///
////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "UpdateVersion.h"
#include <vector>
#include <string>

////////////////////////////////////////////////////////////
///
/// @brief 连接到更新服务器
///
/// @param __in LPCTSTR downloadDirectory    更新服务器Url
///
/// @return HRESULT
///
/// @retval S_OK 正常返回
/// @retval E_INVALIDARG 参数错误
/// @retval 通过GetLastError()返回
///
////////////////////////////////////////////////////////////
STDMETHODIMP CUpdateVersion::ConnectUpdateServer(BSTR UpdateServerUrl)
{
    if (UpdateServerUrl == NULL)
    {
        return E_INVALIDARG;
    }

    WinHTTPLW::Initialize();

    m_pUpdate = new WinHTTPLW();

    //
    // 连接到服务器
    //
    HRESULT Error = S_OK;

    Error = m_pUpdate->Connect(UpdateServerUrl);
    if (FAILED(Error))
    {
        delete m_pUpdate;
        m_pUpdate = NULL;

        return Error;
    }

    //
    // 请求更新配置文件
    //
    Error = m_pUpdate->Request(L"GET", L"\\update.txt");
    if (FAILED(Error))
    {
        delete m_pUpdate;
        m_pUpdate = NULL;

        return Error;
    }

    return S_OK;
}

////////////////////////////////////////////////////////////
///
/// @brief 检查服务器是否有可用更新
///
/// @note 必须先调用ConnectUpdateServer
///
/// @param void
///
/// @return HRESULT
///
/// @retval S_OK 正常返回，修改m_bUpdate为TRUE，有可用更新
/// @retval E_NOUPDATE 没有可用的更新
/// @retval E_INIFAILED 读取配置文件出错
/// @retval 通过GetLastError()返回
///
////////////////////////////////////////////////////////////
STDMETHODIMP CUpdateVersion::CheckUpdate(void)
{
    if (m_pUpdate == NULL)
    {
        return E_NOREQUEST;
    }

    HRESULT Error = S_OK;
    DWORD dwError = 0;
    //
    // 获取系统临时文件目录和主程序运行目录
    //
    dwError = ::GetTempPath(
                    sizeof(m_tempPath),
                    m_tempPath
                    );
    if (dwError <= 0)
    {
        delete m_pUpdate;
        m_pUpdate = NULL;

        return HRESULT_FROM_WIN32(::GetLastError());
    }

    dwError = ::GetModuleFileName(
                    NULL,
                    m_appPath,
                    sizeof(m_appPath)
                    );
    if (dwError <= 0)
    {
        delete m_pUpdate;
        m_pUpdate = NULL;

        return HRESULT_FROM_WIN32(::GetLastError());
    }
    
    int len = lstrlen(m_appPath);
    for (; len>0; len--)
    {
        if (m_appPath[len] == '\\')
        {
            break;
        }
        m_appPath[len] = 0;
    }

    lstrcpy(m_pathServerUpdateFile, m_tempPath);
    lstrcat(m_pathServerUpdateFile, _T("update.ini"));

    lstrcpy(m_pathClientUpdateFile, m_appPath);
    lstrcat(m_pathClientUpdateFile, _T("update.ini"));

    //
    // 下载更新配置文件
    //
    Error = m_pUpdate->downloadFile(m_pathServerUpdateFile);
    if (FAILED(Error))
    {
        delete m_pUpdate;
        m_pUpdate = NULL;

        return Error;
    }

    dwError = ::GetPrivateProfileString(
                    _T("Version"),
                    _T("ProductVersion"),
                    _T("0"),
                    m_clientVersion,
                    20,
                    m_pathClientUpdateFile
                    );
    if (dwError == 1)
    {
        delete m_pUpdate;
        m_pUpdate = NULL;

        return E_INIFAILED;
    }

    dwError = ::GetPrivateProfileString(
                    _T("UpdateInfo"),
                    _T("ProductVersion"),
                    _T("0"),
                    m_serverVersion,
                    20,
                    m_pathServerUpdateFile
                    );
    if (dwError == 1)
    {
        delete m_pUpdate;
        m_pUpdate = NULL;

        return E_INIFAILED;
    }
    
    //
    // 检查服务器端是否更新
    //
    if (lstrcmp(m_clientVersion, m_serverVersion) >= 0)
    {
        delete m_pUpdate;
        m_pUpdate = NULL;
        m_bUpdate = FALSE;

        return E_NOUPDATE;
    }

    m_bUpdate = TRUE;

    return S_OK;
}

////////////////////////////////////////////////////////////
///
/// @brief 下载更新文件
///
/// @note 必须先调用CheckUpdate
///
/// @param void
///
/// @return HRESULT
///
/// @retval S_OK 正常返回
/// @retval E_NOUPDATE 没有可用的更新
/// @retval 通过GetLastError()返回
///
////////////////////////////////////////////////////////////
STDMETHODIMP CUpdateVersion::DownloadUpdateFile(void)
{
    if (!m_bUpdate)
    {
        return E_NOUPDATE;
    }

    HRESULT Error = S_OK;
    DWORD dwError = 0;

    //
    // 获得需要更新的文件数量
    //
    int cntFile = ::GetPrivateProfileInt(
                      _T("UpdateInfo"),
                      _T("FileCount"),
                      0,
                      m_pathServerUpdateFile
                      );
    
    TCHAR buf[20] = {0};
    TCHAR filePath[MAX_PATH] = {0};
    TCHAR downloadPath[MAX_PATH] = {0};
    TCHAR fileBakpath[MAX_PATH] = {0};
    filePath[0] = '\\';

    vector<wstring> fileList;        // 更新的文件列表
    vector<wstring> bakfileList;     // 备分的文件列表

    //
    // 更新每一个文件
    //
    for (int index=0; index<cntFile; index++)
    {
        lstrcpy(downloadPath, m_appPath);

        _stprintf_s(buf, L"FileName%d", index);

        dwError = ::GetPrivateProfileString(
                        _T("UpdateInfo"),
                        buf,
                        _T("0"),
                        filePath + 1,
                        MAX_PATH,
                        m_pathServerUpdateFile
                        );
        if (dwError == 1)
        {
            delete m_pUpdate;
            m_pUpdate = NULL;

            return E_INIFAILED;
        }
        
        Error = m_pUpdate->Request(L"GET", filePath);
        if (FAILED(Error))
        {
            m_bDownload = FALSE;

            break;
        }
        
        //
        // 检查路径中是否包含目录
        //
        int i = 1;
        int len = lstrlen(filePath);

        for (; i<len; i++) 
        {
            if (filePath[i] == '\\')
            {
                break;
            }
        }

        //
        // 如果路径中包含目录，获得目录名
        //
        if (i < len)
        {
            TCHAR directoryName[MAX_PATH] = {0};
            lstrcpy(directoryName, filePath + 1);
            directoryName[i - 1] = '\0';

            //
            // 如果目录不存在则建立目录
            //
            if (!DirectoryExist(m_appPath, directoryName))
            {
                TCHAR directoryPath[MAX_PATH] = {0};

                lstrcpy(directoryPath, m_appPath);
                lstrcat(directoryPath, directoryName);

                if (!::CreateDirectory(directoryPath, NULL))
                {
                    delete m_pUpdate;
                    m_pUpdate = NULL;

                    return HRESULT_FROM_WIN32(::GetLastError());
                }
            }
        }
        
        lstrcat(downloadPath, filePath + 1);
        lstrcpy(fileBakpath, downloadPath);
        lstrcat(fileBakpath, _T(".bak"));

        //
        // 备分原来的文件
        //
        ::_wrename(downloadPath, fileBakpath);

        fileList.push_back(downloadPath);
        bakfileList.push_back(fileBakpath);

        Error = m_pUpdate->downloadFile(downloadPath);
        if (FAILED(Error))
        {
            delete m_pUpdate;
            m_pUpdate = NULL;

            return Error;
        }
    }

    if (!m_bDownload)
    {
        //
        // 下载失败，恢复原来的文件
        //
        for (size_t i=0; i<fileList.size(); i++)
        {
            ::DeleteFile(fileList[i].c_str());
            ::_wrename(bakfileList[i].c_str(), fileList[i].c_str());
        }

        delete m_pUpdate;
        m_pUpdate = NULL;
        return E_DOWNLOAD_FAILED;
    }
    else
    {
        //
        // 下载成功，删除备分的文件
        //
        for (size_t i=0; i<bakfileList.size(); i++)
        {
            ::DeleteFile(bakfileList[i].c_str());
        }

        //
        // 更新本地版本号
        //
        lstrcpy(m_clientVersion, m_serverVersion);
        ::WritePrivateProfileString(
            _T("Version"),
            _T("ProductVersion"),
            m_clientVersion,
            m_pathClientUpdateFile
            );

        delete m_pUpdate;
        m_pUpdate = NULL;
    }
 
    return S_OK;
}

////////////////////////////////////////////////////////////
///
/// @brief 在指定路径查找是否存在指定的文件夹
///
/// @param __in LPCTSTR DirectoryPath    指定查找路径
/// @param __in LPCTSTR DirectoryName    查找的文件夹名称
///
/// @return BOOL
///
/// @retval TRUE 在指定路径存在要查找的文件夹
/// @retval FALSE 在指定路径不存在要查找的文件夹
///
////////////////////////////////////////////////////////////
BOOL CUpdateVersion::DirectoryExist(
    __in LPCTSTR DirectoryPath,
    __in LPCTSTR DirectoryName
    )
{
    WIN32_FIND_DATA FinderData;
    ZeroMemory(&FinderData, sizeof(WIN32_FIND_DATA));
    HANDLE hFinder = NULL;
    TCHAR findPath[MAX_PATH] = {0};
    TCHAR findName[MAX_PATH] = {0};

    lstrcpy(findPath, DirectoryPath);
    lstrcat(findPath, _T("*.*"));

    hFinder = FindFirstFile(findPath, &FinderData);
    if (hFinder == INVALID_HANDLE_VALUE)
    {
        return FALSE;
    }

    do 
    {
        lstrcpy(findName, FinderData.cFileName);
        if (lstrcmp(findName, _T(".")) == 0 || lstrcmp(findName, _T("..")) == 0)
        {
            continue;
        }
        
        //
        // 判断是否是文件夹
        //
        if (FinderData.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY)
        {
            //
            // 如果指定的文件夹已存在
            //
            if (lstrcmp(FinderData.cFileName, DirectoryName) == 0)
            {
                FindClose(hFinder);
                return TRUE;
            }
        }
        
    } while (FindNextFile(hFinder, &FinderData));

    FindClose(hFinder);
    return FALSE;
}
