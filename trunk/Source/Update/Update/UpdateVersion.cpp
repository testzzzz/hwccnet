//////////////////////////////////////////////////////////
///
/// @file      UpdateVersion.cpp
///
/// @brief     CUpdateVersion���ʵ��
///
/// @version   1.0
///
/// @author    ����
///
/// @date      2009-09-16
///
/// <�޸�����>      <�޸���>        <�޸�����>\n
///  2009-09-16      ����            ����
///  2009-09-17      ����            ������DirectoryExist����
///  2009-09-18      ����            ����DownloadUpdateFile�������˶Ը�\n
///                                  �¹����������жϵ���������˴���
///
////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "UpdateVersion.h"
#include <vector>
#include <string>

////////////////////////////////////////////////////////////
///
/// @brief ���ӵ����·�����
///
/// @param __in LPCTSTR downloadDirectory    ���·�����Url
///
/// @return HRESULT
///
/// @retval S_OK ��������
/// @retval E_INVALIDARG ��������
/// @retval ͨ��GetLastError()����
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
    // ���ӵ�������
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
    // ������������ļ�
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
/// @brief ���������Ƿ��п��ø���
///
/// @note �����ȵ���ConnectUpdateServer
///
/// @param void
///
/// @return HRESULT
///
/// @retval S_OK �������أ��޸�m_bUpdateΪTRUE���п��ø���
/// @retval E_NOUPDATE û�п��õĸ���
/// @retval E_INIFAILED ��ȡ�����ļ�����
/// @retval ͨ��GetLastError()����
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
    // ��ȡϵͳ��ʱ�ļ�Ŀ¼������������Ŀ¼
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
    // ���ظ��������ļ�
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
    // �����������Ƿ����
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
/// @brief ���ظ����ļ�
///
/// @note �����ȵ���CheckUpdate
///
/// @param void
///
/// @return HRESULT
///
/// @retval S_OK ��������
/// @retval E_NOUPDATE û�п��õĸ���
/// @retval ͨ��GetLastError()����
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
    // �����Ҫ���µ��ļ�����
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

    vector<wstring> fileList;        // ���µ��ļ��б�
    vector<wstring> bakfileList;     // ���ֵ��ļ��б�

    //
    // ����ÿһ���ļ�
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
        // ���·�����Ƿ����Ŀ¼
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
        // ���·���а���Ŀ¼�����Ŀ¼��
        //
        if (i < len)
        {
            TCHAR directoryName[MAX_PATH] = {0};
            lstrcpy(directoryName, filePath + 1);
            directoryName[i - 1] = '\0';

            //
            // ���Ŀ¼����������Ŀ¼
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
        // ����ԭ�����ļ�
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
        // ����ʧ�ܣ��ָ�ԭ�����ļ�
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
        // ���سɹ���ɾ�����ֵ��ļ�
        //
        for (size_t i=0; i<bakfileList.size(); i++)
        {
            ::DeleteFile(bakfileList[i].c_str());
        }

        //
        // ���±��ذ汾��
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
/// @brief ��ָ��·�������Ƿ����ָ�����ļ���
///
/// @param __in LPCTSTR DirectoryPath    ָ������·��
/// @param __in LPCTSTR DirectoryName    ���ҵ��ļ�������
///
/// @return BOOL
///
/// @retval TRUE ��ָ��·������Ҫ���ҵ��ļ���
/// @retval FALSE ��ָ��·��������Ҫ���ҵ��ļ���
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
        // �ж��Ƿ����ļ���
        //
        if (FinderData.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY)
        {
            //
            // ���ָ�����ļ����Ѵ���
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
