//////////////////////////////////////////////////////////
///
/// @file      WinHTTPLW.h
///
/// @brief     封装了WinHTTP类、定义了一些错误代码
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

#ifndef WINHTTPLW_H
#define WINHTTPLW_H
#include "stdafx.h"
#include <windows.h>
#include <winhttp.h>
#include <iostream>
using namespace std;
#pragma comment(lib, "winhttp.lib")

/// @class WinHTTPLW
/// @brief 封装了WinHTTP，并支持IE代理设置
class WinHTTPLW
{
    public:
        /// @brief 初始化m_Connect和m_Request
        WinHTTPLW();
        /// @brief 关闭m_Connect、m_Request
        ~WinHTTPLW();
        
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
        static HRESULT Initialize();

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
        static void Uninitialize();

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
        HRESULT Connect(
            __in LPCWSTR pswzServerName,
            __in INTERNET_PORT nServerPort = INTERNET_DEFAULT_PORT
            );                          
        
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
        HRESULT Request(
             __in LPCWSTR pswzVerb = NULL,
             __in LPCWSTR pswzObjectName = NULL,
             __in_opt LPCWSTR pwszHeaders = WINHTTP_NO_ADDITIONAL_HEADERS,
             __in DWORD dwHeadersLength = -1L,
             __in_opt LPVOID lpOptional = WINHTTP_NO_REQUEST_DATA,
             __in DWORD dwOptionalLength = 0,
             __in DWORD dwTotalLength = 0
             );

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
        /// @retval 通过GetLastError()返回
        ///
        ////////////////////////////////////////////////////////////
        HRESULT GetData(
            __out char* pBuf,
            __in int bufSize
            );

    private:
        static WINHTTP_CURRENT_USER_IE_PROXY_CONFIG m_ieProxyConfig;            ///< 当前用户的IE代理设置
        static WINHTTP_PROXY_INFO m_proxyInfo;                                  ///< 当前代理设置信息
        static HINTERNET m_hSession;                                            ///< 会话对象（static保证了应用程序仅存在一个会话对象）      
        HINTERNET m_hConncet;                                                   ///< 连接对象 
        HINTERNET m_hRequest;                                                   ///< 请求对象
};

/// @def E_NOSESSION
/// m_hSession == NULL返回的错误代码
#define E_NOSESSION    0x80010001

/// @def E_NOCONNECT
/// m_hConncet == NULL返回的错误代码
#define E_NOCONNECT    0x80010002

/// @def E_NOREQUEST
/// m_hRequest == NULL返回的错误代码
#define E_NOREQUEST    0x80010003

/// @def E_NOBUFFER
/// 缓冲区没有内存空间返回的错误代码
#define E_NOBUFFER     0x80010004

#endif