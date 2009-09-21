// RSSDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "RSSDlg.h"
#include "RssGlobal.h"
#include "RssError.h"
#include "..\RSSParser\RSSParser.h"
#include <string>
#include <fstream>
using namespace std;

// CRSSDlg �Ի���

IMPLEMENT_DYNAMIC(CRSSDlg, CDialog)

CRSSDlg::CRSSDlg(CWnd* pParent /*=NULL*/)
    : CDialog(CRSSDlg::IDD, pParent)
    , m_rssAdd(_T(""))
    , m_rssNum(10)
{

}

CRSSDlg::~CRSSDlg()
{
}

void CRSSDlg::DoDataExchange(CDataExchange* pDX)
{
    CDialog::DoDataExchange(pDX);
    DDX_Control(pDX, IDC_RSS_SHOW, m_listShow);
    DDX_Control(pDX, IDC_RSS_LIST, m_listRss);
    DDX_Text(pDX, IDC_RSS_ADD, m_rssAdd);
    DDX_Text(pDX, IDC_RSS_NUM, m_rssNum);
    DDV_MinMaxLong(pDX, m_rssNum, 0, 100);
}


BEGIN_MESSAGE_MAP(CRSSDlg, CDialog)
    ON_NOTIFY(NM_DBLCLK, IDC_RSS_SHOW, &CRSSDlg::OnNMDblclkRssShow)
    ON_BN_CLICKED(IDC_BTN_ADD, &CRSSDlg::OnBnClickedBtnAdd)
    ON_BN_CLICKED(IDC_BTN_UPDATE, &CRSSDlg::OnBnClickedBtnUpdate)
END_MESSAGE_MAP()


// CRSSDlg ��Ϣ�������

///////////////////////////////////////////////////////////////////////
///
/// @brief �Ի����ʼ������
///
/// �Ի�����ʾ֮ǰ���е�һЩ��ʼ��������\n
/// �����Ѷ��ĵ�RSS�б���ʼ��COM���RSS��������
///
/// @param  void
///
/// @return BOOL
///
/// �޸ļ�¼: \n
///
///      <�޸�����>     <�޸���>   <�޸���������>\n
///
///      2009-08-11      ����       ����\n
///
/// ��ע��Ϣ: 
///
///////////////////////////////////////////////////////////////////////
BOOL CRSSDlg::OnInitDialog()
{
    CDialog::OnInitDialog();

    UpdateData(FALSE);

    m_listShow.InsertColumn(0, L"����", LVCFMT_CENTER, 218);
    m_listShow.InsertColumn(1, L"����", LVCFMT_CENTER, 98);
    m_listShow.InsertColumn(2, L"����", LVCFMT_CENTER, 110);
    m_listShow.SetExtendedStyle(LVS_EX_FULLROWSELECT | LVS_EX_GRIDLINES);

    //
    // ����RSS�����б�
    //
    LoadRssList();
    m_listRss.SetCurSel(0);

    HRESULT Error = RSS_SUCCESS;
    //
    // ��ʼ��COM���RSS��������
    //
    CoInitialize(NULL);
    Error = m_rss.InitParser();
    HR_CHECK(Error);

    if (m_listRss.GetCount() == 0)
    {
        GetDlgItem(IDC_RSS_NOTIFY)->SetWindowText(L"����û����Ӷ���");
    }
    else
    {
        GetDlgItem(IDC_RSS_NOTIFY)->SetWindowText(L"�������,��ʾ����");
    }

Exit:
    return TRUE;  // return TRUE unless you set the focus to a control
    // �쳣: OCX ����ҳӦ���� FALSE
}

///////////////////////////////////////////////////////////////////////
///
/// @brief ˫���б���ĳһ��ʱ����IE�����ض�Ӧ������ӵ�ַ
///
/// @param NMHDR *pNMHDR
/// @param LRESULT *pResult
///
/// @return void
///
/// �޸ļ�¼: \n
///
///      <�޸�����>     <�޸���>   <�޸���������>\n
///
///      2009-08-13      ����       ����\n
///
/// ��ע��Ϣ: 
///
///////////////////////////////////////////////////////////////////////
void CRSSDlg::OnNMDblclkRssShow(NMHDR *pNMHDR, LRESULT *pResult)
{
    LPNMITEMACTIVATE pNMItemActivate = reinterpret_cast<NMITEMACTIVATE*>(pNMHDR);

    //
    // ��IE���ڴ�����
    //
    LPWSTR rssLink = NULL;
    m_rss.GetItemLink(pNMItemActivate->iItem, rssLink);

    ShellExecute(
        NULL,
        L"open",
        rssLink,
        NULL,
        NULL,
        SW_SHOWNORMAL
        );

    DELETE_BSTR(rssLink);

    *pResult = 0;
}

