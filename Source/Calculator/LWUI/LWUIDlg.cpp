// LWUIDlg.cpp : UIʵ���ļ�
//
//==================================================================//
//
// ��Ȩ����: ��Ϊ���
//
// �ļ�����: LWUIDlg.cpp
//
// �ļ�����: �Ի���ʵ���ļ�
//
// �汾��Ϣ: 1.0
//
// ��    ��: ����־
//
// ��������: 2009-07-14
//
// ��ע��Ϣ: 
//
// �޸ļ�¼: 
// �޸�����      �޸���   �޸���������
// 2009-07-16     ����    ���ӶԳ���Ϊ0������Խ��ļ��
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


// CLWUIDlg �Ի���




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


// CLWUIDlg ��Ϣ�������

BOOL CLWUIDlg::OnInitDialog()
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
    
     UpdateData(FALSE);
     HRESULT Error = S_OK;
     Error = CoInitialize(NULL);     //��ʼ��COM��

     if ( FAILED(Error) )
     {
         AfxMessageBox( _T("��ʼ��COM��ʧ��!"),MB_OK, 0);
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
         AfxMessageBox( _T("�������ʧ��!"),MB_OK, 0);
         CoUninitialize();
     }
    return TRUE;  // ���ǽ��������õ��ؼ������򷵻� TRUE
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

// �����Ի��������С����ť������Ҫ����Ĵ���
//  �����Ƹ�ͼ�ꡣ����ʹ���ĵ�/��ͼģ�͵� MFC Ӧ�ó���
//  �⽫�ɿ���Զ���ɡ�

void CLWUIDlg::OnPaint()
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
HCURSOR CLWUIDlg::OnQueryDragIcon()
{
    return static_cast<HCURSOR>(m_hIcon);
}



void CLWUIDlg::OnBnClickedButtonClear()                 //�����C������ֵ����
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

void CLWUIDlg::OnBnClickedButtonCe()                     //ɾ����CE
{
    
    UpdateData(TRUE);
    m_pCalc->PutKey(LWK_CE);
    m_pCalc->QueryResult(&m_Result);
    UpdateData(FALSE);
}

void CLWUIDlg::OnBnClickedButtonZero()                   //����0
{
    
    UpdateData(TRUE);
    m_Error = m_pCalc->PutKey(LWK_0);
    if (FAILED(m_Error))
    {
        AfxMessageBox(_T("����Խ�磬��Χ-65536��65536"));
        return;
    }
    m_pCalc->QueryResult(&m_Result);
    UpdateData(FALSE);
}
void CLWUIDlg::OnBnClickedButtonOne()                     //����1
{
    
    UpdateData(TRUE);
    m_Error = m_pCalc->PutKey(LWK_1);
    if (FAILED(m_Error))
    {
        AfxMessageBox(_T("����Խ�磬��Χ-65536��65535"));
        return;
    }
    m_pCalc->QueryResult(&m_Result);
    UpdateData(FALSE);

}

void CLWUIDlg::OnBnClickedButtonTwo()                     // ����2
{
    
    UpdateData(TRUE);
    m_Error = m_pCalc->PutKey(LWK_2);
    if (FAILED(m_Error))
    {
        AfxMessageBox(_T("����Խ�磬��Χ-65536��65535"));
        return;
    }
    m_pCalc->QueryResult(&m_Result);
    UpdateData(FALSE);

}

void CLWUIDlg::OnBnClickedButtonThree()                      //����3
{
    
    UpdateData(TRUE);
    m_Error = m_pCalc->PutKey(LWK_3);
    if (FAILED(m_Error))
    {
        AfxMessageBox(_T("����Խ�磬��Χ-65536��65535"));
        return;
    }
    m_pCalc->QueryResult(&m_Result);
    UpdateData(FALSE);

}

void CLWUIDlg::OnBnClickedButtonFour()                     //����4
{
    
    UpdateData(TRUE);
    m_Error = m_pCalc->PutKey(LWK_4);
    if (FAILED(m_Error))
    {
        AfxMessageBox(_T("����Խ�磬��Χ-65536��65535"));
        return;
    }
    m_pCalc->QueryResult(&m_Result);
    UpdateData(FALSE);

}

