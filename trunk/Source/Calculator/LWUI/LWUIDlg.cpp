// LWUIDlg.cpp : UI实现文件
//
//==================================================================//
//
// 版权所有: 乐为软件
//
// 文件名称: LWUIDlg.cpp
//
// 文件描述: 对话框实现文件
//
// 版本信息: 1.0
//
// 作    者: 甘先志
//
// 开发日期: 2009-07-14
//
// 备注信息: 
//
// 修改记录: 
// 修改日期      修改者   修改内容描述
// 2009-07-16     游枭    增加对除数为0、数据越界的检测
//------------------------------------------------------------
//
//==================================================================//
#include "stdafx.h"
#include "LWUI.h"
#include "LWUIDlg.h"
#include "..\ICalculator\LWCalculator_i.c"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


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


// CLWUIDlg 对话框




CLWUIDlg::CLWUIDlg(CWnd* pParent /*=NULL*/)
    : CDialog(CLWUIDlg::IDD, pParent)
    , m_Result(0)
    , m_pCalc(NULL)
    , m_Error(S_OK)
{
    m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CLWUIDlg::DoDataExchange(CDataExchange* pDX)
{
    CDialog::DoDataExchange(pDX);
    DDX_Control(pDX, IDC_EDIT_VIEW, m_editResult);
    DDX_Text(pDX,IDC_EDIT_VIEW,m_Result);
}

BEGIN_MESSAGE_MAP(CLWUIDlg, CDialog)
    ON_WM_SYSCOMMAND()
    ON_WM_PAINT()
    ON_WM_QUERYDRAGICON()
    //}}AFX_MSG_MAP
    ON_BN_CLICKED(IDC_BUTTON_SEVEN, &CLWUIDlg::OnBnClickedButtonSeven)
    ON_BN_CLICKED(IDC_BUTTON_ZERO, &CLWUIDlg::OnBnClickedButtonZero)
    ON_BN_CLICKED(IDC_BUTTON_CLEAR, &CLWUIDlg::OnBnClickedButtonClear)
    ON_BN_CLICKED(IDC_BUTTON_BACKSPCE, &CLWUIDlg::OnBnClickedButtonBackspce)
    ON_BN_CLICKED(IDC_BUTTON_CE, &CLWUIDlg::OnBnClickedButtonCe)
    ON_BN_CLICKED(IDC_BUTTON_ONE, &CLWUIDlg::OnBnClickedButtonOne)
    ON_BN_CLICKED(IDC_BUTTON_TWO, &CLWUIDlg::OnBnClickedButtonTwo)
    ON_BN_CLICKED(IDC_BUTTON_THREE, &CLWUIDlg::OnBnClickedButtonThree)
    ON_BN_CLICKED(IDC_BUTTON_FOUR, &CLWUIDlg::OnBnClickedButtonFour)
    ON_BN_CLICKED(IDC_BUTTON_FIVE, &CLWUIDlg::OnBnClickedButtonFive)
    ON_BN_CLICKED(IDC_BUTTON_SIX, &CLWUIDlg::OnBnClickedButtonSix)
    ON_BN_CLICKED(IDC_BUTTON_EIGHT, &CLWUIDlg::OnBnClickedButtonEight)
    ON_BN_CLICKED(IDC_BUTTON_NINE, &CLWUIDlg::OnBnClickedButtonNine)
    ON_BN_CLICKED(IDC_BUTTON_DIVIDE, &CLWUIDlg::OnBnClickedButtonDivide)
    ON_BN_CLICKED(IDC_BUTTON_MULTIPLY, &CLWUIDlg::OnBnClickedButtonMultiply)
    ON_BN_CLICKED(IDC_BUTTON_SUBTRUCT, &CLWUIDlg::OnBnClickedButtonSubtruct)
    ON_BN_CLICKED(IDC_BUTTON_ADDITON, &CLWUIDlg::OnBnClickedButtonAdditon)
    ON_BN_CLICKED(IDC_BUTTON_EQUAL, &CLWUIDlg::OnBnClickedButtonEqual)
    ON_BN_CLICKED(IDC_BUTTON_NEGATIVE, &CLWUIDlg::OnBnClickedButtonNegative)
END_MESSAGE_MAP()


// CLWUIDlg 消息处理程序

BOOL CLWUIDlg::OnInitDialog()
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
    
     UpdateData(FALSE);
     HRESULT Error = S_OK;
     Error = CoInitialize(NULL);     //初始化COM库

     if ( FAILED(Error) )
     {
         AfxMessageBox( _T("初始化COM库失败!"),MB_OK, 0);
         CoUninitialize();
     }

     Error = CoCreateInstance(
         CLSID_Calculator, 
         NULL, 
         CLSCTX_INPROC_SERVER, 
         IID_ICalculator, 
         reinterpret_cast<void**>(&m_pCalc)
         );

     if ( FAILED(Error) )
     {
         AfxMessageBox( _T("创建组件失败!"),MB_OK, 0);
         CoUninitialize();
     }
    return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

void CLWUIDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
    if ((nID & 0xFFF0) == IDM_ABOUTBOX)
    {
        CAboutDlg dlgAbout;
        dlgAbout.DoModal();
    }
    else
    {
        CDialog::OnSysCommand(nID, lParam);
    }
}

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void CLWUIDlg::OnPaint()
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
HCURSOR CLWUIDlg::OnQueryDragIcon()
{
    return static_cast<HCURSOR>(m_hIcon);
}



