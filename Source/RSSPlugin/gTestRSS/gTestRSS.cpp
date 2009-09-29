// gTestRSS.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "gTestRSS.h"

RSSLW * gTestRSS::pLW = NULL;
vector<RSSChannel> m_vecRss;        ///< 保存从文件加载的RSS频道列表
LPWSTR strTmp = NULL;
long tmpCount = 0;
TEST_F(gTestRSS,rsslink_Italy)
{
     ASSERT_EQ(S_OK,gTestRSS::pLW->InitParser());
     ASSERT_EQ(S_OK,gTestRSS::pLW->SetParser(L"http://rss.sina.com.cn/sports/global/italy.xml"));
     ASSERT_EQ(S_OK,gTestRSS::pLW->StartParser());
     ASSERT_EQ(S_OK,gTestRSS::pLW->GetChannelInfo());
     ASSERT_EQ(S_OK,gTestRSS::pLW->GetRssLink(strTmp));
     ASSERT_EQ(S_OK,gTestRSS::pLW->GetRssDate(strTmp));
     ASSERT_EQ(S_OK,gTestRSS::pLW->GetRssTitle(strTmp));
     ASSERT_EQ(S_OK,gTestRSS::pLW->GetItemInfo());
     ASSERT_EQ(S_OK,gTestRSS::pLW->GetItemCount(tmpCount));
     ASSERT_EQ(S_OK,gTestRSS::pLW->GetItemAuthor(tmpCount - 1,strTmp));
     ASSERT_EQ(S_OK,gTestRSS::pLW->GetItemDate(tmpCount - 1,strTmp));
     ASSERT_EQ(S_OK,gTestRSS::pLW->GetItemLink(tmpCount - 1,strTmp));
     ASSERT_EQ(S_OK,gTestRSS::pLW->GetItemTitle(tmpCount - 1,strTmp));
}

TEST_F(gTestRSS,rsslink_Sports)
{
    ASSERT_EQ(S_OK,gTestRSS::pLW->InitParser());
    ASSERT_EQ(S_OK,gTestRSS::pLW->SetParser(L"http://rss.sina.com.cn/news/allnews/sports.xml"));
    ASSERT_EQ(S_OK,gTestRSS::pLW->StartParser());
    ASSERT_EQ(S_OK,gTestRSS::pLW->GetChannelInfo());
    ASSERT_EQ(S_OK,gTestRSS::pLW->GetRssLink(strTmp));
    ASSERT_EQ(S_OK,gTestRSS::pLW->GetRssDate(strTmp));
    ASSERT_EQ(S_OK,gTestRSS::pLW->GetRssTitle(strTmp));
    ASSERT_EQ(S_OK,gTestRSS::pLW->GetItemInfo());
    ASSERT_EQ(S_OK,gTestRSS::pLW->GetItemCount(tmpCount));
    ASSERT_EQ(S_OK,gTestRSS::pLW->GetItemAuthor(tmpCount - 1,strTmp));
    ASSERT_EQ(S_OK,gTestRSS::pLW->GetItemDate(tmpCount - 1,strTmp));
    ASSERT_EQ(S_OK,gTestRSS::pLW->GetItemLink(tmpCount - 1,strTmp));
    ASSERT_EQ(S_OK,gTestRSS::pLW->GetItemTitle(tmpCount - 1,strTmp));
}

int _tmain(int argc, _TCHAR* argv[])
{
    testing::GTEST_FLAG(output) = "xml:TestResult.xml";
    testing::InitGoogleTest(&argc,argv);
    return RUN_ALL_TESTS();
}
