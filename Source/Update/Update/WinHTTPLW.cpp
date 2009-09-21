//////////////////////////////////////////////////////////
///
/// @file      WinHTTPLW.cpp
///
/// @brief     ʵ����WinHTTPLW��
///
/// @version   1.0
///
/// @author    ����
///
/// @date      2009-07-24
///
/// <�޸�����>      <�޸���>        <�޸�����>\n
///  2009-07-28      ����            ������UnInitialize,�޸���Initialize\n
///  2009-09-08      ����            ʹ��downloadFile�滻��GetData��֧���ļ�������
///  2009-09-16      ����            ������GetSize����ȡ������Դ�Ĵ�С
///  2009-09-17      ����            �޸���downloadFileһЩbug
///
////////////////////////////////////////////////////////////

#include "WinHTTPLW.h"

HINTERNET WinHTTPLW::m_hSession = NULL;                                      ///< �Ự����static��֤��Ӧ�ó��������һ���Ự����      
WINHTTP_CURRENT_USER_IE_PROXY_CONFIG WinHTTPLW::m_ieProxyConfig = { 0 };     ///< ��ǰ�û���IE��������
WINHTTP_PROXY_INFO WinHTTPLW::m_proxyInfo = { 0 };                           ///< ��ǰ����������Ϣ

/// @brief ��ʼ��m_Connect��m_Request
WinHTTPLW::WinHTTPLW()
{
    m_hConncet = NULL;
    m_hRequest = NULL;
    m_hFile = NULL;
}

/// @brief ж��m_Connect��m_Request
WinHTTPLW::~WinHTTPLW()
{
    if (m_hRequest != NULL)
    {
        WinHttpCloseHandle( m_hRequest );

        m_hRequest = NULL;
    }
    
    if (m_hRequest != NULL)
    {
        WinHttpCloseHandle( m_hConncet );

        m_hConncet = NULL;
    }

    if (m_hFile != NULL)
    {
        CloseHandle(m_hFile);

        m_hFile = NULL;
    }
}

////////////////////////////////////////////////////////////
///
/// @brief ΪӦ�ó��򴴽�һ���Ự���󡢻�ȡ�û�IE��������
///
/// @note ��Ӧ�ó���ʼʱ����
///
/// @param void
///
/// @return HRESULT
///
/// @retval S_OK ��������
/// @retval ͨ��GetLastError()����
///
////////////////////////////////////////////////////////////
HRESULT WinHTTPLW::Initialize()
{
    if (m_hSession == NULL)
    {
        m_hSession = ::WinHttpOpen(
            L"LeWei WinHTTP/1.0",
            WINHTTP_ACCESS_TYPE_DEFAULT_PROXY,
            WINHTTP_NO_PROXY_NAME,
            WINHTTP_NO_PROXY_BYPASS,
            0
            );
    }

    if (m_hSession == NULL)
    {
        return HRESULT_FROM_WIN32(::GetLastError());
    }

    // ��ȡ��ǰ�û�IE�Ĵ�������
    if (!::WinHttpGetIEProxyConfigForCurrentUser(&m_ieProxyConfig))         
    {
        Uninitialize();

        return HRESULT_FROM_WIN32(::GetLastError());
    }

    WINHTTP_AUTOPROXY_OPTIONS autoProxyOptions = { 0 };

    // lpszAutoConfigUrl��Ϊ�ձ�ʾ��ѡ"ʹ���Զ����ýű�"��Internet Explorer�����ش����Զ�����(PAC)�ļ���ȷ���ض����ӵĴ��������
    if (m_ieProxyConfig.lpszAutoConfigUrl != NULL)                                 
    {
        // fAutoDetectΪtrue��ʾ��ѡ"�Զ��������"����ζ��Internet Explorerʹ��Web�����Զ�����(WPAD)Э�������Ҵ������á�
        if (m_ieProxyConfig.fAutoDetect)
        {
            autoProxyOptions.dwFlags = WINHTTP_AUTOPROXY_AUTO_DETECT;
            autoProxyOptions.dwAutoDetectFlags = WINHTTP_AUTO_DETECT_TYPE_DHCP | 
                                                 WINHTTP_AUTO_DETECT_TYPE_DNS_A;
        }
        else
        {
            autoProxyOptions.dwFlags = WINHTTP_AUTOPROXY_CONFIG_URL;
            autoProxyOptions.lpszAutoConfigUrl = m_ieProxyConfig.lpszAutoConfigUrl;
        }

        // ��ȡ��ǰ��IE�����������Ϣ
        if (!::WinHttpGetProxyForUrl(
            m_hSession,
            NULL,
            &autoProxyOptions,
            &m_proxyInfo))
        {
            Uninitialize();

            return HRESULT_FROM_WIN32(::GetLastError());
        }

        // ���ô���ʽĬ��ΪIE����
        if (!::WinHttpSetOption(
            m_hSession,
            WINHTTP_OPTION_PROXY,
            &m_proxyInfo,
            sizeof(m_proxyInfo)
            ))
        {
            Uninitialize();

            return HRESULT_FROM_WIN32(::GetLastError());
        }

    }
    else if (m_ieProxyConfig.lpszProxy != NULL)           
    {
        // ��ȡ��ǰ��IE�����������Ϣ
        m_proxyInfo.dwAccessType = WINHTTP_ACCESS_TYPE_NAMED_PROXY;
        m_proxyInfo.lpszProxy = m_ieProxyConfig.lpszProxy;
        m_proxyInfo.lpszProxyBypass = m_ieProxyConfig.lpszProxyBypass;

        // ���ô���ʽĬ��ΪIE����
        if (!::WinHttpSetOption(
            m_hSession,
            WINHTTP_OPTION_PROXY,
            &m_proxyInfo,
            sizeof(m_proxyInfo)
            ))
        {
            Uninitialize();
            
            return HRESULT_FROM_WIN32(::GetLastError());
        }
    }

    return S_OK;
}

