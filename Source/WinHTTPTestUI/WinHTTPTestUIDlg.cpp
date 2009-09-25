//////////////////////////////////////////////////////////
///
/// @file      WinHTTPTestUIDlg.cpp
///
/// @brief     �����������Ҫ�ĺ���
///
/// @version   1.0
///
/// @author    ����־
///
/// @date      2009-07-28
///
/// <�޸�����>      <�޸���>        <�޸�����>\n
///
///  2009-07-29      ����            �����˶Զ��̺߳Ͷ�ʱ���Ĵ���
///  2009-07-30      ����            �����˶���Դ���ͷŲ���
////////////////////////////////////////////////////////////
#include "stdafx.h"
#include "WinHTTPLW.h"
#include "WinHTTPTestUI.h"
#include "WinHTTPTestUIDlg.h"
#include "PromptDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

CRITICAL_SECTION g_cs;              ///< ����ؼ�����Σ���֤�߳�ͬ��
bool StatusFlag = false;            ///< �������Ƿ񷵻�1
volatile bool g_endThread = false;  ///< �Ƿ���ֹ�߳�

// ����Ӧ�ó��򡰹��ڡ��˵���� CAboutDlg �Ի���

class CAboutDlg : public CDialog
{
public:
    CAboutDlg();

// �Ի�������
    enum { IDD = IDD_ABOUTBOX };

    protected:
    virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

// ʵ��
protected:
    DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
    CDialog::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
END_MESSAGE_MAP()


// CWinHTTPTestUIDlg �Ի���


CWinHTTPTestUIDlg::CWinHTTPTestUIDlg(CWnd* pParent /*=NULL*/)
    : CDialog(CWinHTTPTestUIDlg::IDD, pParent)
    , m_pDlg(NULL)
{
    m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);

}

void CWinHTTPTestUIDlg::DoDataExchange(CDataExchange* pDX)
{
    CDialog::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CWinHTTPTestUIDlg, CDialog)
    ON_WM_SYSCOMMAND()
    ON_WM_PAINT()
    ON_WM_QUERYDRAGICON()
    //}}AFX_MSG_MAP
     ON_MESSAGE(WM_SHOWTASK,OnShowTask)
     ON_WM_TIMER()
//     ON_WM_DESTROY()
ON_WM_DESTROY()
END_MESSAGE_MAP()


// CWinHTTPTestUIDlg ��Ϣ�������
BOOL CWinHTTPTestUIDlg::OnInitDialog()
{
    CDialog::OnInitDialog();

    // ��������...���˵�����ӵ�ϵͳ�˵��С�

    // IDM_ABOUTBOX ������ϵͳ���Χ�ڡ�
    ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
    ASSERT(IDM_ABOUTBOX < 0xF000);

    CMenu* pSysMenu = GetSystemMenu(FALSE);
    if (pSysMenu != NULL)
    {
        CString strAboutMenu;
        strAboutMenu.LoadString(IDS_ABOUTBOX);
        if (!strAboutMenu.IsEmpty())
        {
            pSysMenu->AppendMenu(MF_SEPARATOR);
            pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
        }
    }

    // ���ô˶Ի����ͼ�ꡣ��Ӧ�ó��������ڲ��ǶԻ���ʱ����ܽ��Զ�
    //  ִ�д˲���
    SetIcon(m_hIcon, TRUE);         // ���ô�ͼ��
    SetIcon(m_hIcon, FALSE);        // ����Сͼ��

    InitializeCriticalSection(&g_cs);

    SetTimer( IDT_TIMER_CHECK ,8000 ,NULL );

    AfxBeginThread( 
        reinterpret_cast<AFX_THREADPROC>(pfnThreadProc),
        NULL
        );

    return TRUE;  // ���ǽ��������õ��ؼ������򷵻� TRUE
}

void CWinHTTPTestUIDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
    if ((nID & 0xFFF0) == IDM_ABOUTBOX)
    {
        CAboutDlg dlgAbout;
        dlgAbout.DoModal();
    }
    else
    {
        CDialog::OnSysCommand(nID, lParam); 

        if (nID == SC_MINIMIZE)
        {
            ToTray();                                           //�����С����ϵͳ���̵ĺ�����Ӧ����
        }  
    }
   
}

// �����Ի��������С����ť������Ҫ����Ĵ���
//  �����Ƹ�ͼ�ꡣ����ʹ���ĵ�/��ͼģ�͵� MFC Ӧ�ó���
//  �⽫�ɿ���Զ���ɡ�

void CWinHTTPTestUIDlg::OnPaint()
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
HCURSOR CWinHTTPTestUIDlg::OnQueryDragIcon()
{
    return static_cast<HCURSOR>(m_hIcon);
}

