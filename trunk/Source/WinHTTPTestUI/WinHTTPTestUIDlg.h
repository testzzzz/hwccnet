//////////////////////////////////////////////////////////
///
/// @file      WinHTTPTestUIDlg.h
///
/// @brief     声明程序所需要的函数、变量、类和宏定义
///
/// @version   1.0
///
/// @author    甘先志
///
/// @date      2009-07-28
/// 
////////////////////////////////////////////////////////////
#pragma once

#include "PromptDlg.h"

/// @def WM_SHOWTASK (WM_USER+1000)
/// 定义自定义消息
#define WM_SHOWTASK (WM_USER+1000)

// CWinHTTPTestUIDlg 对话框
class CWinHTTPTestUIDlg : public CDialog
{
// 构造
public:
    CWinHTTPTestUIDlg(CWnd* pParent = NULL);    // 标准构造函数
// 对话框数据
    enum { IDD = IDD_WINHTTPTESTUI_DIALOG };

    protected:
    virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持


// 实现
protected:
    HICON m_hIcon;

    // 生成的消息映射函数
    virtual BOOL OnInitDialog();
    afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
    afx_msg void OnPaint();
    afx_msg HCURSOR OnQueryDragIcon();
    ////////////////////////////////////////////////////////////
    ///
    /// @brief 完成在系统栏显示点击右键和双击功能
    ///
    /// @param WPARAM wParam 
    ///
    /// @param LPARAM lParam 
    ///
    /// @return 返回状态
    ///
    /// @retval 1 返回当前
    ///
    /// @retval 0 返回系统
    ///
    ////////////////////////////////////////////////////////////
    afx_msg LRESULT OnShowTask(WPARAM wParam,LPARAM lParam);
    DECLARE_MESSAGE_MAP()
public:
    ////////////////////////////////////////////////////////////
    ///
    /// @brief 完成在最小化到系统栏功能
    ///
    /// @param 无 
    ///
    /// @return 无
    ///
    ////////////////////////////////////////////////////////////
    void ToTray(void);
    ////////////////////////////////////////////////////////////
    ///
    /// @brief 完成在删除系统栏图标功能
    ///
    /// @param 无 
    ///
    /// @return 无
    ///
    ////////////////////////////////////////////////////////////
    void DeleteTray(void);

public:
    ////////////////////////////////////////////////////////////
    ///
    /// @brief 定时检查StatusFlag，如果为true既弹出提示对话框
    ///
    /// @param UINT_PTR nIDEvent     WM_TIMER消息ID
    ///
    /// @return void
    ///
    ////////////////////////////////////////////////////////////
    afx_msg void OnTimer(UINT_PTR nIDEvent);

private:
    CPromptDlg* m_pDlg;     ///<提示对话框
public:
    afx_msg void OnDestroy();
};

////////////////////////////////////////////////////////////
///
/// @brief 监视服务器是否返回1
///
/// @param void
///
/// @return void
///
////////////////////////////////////////////////////////////
void pfnThreadProc();