////////////////////////////////////////////////////////////
///
/// @brief �ر�Ӧ�ó���Ự�����ͷ�һЩ��Դ
///
/// @note ��Ӧ�ó������ʱ����
///
/// @param void
///
/// @return void
///
////////////////////////////////////////////////////////////
void WinHTTPLW::Uninitialize()
{
    if (m_hSession != NULL)
    {
        WinHttpCloseHandle(m_hSession);
    }

    if (m_ieProxyConfig.lpszAutoConfigUrl != NULL)
    {
        GlobalFree(m_ieProxyConfig.lpszAutoConfigUrl);
    }

    if (m_ieProxyConfig.lpszProxy != NULL)
    {
        GlobalFree(m_ieProxyConfig.lpszProxy);
    }

    if (m_ieProxyConfig.lpszProxyBypass != NULL)
    {
        GlobalFree(m_ieProxyConfig.lpszProxyBypass);
    }

    if (m_proxyInfo.lpszProxy != NULL)
    {
        GlobalFree(m_proxyInfo.lpszProxy);
    }

    if (m_proxyInfo.lpszProxyBypass != NULL)
    {
        GlobalFree(m_proxyInfo.lpszProxyBypass);
    }
}

////////////////////////////////////////////////////////////
///
/// @brief ����Ӧ�ó���Ự����һ�����Ӷ���
///
/// @param __in LPCWSTR pswzServerName ���ӵķ���������
///
/// @return HRESULT
///
/// @retval S_OK ��������
/// @retval E_NOSESSION �Ự����û�д���
/// @retval ͨ��GetLastError()����
///
////////////////////////////////////////////////////////////
HRESULT WinHTTPLW::Connect(
    __in LPCWSTR pswzServerName,
    __in INTERNET_PORT nServerPort
    )
{
    if (m_hSession == NULL)
    {
        return E_NOSESSION;
    }

    m_hConncet = ::WinHttpConnect(
        m_hSession,
        pswzServerName,
        nServerPort,
        0
        );

    if (m_hConncet == NULL)
    {
        return HRESULT_FROM_WIN32(::GetLastError());
    }       

    return S_OK;
}

////////////////////////////////////////////////////////////
///
/// @brief �������Ӷ��󴴽�������󣬲���������
///
/// ���в�������Ĭ��ʵ�Σ�Ĭ���������ִ����򵥵��������
///
/// @param __in LPCWSTR pswzVerb         ָ��HTTPЭ�鶯����GET��POST��
/// @param __in LPCWSTR pswzObjectName   ָ�������������Դ���ƺ����·��
/// @param __in_opt LPCWSTR pwszHeaders  ����������ͷ
/// @param __in DWORD dwHeadersLength    ָ����ͷ�ĳ���
/// @param __in_opt LPVOID lpOptional    ����������������ݻ����ĵ��������ݣ�ͨ������POST����
/// @param __in DWORD dwOptionalLength   ָ��������������ݻ����ĵ��������ݵĳ���
/// @param __in DWORD dwTotalLength      ָ���������ݵ��ܳ��ȡ������ֵ����ǰ������ṩ�����ݵĳ��ȣ���ʹ��WinHttpWriteData������д������������ɸ�����
///
/// @return HRESULT
///
/// @retval S_OK ��������
/// @retval E_NOCONNCET ���Ӷ���û�д���
/// @retval ͨ��GetLastError()����
///
////////////////////////////////////////////////////////////
HRESULT WinHTTPLW::Request(
    __in LPCWSTR pswzVerb, 
    __in LPCWSTR pswzObjectName,
    __in_opt LPCWSTR pwszHeaders,
    __in DWORD dwHeadersLength,
    __in_opt LPVOID lpOptional,
    __in DWORD dwOptionalLength,
    __in DWORD dwTotalLength
    )
{
    if (m_hConncet == NULL)
    {
        return E_NOCONNECT;
    }

    m_hRequest = ::WinHttpOpenRequest(
        m_hConncet,
        pswzVerb,
        pswzObjectName,
        NULL,
        WINHTTP_NO_REFERER,
        NULL,
        0
        );
    if (m_hRequest == NULL)
    {
        return HRESULT_FROM_WIN32(::GetLastError());
    }

    if (!::WinHttpSendRequest(
        m_hRequest,
        pwszHeaders,
        dwHeadersLength,
        lpOptional,
        dwOptionalLength,
        dwTotalLength,
        0))
    {
        return HRESULT_FROM_WIN32(::GetLastError());
    }

    if (!::WinHttpReceiveResponse(m_hRequest, NULL))
    {
        return HRESULT_FROM_WIN32(::GetLastError());
    }

    return S_OK;
}

