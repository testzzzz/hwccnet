//////////////////////////////////////////////////////////
///
/// @file      PromptDlg.cpp
///
/// @brief     定义提示对话框所需要的函数
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
#include "stdafx.h"
#include "WinHTTPTestUI.h"
#include "WinHTTPTestUIDlg.h"
#include "PromptDlg.h"


// CPromptDlg 对话框

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
/// @brief 初始化提示对话框
///
/// @note 将移动提示对话框到指定的位置
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

    // 获得系统工作区域
    SystemParametersInfo(
        SPI_GETWORKAREA,
        0,
        &workArea,
        0
        );
    
    // 计算提示对话框初始出现的坐标位置
    m_pt.x = workArea.right - workArea.left;
    m_pt.y = workArea.bottom - workArea.top;
    m_pt.x = m_pt.x - PROMPT_WIDTH;

    // 移动提示对话框到指定的坐标位置
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
    // 异常: OCX 属性页应返回 FALSE
}

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
void CPromptDlg::OnTimer(UINT_PTR nIDEvent)
{
    static int nHeight = 0;                     //对话框已经出现的高度

    switch (nIDEvent)
    {
           case IDT_TIMER_OPEN:                    //对话框出现
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

           case IDT_TIMER_DELAY:                   //对话框悬停
               KillTimer(IDT_TIMER_DELAY);
               SetTimer(
                   IDT_TIMER_CLOSE,
                   30,
                   NULL);

               break;

           case IDT_TIMER_CLOSE:                   //对话框消失
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
void CPromptDlg::OnCancel()
{
    DestroyWindow();

    //CDialog::OnCancel();
}


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
void CPromptDlg::PostNcDestroy()
{
    CDialog::PostNcDestroy();

    delete this;
}