void CLWUIDlg::OnBnClickedButtonClear()                 //清除键C，将数值清零
{
    
    UpdateData(TRUE);
    m_pCalc->PutKey(LWK_C);
    m_pCalc->QueryResult(&m_Result);
    UpdateData(FALSE);

}

void CLWUIDlg::OnBnClickedButtonBackspce()                      //
{
    
    UpdateData(TRUE);
    m_pCalc->PutKey(LWK_D);
    m_pCalc->QueryResult(&m_Result);
    UpdateData(FALSE);
}

void CLWUIDlg::OnBnClickedButtonCe()                     //删除键CE
{
    
    UpdateData(TRUE);
    m_pCalc->PutKey(LWK_CE);
    m_pCalc->QueryResult(&m_Result);
    UpdateData(FALSE);
}

void CLWUIDlg::OnBnClickedButtonZero()                   //按键0
{
    
    UpdateData(TRUE);
    m_Error = m_pCalc->PutKey(LWK_0);
    if (FAILED(m_Error))
    {
        AfxMessageBox(_T("数据越界，范围-65536至65536"));
        return;
    }
    m_pCalc->QueryResult(&m_Result);
    UpdateData(FALSE);
}
void CLWUIDlg::OnBnClickedButtonOne()                     //按键1
{
    
    UpdateData(TRUE);
    m_Error = m_pCalc->PutKey(LWK_1);
    if (FAILED(m_Error))
    {
        AfxMessageBox(_T("数据越界，范围-65536至65535"));
        return;
    }
    m_pCalc->QueryResult(&m_Result);
    UpdateData(FALSE);

}

void CLWUIDlg::OnBnClickedButtonTwo()                     // 按键2
{
    
    UpdateData(TRUE);
    m_Error = m_pCalc->PutKey(LWK_2);
    if (FAILED(m_Error))
    {
        AfxMessageBox(_T("数据越界，范围-65536至65535"));
        return;
    }
    m_pCalc->QueryResult(&m_Result);
    UpdateData(FALSE);

}

void CLWUIDlg::OnBnClickedButtonThree()                      //按键3
{
    
    UpdateData(TRUE);
    m_Error = m_pCalc->PutKey(LWK_3);
    if (FAILED(m_Error))
    {
        AfxMessageBox(_T("数据越界，范围-65536至65535"));
        return;
    }
    m_pCalc->QueryResult(&m_Result);
    UpdateData(FALSE);

}

