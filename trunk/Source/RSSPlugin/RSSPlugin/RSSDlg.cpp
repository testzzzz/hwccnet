// RSSDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "RSSDlg.h"
#include "RssGlobal.h"
#include "RssError.h"
#include "..\RSSParser\RSSParser.h"
#include <string>
#include <fstream>
using namespace std;

// CRSSDlg 对话框

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


// CRSSDlg 消息处理程序

///////////////////////////////////////////////////////////////////////
///
/// @brief 对话框初始化操作
///
/// 对话框显示之前进行的一些初始化操作，\n
/// 加载已订阅的RSS列表，初始化COM库和RSS解析引擎
///
/// @param  void
///
/// @return BOOL
///
/// 修改记录: \n
///
///      <修改日期>     <修改者>   <修改内容描述>\n
///
///      2009-08-11      游枭       创建\n
///
/// 备注信息: 
///
///////////////////////////////////////////////////////////////////////
BOOL CRSSDlg::OnInitDialog()
{
    CDialog::OnInitDialog();

    UpdateData(FALSE);

    m_listShow.InsertColumn(0, L"标题", LVCFMT_CENTER, 218);
    m_listShow.InsertColumn(1, L"作者", LVCFMT_CENTER, 98);
    m_listShow.InsertColumn(2, L"日期", LVCFMT_CENTER, 110);
    m_listShow.SetExtendedStyle(LVS_EX_FULLROWSELECT | LVS_EX_GRIDLINES);

    //
    // 加载RSS订阅列表
    //
    LoadRssList();
    m_listRss.SetCurSel(0);

    HRESULT Error = RSS_SUCCESS;
    //
    // 初始化COM库和RSS解析引擎
    //
    CoInitialize(NULL);
    Error = m_rss.InitParser();
    HR_CHECK(Error);

    if (m_listRss.GetCount() == 0)
    {
        GetDlgItem(IDC_RSS_NOTIFY)->SetWindowText(L"您还没有添加订阅");
    }
    else
    {
        GetDlgItem(IDC_RSS_NOTIFY)->SetWindowText(L"点击更新,显示内容");
    }

Exit:
    return TRUE;  // return TRUE unless you set the focus to a control
    // 异常: OCX 属性页应返回 FALSE
}

