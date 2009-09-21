// LWUIDlg.h : 头文件
//

#pragma once
#include "afxwin.h"
#include "..\ICalculator\LWCalculator_i.h"


// CLWUIDlg 对话框
class CLWUIDlg : public CDialog
{
// 构造
public:
    CLWUIDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
    enum { IDD = IDD_LWUI_DIALOG };

    protected:
    virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
    HICON m_hIcon;

    // 生成的消息映射函数
    virtual BOOL OnInitDialog();
    afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
    afx_msg void OnPaint();
    afx_msg HCURSOR OnQueryDragIcon();
    DECLARE_MESSAGE_MAP()
public:	
    CEdit m_editResult;
    afx_msg void OnBnClickedButtonSeven();
    afx_msg void OnBnClickedButtonZero();
    afx_msg void OnBnClickedButtonClear();
    afx_msg void OnBnClickedButtonBackspce();
    afx_msg void OnBnClickedButtonCe();
    afx_msg void OnBnClickedButtonOne();
    afx_msg void OnBnClickedButtonTwo();
    afx_msg void OnBnClickedButtonThree();
    afx_msg void OnBnClickedButtonFour();
    afx_msg void OnBnClickedButtonFive();
    afx_msg void OnBnClickedButtonSix();
    afx_msg void OnBnClickedButtonEight();
    afx_msg void OnBnClickedButtonNine();
    afx_msg void OnBnClickedButtonDivide();
    afx_msg void OnBnClickedButtonMultiply();
    afx_msg void OnBnClickedButtonSubtruct();
    afx_msg void OnBnClickedButtonAdditon();
    afx_msg void OnBnClickedButtonEqual();
    afx_msg void OnBnClickedButtonNegative();
    // 计算结果保存
    long m_Result;
    virtual BOOL PreTranslateMessage(MSG* pMsg);
    // 定义接口指针
    ICalculator* m_pCalc;
    // 保存COM函数返回值
    HRESULT m_Error;
};
