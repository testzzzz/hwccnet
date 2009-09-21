//////////////////////////////////////////////////////////
///
/// @file      UpdateVersion.h
///
/// @brief     CUpdateVersion�������
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
///
////////////////////////////////////////////////////////////

#pragma once
#include "resource.h"       // ������

#include "Update_i.h"
#include "WinHTTPLW.h"

#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Windows CE ƽ̨(�粻�ṩ��ȫ DCOM ֧�ֵ� Windows Mobile ƽ̨)���޷���ȷ֧�ֵ��߳� COM ���󡣶��� _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA ��ǿ�� ATL ֧�ִ������߳� COM ����ʵ�ֲ�����ʹ���䵥�߳� COM ����ʵ�֡�rgs �ļ��е��߳�ģ���ѱ�����Ϊ��Free����ԭ���Ǹ�ģ���Ƿ� DCOM Windows CE ƽ̨֧�ֵ�Ψһ�߳�ģ�͡�"
#endif



// CUpdateVersion

class ATL_NO_VTABLE CUpdateVersion :
    public CComObjectRootEx<CComSingleThreadModel>,
    public CComCoClass<CUpdateVersion, &CLSID_UpdateVersion>,
    public IDispatchImpl<IUpdateVersion, &IID_IUpdateVersion, &LIBID_UpdateLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
    CUpdateVersion()
    {
        m_serverUrl = NULL;
        m_bUpdate = FALSE;
        m_bDownload = TRUE;
        memset(m_tempPath, 0, MAX_PATH);
        memset(m_appPath, 0, MAX_PATH);
        memset(m_pathClientUpdateFile, 0, MAX_PATH);
        memset(m_pathServerUpdateFile, 0, MAX_PATH);
        memset(m_clientVersion, 0, 20);
        memset(m_serverVersion, 0, 20);
    }

DECLARE_REGISTRY_RESOURCEID(IDR_UPDATEVERSION)


BEGIN_COM_MAP(CUpdateVersion)
    COM_INTERFACE_ENTRY(IUpdateVersion)
    COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()



    DECLARE_PROTECT_FINAL_CONSTRUCT()

    HRESULT FinalConstruct()
    {
        return S_OK;
    }

    void FinalRelease()
    {
        delete m_pUpdate;;
        m_pUpdate = NULL;
    }

public:
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
    STDMETHOD(ConnectUpdateServer)(BSTR UpdateServerUrl);

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
    STDMETHOD(CheckUpdate)(void);

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
    STDMETHOD(DownloadUpdateFile)(void);

private:
    BSTR m_serverUrl;                         ///< ��������ַ
    BOOL m_bUpdate;                           ///< �Ƿ��п��ø���
    BOOL m_bDownload;                         ///< �����Ƿ�ɹ�
    WinHTTPLW* m_pUpdate;                     ///< ָ��WinHTTPLW��
    TCHAR m_tempPath[MAX_PATH];               ///< ϵͳ��ʱ�ļ�·��
    TCHAR m_appPath[MAX_PATH];                ///< Ӧ�ó���·��
    TCHAR m_pathClientUpdateFile[MAX_PATH];   ///< ���ذ汾��Ϣ�ļ���ŵ�·��
    TCHAR m_pathServerUpdateFile[MAX_PATH];   ///< ���·�����������Ϣ�ļ���ŵ�·��
    TCHAR m_clientVersion[20];                ///< ���ذ汾��
    TCHAR m_serverVersion[20];                ///< ���·������˰汾��

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
    BOOL DirectoryExist(
        __in LPCTSTR DirectoryPath,
        __in LPCTSTR DirectoryName
        );
};

OBJECT_ENTRY_AUTO(__uuidof(UpdateVersion), CUpdateVersion)
