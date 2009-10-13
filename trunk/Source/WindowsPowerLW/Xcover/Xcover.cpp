// Xcover.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "WindowsPowerLW.h"
#include <xcover/xcover.h>
using namespace xcover;

int main_(int argc, char** argv)
{
    WindowsPowerLW *pLW         = new WindowsPowerLW();
    ULONG nStandby          = 0;                       /// ����ʱ��
    ULONG nHibernate        = 0;                       /// ����ʱ��
    ULONG nVideoOffTime     = 0;                       /// �رռ�����ʱ��
    ULONG nSpindownTime     = 0;                       /// �ر�Ӳ��ʱ��
    bool flag               = false;                   /// ��дȨ�ޱ�־
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

