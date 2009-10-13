//////////////////////////////////////////////////////////
///
/// @file      WindowsPowerLW.cpp
///
/// @brief     封装了windows power managementd 的一些函数，定义了一些错误代码
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

WindowsPowerLW::WindowsPowerLW(void)
: nIndex(0)
{
}

WindowsPowerLW::~WindowsPowerLW(void)
{
}

////////////////////////////////////////////////////////////
///
/// @brief 获取当前Windows下的电源使用方案，和电源的情况
///
/// @param __out UINT& nIndex                             当前正在使用的Power scheme的索引
/// @param __out POWER_POLICY& PwrPolicy                  电源策略的结构体
/// @param __out SYSTEM_POWER_STATUS &systemPowerStatus   系统电源/电池状态
///
/// @return HRESULT
///
/// @retval S_OK 正常返回
/// @retval 通过GetLastError()返回
///
////////////////////////////////////////////////////////////
HRESULT WindowsPowerLW::GetCurrentPowerScheme()
{
    memset(&pwrPolicy,0,sizeof(POWER_POLICY));
    //得到当前正在使用的Power Scheme的索引 
    if (!GetActivePwrScheme(&nIndex))
    {
        return HRESULT_FROM_WIN32(::GetLastError());
    }
    if (!ReadPwrScheme(nIndex,&pwrPolicy))
    {
        return HRESULT_FROM_WIN32(::GetLastError());
    }
    //得到电源情况
    if (!GetSystemPowerStatus(&SystemPowerStatus))
    {
        return HRESULT_FROM_WIN32(GetLastError());
    }
    return S_OK;
}

////////////////////////////////////////////////////////////
///
/// @brief 获取当前Windows是否有修改电源使用方案的权限
///
/// @param __out bool* cuwpsFlag           - 权限标志
///
/// @return HRESULT
///
/// @retval S_OK 正常返回
/// @retval 通过GetLastError()返回
///
////////////////////////////////////////////////////////////
HRESULT WindowsPowerLW::CanUserWritePowerScheme(
    __out bool* cuwpsFlag
    )
{
    *cuwpsFlag = true;
    if (!CanUserWritePwrScheme())
    {
        *cuwpsFlag = false;
    }
    return S_OK;
}

////////////////////////////////////////////////////////////
///
/// @brief 获取当前Windows下的电源使用方案的待机时间
///
/// @param __out ULONG& nStandby                         系统挂起时间
/// @param __out ULONG& nHibernate                       系统休眠时间
/// @param __in POWER_POLICY& PwrPolicy                  电源策略的结构体
/// @param __in SYSTEM_POWER_STATUS systemPowerStatus    系统电源/电池状态
///
/// @return HRESULT
///
/// @retval S_OK 正常返回
/// @retval 通过GetLastError()返回
///
////////////////////////////////////////////////////////////
HRESULT WindowsPowerLW::GetSuspendTime(
    __out ULONG& nStandby,
    __out ULONG& nHibernate
    )
{
    if (SystemPowerStatus.ACLineStatus)
    {
        nStandby = pwrPolicy.user.IdleTimeoutAc;
        nHibernate = pwrPolicy.user.IdleTimeoutAc + pwrPolicy.mach.DozeS4TimeoutAc;
    }
    else
    {
        nStandby = pwrPolicy.user.IdleTimeoutDc;
        nHibernate = pwrPolicy.user.IdleTimeoutDc + pwrPolicy.mach.DozeS4TimeoutDc;
    }

    return S_OK;
}

////////////////////////////////////////////////////////////
///
/// @brief 获取当前Windows下的电源使用方案的关闭监视器时间
///
/// @param __out ULONG& nVideoOffTime                    关闭监视器时间
/// @param __in POWER_POLICY& PwrPolicy                  电源策略的结构体
/// @param __in SYSTEM_POWER_STATUS systemPowerStatus    系统电源/电池状态
///
/// @return HRESULT
///
/// @retval S_OK 正常返回
/// @retval 通过GetLastError()返回
///
////////////////////////////////////////////////////////////
HRESULT WindowsPowerLW::GetVideoOffTime(
    __out ULONG& nVideoOffTime
    )
{
    if (SystemPowerStatus.ACLineStatus)
    {
        nVideoOffTime = pwrPolicy.user.VideoTimeoutAc;
    }
    else
    {
        nVideoOffTime = pwrPolicy.user.VideoTimeoutDc;
    }
    return S_OK;
}