void CLWUIDlg::OnBnClickedButtonFour()                     //按键4
{
    
    UpdateData(TRUE);
    m_Error = m_pCalc->PutKey(LWK_4);
    if (FAILED(m_Error))
    {
        AfxMessageBox(_T("数据越界，范围-65536至65535"));
        return;
    }
    m_pCalc->QueryResult(&m_Result);
    UpdateData(FALSE);

}

void CLWUIDlg::OnBnClickedButtonFive()                     //按键5
{
    
    UpdateData(TRUE);
    m_Error = m_pCalc->PutKey(LWK_5);
    if (FAILED(m_Error))
    {
        AfxMessageBox(_T("数据越界，范围-65536至65535"));
        return;
    }
    m_pCalc->QueryResult(&m_Result);
    UpdateData(FALSE);

}

void CLWUIDlg::OnBnClickedButtonSix()                       //按键6
{
    
    UpdateData(TRUE);
    m_Error = m_pCalc->PutKey(LWK_6);
    if (FAILED(m_Error))
    {
        AfxMessageBox(_T("数据越界，范围-65536至65535"));
        return;
    }
    m_pCalc->QueryResult(&m_Result);
    UpdateData(FALSE);

}

void CLWUIDlg::OnBnClickedButtonSeven()                     //按键7
{
    
    UpdateData(TRUE);
    m_Error = m_pCalc->PutKey(LWK_7);
    if (FAILED(m_Error))
    {
        AfxMessageBox(_T("数据越界，范围-65536至65535"));
        return;
    }
    m_pCalc->QueryResult(&m_Result);
    UpdateData(FALSE);

}

void CLWUIDlg::OnBnClickedButtonEight()                        //按键8
{
    
    UpdateData(TRUE);
    m_Error = m_pCalc->PutKey(LWK_8);
    if (FAILED(m_Error))
    {
        AfxMessageBox(_T("数据越界，范围-65536至65535"));
        return;
    }
    m_pCalc->QueryResult(&m_Result);
    UpdateData(FALSE);

}

void CLWUIDlg::OnBnClickedButtonNine()                    //按键9
{
    
    UpdateData(TRUE);
    m_Error = m_pCalc->PutKey(LWK_9);
    if (FAILED(m_Error))
    {
        AfxMessageBox(_T("数据越界，范围-65536至65535"));
        return;
    }
    m_pCalc->QueryResult(&m_Result);
    UpdateData(FALSE);

}


void CLWUIDlg::OnBnClickedButtonDivide()              //除符号的处理
{
    UpdateData(TRUE);

    m_Error = m_pCalc->PutKey(LWK_DIV);

    if (FAILED(m_Error))
    {
        if ( m_Error == DIV_ZERO )
        {
            AfxMessageBox(_T("除数不能为零！"));
            return;
        }

        AfxMessageBox(_T("数据越界，范围-65536至65535"));
        return;
    }

    m_pCalc->QueryResult(&m_Result);

    UpdateData(FALSE);
}

void CLWUIDlg::OnBnClickedButtonMultiply()             //乘符号处理
{
    UpdateData(TRUE);

    m_Error = m_pCalc->PutKey(LWK_MUL);

    if (FAILED(m_Error))
    {
        if ( m_Error == DIV_ZERO )
        {
            AfxMessageBox(_T("除数不能为零！"));
            return;
        }

        AfxMessageBox(_T("数据越界，范围-65536至65535"));
        return;
    }

    m_pCalc->QueryResult(&m_Result);;

    UpdateData(FALSE);   
}

void CLWUIDlg::OnBnClickedButtonSubtruct()              //减符号处理
{
    UpdateData(TRUE);

    m_Error = m_pCalc->PutKey(LWK_SUB);

    if (FAILED(m_Error))
    {
        if ( m_Error == DIV_ZERO )
        {
            AfxMessageBox(_T("除数不能为零！"));
            return;
        }

        AfxMessageBox(_T("数据越界，范围-65536至65535"));
        return;
    }

    m_pCalc->QueryResult(&m_Result);

    UpdateData(FALSE);
}

