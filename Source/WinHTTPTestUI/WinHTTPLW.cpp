//////////////////////////////////////////////////////////
///
/// @file      WinHTTPLW.cpp
///
/// @brief     实现了WinHTTPLW类
///
/// @version   1.0
///
/// @author    游枭
///
/// @date      2009-07-24
///
/// <修改日期>      <修改者>        <修改描述>\n
///
///  2009-07-28      游枭            增加了UnInitialize,修改了Initialize
///  2009-07-30      游枭            修改了GetData
/// 
////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "WinHTTPLW.h"

HINTERNET WinHTTPLW::m_hSession = NULL;                                      ///< 会话对象（static保证了应用程序仅存在一个会话对象）      
WINHTTP_CURRENT_USER_IE_PROXY_CONFIG WinHTTPLW::m_ieProxyConfig = { 0 };     ///< 当前用户的IE代理设置
WINHTTP_PROXY_INFO WinHTTPLW::m_proxyInfo = { 0 };                           ///< 当前代理设置信息

/// @brief 初始化m_Connect和m_Request
WinHTTPLW::WinHTTPLW()
{
    m_hConncet = NULL;
    m_hRequest = NULL;
}

/// @brief 卸载m_Connect和m_Request
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
}

////////////////////////////////////////////////////////////
///
/// @brief 为应用程序创建一个会话对象、获取用户IE代理设置
///
/// @note 在应用程序开始时调用
///
/// @param void
///
/// @return HRESULT
///
/// @retval S_OK 正常返回
/// @retval 通过GetLastError()返回
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

    // 获取当前用户IE的代理设置
    if (!::WinHttpGetIEProxyConfigForCurrentUser(&m_ieProxyConfig))         
    {
        Uninitialize();

        return HRESULT_FROM_WIN32(::GetLastError());
    }

    WINHTTP_AUTOPROXY_OPTIONS autoProxyOptions = { 0 };

    // lpszAutoConfigUrl不为空表示钩选"使用自动配置脚本"，Internet Explorer将下载代理自动配置(PAC)文件来确定特定连接的代理服务器
    if (m_ieProxyConfig.lpszAutoConfigUrl != NULL)                                 
    {
        // fAutoDetect为true表示钩选"自动检测设置"，意味着Internet Explorer使用Web代理自动发现(WPAD)协议来查找代理设置。
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

        // 获取当前的IE代理服务器信息
        if (!::WinHttpGetProxyForUrl(
            m_hSession,
            NULL,
            &autoProxyOptions,
            &m_proxyInfo))
        {
            Uninitialize();

            return HRESULT_FROM_WIN32(::GetLastError());
        }

        // 设置代理方式默认为IE代理
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
        // 获取当前的IE代理服务器信息
        m_proxyInfo.dwAccessType = WINHTTP_ACCESS_TYPE_NAMED_PROXY;
        m_proxyInfo.lpszProxy = m_ieProxyConfig.lpszProxy;
        m_proxyInfo.lpszProxyBypass = m_ieProxyConfig.lpszProxyBypass;

        // 设置代理方式默认为IE代理
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
/// @brief 关闭应用程序会话对象，释放一些资源
///
/// @note 在应用程序结束时调用
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

        m_hSession = NULL;
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
/// @brief 利用应用程序会话创建一个连接对象
///
/// @param __in LPCWSTR pswzServerName 连接的服务器名称
/// @param __in INTERNET_PORT nServerPort 连接的服务器端口号
///
/// @return HRESULT
///
/// @retval S_OK 正常返回
/// @retval E_NOSESSION 会话对象没有创建
/// @retval 通过GetLastError()返回
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
/// @brief 利用连接对象创建请求对象，并发送请求
///
/// 所有参数均有默认实参，默认情况下能执行最简单的请求操作
///
/// @param __in LPCWSTR pswzVerb         指定HTTP协议动作（GET、POST）
/// @param __in LPCWSTR pswzObjectName   指定正在请求的资源名称和相对路径
/// @param __in_opt LPCWSTR pwszHeaders  包含其他标头
/// @param __in DWORD dwHeadersLength    指定标头的长度
/// @param __in_opt LPVOID lpOptional    包含用作请求的内容或正文的所有数据（通常用于POST请求）
/// @param __in DWORD dwOptionalLength   指定用作请求的内容或正文的所有数据的长度
/// @param __in DWORD dwTotalLength      指定请求内容的总长度。如果此值大于前面参数提供的数据的长度，则使用WinHttpWriteData函数编写其他数据来完成该请求。
///
/// @return HRESULT
///
/// @retval S_OK 正常返回
/// @retval E_NOCONNCET 连接对象没有创建
/// @retval 通过GetLastError()返回
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
        WINHTTP_DEFAULT_ACCEPT_TYPES,
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

    return S_OK;
}

////////////////////////////////////////////////////////////
///
/// @brief 获取请求到的数据
///
/// @param __out char* buf 输出缓冲区
/// @param __in int bufSize 缓冲区大小
///
/// @return HRESULT
///
/// @retval S_OK 正常返回
/// @retval E_NOREQUEST 请求对象没有创建
/// @retval E_NOBUFFER  缓冲区没有内存空间
/// @retval 通过GetLastError()返回
///
////////////////////////////////////////////////////////////
HRESULT WinHTTPLW::GetData(
    __out char* pBuf,
    __in int bufSize
    )
{
    if (m_hRequest == NULL)
    {
        return E_NOREQUEST;
    }

    if (pBuf == NULL && bufSize < 0)
    {
        return E_NOBUFFER;
    }
    ZeroMemory(pBuf,bufSize);

    if (!::WinHttpReceiveResponse(m_hRequest, NULL))
    {
        return HRESULT_FROM_WIN32(::GetLastError());
    }

    DWORD dwDownloaded = 0;

    if (!::WinHttpReadData(
        m_hRequest, 
        reinterpret_cast<LPVOID>(pBuf),
        bufSize, 
        &dwDownloaded
        ))
    {
        return HRESULT_FROM_WIN32(::GetLastError());
    }

    return S_OK;   
}