void CLWUIDlg::OnBnClickedButtonFive()                     //����5
{
    
    UpdateData(TRUE);
    m_Error = m_pCalc->PutKey(LWK_5);
    if (FAILED(m_Error))
    {
        AfxMessageBox(_T("����Խ�磬��Χ-65536��65535"));
        return;
    }
    m_pCalc->QueryResult(&m_Result);
    UpdateData(FALSE);

}

void CLWUIDlg::OnBnClickedButtonSix()                       //����6
{
    
    UpdateData(TRUE);
    m_Error = m_pCalc->PutKey(LWK_6);
    if (FAILED(m_Error))
    {
        AfxMessageBox(_T("����Խ�磬��Χ-65536��65535"));
        return;
    }
    m_pCalc->QueryResult(&m_Result);
    UpdateData(FALSE);

}

void CLWUIDlg::OnBnClickedButtonSeven()                     //����7
{
    
    UpdateData(TRUE);
    m_Error = m_pCalc->PutKey(LWK_7);
    if (FAILED(m_Error))
    {
        AfxMessageBox(_T("����Խ�磬��Χ-65536��65535"));
        return;
    }
    m_pCalc->QueryResult(&m_Result);
    UpdateData(FALSE);

}

void CLWUIDlg::OnBnClickedButtonEight()                        //����8
{
    
    UpdateData(TRUE);
    m_Error = m_pCalc->PutKey(LWK_8);
    if (FAILED(m_Error))
    {
        AfxMessageBox(_T("����Խ�磬��Χ-65536��65535"));
        return;
    }
    m_pCalc->QueryResult(&m_Result);
    UpdateData(FALSE);

}

void CLWUIDlg::OnBnClickedButtonNine()                    //����9
{
    
    UpdateData(TRUE);
    m_Error = m_pCalc->PutKey(LWK_9);
    if (FAILED(m_Error))
    {
        AfxMessageBox(_T("����Խ�磬��Χ-65536��65535"));
        return;
    }
    m_pCalc->QueryResult(&m_Result);
    UpdateData(FALSE);

}


void CLWUIDlg::OnBnClickedButtonDivide()              //�����ŵĴ���
{
    UpdateData(TRUE);

    m_Error = m_pCalc->PutKey(LWK_DIV);

    if (FAILED(m_Error))
    {
        if ( m_Error == DIV_ZERO )
        {
            AfxMessageBox(_T("��������Ϊ�㣡"));
            return;
        }

        AfxMessageBox(_T("����Խ�磬��Χ-65536��65535"));
        return;
    }

    m_pCalc->QueryResult(&m_Result);

    UpdateData(FALSE);
}

void CLWUIDlg::OnBnClickedButtonMultiply()             //�˷��Ŵ���
{
    UpdateData(TRUE);

    m_Error = m_pCalc->PutKey(LWK_MUL);

    if (FAILED(m_Error))
    {
        if ( m_Error == DIV_ZERO )
        {
            AfxMessageBox(_T("��������Ϊ�㣡"));
            return;
        }

        AfxMessageBox(_T("����Խ�磬��Χ-65536��65535"));
        return;
    }

    m_pCalc->QueryResult(&m_Result);;

    UpdateData(FALSE);   
}

void CLWUIDlg::OnBnClickedButtonSubtruct()              //�����Ŵ���
{
    UpdateData(TRUE);

    m_Error = m_pCalc->PutKey(LWK_SUB);

    if (FAILED(m_Error))
    {
        if ( m_Error == DIV_ZERO )
        {
            AfxMessageBox(_T("��������Ϊ�㣡"));
            return;
        }

        AfxMessageBox(_T("����Խ�磬��Χ-65536��65535"));
        return;
    }

    m_pCalc->QueryResult(&m_Result);

    UpdateData(FALSE);
}