void CLWUIDlg::OnBnClickedButtonAdditon()               //加符号处理
{
    UpdateData(TRUE);

    m_Error = m_pCalc->PutKey(LWK_ADD);

    if (FAILED(m_Error))
    {
        if ( m_Error == DIV_ZERO )
        {
            AfxMessageBox(_T("除数不能为零！"));
            return;
        }

        AfxMessageBox(_T("数据越界，范围-65536至65535"));
        return;
    }

    m_pCalc->QueryResult(&m_Result);

    UpdateData(FALSE);   
}

void CLWUIDlg::OnBnClickedButtonEqual()
{
    UpdateData(TRUE);

    m_Error = m_pCalc->PutKey(LWK_EQU);

    if (FAILED(m_Error))
    {
        if ( m_Error == DIV_ZERO )
        {
            AfxMessageBox(_T("除数不能为零！"));
            return;
        }

        AfxMessageBox(_T("数据越界，范围-65536至65535"));
        return;
    }

    m_pCalc->QueryResult(&m_Result);           

    UpdateData(FALSE);
}

void CLWUIDlg::OnBnClickedButtonNegative()
{
    UpdateData(TRUE);

    m_pCalc->PutKey(LWK_REV);
    m_pCalc->QueryResult(&m_Result);

    UpdateData(FALSE);
}