///////////////////////////////////////////////////////////////////////
///
/// @brief ����µ�RSS����
///
/// @param void
///
/// @return void
///
/// �޸ļ�¼: \n
///
///      <�޸�����>     <�޸���>   <�޸���������>\n
///
///      2009-08-12      ����       ����\n
///
/// ��ע��Ϣ: 
///
///////////////////////////////////////////////////////////////////////
void CRSSDlg::OnBnClickedBtnAdd()
{
    UpdateData();

    if (m_rssAdd.IsEmpty())
    {
        MessageBox(L"��û������RSS���ĵ�ַ");
        return ;
    }

    HRESULT Error = RSS_SUCCESS;

    GetDlgItem(IDC_RSS_NOTIFY)->SetWindowText(L"������Ӷ���,���Ժ�");

    ofstream outfile("RssPlugin_Data", ios::app);

    LPWSTR strLink = m_rssAdd.GetBuffer();
    
    //
    // ���ý�����ַ
    //
    Error = m_rss.SetParser(strLink);
    HR_CHECK(Error);

    //
    // ��ʼ����
    //
    Error = m_rss.StartParser();
    HR_CHECK(Error);

    //
    // ��ȡRSSƵ����Ϣ
    //
    Error = m_rss.GetChannelInfo();
    HR_CHECK(Error);

    LPWSTR rssTitle = NULL;          ///< ��ǰRSSƵ������
    LPWSTR rssLink = NULL;           ///< ��ǰRSSƵ������
    LPWSTR rssDate = NULL;           ///< ��ǰRSSƵ����������

    Error = m_rss.GetRssTitle(rssTitle);
    if (Error == RSS_NODATE)
    {
        rssTitle = L"No Data";
    }

    Error = m_rss.GetRssLink(rssLink);
    if (Error == RSS_NODATE)
    {
        rssLink = L"No Data";
    }

    Error = m_rss.GetRssDate(rssDate);
    if (Error == RSS_NODATE)
    {
        rssDate = L"No Data";
    }

    //
    // ������д���ļ�����
    //
    USES_CONVERSION;
    outfile << W2A(rssTitle)
            << "\n"
            << W2A(rssLink)
            << "\n"
            << W2A(rssDate)
            << "\n";

    outfile.close();

    DELETE_BSTR(rssTitle);
    DELETE_BSTR(rssLink);
    DELETE_BSTR(rssDate);

    m_rssAdd = _T("");
    UpdateData(FALSE);

    //
    // ����RSS�����б�
    //
    LoadRssList();

    m_listRss.SetCurSel(m_listRss.GetCount() - 1);

    GetDlgItem(IDC_RSS_NOTIFY)->SetWindowText(L"������,��������");
    
Exit:
    return; 
}

///////////////////////////////////////////////////////////////////////
///
/// @brief ����RSS���ĵ���ʾ
///
/// @param void
///
/// @return void
///
/// �޸ļ�¼: \n
///
///      <�޸�����>     <�޸���>   <�޸���������>\n
///
///      2009-08-13      ����       ����\n
///
/// ��ע��Ϣ: 
///
///////////////////////////////////////////////////////////////////////
void CRSSDlg::OnBnClickedBtnUpdate()
{
    if (m_listRss.GetCount() == 0)
    {
        MessageBox(L"����û�����RSS����");
        return ;
    }

    m_listShow.DeleteAllItems();
    GetDlgItem(IDC_RSS_NOTIFY)->SetWindowText(L"���ڸ����б�,���Ժ�");

    int nCurSel = m_listRss.GetCurSel();
    if (nCurSel == CB_ERR)
    {
        MessageBox(L"��û��ѡ��Ҫ���µ�RSS����");
        return ;
    }

    HRESULT Error = RSS_SUCCESS;
    
    //
    // ���ý�����ַ
    //
    Error = m_rss.SetParser(m_vecRss[nCurSel].rssLink);
    HR_CHECK(Error);

    //
    // ��ʼ����
    //
    Error = m_rss.StartParser();
    HR_CHECK(Error);

    //
    // ��ȡRSSƵ����Ϣ
    //
    Error = m_rss.GetChannelInfo();
    HR_CHECK(Error);

    // ����RSSƵ����Ϣ
    LPWSTR rssTitle = NULL;
    LPWSTR rssDate = NULL;

    Error = m_rss.GetRssTitle(rssTitle);
    if (Error == RSS_NODATE)
    {
        rssTitle = L"No Data";
    }

    Error = m_rss.GetRssDate(rssDate);
    if (Error == RSS_NODATE)
    {
        rssDate = L"No Data";
    }

    GetDlgItem(IDC_RSS_NAME)->SetWindowText(rssTitle);
    GetDlgItem(IDC_RSS_DATE)->SetWindowText(rssDate);

    //
    // ��ȡƵ���ڸ�����Ϣ
    //
    Error = m_rss.GetItemInfo();
    HR_CHECK(Error);

    //
    // ���б����ʾRSS����
    //
    LPWSTR pwTitle = NULL;
    LPWSTR pwAuthor = NULL;
    LPWSTR pwDate = NULL;
    long nCnt = 0;
    
    // ȡ�õ�ǰһ���ж�����
    m_rss.GetItemCount(nCnt);

    UpdateData(TRUE);

    // �����Ҫ��ʾ�������ܴ���ӵ�е�������
    if (m_rssNum > nCnt)
    {
        m_rssNum = nCnt;
    }

    for (int i = 0; i < m_rssNum; i++)
    {
        Error = m_rss.GetItemTitle(i, pwTitle);
        if (Error == RSS_NODATE)
        {
            pwTitle = L"No Date";
        }

        Error = m_rss.GetItemAuthor(i, pwAuthor);
        if (Error == RSS_NODATE)
        {
            pwAuthor = L"No Date";
        }

        Error = m_rss.GetItemDate(i, pwDate);
        if (Error == RSS_NODATE)
        {
            pwDate = L"No Date";
        }

        m_listShow.InsertItem(i, pwTitle);
        m_listShow.SetItemText(i, 1, pwAuthor);
        m_listShow.SetItemText(i, 2, pwDate);

        DELETE_BSTR(pwTitle);
        DELETE_BSTR(pwAuthor);
        DELETE_BSTR(pwDate);
    }

    UpdateData(FALSE);

    GetDlgItem(IDC_RSS_NOTIFY)->SetWindowText(L"");

    DELETE_BSTR(rssTitle);
    DELETE_BSTR(rssDate);

Exit:
    return ;
}