void CLWUIDlg::OnBnClickedButtonAdditon()               //�ӷ��Ŵ���
{
    UpdateData(TRUE);

    m_Error = m_pCalc->PutKey(LWK_ADD);

    if (FAILED(m_Error))
    {
        if ( m_Error == DIV_ZERO )
        {
            AfxMessageBox(_T("��������Ϊ�㣡"));
            return;
        }

        AfxMessageBox(_T("����Խ�磬��Χ-65536��65535"));
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
            AfxMessageBox(_T("��������Ϊ�㣡"));
            return;
        }

        AfxMessageBox(_T("����Խ�磬��Χ-65536��65535"));
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
// �� �� ��: PreTranslateMessage
//
// ��������: ���������Ϣ
//
// ��������: 
//
//             MSG* pMsg    //��Ϣ�ṹ��
//
// ��������: 
//
//     BOOL
//
// �޸ļ�¼: 
//
//      <�޸�����>     <�޸���>   <�޸���������>
//
//      2009-07-16      ����       ����
//
// ��ע��Ϣ: 
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
                    AfxMessageBox(_T("����Խ�磬��Χ-65536��65535"));
                    return FALSE;
                }

                m_pCalc->QueryResult(&m_Result);

                break;

            case '2':
            case VK_NUMPAD2:
                m_Error = m_pCalc->PutKey(LWK_2);

                if (FAILED(m_Error))
                {
                    AfxMessageBox(_T("����Խ�磬��Χ-65536��65535"));
                    return FALSE;
                }

                m_pCalc->QueryResult(&m_Result);

                break;

            case '3':
            case VK_NUMPAD3:
                m_Error = m_pCalc->PutKey(LWK_3);

                if (FAILED(m_Error))
                {
                    AfxMessageBox(_T("����Խ�磬��Χ-65536��65535"));
                    return FALSE;
                }

                m_pCalc->QueryResult(&m_Result);

                break;

            case '4':
            case VK_NUMPAD4:
                m_Error = m_pCalc->PutKey(LWK_4);

                if (FAILED(m_Error))
                {
                    AfxMessageBox(_T("����Խ�磬��Χ-65536��65535"));
                    return FALSE;
                }

                m_pCalc->QueryResult(&m_Result);

                break;

            case '5':
            case VK_NUMPAD5:
                m_Error = m_pCalc->PutKey(LWK_5);

                if (FAILED(m_Error))
                {
                    AfxMessageBox(_T("����Խ�磬��Χ-65536��65535"));
                    return FALSE;
                }

                m_pCalc->QueryResult(&m_Result);

                break;

            case '6':
            case VK_NUMPAD6:
                m_Error = m_pCalc->PutKey(LWK_6);

                if (FAILED(m_Error))
                {
                    AfxMessageBox(_T("����Խ�磬��Χ-65536��65535"));
                    return FALSE;
                }

                m_pCalc->QueryResult(&m_Result);

                break;

            case '7':
            case VK_NUMPAD7:
                m_Error = m_pCalc->PutKey(LWK_7);

                if (FAILED(m_Error))
                {
                    AfxMessageBox(_T("����Խ�磬��Χ-65536��65535"));
                    return FALSE;
                }

                m_pCalc->QueryResult(&m_Result);

                break;

            case '8':
            case VK_NUMPAD8:
                m_Error = m_pCalc->PutKey(LWK_8);

                if (FAILED(m_Error))
                {
                    AfxMessageBox(_T("����Խ�磬��Χ-65536��65535"));
                    return FALSE;
                }

                m_pCalc->QueryResult(&m_Result);

                break;

            case '9':
            case VK_NUMPAD9:
                m_Error = m_pCalc->PutKey(LWK_9);

                if (FAILED(m_Error))
                {
                    AfxMessageBox(_T("����Խ�磬��Χ-65536��65535"));
                    return FALSE;
                }

                m_pCalc->QueryResult(&m_Result);

                break;

            case '0':
            case VK_NUMPAD0:
                m_Error = m_pCalc->PutKey(LWK_0);

                if (FAILED(m_Error))
                {
                    AfxMessageBox(_T("����Խ�磬��Χ-65536��65535"));
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
                        AfxMessageBox(_T("��������Ϊ�㣡"));
                        return FALSE;
                    }

                    AfxMessageBox(_T("����Խ�磬��Χ-65536��65535"));
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
                        AfxMessageBox(_T("��������Ϊ�㣡"));
                        return FALSE;
                    }

                    AfxMessageBox(_T("����Խ�磬��Χ-65536��65535"));
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
                        AfxMessageBox(_T("��������Ϊ�㣡"));
                        return FALSE;
                    }

                    AfxMessageBox(_T("����Խ�磬��Χ-65536��65535"));
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
                        AfxMessageBox(_T("��������Ϊ�㣡"));
                        return FALSE;
                    }

                    AfxMessageBox(_T("����Խ�磬��Χ-65536��65535"));
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
                        AfxMessageBox(_T("��������Ϊ�㣡"));
                        return FALSE;
                    }

                    AfxMessageBox(_T("����Խ�磬��Χ-65536��65535"));
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