////////////////////////////////////////////////////////////
///
/// @brief ��ȡ������Դ�Ĵ�С
///
/// @param __inout LPTSTR& lpSize   ����������Դ�Ĵ�С
///
/// @return HRESULT
///
/// @retval S_OK ��������
/// @retval ͨ��GetLastError()����
///
////////////////////////////////////////////////////////////
HRESULT WinHTTPLW::GetSize(
    __inout LPTSTR& lpSize
    )
{
    if (m_hRequest == NULL)
    {
        return E_NOREQUEST;
    }

    DWORD dwBufSize = 0;
    BOOL bResult = FALSE;
    
    WinHttpQueryHeaders( 
        m_hRequest, 
        WINHTTP_QUERY_CONTENT_LENGTH,
        WINHTTP_HEADER_NAME_BY_INDEX, 
        NULL, 
        &dwBufSize, 
        WINHTTP_NO_HEADER_INDEX
        );

    if( GetLastError( ) == ERROR_INSUFFICIENT_BUFFER )
    {
        lpSize = new TCHAR[dwBufSize/sizeof(TCHAR)];

        bResult = WinHttpQueryHeaders( 
                      m_hRequest, 
                      WINHTTP_QUERY_CONTENT_LENGTH,
                      WINHTTP_HEADER_NAME_BY_INDEX, 
                      lpSize, 
                      &dwBufSize, 
                      WINHTTP_NO_HEADER_INDEX
                      );
    }

    if (!bResult)
    {
        return HRESULT_FROM_WIN32(::GetLastError());
    }

    return S_OK;
}

////////////////////////////////////////////////////////////
///
/// @brief �����ļ�
///
/// @param __in LPCTSTR downloadDirectory ָ�������ļ������Ŀ¼
///
/// @return HRESULT
///
/// @retval S_OK ��������
/// @retval E_NOREQUEST �������û�д���
/// @retval ͨ��GetLastError()����
///
////////////////////////////////////////////////////////////
HRESULT WinHTTPLW::downloadFile(
    __in LPCTSTR downloadDirectory
    )
{
    if (m_hRequest == NULL)
    {
        return E_NOREQUEST;
    }

    m_hFile = CreateFile(
        downloadDirectory,
        GENERIC_WRITE,
        0,
        NULL,
        CREATE_ALWAYS,
        FILE_ATTRIBUTE_NORMAL,
        NULL
        );
    if (m_hFile == INVALID_HANDLE_VALUE)
    {
        CloseHandle(m_hFile);
        m_hFile = NULL;

        return HRESULT_FROM_WIN32(::GetLastError());
    }

    DWORD dwSize = 0;
    DWORD dwDownloaded = 0;
    LPSTR pszOutBuffer = NULL;
    
    do 
    {
        dwSize = 0;
        if (!::WinHttpQueryDataAvailable(m_hRequest, &dwSize))
        {
            return HRESULT_FROM_WIN32(::GetLastError());
        }

        pszOutBuffer = new char[dwSize+1];
        if (pszOutBuffer == NULL)
        {
            dwSize = 0;
            return HRESULT_FROM_WIN32(::GetLastError());
        }
        ZeroMemory(pszOutBuffer,dwSize+1);


        if (!::WinHttpReadData(
            m_hRequest, 
            reinterpret_cast<LPVOID>(pszOutBuffer), 
            dwSize, 
            &dwDownloaded
            ))
        {
            delete [] pszOutBuffer;
            pszOutBuffer = NULL;
            return HRESULT_FROM_WIN32(::GetLastError());
        }

        WriteFile(
            m_hFile,
            pszOutBuffer,
            dwSize,
            &dwDownloaded,
            NULL
            );
    } while (dwSize > 0);

    delete [] pszOutBuffer;
    pszOutBuffer = NULL;
    CloseHandle(m_hFile);
    m_hFile = NULL;

    return S_OK;   
}