////////////////////////////////////////////////////////////
///
/// @brief �������С����ϵͳ������
///
/// @param �� 
///
/// @return ��
///
////////////////////////////////////////////////////////////
void CWinHTTPTestUIDlg::ToTray(void)
{
    NOTIFYICONDATA Notifyid;
    Notifyid.cbSize = (DWORD)sizeof(NOTIFYICONDATA);
    Notifyid.hWnd = this->m_hWnd;
    Notifyid.uID = IDR_MAINFRAME;
    Notifyid.uFlags = NIF_ICON|NIF_MESSAGE | NIF_TIP ;
    Notifyid.uCallbackMessage = WM_SHOWTASK;                      //�Զ������Ϣ����     
    Notifyid.hIcon = LoadIcon( AfxGetInstanceHandle(),
                               MAKEINTRESOURCE(IDR_MAINFRAME ));
    lstrcpy(Notifyid.szTip,L"WinHTTPLW");                         //��Ϣ��ʾ��     
    Shell_NotifyIcon(NIM_ADD,&Notifyid);                         //�����������ͼ��    
    ShowWindow(SW_HIDE);                                         //����������
}
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
LRESULT CWinHTTPTestUIDlg::OnShowTask(WPARAM wParam, LPARAM lParam)
{
    if (wParam != IDR_MAINFRAME)
    {
        return 1;
    }
    switch(lParam)
    {
        case WM_RBUTTONUP:                                          //�Ҽ�����ʱ������ݲ˵�������ֻ��һ�����رա�
            {
                LPPOINT lPoint = new tagPOINT;                  
                ::GetCursorPos(lPoint);                             //������λ��
                CMenu menu;
                menu.CreatePopupMenu();                             //����һ������ʽ�˵�
                menu.AppendMenu(MF_STRING,WM_DESTROY,L"�ر�");      //ȷ���˵�
                menu.TrackPopupMenu(TPM_LEFTALIGN,lPoint->x,lPoint->y,this);
                HMENU hmenu=menu.Detach();
                menu.DestroyMenu();
                delete lPoint;
                break;
            }
        case WM_LBUTTONDBLCLK:
            {
                this->ShowWindow(SW_SHOWNORMAL);                //��ʾ������λ��ԭ����λ��
                DeleteTray();
                break;
            }
        default:
            break;
    }
    return 0;
}
////////////////////////////////////////////////////////////
///
/// @brief �����ɾ��ϵͳ��ͼ�깦��
///
/// @param �� 
///
/// @return ��
///
////////////////////////////////////////////////////////////
void CWinHTTPTestUIDlg::DeleteTray(void)
{
    NOTIFYICONDATA Notifyid;
    Notifyid.cbSize = (DWORD)sizeof(NOTIFYICONDATA);
    Notifyid.hWnd = this->m_hWnd;
    Notifyid.uID = IDR_MAINFRAME;
    Notifyid.uFlags = NIF_ICON|NIF_MESSAGE|NIF_TIP ;
    Notifyid.uCallbackMessage = WM_SHOWTASK;                        //�Զ������Ϣ����
    Notifyid.hIcon=LoadIcon( AfxGetInstanceHandle(),
                             MAKEINTRESOURCE(IDR_MAINFRAME));
    lstrcpy( Notifyid.szTip,L"WinHTTPLW" );                          //��Ϣ��ʾ��Ϊ���ƻ��������ѡ�
    Shell_NotifyIcon( NIM_DELETE,&Notifyid );                       //��������ɾ��ͼ��
}


////////////////////////////////////////////////////////////
///
/// @brief ��ʱ���StatusFlag�����Ϊtrue�ȵ�����ʾ�Ի���
///
/// @param UINT_PTR nIDEvent     WM_TIMER��ϢID
///
/// @return void
///
////////////////////////////////////////////////////////////
void CWinHTTPTestUIDlg::OnTimer(UINT_PTR nIDEvent)
{
    switch (nIDEvent)
    {
        case IDT_TIMER_CHECK:
            EnterCriticalSection(&g_cs);
            if (StatusFlag)
            {
                m_pDlg = new CPromptDlg();
                m_pDlg->Create(IDD_PROMPT);
                m_pDlg->ShowWindow(SW_SHOW);

                StatusFlag = false;
                LeaveCriticalSection(&g_cs);
            }
            
            break;

        default:
            break;
    }

    CDialog::OnTimer(nIDEvent);
}

////////////////////////////////////////////////////////////
///
/// @brief ���ӷ������Ƿ񷵻�1
///
/// @param void
///
/// @return void
///
////////////////////////////////////////////////////////////
void pfnThreadProc()
{
    HRESULT Error = S_OK;
    char* Buf=new char[1];
    WinHTTPLW::Initialize();
    WinHTTPLW* p = new WinHTTPLW();
    Error = p->Connect(L"www.52xianjian.com");
    if (FAILED(Error))
    {
        AfxEndThread(0);
    }
    while(true)
    {
        Error = p->Request(L"GET", L"/ip.php");
        if (FAILED(Error))
        {
            AfxEndThread(0);
        }
        
        Error = p->GetData(Buf,1);
        if (FAILED(Error))
        {
            AfxEndThread(0);
        }
        if (*Buf == '1')
        {
            EnterCriticalSection(&g_cs);
            StatusFlag = true;
            LeaveCriticalSection(&g_cs);
        }
        else
        {
            EnterCriticalSection(&g_cs);
            StatusFlag = false;
            LeaveCriticalSection(&g_cs);
        }
    }

    delete p;
    p = NULL;
}

////////////////////////////////////////////////////////////
///
/// @brief ����Դ�����ͷ�
///
/// @param void
///
/// @return void
///
////////////////////////////////////////////////////////////
void CWinHTTPTestUIDlg::OnDestroy()
{
    CDialog::OnDestroy();

    WinHTTPLW::Uninitialize();
    DeleteCriticalSection(&g_cs);
    delete m_pDlg;
    m_pDlg = NULL;
}
