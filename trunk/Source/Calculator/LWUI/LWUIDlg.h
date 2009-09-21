// LWUIDlg.h : ͷ�ļ�
//

#pragma once
#include "afxwin.h"
#include "..\ICalculator\LWCalculator_i.h"


// CLWUIDlg �Ի���
class CLWUIDlg : public CDialog
{
// ����
public:
    CLWUIDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
    enum { IDD = IDD_LWUI_DIALOG };

    protected:
    virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
    HICON m_hIcon;

    // ���ɵ���Ϣӳ�亯��
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
    // ����������
    long m_Result;
    virtual BOOL PreTranslateMessage(MSG* pMsg);
    // ����ӿ�ָ��
    ICalculator* m_pCalc;
    // ����COM��������ֵ
    HRESULT m_Error;
};
