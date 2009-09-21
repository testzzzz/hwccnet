#pragma once
#include "resource.h"
#include "afxwin.h"
#include "..\RSSParser\RSSParser.h"

// CRSSDlg 对话框

class CRSSDlg : public CDialog
{
    DECLARE_DYNAMIC(CRSSDlg)

public:
    CRSSDlg(CWnd* pParent = NULL);   // 标准构造函数
    virtual ~CRSSDlg();

// 对话框数据
    enum { IDD = IDD_RSS_DLG };

protected:
    virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

    DECLARE_MESSAGE_MAP()
private:
    CListCtrl m_listShow;               ///< RSS显示列表框
    CComboBox m_listRss;                ///< 已订阅RSS列表
    long m_rssNum;                      ///< 将要显示的RSS数量
    CString m_rssAdd;                   ///< 添加RSS订阅地址
    RSSLW m_rss;                        ///< RSS解析类
    vector<RSSChannel> m_vecRss;        ///< 保存从文件加载的RSS频道列表
public:
    ///////////////////////////////////////////////////////////////////////
    ///
    /// @brief 对话框初始化操作
    ///
    /// 对话框显示之前进行的一些初始化操作，\n
    /// 加载已订阅的RSS列表，初始化COM库和RSS解析引擎
    ///
    /// @param  void
    ///
    /// @return BOOL
    ///
    /// 修改记录: \n
    ///
    ///      <修改日期>     <修改者>   <修改内容描述>\n
    ///
    ///      2009-08-11      游枭       创建\n
    ///
    /// 备注信息: 
    ///
    ///////////////////////////////////////////////////////////////////////
    virtual BOOL OnInitDialog();

    ///////////////////////////////////////////////////////////////////////
    ///
    /// @brief 双击列表框的某一项时弹出IE并加载对应项的链接地址
    ///
    /// @param NMHDR *pNMHDR
    /// @param LRESULT *pResult
    ///
    /// @return void
    ///
    /// 修改记录: \n
    ///
    ///      <修改日期>     <修改者>   <修改内容描述>\n
    ///
    ///      2009-08-13      游枭       创建\n
    ///
    /// 备注信息: 
    ///
    ///////////////////////////////////////////////////////////////////////
    afx_msg void OnNMDblclkRssShow(NMHDR *pNMHDR, LRESULT *pResult);

    ///////////////////////////////////////////////////////////////////////
    ///
    /// @brief 添加新的RSS订阅
    ///
    /// @param void
    ///
    /// @return void
    ///
    /// 修改记录: \n
    ///
    ///      <修改日期>     <修改者>   <修改内容描述>\n
    ///
    ///      2009-08-12      游枭       创建\n
    ///
    /// 备注信息: 
    ///
    ///////////////////////////////////////////////////////////////////////
    afx_msg void OnBnClickedBtnAdd();

    ///////////////////////////////////////////////////////////////////////
    ///
    /// @brief 更新RSS订阅的显示
    ///
    /// @param void
    ///
    /// @return void
    ///
    /// 修改记录: \n
    ///
    ///      <修改日期>     <修改者>   <修改内容描述>\n
    ///
    ///      2009-08-13      游枭       创建\n
    ///
    /// 备注信息: 
    ///
    ///////////////////////////////////////////////////////////////////////
    afx_msg void OnBnClickedBtnUpdate();

    ///////////////////////////////////////////////////////////////////////
    ///
    /// @brief 加载用户已订阅的RSS列表
    ///
    /// @param void
    ///
    /// @return void
    ///
    /// 修改记录: \n
    ///
    ///      <修改日期>     <修改者>   <修改内容描述>\n
    ///
    ///      2009-08-13      游枭       创建\n
    ///
    /// 备注信息: 
    ///
    ///////////////////////////////////////////////////////////////////////
    void LoadRssList();

    ///////////////////////////////////////////////////////////////////////
    ///
    /// @brief 关闭对话框释放所有资源
    ///
    /// @param void
    ///
    /// @return void
    ///
    /// 修改记录: \n
    ///
    ///      <修改日期>     <修改者>   <修改内容描述>\n
    ///
    ///      2009-08-13      游枭       创建\n
    ///
    /// 备注信息: 
    ///
    ///////////////////////////////////////////////////////////////////////
    virtual void OnCancel();
};