//==================================================================//
//
// 函 数 名: PreTranslateMessage
//
// 功能描述: 处理键盘消息
//
// 参数描述: 
//
//             MSG* pMsg    //消息结构体
//
// 返回描述: 
//
//     BOOL
//
// 修改记录: 
//
//      <修改日期>     <修改者>   <修改内容描述>
//
//      2009-07-16      游枭       创建
//
// 备注信息: 
//
//==================================================================//
BOOL CLWUIDlg::PreTranslateMessage(
                                   MSG* pMsg
                                   )
{
    if ( pMsg->message == WM_KEYDOWN )
    {
        UpdateData(TRUE);
        
        switch(pMsg->wParam)
        {
            case '1':
            case VK_NUMPAD1:
                m_Error = m_pCalc->PutKey(LWK_1);

                if (FAILED(m_Error))
                {
                    AfxMessageBox(_T("数据越界，范围-65536至65535"));
                    return FALSE;
                }

                m_pCalc->QueryResult(&m_Result);

                break;

            case '2':
            case VK_NUMPAD2:
                m_Error = m_pCalc->PutKey(LWK_2);

                if (FAILED(m_Error))
                {
                    AfxMessageBox(_T("数据越界，范围-65536至65535"));
                    return FALSE;
                }

                m_pCalc->QueryResult(&m_Result);

                break;

            case '3':
            case VK_NUMPAD3:
                m_Error = m_pCalc->PutKey(LWK_3);

                if (FAILED(m_Error))
                {
                    AfxMessageBox(_T("数据越界，范围-65536至65535"));
                    return FALSE;
                }

                m_pCalc->QueryResult(&m_Result);

                break;

            case '4':
            case VK_NUMPAD4:
                m_Error = m_pCalc->PutKey(LWK_4);

                if (FAILED(m_Error))
                {
                    AfxMessageBox(_T("数据越界，范围-65536至65535"));
                    return FALSE;
                }

                m_pCalc->QueryResult(&m_Result);

                break;

            case '5':
            case VK_NUMPAD5:
                m_Error = m_pCalc->PutKey(LWK_5);

                if (FAILED(m_Error))
                {
                    AfxMessageBox(_T("数据越界，范围-65536至65535"));
                    return FALSE;
                }

                m_pCalc->QueryResult(&m_Result);

                break;

            case '6':
            case VK_NUMPAD6:
                m_Error = m_pCalc->PutKey(LWK_6);

                if (FAILED(m_Error))
                {
                    AfxMessageBox(_T("数据越界，范围-65536至65535"));
                    return FALSE;
                }

                m_pCalc->QueryResult(&m_Result);

                break;

            case '7':
            case VK_NUMPAD7:
                m_Error = m_pCalc->PutKey(LWK_7);

                if (FAILED(m_Error))
                {
                    AfxMessageBox(_T("数据越界，范围-65536至65535"));
                    return FALSE;
                }

                m_pCalc->QueryResult(&m_Result);

                break;

            case '8':
            case VK_NUMPAD8:
                m_Error = m_pCalc->PutKey(LWK_8);

                if (FAILED(m_Error))
                {
                    AfxMessageBox(_T("数据越界，范围-65536至65535"));
                    return FALSE;
                }

                m_pCalc->QueryResult(&m_Result);

                break;

            case '9':
            case VK_NUMPAD9:
                m_Error = m_pCalc->PutKey(LWK_9);

                if (FAILED(m_Error))
                {
                    AfxMessageBox(_T("数据越界，范围-65536至65535"));
                    return FALSE;
                }

                m_pCalc->QueryResult(&m_Result);

                break;

            case '0':
            case VK_NUMPAD0:
                m_Error = m_pCalc->PutKey(LWK_0);

                if (FAILED(m_Error))
                {
                    AfxMessageBox(_T("数据越界，范围-65536至65535"));
                    return FALSE;
                }

                m_pCalc->QueryResult(&m_Result);

                break;

            case VK_ADD:
                m_Error = m_pCalc->PutKey(LWK_ADD);

                if (FAILED(m_Error))
                {
                    if ( m_Error == DIV_ZERO )
                    {
                        AfxMessageBox(_T("除数不能为零！"));
                        return FALSE;
                    }

                    AfxMessageBox(_T("数据越界，范围-65536至65535"));
                    return FALSE;
                }

                m_pCalc->QueryResult(&m_Result);

                break;

            case VK_SUBTRACT:
                m_Error = m_pCalc->PutKey(LWK_SUB);

                if (FAILED(m_Error))
                {
                    if ( m_Error == DIV_ZERO )
                    {
                        AfxMessageBox(_T("除数不能为零！"));
                        return FALSE;
                    }

                    AfxMessageBox(_T("数据越界，范围-65536至65535"));
                    return FALSE;
                }

                m_pCalc->QueryResult(&m_Result);

                break;

            case VK_MULTIPLY:
                m_Error = m_pCalc->PutKey(LWK_MUL);

                if (FAILED(m_Error))
                {
                    if ( m_Error == DIV_ZERO )
                    {
                        AfxMessageBox(_T("除数不能为零！"));
                        return FALSE;
                    }

                    AfxMessageBox(_T("数据越界，范围-65536至65535"));
                    return FALSE;
                }

                m_pCalc->QueryResult(&m_Result);

                break;

            case VK_DIVIDE:
                m_Error = m_pCalc->PutKey(LWK_DIV);

                if (FAILED(m_Error))
                {
                    if ( m_Error == DIV_ZERO )
                    {
                        AfxMessageBox(_T("除数不能为零！"));
                        return FALSE;
                    }

                    AfxMessageBox(_T("数据越界，范围-65536至65535"));
                    return FALSE;
                }

                m_pCalc->QueryResult(&m_Result);

                break;

            case VK_ESCAPE:
                m_pCalc->PutKey(LWK_C);
                m_pCalc->QueryResult(&m_Result);
                UpdateData(FALSE);

                return TRUE;

            case VK_DELETE:
                m_pCalc->PutKey(LWK_CE);
                m_pCalc->QueryResult(&m_Result);

                break;

            case VK_BACK:
                m_pCalc->PutKey(LWK_D);
                m_pCalc->QueryResult(&m_Result);

                break;

            case VK_RETURN:
                m_Error = m_pCalc->PutKey(LWK_EQU);

                if (FAILED(m_Error))
                {
                    if ( m_Error == DIV_ZERO )
                    {
                        AfxMessageBox(_T("除数不能为零！"));
                        return FALSE;
                    }

                    AfxMessageBox(_T("数据越界，范围-65536至65535"));
                    return FALSE;
                }

                m_pCalc->QueryResult(&m_Result);
                
                UpdateData(FALSE);
                return TRUE;

        }

        UpdateData(FALSE);
    }

    return CDialog::PreTranslateMessage(pMsg);

}