////////////////////////////////////////////////////////////
///
/// @brief 获取当前Windows下的电源使用方案的关闭硬盘时间
///
/// @param __out ULONG& nSpindownTime                    关闭硬盘时间
/// @param __in POWER_POLICY& PwrPolicy                  电源策略的结构体
/// @param __in SYSTEM_POWER_STATUS systemPowerStatus    系统电源/电池状态
///
/// @return HRESULT
///
/// @retval S_OK 正常返回
/// @retval 通过GetLastError()返回
///
////////////////////////////////////////////////////////////
HRESULT WindowsPowerLW::GetDiskSpindownTime(
    __out ULONG &nSpindowTime
    )
{
    if (SystemPowerStatus.ACLineStatus)
    {
        nSpindowTime = pwrPolicy.user.SpindownTimeoutAc;
    }
    else
    {
        nSpindowTime = pwrPolicy.user.SpindownTimeoutDc;
    }
    return S_OK;
}

////////////////////////////////////////////////////////////
///
/// @brief 设置当前Windows下的电源使用方案
///
/// @param __in ULONG nStandby = PWR_NEVER               系统挂起时间，默认值为0
/// @param __in ULONG nHibernate = PWR_NEVER             系统待机时间，默认值为0
/// @param __in ULONG& nSpindownTime = PWR_NEVER         关闭硬盘时间，默认值为0
/// @param __in ULONG nVedioOffTime = PWR_NEVER          关闭监视器时间，默认值为0
///
/// @return HRESULT
///
/// @retval S_OK 正常返回
/// @retval 通过GetLastError()返回
///
////////////////////////////////////////////////////////////
HRESULT WindowsPowerLW::UpdateCurrentPowerScheme(
    __in ULONG nStandby,
    __in ULONG nHibernate,
    __in ULONG nSpindowTime,
    __in ULONG nVideoOffTime
    )
{
    /// 分为直流电源和交流电源
    if (SystemPowerStatus.ACLineStatus)                              /// 交流电源
    {
        if (!nStandby && !nHibernate)
        {
            pwrPolicy.user.IdleTimeoutAc   = 0;
            pwrPolicy.mach.DozeS4TimeoutAc = 0;
            pwrPolicy.user.IdleAc.Action   = PowerActionNone;
        }
        else if (!nStandby && nHibernate)
        {
            pwrPolicy.user.IdleTimeoutAc   = nHibernate;
            pwrPolicy.mach.DozeS4TimeoutAc = 0;
            pwrPolicy.user.IdleAc.Action   = PowerActionHibernate;
        }
        else
        {
            pwrPolicy.user.IdleTimeoutAc   = nStandby;
            pwrPolicy.mach.DozeS4TimeoutAc = 0;
            if (nHibernate > nStandby)
            {
                pwrPolicy.mach.DozeS4TimeoutAc = nHibernate - nStandby;
            }
            pwrPolicy.user.IdleAc.Action   = PowerActionSleep;
        }
        pwrPolicy.user.SpindownTimeoutAc = nSpindowTime;
        pwrPolicy.user.VideoTimeoutAc    = nVideoOffTime;
    }
    else                                                           /// 直流电源
    {
        if (!nStandby && !nHibernate)
        {
            pwrPolicy.user.IdleTimeoutDc   = 0;
            pwrPolicy.mach.DozeS4TimeoutDc = 0;
            pwrPolicy.user.IdleDc.Action   = PowerActionNone;
        }
        else if (!nStandby && nHibernate)
        {
            pwrPolicy.user.IdleTimeoutDc   = nHibernate;
            pwrPolicy.mach.DozeS4TimeoutDc = 0;
            pwrPolicy.user.IdleDc.Action   = PowerActionHibernate;
        }
        else
        {
            pwrPolicy.user.IdleTimeoutDc   = nStandby;
            pwrPolicy.mach.DozeS4TimeoutDc = 0;
            if (nHibernate > nStandby)
            {
                pwrPolicy.mach.DozeS4TimeoutDc = nHibernate - nStandby;
            }
            pwrPolicy.user.IdleDc.Action   = PowerActionSleep;
        }
        pwrPolicy.user.SpindownTimeoutDc   = nSpindowTime;
        pwrPolicy.user.VideoTimeoutDc      = nVideoOffTime;
    }
    if (!SetActivePwrScheme(nIndex,NULL,&pwrPolicy))
    {
        return HRESULT_FROM_WIN32(GetLastError());
    }
    return S_OK;
}
