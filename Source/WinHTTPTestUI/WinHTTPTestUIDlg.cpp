//////////////////////////////////////////////////////////
///
/// @file      WinHTTPTestUIDlg.cpp
///
/// @brief     定义程序所需要的函数
///
/// @version   1.0
///
/// @author    甘先志
///
/// @date      2009-07-28
///
/// <修改日期>      <修改者>        <修改描述>\n
///
///  2009-07-29      游枭            增加了对多线程和定时器的处理
///  2009-07-30      游枭            增加了对资源的释放操作
////////////////////////////////////////////////////////////
#include "stdafx.h"
#include "WinHTTPLW.h"
#include "WinHTTPTestUI.h"
#include "WinHTTPTestUIDlg.h"
#include "PromptDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

CRITICAL_SECTION g_cs;              ///< 定义关键代码段，保证线程同步
bool StatusFlag = false;            ///< 服务器是否返回1
volatile bool g_endThread = false;  ///< 是否终止线程

// 用于应用程序“关于”菜单项的 CAboutDlg 对话框

class CAboutDlg : public CDialog
{
public:
    CAboutDlg();

// 对话框数据
    enum { IDD = IDD_ABOUTBOX };

    protected:
    virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

// 实现
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


// CWinHTTPTestUIDlg 对话框


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


// CWinHTTPTestUIDlg 消息处理程序
BOOL CWinHTTPTestUIDlg::OnInitDialog()
{
    CDialog::OnInitDialog();

    // 将“关于...”菜单项添加到系统菜单中。

    // IDM_ABOUTBOX 必须在系统命令范围内。
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

    // 设置此对话框的图标。当应用程序主窗口不是对话框时，框架将自动
    //  执行此操作
    SetIcon(m_hIcon, TRUE);         // 设置大图标
    SetIcon(m_hIcon, FALSE);        // 设置小图标

    InitializeCriticalSection(&g_cs);

    SetTimer( IDT_TIMER_CHECK ,8000 ,NULL );

    AfxBeginThread( 
        reinterpret_cast<AFX_THREADPROC>(pfnThreadProc),
        NULL
        );

    return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
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
            ToTray();                                           //添加最小化到系统托盘的函数响应命令
        }  
    }
   
}

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void CWinHTTPTestUIDlg::OnPaint()
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
HCURSOR CWinHTTPTestUIDlg::OnQueryDragIcon()
{
    return static_cast<HCURSOR>(m_hIcon);
}

////////////////////////////////////////////////////////////
///
/// @brief 完成在最小化到系统栏功能
///
/// @param 无 
///
/// @return 无
///
////////////////////////////////////////////////////////////
void CWinHTTPTestUIDlg::ToTray(void)
{
    NOTIFYICONDATA Notifyid;
    Notifyid.cbSize = (DWORD)sizeof(NOTIFYICONDATA);
    Notifyid.hWnd = this->m_hWnd;
    Notifyid.uID = IDR_MAINFRAME;
    Notifyid.uFlags = NIF_ICON|NIF_MESSAGE | NIF_TIP ;
    Notifyid.uCallbackMessage = WM_SHOWTASK;                      //自定义的消息名称     
    Notifyid.hIcon = LoadIcon( AfxGetInstanceHandle(),
                               MAKEINTRESOURCE(IDR_MAINFRAME ));
    lstrcpy(Notifyid.szTip,L"WinHTTPLW");                         //信息提示条     
    Shell_NotifyIcon(NIM_ADD,&Notifyid);                         //在托盘区添加图标    
    ShowWindow(SW_HIDE);                                         //隐藏主窗口
}
////////////////////////////////////////////////////////////
///
/// @brief 完成在系统栏显示点击右键和双击功能
///
/// @param WPARAM wParam 
///
/// @param LPARAM lParam 
///
/// @return 返回状态
///
/// @retval 1 返回当前
///
/// @retval 0 返回系统
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
        case WM_RBUTTONUP:                                          //右键起来时弹出快捷菜单，这里只有一个“关闭”
            {
                LPPOINT lPoint = new tagPOINT;                  
                ::GetCursorPos(lPoint);                             //获得鼠标位置
                CMenu menu;
                menu.CreatePopupMenu();                             //声明一个弹出式菜单
                menu.AppendMenu(MF_STRING,WM_DESTROY,L"关闭");      //确定菜单
                menu.TrackPopupMenu(TPM_LEFTALIGN,lPoint->x,lPoint->y,this);
                HMENU hmenu=menu.Detach();
                menu.DestroyMenu();
                delete lPoint;
                break;
            }
        case WM_LBUTTONDBLCLK:
            {
                this->ShowWindow(SW_SHOWNORMAL);                //显示主窗口位于原来的位置
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
/// @brief 完成在删除系统栏图标功能
///
/// @param 无 
///
/// @return 无
///
////////////////////////////////////////////////////////////
void CWinHTTPTestUIDlg::DeleteTray(void)
{
    NOTIFYICONDATA Notifyid;
    Notifyid.cbSize = (DWORD)sizeof(NOTIFYICONDATA);
    Notifyid.hWnd = this->m_hWnd;
    Notifyid.uID = IDR_MAINFRAME;
    Notifyid.uFlags = NIF_ICON|NIF_MESSAGE|NIF_TIP ;
    Notifyid.uCallbackMessage = WM_SHOWTASK;                        //自定义的消息名称
    Notifyid.hIcon=LoadIcon( AfxGetInstanceHandle(),
                             MAKEINTRESOURCE(IDR_MAINFRAME));
    lstrcpy( Notifyid.szTip,L"WinHTTPLW" );                          //信息提示条为“计划任务提醒”
    Shell_NotifyIcon( NIM_DELETE,&Notifyid );                       //在托盘区删除图标
}


////////////////////////////////////////////////////////////
///
/// @brief 定时检查StatusFlag，如果为true既弹出提示对话框
///
/// @param UINT_PTR nIDEvent     WM_TIMER消息ID
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
/// @brief 监视服务器是否返回1
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
/// @brief 对资源进行释放
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