///////////////////////////////////////////////////////////////////////
///
/// @brief �����û��Ѷ��ĵ�RSS�б�
///
/// @param void
///
/// @return void
///
/// �޸ļ�¼: \n
///
///      <�޸�����>     <�޸���>   <�޸���������>\n
///
///      2009-08-13      ����       ����\n
///
/// ��ע��Ϣ: 
///
///////////////////////////////////////////////////////////////////////
void CRSSDlg::LoadRssList()
{
    m_listRss.ResetContent();
    int cnt = m_vecRss.size();

    for (int i = 0; i < cnt; i++)
    {
        DELETE_ARRAY(m_vecRss[i].rssTitle);
        DELETE_ARRAY(m_vecRss[i].rssLink);
        DELETE_ARRAY(m_vecRss[i].rssDate);
    }
    m_vecRss.clear();

    //
    // ���ļ�����RSS�����б�
    //
    ifstream infile("RssPlugin_Data");

    // ����RSSƵ������
    string strTitle;
    // ����RSSƵ������
    string strLink;     
    // ����RSSƵ����������
    string strDate;  
    // ѭ�����Ʊ���
    bool bFlag = true;

    while (bFlag)
    {
        //
        // �����һ��
        //
        if (getline(infile, strTitle))
        {
            bFlag = true;
        }
        else
        {
            bFlag = false;
            break;
        }

        //
        // ����ڶ���
        //
        if (getline(infile, strLink))
        {
            bFlag = true;
        }
        else
        {
            bFlag = false;
            break;
        }

        //
        // ���������
        //
        if (getline(infile, strDate))
        {
            bFlag = true;
        }
        else
        {
            bFlag = false;
            break;
        }

        RSSChannel rss;
        //
        // �ַ���ת�� ASNI -> LPWSTR
        //
        USES_CONVERSION;

        LPCSTR paTitle = strTitle.c_str();
        LPCSTR paLink = strLink.c_str();
        LPCSTR paDate =  strDate.c_str();

        LPCWSTR pwTitle = A2W(paTitle);
        LPCWSTR pwLink = A2W(paLink);
        LPCWSTR pwDate = A2W(paDate);

        rss.rssTitle = new wchar_t[lstrlen(pwTitle) + 1];
        rss.rssLink = new wchar_t[lstrlen(pwLink) + 1];
        rss.rssDate = new wchar_t[lstrlen(pwDate) + 1];

        lstrcpy(rss.rssTitle, pwTitle);
        lstrcpy(rss.rssLink, pwLink);
        lstrcpy(rss.rssDate, pwDate);

        m_vecRss.push_back(rss);

        m_listRss.AddString(rss.rssTitle);
    }

    infile.close();
}

///////////////////////////////////////////////////////////////////////
///
/// @brief �رնԻ����ͷ�������Դ
///
/// @param void
///
/// @return void
///
/// �޸ļ�¼: \n
///
///      <�޸�����>     <�޸���>   <�޸���������>\n
///
///      2009-08-13      ����       ����\n
///
/// ��ע��Ϣ: 
///
///////////////////////////////////////////////////////////////////////
void CRSSDlg::OnCancel()
{
    int cnt = m_vecRss.size();
    for (int i = 0; i < cnt; i++)
    {
        DELETE_ARRAY(m_vecRss[i].rssTitle);
        DELETE_ARRAY(m_vecRss[i].rssLink);
        DELETE_ARRAY(m_vecRss[i].rssDate);
    }
    
    m_rss.UninitParser();
    
    CDialog::OnCancel();
}
