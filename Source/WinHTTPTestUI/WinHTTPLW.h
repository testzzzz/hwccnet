//////////////////////////////////////////////////////////
///
/// @file      WinHTTPLW.h
///
/// @brief     ��װ��WinHTTP�ࡢ������һЩ�������
///
/// @version   1.0
///
/// @author    ����
///
/// @date      2009-07-24
/// 
/// <�޸�����>      <�޸���>        <�޸�����>\n
///
///  2009-07-28      ����            ������UnInitialize,�޸���Initialize
///  2009-07-30      ����            �޸���GetData
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
/// @brief ��װ��WinHTTP����֧��IE��������
class WinHTTPLW
{
    public:
        /// @brief ��ʼ��m_Connect��m_Request
        WinHTTPLW();
        /// @brief �ر�m_Connect��m_Request
        ~WinHTTPLW();
        
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
        static HRESULT Initialize();

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
        static void Uninitialize();

        ////////////////////////////////////////////////////////////
        ///
        /// @brief ����Ӧ�ó���Ự����һ�����Ӷ���
        ///
        /// @param __in LPCWSTR pswzServerName ���ӵķ���������
        /// @param __in INTERNET_PORT nServerPort ���ӵķ������˿ں�
        ///
        /// @return HRESULT
        ///
        /// @retval S_OK ��������
        /// @retval E_NOSESSION �Ự����û�д���
        /// @retval ͨ��GetLastError()����
        ///
        ////////////////////////////////////////////////////////////
        HRESULT Connect(
            __in LPCWSTR pswzServerName,
            __in INTERNET_PORT nServerPort = INTERNET_DEFAULT_PORT
            );                          
        
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
        /// @brief ��ȡ���󵽵�����
        ///
        /// @param __out char* buf ���������
        /// @param __in int bufSize ��������С
        ///
        /// @return HRESULT
        ///
        /// @retval S_OK ��������
        /// @retval E_NOREQUEST �������û�д���
        /// @retval ͨ��GetLastError()����
        ///
        ////////////////////////////////////////////////////////////
        HRESULT GetData(
            __out char* pBuf,
            __in int bufSize
            );

    private:
        static WINHTTP_CURRENT_USER_IE_PROXY_CONFIG m_ieProxyConfig;            ///< ��ǰ�û���IE��������
        static WINHTTP_PROXY_INFO m_proxyInfo;                                  ///< ��ǰ����������Ϣ
        static HINTERNET m_hSession;                                            ///< �Ự����static��֤��Ӧ�ó��������һ���Ự����      
        HINTERNET m_hConncet;                                                   ///< ���Ӷ��� 
        HINTERNET m_hRequest;                                                   ///< �������
};

/// @def E_NOSESSION
/// m_hSession == NULL���صĴ������
#define E_NOSESSION    0x80010001

/// @def E_NOCONNECT
/// m_hConncet == NULL���صĴ������
#define E_NOCONNECT    0x80010002

/// @def E_NOREQUEST
/// m_hRequest == NULL���صĴ������
#define E_NOREQUEST    0x80010003

/// @def E_NOBUFFER
/// ������û���ڴ�ռ䷵�صĴ������
#define E_NOBUFFER     0x80010004

#endif