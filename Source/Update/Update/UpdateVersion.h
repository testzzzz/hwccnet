//////////////////////////////////////////////////////////
///
/// @file      UpdateVersion.h
///
/// @brief     CUpdateVersion类的申明
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
///
////////////////////////////////////////////////////////////

#pragma once
#include "resource.h"       // 主符号

#include "Update_i.h"
#include "WinHTTPLW.h"

#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Windows CE 平台(如不提供完全 DCOM 支持的 Windows Mobile 平台)上无法正确支持单线程 COM 对象。定义 _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA 可强制 ATL 支持创建单线程 COM 对象实现并允许使用其单线程 COM 对象实现。rgs 文件中的线程模型已被设置为“Free”，原因是该模型是非 DCOM Windows CE 平台支持的唯一线程模型。"
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
    STDMETHOD(ConnectUpdateServer)(BSTR UpdateServerUrl);

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
    STDMETHOD(CheckUpdate)(void);

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
    STDMETHOD(DownloadUpdateFile)(void);

private:
    BSTR m_serverUrl;                         ///< 服务器地址
    BOOL m_bUpdate;                           ///< 是否有可用更新
    BOOL m_bDownload;                         ///< 下载是否成功
    WinHTTPLW* m_pUpdate;                     ///< 指向WinHTTPLW类
    TCHAR m_tempPath[MAX_PATH];               ///< 系统临时文件路径
    TCHAR m_appPath[MAX_PATH];                ///< 应用程序路径
    TCHAR m_pathClientUpdateFile[MAX_PATH];   ///< 本地版本信息文件存放的路径
    TCHAR m_pathServerUpdateFile[MAX_PATH];   ///< 更新服务器更新信息文件存放的路径
    TCHAR m_clientVersion[20];                ///< 本地版本号
    TCHAR m_serverVersion[20];                ///< 更新服务器端版本号

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
    BOOL DirectoryExist(
        __in LPCTSTR DirectoryPath,
        __in LPCTSTR DirectoryName
        );
};

OBJECT_ENTRY_AUTO(__uuidof(UpdateVersion), CUpdateVersion)
