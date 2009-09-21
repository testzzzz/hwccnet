
// BatteryDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "Battery.h"
#include "BatteryDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

//
// ϵͳ��Դ״̬
//
SYSTEM_POWER_STATUS sps;

//
// ���״̬�ı���
//
CString strBatteryStatus;

// CBatteryDlg �Ի���

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


// CBatteryDlg ��Ϣ�������

BOOL CBatteryDlg::OnInitDialog()
{
    CDialog::OnInitDialog();

    // ���ô˶Ի����ͼ�ꡣ��Ӧ�ó��������ڲ��ǶԻ���ʱ����ܽ��Զ�
    //  ִ�д˲���
    SetIcon(m_hIcon, TRUE);			// ���ô�ͼ��
    SetIcon(m_hIcon, FALSE);		// ����Сͼ��

    //
    // ���10���ѯһ�ε��״̬
    //
    SetTimer(1, 1000, NULL);

    return TRUE;  // ���ǽ��������õ��ؼ������򷵻� TRUE
}

// �����Ի��������С����ť������Ҫ����Ĵ���
//  �����Ƹ�ͼ�ꡣ����ʹ���ĵ�/��ͼģ�͵� MFC Ӧ�ó���
//  �⽫�ɿ���Զ���ɡ�

void CBatteryDlg::OnPaint()
{
    if (IsIconic())
    {
        CPaintDC dc(this); // ���ڻ��Ƶ��豸������

        SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

        // ʹͼ���ڹ����������о���
        int cxIcon = GetSystemMetrics(SM_CXICON);
        int cyIcon = GetSystemMetrics(SM_CYICON);
        CRect rect;
        GetClientRect(&rect);
        int x = (rect.Width() - cxIcon + 1) / 2;
        int y = (rect.Height() - cyIcon + 1) / 2;

        // ����ͼ��
        dc.DrawIcon(x, y, m_hIcon);
    }
    else
    {
        CDialog::OnPaint();
    }
}

//���û��϶���С������ʱϵͳ���ô˺���ȡ�ù��
//��ʾ��
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
                L"���"
                );
            break;
        case 1:
            SetDlgItemText(
                IDC_POWER_STATUS,
                L"������Դ"
                );
            break;
        default:
            SetDlgItemText(
                IDC_POWER_STATUS,
                L"δ֪״̬"
                );
            break;
    }

    strBatteryStatus.Format(L"%d", sps.BatteryLifePercent);
    strBatteryStatus.Append(L"%  ");

    switch (sps.BatteryFlag)
    {
        case 0:
            strBatteryStatus.Append(L"(����һ��)");
            SetDlgItemText(
                IDC_BATTERY_STATUS,
                strBatteryStatus
                );
            break;
        case 1:
            strBatteryStatus.Append(L"(��������)");
            SetDlgItemText(
                IDC_BATTERY_STATUS,
                strBatteryStatus
                );
            break;
        case 2:
            strBatteryStatus.Append(L"(�����ϵ�)");
            SetDlgItemText(
                IDC_BATTERY_STATUS,
                strBatteryStatus
                );
            break;
        case 4:
            strBatteryStatus.Append(L"(��������)");
            SetDlgItemText(
                IDC_BATTERY_STATUS,
                strBatteryStatus
                );
            break;
        case 8:
            strBatteryStatus.Append(L"(���ڳ��)");
            SetDlgItemText(
                IDC_BATTERY_STATUS,
                strBatteryStatus
                );
            break;
        case 128:
            strBatteryStatus.Append(L"(û�е��)");
            SetDlgItemText(
                IDC_BATTERY_STATUS,
                strBatteryStatus
                );
            break;
        default:
            strBatteryStatus.Append(L"(δ֪״̬)");
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
            L"δ֪"
            );
    }
    else
    {
        strBatteryStatus.Empty();
        strBatteryStatus.Format(L"%f Сʱ", sps.BatteryLifeTime / 3600.0);
        SetDlgItemText(
            IDC_TIME_LEFT,
            strBatteryStatus
            );
    }

    if (sps.BatteryFullLifeTime == -1)
    {
        SetDlgItemText(
            IDC_TIME_FULL,
            L"δ֪"
            );
    }
    else
    {
        strBatteryStatus.Empty();
        strBatteryStatus.Format(L"%f Сʱ", sps.BatteryFullLifeTime / 3600.0 );
        SetDlgItemText(
            IDC_TIME_FULL,
            strBatteryStatus
            );
    }
    
    CDialog::OnTimer(nIDEvent);
}
