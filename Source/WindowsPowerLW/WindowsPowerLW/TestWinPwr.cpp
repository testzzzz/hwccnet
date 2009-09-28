//////////////////////////////////////////////////////////
///
/// @file      TestWinPwr.cpp 
///
/// @brief     调用WindowsPowerLW类中的函数，实现查看和修改电源使用方案，这是个测试程序
///
/// @version   1.0
///
/// @author    甘先志
///
/// @date      2009-09-16
/// 
/// <修改日期>      <修改者>        <修改描述>\n
///  2009-09-16      甘先志            创建
///  2009-09-17      甘先志        完善注释和部分功能
///
////////////////////////////////////////////////////////////
#include "WindowsPowerLW.h"
////////////////////////////////////////////////////////////
///
/// @brief 获取当前Windows下的电源使用方案，和电源的情况
///
/// @param int argc        -未使用
/// @param char* argv[]    -未使用
///
/// @return int
///
/// @retval 0 正常系统
///
////////////////////////////////////////////////////////////
int main(int argc,char*argv[])
{
    UNREFERENCED(argc);
    UNREFERENCED(argv);

    HRESULT Error = S_OK;
    WindowsPowerLW *pWinPwrLW = new WindowsPowerLW();
//     UINT nIndex = 0;                                          ///< 电源使用方案索引
//     POWER_POLICY pwrPolicy;                                   ///< 系统电源使用方案
//     SYSTEM_POWER_STATUS SystemPowerStatus;                    ///< 系统电源状态

    bool cuwpsFlag = true;
    Error = pWinPwrLW->CanUserWritePowerScheme(&cuwpsFlag);
    if (FAILED(Error))
    {
        cout << "CanUserWritePowerScheme Error " << endl;
        goto exit;
    }
    if (!cuwpsFlag)
    {
        cout << "cannot Write power scheme! " <<endl;
        goto exit;
    }

    Error = pWinPwrLW->GetCurrentPowerScheme();
    if (FAILED(Error))
    {
        cout << "GetCurrentPowerScheme Error " << endl;
       goto exit;
    }

    pWinPwrLW->UpdateCurrentPowerScheme(0,0,0,0);
    Error = pWinPwrLW->GetCurrentPowerScheme(
        );
    if (FAILED(Error))
    {
        cout << "GetCurrentPowerScheme Error " << endl;
        return 0;
    }

    ULONG nStandby          = 0;
    ULONG nHibernate        = 0;
    ULONG nVideoOffTime     = 0;
    ULONG nSpindownTime     = 0;

    Error = pWinPwrLW->GetSuspendTime(
        nStandby,
        nHibernate
        );
    if (FAILED(Error))
    {
        cout << "GetSuspendTime Error " << endl;
        goto exit;
    }

    Error = pWinPwrLW->GetDiskSpindownTime(
        nSpindownTime
        );
    if (FAILED(Error))
    {
        cout << "GetDiskSpindownTime Error" << endl;
        goto exit;
    }

    Error = pWinPwrLW->GetVideoOffTime(
        nVideoOffTime
        );
    if (FAILED(Error))
    {
        cout << "GetVideoOffTime Error" << endl;
        goto exit;
    }

    cout << "nStandby = " << nStandby << "\n"
         << "nHibernate = " << nHibernate << "\n"
         << "nSpindownTime = " << nSpindownTime << "\n"
         << "nVideoOffTime = " << nVideoOffTime << "\n";

exit:
    system("pause");
    return 0;
}