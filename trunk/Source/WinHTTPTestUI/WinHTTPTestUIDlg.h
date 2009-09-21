//////////////////////////////////////////////////////////
///
/// @file      WinHTTPTestUIDlg.h
///
/// @brief     ������������Ҫ�ĺ�������������ͺ궨��
///
/// @version   1.0
///
/// @author    ����־
///
/// @date      2009-07-28
/// 
////////////////////////////////////////////////////////////
#pragma once

#include "PromptDlg.h"

/// @def WM_SHOWTASK (WM_USER+1000)
/// �����Զ�����Ϣ
#define WM_SHOWTASK (WM_USER+1000)

// CWinHTTPTestUIDlg �Ի���
class CWinHTTPTestUIDlg : public CDialog
{
// ����
public:
    CWinHTTPTestUIDlg(CWnd* pParent = NULL);    // ��׼���캯��
// �Ի�������
    enum { IDD = IDD_WINHTTPTESTUI_DIALOG };

    protected:
    virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��


// ʵ��
protected:
    HICON m_hIcon;

    // ���ɵ���Ϣӳ�亯��
    virtual BOOL OnInitDialog();
    afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
    afx_msg void OnPaint();
    afx_msg HCURSOR OnQueryDragIcon();
    ////////////////////////////////////////////////////////////
    ///
    /// @brief �����ϵͳ����ʾ����Ҽ���˫������
    ///
    /// @param WPARAM wParam 
    ///
    /// @param LPARAM lParam 
    ///
    /// @return ����״̬
    ///
    /// @retval 1 ���ص�ǰ
    ///
    /// @retval 0 ����ϵͳ
    ///
    ////////////////////////////////////////////////////////////
    afx_msg LRESULT OnShowTask(WPARAM wParam,LPARAM lParam);
    DECLARE_MESSAGE_MAP()
public:
    ////////////////////////////////////////////////////////////
    ///
    /// @brief �������С����ϵͳ������
    ///
    /// @param �� 
    ///
    /// @return ��
    ///
    ////////////////////////////////////////////////////////////
    void ToTray(void);
    ////////////////////////////////////////////////////////////
    ///
    /// @brief �����ɾ��ϵͳ��ͼ�깦��
    ///
    /// @param �� 
    ///
    /// @return ��
    ///
    ////////////////////////////////////////////////////////////
    void DeleteTray(void);

public:
    ////////////////////////////////////////////////////////////
    ///
    /// @brief ��ʱ���StatusFlag�����Ϊtrue�ȵ�����ʾ�Ի���
    ///
    /// @param UINT_PTR nIDEvent     WM_TIMER��ϢID
    ///
    /// @return void
    ///
    ////////////////////////////////////////////////////////////
    afx_msg void OnTimer(UINT_PTR nIDEvent);

private:
    CPromptDlg* m_pDlg;     ///<��ʾ�Ի���
public:
    afx_msg void OnDestroy();
};

////////////////////////////////////////////////////////////
///
/// @brief ���ӷ������Ƿ񷵻�1
///
/// @param void
///
/// @return void
///
////////////////////////////////////////////////////////////
void pfnThreadProc();