///////////////////////////////////////////////////////////////////////
///
/// @brief 双击列表框的某一项时弹出IE并加载对应项的链接地址
///
/// @param NMHDR *pNMHDR
/// @param LRESULT *pResult
///
/// @return void
///
/// 修改记录: \n
///
///      <修改日期>     <修改者>   <修改内容描述>\n
///
///      2009-08-13      游枭       创建\n
///
/// 备注信息: 
///
///////////////////////////////////////////////////////////////////////
void CRSSDlg::OnNMDblclkRssShow(NMHDR *pNMHDR, LRESULT *pResult)
{
    LPNMITEMACTIVATE pNMItemActivate = reinterpret_cast<NMITEMACTIVATE*>(pNMHDR);

    //
    // 在IE窗口打开链接
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
/// @brief 添加新的RSS订阅
///
/// @param void
///
/// @return void
///
/// 修改记录: \n
///
///      <修改日期>     <修改者>   <修改内容描述>\n
///
///      2009-08-12      游枭       创建\n
///
/// 备注信息: 
///
///////////////////////////////////////////////////////////////////////
void CRSSDlg::OnBnClickedBtnAdd()
{
    UpdateData();

    if (m_rssAdd.IsEmpty())
    {
        MessageBox(L"您没有输入RSS订阅地址");
        return ;
    }

    HRESULT Error = RSS_SUCCESS;

    GetDlgItem(IDC_RSS_NOTIFY)->SetWindowText(L"正在添加订阅,请稍候");

    ofstream outfile("RssPlugin_Data", ios::app);

    LPWSTR strLink = m_rssAdd.GetBuffer();
    
    //
    // 设置解析地址
    //
    Error = m_rss.SetParser(strLink);
    HR_CHECK(Error);

    //
    // 开始解析
    //
    Error = m_rss.StartParser();
    HR_CHECK(Error);

    //
    // 获取RSS频道信息
    //
    Error = m_rss.GetChannelInfo();
    HR_CHECK(Error);

    LPWSTR rssTitle = NULL;          ///< 当前RSS频道标题
    LPWSTR rssLink = NULL;           ///< 当前RSS频道链接
    LPWSTR rssDate = NULL;           ///< 当前RSS频道更新日期

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
    // 将数据写入文件保存
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
    // 更新RSS订阅列表
    //
    LoadRssList();

    m_listRss.SetCurSel(m_listRss.GetCount() - 1);

    GetDlgItem(IDC_RSS_NOTIFY)->SetWindowText(L"添加完毕,请点击更新");
    
Exit:
    return; 
}

///////////////////////////////////////////////////////////////////////
///
/// @brief 更新RSS订阅的显示
///
/// @param void
///
/// @return void
///
/// 修改记录: \n
///
///      <修改日期>     <修改者>   <修改内容描述>\n
///
///      2009-08-13      游枭       创建\n
///
/// 备注信息: 
///
///////////////////////////////////////////////////////////////////////
void CRSSDlg::OnBnClickedBtnUpdate()
{
    if (m_listRss.GetCount() == 0)
    {
        MessageBox(L"您还没有添加RSS订阅");
        return ;
    }

    m_listShow.DeleteAllItems();
    GetDlgItem(IDC_RSS_NOTIFY)->SetWindowText(L"正在更新列表,请稍候");

    int nCurSel = m_listRss.GetCurSel();
    if (nCurSel == CB_ERR)
    {
        MessageBox(L"您没有选择要更新的RSS订阅");
        return ;
    }

    HRESULT Error = RSS_SUCCESS;
    
    //
    // 设置解析地址
    //
    Error = m_rss.SetParser(m_vecRss[nCurSel].rssLink);
    HR_CHECK(Error);

    //
    // 开始解析
    //
    Error = m_rss.StartParser();
    HR_CHECK(Error);

    //
    // 获取RSS频道信息
    //
    Error = m_rss.GetChannelInfo();
    HR_CHECK(Error);

    // 设置RSS频道信息
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
    // 获取频道内各项信息
    //
    Error = m_rss.GetItemInfo();
    HR_CHECK(Error);

    //
    // 在列表框显示RSS内容
    //
    LPWSTR pwTitle = NULL;
    LPWSTR pwAuthor = NULL;
    LPWSTR pwDate = NULL;
    long nCnt = 0;
    
    // 取得当前一共有多少项
    m_rss.GetItemCount(nCnt);

    UpdateData(TRUE);

    // 输入的要显示数量不能大于拥有的总项数
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
/// @brief 加载用户已订阅的RSS列表
///
/// @param void
///
/// @return void
///
/// 修改记录: \n
///
///      <修改日期>     <修改者>   <修改内容描述>\n
///
///      2009-08-13      游枭       创建\n
///
/// 备注信息: 
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
    // 从文件加载RSS订阅列表
    //
    ifstream infile("RssPlugin_Data");

    // 保存RSS频道标题
    string strTitle;
    // 保存RSS频道链接
    string strLink;     
    // 保存RSS频道更新日期
    string strDate;  
    // 循环控制变量
    bool bFlag = true;

    while (bFlag)
    {
        //
        // 处理第一行
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
        // 处理第二行
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
        // 处理第三行
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
        // 字符串转换 ASNI -> LPWSTR
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
/// @brief 关闭对话框释放所有资源
///
/// @param void
///
/// @return void
///
/// 修改记录: \n
///
///      <修改日期>     <修改者>   <修改内容描述>\n
///
///      2009-08-13      游枭       创建\n
///
/// 备注信息: 
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
