//////////////////////////////////////////////////////////
///
/// @file      PromptDlg.cpp
///
/// @brief     ������ʾ�Ի�������Ҫ�ĺ���
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
#include "stdafx.h"
#include "WinHTTPTestUI.h"
#include "WinHTTPTestUIDlg.h"
#include "PromptDlg.h"


// CPromptDlg �Ի���

IMPLEMENT_DYNAMIC(CPromptDlg, CDialog)

CPromptDlg::CPromptDlg(CWnd* pParent /*=NULL*/)
    : CDialog(CPromptDlg::IDD, pParent)
{

}

CPromptDlg::~CPromptDlg()
{
}

void CPromptDlg::DoDataExchange(CDataExchange* pDX)
{
    CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CPromptDlg, CDialog)
    ON_WM_MOUSEMOVE()
    ON_WM_TIMER()
END_MESSAGE_MAP()


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
BOOL CPromptDlg::OnInitDialog()
{
    CDialog::OnInitDialog();

    RECT workArea = { 0 };

    // ���ϵͳ��������
    SystemParametersInfo(
        SPI_GETWORKAREA,
        0,
        &workArea,
        0
        );
    
    // ������ʾ�Ի����ʼ���ֵ�����λ��
    m_pt.x = workArea.right - workArea.left;
    m_pt.y = workArea.bottom - workArea.top;
    m_pt.x = m_pt.x - PROMPT_WIDTH;

    // �ƶ���ʾ�Ի���ָ��������λ��
    MoveWindow(
        m_pt.x,
        m_pt.y,
        PROMPT_WIDTH,
        PROMPT_HEIGHT
        );

    SetTimer(
        IDT_TIMER_OPEN,
        30,
        NULL
        );
    
    return TRUE;  // return TRUE unless you set the focus to a control
    // �쳣: OCX ����ҳӦ���� FALSE
}

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
void CPromptDlg::OnMouseMove(UINT nFlags, CPoint point)
{
    KillTimer(IDT_TIMER_CLOSE);

    SetTimer(
        IDT_TIMER_DELAY,
        3000,
        NULL)
        ;

    CDialog::OnMouseMove(nFlags, point);
}

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
void CPromptDlg::OnTimer(UINT_PTR nIDEvent)
{
    static int nHeight = 0;                     //�Ի����Ѿ����ֵĸ߶�

    switch (nIDEvent)
    {
           case IDT_TIMER_OPEN:                    //�Ի������
               if (nHeight <= PROMPT_HEIGHT)
               {
                   nHeight++;
                   MoveWindow(
                       m_pt.x,
                       m_pt.y - nHeight,
                       PROMPT_WIDTH,
                       PROMPT_HEIGHT,
                       TRUE);
               }
               else
               {
                   KillTimer(IDT_TIMER_OPEN);
                   SetTimer(
                       IDT_TIMER_DELAY,
                       5000,
                       NULL);
               }

               break;

           case IDT_TIMER_DELAY:                   //�Ի�����ͣ
               KillTimer(IDT_TIMER_DELAY);
               SetTimer(
                   IDT_TIMER_CLOSE,
                   30,
                   NULL);

               break;

           case IDT_TIMER_CLOSE:                   //�Ի�����ʧ
               if (nHeight > 0)
               {
                   nHeight--;
                   MoveWindow(
                       m_pt.x,
                       m_pt.y - nHeight,
                       PROMPT_WIDTH,
                       PROMPT_HEIGHT,
                       TRUE);
               }
               else
               {
                   KillTimer(IDT_TIMER_CLOSE);

                   OnCancel();
                    
               }

               break;

           default:

               break;
    }

    //CDialog::OnTimer(nIDEvent);
}

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
void CPromptDlg::OnCancel()
{
    DestroyWindow();

    //CDialog::OnCancel();
}


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
void CPromptDlg::PostNcDestroy()
{
    CDialog::PostNcDestroy();

    delete this;
}
