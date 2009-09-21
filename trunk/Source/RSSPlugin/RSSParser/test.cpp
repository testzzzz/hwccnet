#include "RSSParser.h"
#include "RssError.h"
#include "RssGlobal.h"
#include <iostream>
using namespace std;

int main(
    int argc,
    char* argv[]
    )
{
    UNREFERENCED(argc);
    UNREFERENCED(argv);

    CoInitialize(NULL);
    HRESULT hr = S_OK;
    RSSLW rss;
    hr = rss.InitParser();
    if (FAILED(hr))
    {
        cout<<"init error"<<endl;
        return 0;
    }
    hr = rss.SetParser(L"http://rss.sina.com.cn/sports/global/italy.xml");
    if (FAILED(hr))
    {
        cout<<"set error"<<endl;
        return 0;
    }
    hr = rss.StartParser();
    if (FAILED(hr))
    {
        cout<<"Start error"<<endl;
        return 0;
    }
    hr = rss.GetChannelInfo();
    if (FAILED(hr))
    {
        cout<<"getchannel error"<<endl;
        return 0;
    }
    hr = rss.GetItemInfo();
    if (FAILED(hr))
    {
        cout<<"getitem error"<<endl;
        return 0;
    }
/*    LPWSTR title = 0;
    LPWSTR date = 0;
    hr = rss.GetRssTitle(title);
    if (FAILED(hr))
    {
        cout<<"没有数据"<<endl;
    }
    else
    {
        wcout<<title<<endl;
        SysFreeString(title);
    }
    
/*    hr = rss.GetRssDate(date);
    if (FAILED(hr))
    {
        cout<<"没有数据"<<endl;
    }
    else
    {
        cout<<date<<endl;
        delete date;
    }

    long cnt = 0;
    rss.GetItemCount(cnt);


    for (int i = 0; i < cnt; i++)
    {
        char* strTitle = 0;
        char* strAuthor = 0;
        char* strDate = 0;
        char* strLink = 0;
        hr = rss.GetItemTitle(i, strTitle);
        if (FAILED(hr))
        {
            cout<<"没有数据 "<<endl;
        }
        else
        {
            cout<<"标题: "<<strTitle<<endl;
        }

        hr = rss.GetItemAuthor(i, strAuthor);
        if (FAILED(hr))
        {
            cout<<"没有数据 "<<endl;
        }
        else
        {
            cout<<"作者: "<<strAuthor<<endl;
        }

        hr = rss.GetItemDate(i, strDate);
        if (FAILED(hr))
        {
            cout<<"没有数据 "<<endl;
        }
        else
        {
            cout<<"日期: "<<strDate<<endl;
        }

        hr = rss.GetItemLink(i, strLink);
        if (FAILED(hr))
        {
            cout<<"没有数据 "<<endl;
        }
        else
        {
            cout<<"链接: "<<strLink<<endl;
        }

        delete strTitle;
        delete strAuthor;
        delete strDate;
        delete strLink;

    }

    rss.UninitParser();*/

    CoUninitialize();
    return 0;
}