
// BatteryDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "Battery.h"
#include "BatteryDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

//
// 系统电源状态
//
SYSTEM_POWER_STATUS sps;

//
// 电池状态文本串
//
CString strBatteryStatus;

// CBatteryDlg 对话框

CBatteryDlg::CBatteryDlg(CWnd* pParent /*=NULL*/)
    : CDialog(CBatteryDlg::IDD, pParent)
{
    m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CBatteryDlg::DoDataExchange(CDataExchange* pDX)
{
    CDialog::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CBatteryDlg, CDialog)
    ON_WM_PAINT()
    ON_WM_QUERYDRAGICON()
    //}}AFX_MSG_MAP
    ON_WM_TIMER()
END_MESSAGE_MAP()


// CBatteryDlg 消息处理程序

BOOL CBatteryDlg::OnInitDialog()
{
    CDialog::OnInitDialog();

    // 设置此对话框的图标。当应用程序主窗口不是对话框时，框架将自动
    //  执行此操作
    SetIcon(m_hIcon, TRUE);			// 设置大图标
    SetIcon(m_hIcon, FALSE);		// 设置小图标

    //
    // 间隔10秒查询一次电池状态
    //
    SetTimer(1, 1000, NULL);

    return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void CBatteryDlg::OnPaint()
{
    if (IsIconic())
    {
        CPaintDC dc(this); // 用于绘制的设备上下文

        SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

        // 使图标在工作区矩形中居中
        int cxIcon = GetSystemMetrics(SM_CXICON);
        int cyIcon = GetSystemMetrics(SM_CYICON);
        CRect rect;
        GetClientRect(&rect);
        int x = (rect.Width() - cxIcon + 1) / 2;
        int y = (rect.Height() - cyIcon + 1) / 2;

        // 绘制图标
        dc.DrawIcon(x, y, m_hIcon);
    }
    else
    {
        CDialog::OnPaint();
    }
}

//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
HCURSOR CBatteryDlg::OnQueryDragIcon()
{
    return static_cast<HCURSOR>(m_hIcon);
}


void CBatteryDlg::OnTimer(UINT_PTR nIDEvent)
{
    GetSystemPowerStatus(&sps);

    switch (sps.ACLineStatus)
    {
        case 0:
            SetDlgItemText(
                IDC_POWER_STATUS,
                L"电池"
                );
            break;
        case 1:
            SetDlgItemText(
                IDC_POWER_STATUS,
                L"交流电源"
                );
            break;
        default:
            SetDlgItemText(
                IDC_POWER_STATUS,
                L"未知状态"
                );
            break;
    }

    strBatteryStatus.Format(L"%d", sps.BatteryLifePercent);
    strBatteryStatus.Append(L"%  ");

    switch (sps.BatteryFlag)
    {
        case 0:
            strBatteryStatus.Append(L"(电量一般)");
            SetDlgItemText(
                IDC_BATTERY_STATUS,
                strBatteryStatus
                );
            break;
        case 1:
            strBatteryStatus.Append(L"(电量充足)");
            SetDlgItemText(
                IDC_BATTERY_STATUS,
                strBatteryStatus
                );
            break;
        case 2:
            strBatteryStatus.Append(L"(电量较低)");
            SetDlgItemText(
                IDC_BATTERY_STATUS,
                strBatteryStatus
                );
            break;
        case 4:
            strBatteryStatus.Append(L"(电量极低)");
            SetDlgItemText(
                IDC_BATTERY_STATUS,
                strBatteryStatus
                );
            break;
        case 8:
            strBatteryStatus.Append(L"(正在充电)");
            SetDlgItemText(
                IDC_BATTERY_STATUS,
                strBatteryStatus
                );
            break;
        case 128:
            strBatteryStatus.Append(L"(没有电池)");
            SetDlgItemText(
                IDC_BATTERY_STATUS,
                strBatteryStatus
                );
            break;
        default:
            strBatteryStatus.Append(L"(未知状态)");
            SetDlgItemText(
                IDC_BATTERY_STATUS,
                strBatteryStatus
                );
            break;
    }
    
    if (sps.BatteryLifeTime == -1)
    {
        SetDlgItemText(
            IDC_TIME_LEFT,
            L"未知"
            );
    }
    else
    {
        strBatteryStatus.Empty();
        strBatteryStatus.Format(L"%f 小时", sps.BatteryLifeTime / 3600.0);
        SetDlgItemText(
            IDC_TIME_LEFT,
            strBatteryStatus
            );
    }

    if (sps.BatteryFullLifeTime == -1)
    {
        SetDlgItemText(
            IDC_TIME_FULL,
            L"未知"
            );
    }
    else
    {
        strBatteryStatus.Empty();
        strBatteryStatus.Format(L"%f 小时", sps.BatteryFullLifeTime / 3600.0 );
        SetDlgItemText(
            IDC_TIME_FULL,
            strBatteryStatus
            );
    }
    
    CDialog::OnTimer(nIDEvent);
}
