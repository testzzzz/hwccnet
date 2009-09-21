//////////////////////////////////////////////////////////
///
/// @file      PromptDlg.h
///
/// @brief     提示对话框类
///
/// @version   1.0
///
/// @author    游枭
///
/// @date      2009-07-30
///
/// <修改日期>      <修改者>        <修改描述>\n
///
///
////////////////////////////////////////////////////////////
#pragma once

/// @def IDT_TIMER
/// 定义定时器ID
#define IDT_TIMER_CHECK 1

/// @def IDT_TIMER_OPEN
/// 对话框出现
#define IDT_TIMER_OPEN  2       

/// @def IDT_TIMER_DELAY
/// 对话框悬停
#define IDT_TIMER_DELAY 3    

/// @def IDT_TIMER_CLOSE
/// 对话框消失
#define IDT_TIMER_CLOSE 4  

/// @def PROMPT_WIDTH
/// 提示对话框的宽度
#define PROMPT_WIDTH 215

/// @def PROMPT_HEIGHT
/// 提示对话框的高度
#define PROMPT_HEIGHT 140

/// @class CPromptDlg
/// @brief 提示对话框的MFC类
class CPromptDlg : public CDialog
{
    DECLARE_DYNAMIC(CPromptDlg)

public:
    CPromptDlg(CWnd* pParent = NULL);   // 标准构造函数
    virtual ~CPromptDlg();

// 对话框数据
    enum { IDD = IDD_PROMPT };

protected:
    virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

    DECLARE_MESSAGE_MAP()

public:

    ////////////////////////////////////////////////////////////
    ///
    /// @brief 初始化提示对话框
    ///
    /// @note 将移动提示对话框到指定的位置
    ///
    /// @param void
    ///
    /// @return BOOL
    ///
    ////////////////////////////////////////////////////////////
    virtual BOOL OnInitDialog();

    ////////////////////////////////////////////////////////////
    ///
    /// @brief 当提示对话框慢慢关闭时，鼠标移动上去将暂停关闭
    ///
    /// @param UINT nFlags
    /// @param CPoint point 鼠标的坐标点
    ///
    /// @return void
    ///
    ////////////////////////////////////////////////////////////
    afx_msg void OnMouseMove(UINT nFlags, CPoint point);

    ////////////////////////////////////////////////////////////
    ///
    /// @brief 利用定时器实现对话框从系统栏慢慢出现、悬停和消失
    ///
    /// @param UINT_PTR nIDEvent  标示不同的定时器ID
    ///
    /// @note IDT_TIMER_OPEN  对话框出现
    /// @note IDT_TIMER_DELAY 对话框悬停
    /// @note IDT_TIMER_CLOSE 对话框消失
    ///
    /// @return void
    ///
    ////////////////////////////////////////////////////////////
    afx_msg void OnTimer(UINT_PTR nIDEvent);
    
    ////////////////////////////////////////////////////////////
    ///
    /// @brief 销毁非模态对话框
    ///
    /// @param void
    ///
    /// @note 非模态对话框需要重载此函数并调用DestoryWindow()，\n
    ///       并且不调用基类的OnCancel，因为基类的OnCancel将调 \n
    ///       用EndDialog(),而EndDialog()是针对模态对话框的
    ///
    /// @return void
    ///
    ////////////////////////////////////////////////////////////
    virtual void OnCancel();

    ////////////////////////////////////////////////////////////
    ///
    /// @brief 在销毁窗口后调用
    ///
    /// @param void
    ///
    /// @note 因为非模态对话框使用new操作创建，在这里需要delete
    ///
    /// @return void
    ///
    ////////////////////////////////////////////////////////////
    virtual void PostNcDestroy();

private:
    POINT m_pt;         ///< 提示对话框的坐标
};
