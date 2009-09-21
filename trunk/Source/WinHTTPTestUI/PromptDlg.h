//////////////////////////////////////////////////////////
///
/// @file      PromptDlg.h
///
/// @brief     ��ʾ�Ի�����
///
/// @version   1.0
///
/// @author    ����
///
/// @date      2009-07-30
///
/// <�޸�����>      <�޸���>        <�޸�����>\n
///
///
////////////////////////////////////////////////////////////
#pragma once

/// @def IDT_TIMER
/// ���嶨ʱ��ID
#define IDT_TIMER_CHECK 1

/// @def IDT_TIMER_OPEN
/// �Ի������
#define IDT_TIMER_OPEN  2       

/// @def IDT_TIMER_DELAY
/// �Ի�����ͣ
#define IDT_TIMER_DELAY 3    

/// @def IDT_TIMER_CLOSE
/// �Ի�����ʧ
#define IDT_TIMER_CLOSE 4  

/// @def PROMPT_WIDTH
/// ��ʾ�Ի���Ŀ��
#define PROMPT_WIDTH 215

/// @def PROMPT_HEIGHT
/// ��ʾ�Ի���ĸ߶�
#define PROMPT_HEIGHT 140

/// @class CPromptDlg
/// @brief ��ʾ�Ի����MFC��
class CPromptDlg : public CDialog
{
    DECLARE_DYNAMIC(CPromptDlg)

public:
    CPromptDlg(CWnd* pParent = NULL);   // ��׼���캯��
    virtual ~CPromptDlg();

// �Ի�������
    enum { IDD = IDD_PROMPT };

protected:
    virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

    DECLARE_MESSAGE_MAP()

public:

    ////////////////////////////////////////////////////////////
    ///
    /// @brief ��ʼ����ʾ�Ի���
    ///
    /// @note ���ƶ���ʾ�Ի���ָ����λ��
    ///
    /// @param void
    ///
    /// @return BOOL
    ///
    ////////////////////////////////////////////////////////////
    virtual BOOL OnInitDialog();

    ////////////////////////////////////////////////////////////
    ///
    /// @brief ����ʾ�Ի��������ر�ʱ������ƶ���ȥ����ͣ�ر�
    ///
    /// @param UINT nFlags
    /// @param CPoint point ���������
    ///
    /// @return void
    ///
    ////////////////////////////////////////////////////////////
    afx_msg void OnMouseMove(UINT nFlags, CPoint point);

    ////////////////////////////////////////////////////////////
    ///
    /// @brief ���ö�ʱ��ʵ�ֶԻ����ϵͳ���������֡���ͣ����ʧ
    ///
    /// @param UINT_PTR nIDEvent  ��ʾ��ͬ�Ķ�ʱ��ID
    ///
    /// @note IDT_TIMER_OPEN  �Ի������
    /// @note IDT_TIMER_DELAY �Ի�����ͣ
    /// @note IDT_TIMER_CLOSE �Ի�����ʧ
    ///
    /// @return void
    ///
    ////////////////////////////////////////////////////////////
    afx_msg void OnTimer(UINT_PTR nIDEvent);
    
    ////////////////////////////////////////////////////////////
    ///
    /// @brief ���ٷ�ģ̬�Ի���
    ///
    /// @param void
    ///
    /// @note ��ģ̬�Ի�����Ҫ���ش˺���������DestoryWindow()��\n
    ///       ���Ҳ����û����OnCancel����Ϊ�����OnCancel���� \n
    ///       ��EndDialog(),��EndDialog()�����ģ̬�Ի����
    ///
    /// @return void
    ///
    ////////////////////////////////////////////////////////////
    virtual void OnCancel();

    ////////////////////////////////////////////////////////////
    ///
    /// @brief �����ٴ��ں����
    ///
    /// @param void
    ///
    /// @note ��Ϊ��ģ̬�Ի���ʹ��new������������������Ҫdelete
    ///
    /// @return void
    ///
    ////////////////////////////////////////////////////////////
    virtual void PostNcDestroy();

private:
    POINT m_pt;         ///< ��ʾ�Ի��������
};
