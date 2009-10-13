// Xcover.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "WindowsPowerLW.h"
#include <xcover/xcover.h>
using namespace xcover;

int main_(int argc, char** argv)
{
    WindowsPowerLW *pLW         = new WindowsPowerLW();
    ULONG nStandby          = 0;                       /// 待机时间
    ULONG nHibernate        = 0;                       /// 休眠时间
    ULONG nVideoOffTime     = 0;                       /// 关闭监视器时间
    ULONG nSpindownTime     = 0;                       /// 关闭硬盘时间
    bool flag               = false;                   /// 读写权限标志
    Xcover_init();
    pLW->GetCurrentPowerScheme();
    pLW->CanUserWritePowerScheme(&flag);
    pLW->GetDiskSpindownTime(nSpindownTime);
    pLW->GetSuspendTime(nStandby,nHibernate);
    pLW->GetVideoOffTime(nVideoOffTime);
    pLW->UpdateCurrentPowerScheme(120,300,120,120);
    pLW->UpdateCurrentPowerScheme(300,120,120,120);
    pLW->UpdateCurrentPowerScheme(0,120,120,120);
    pLW->UpdateCurrentPowerScheme();
    delete pLW;
    XCOVER_REPORT_FILE_COVERAGE("WindowsPowerLW.cpp",NULL);
    return EXIT_SUCCESS;
}
int main(int argc, char** argv)
{
    int res = xcover_init();

    if(res < 0)
    {
        fprintf(stderr, "failed to initialise xCover library: %d\n", res);
    }
    else
    {
        res = main_(argc, argv);

        xcover_uninit();

        return res;
    }

    return EXIT_FAILURE;
}

