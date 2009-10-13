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
#include "stdafx.h"
#include "WindowsPowerLW.h"
#include <xcover/xcover.h>

#if _DEBUG
#define   DEBUG_XCOVER_MARK_LINE  XCOVER_MARK_LINE()
#else
#define   DEBUG_XCOVER_MARK_LINE  
#endif
static void mark_file_start_(void)
{
    XCOVER_CREATE_FILE_ALIAS("windowspowerLW.cpp");
    /*    XCOVER_ASSOCIATE_FILE_WITH_GROUP("WindowsPower");*/
    XCOVER_MARK_FILE_START();
}
WindowsPowerLW::WindowsPowerLW(void)
: nIndex(0)
{
    DEBUG_XCOVER_MARK_LINE;
}

WindowsPowerLW::~WindowsPowerLW(void)
{
    DEBUG_XCOVER_MARK_LINE;
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
    DEBUG_XCOVER_MARK_LINE;
    memset(&pwrPolicy,0,sizeof(POWER_POLICY));
    //得到当前正在使用的Power Scheme的索引 
    if (!GetActivePwrScheme(&nIndex))
    {
        return HRESULT_FROM_WIN32(::GetLastError());
    }
    DEBUG_XCOVER_MARK_LINE;
    if (!ReadPwrScheme(nIndex,&pwrPolicy))
    {
        return HRESULT_FROM_WIN32(::GetLastError());
    }
    //得到电源情况
    DEBUG_XCOVER_MARK_LINE;
    if (!GetSystemPowerStatus(&SystemPowerStatus))
    {
        return HRESULT_FROM_WIN32(GetLastError());
    }
    DEBUG_XCOVER_MARK_LINE;
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
    DEBUG_XCOVER_MARK_LINE;
    *cuwpsFlag = true;
    if (!CanUserWritePwrScheme())
    {
        *cuwpsFlag = false;
    }
    DEBUG_XCOVER_MARK_LINE;
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
    DEBUG_XCOVER_MARK_LINE;
    if (SystemPowerStatus.ACLineStatus)
    {
        DEBUG_XCOVER_MARK_LINE;
        nStandby = pwrPolicy.user.IdleTimeoutAc;
        nHibernate = pwrPolicy.user.IdleTimeoutAc + pwrPolicy.mach.DozeS4TimeoutAc;
    }
    else
    {
        DEBUG_XCOVER_MARK_LINE;
        nStandby = pwrPolicy.user.IdleTimeoutDc;
        nHibernate = pwrPolicy.user.IdleTimeoutDc + pwrPolicy.mach.DozeS4TimeoutDc;
    }
    DEBUG_XCOVER_MARK_LINE;
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
    DEBUG_XCOVER_MARK_LINE;
    if (SystemPowerStatus.ACLineStatus)
    {
        DEBUG_XCOVER_MARK_LINE;
        nVideoOffTime = pwrPolicy.user.VideoTimeoutAc;
    }
    else
    {
        DEBUG_XCOVER_MARK_LINE;
        nVideoOffTime = pwrPolicy.user.VideoTimeoutDc;
    }
    DEBUG_XCOVER_MARK_LINE;
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
    DEBUG_XCOVER_MARK_LINE;
    if (SystemPowerStatus.ACLineStatus)
    {
        DEBUG_XCOVER_MARK_LINE;
        nSpindowTime = pwrPolicy.user.SpindownTimeoutAc;
    }
    else
    {
        DEBUG_XCOVER_MARK_LINE;
        nSpindowTime = pwrPolicy.user.SpindownTimeoutDc;
    }
    DEBUG_XCOVER_MARK_LINE;
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
    DEBUG_XCOVER_MARK_LINE;
    /// 分为直流电源和交流电源
    if (SystemPowerStatus.ACLineStatus)                              /// 交流电源
    {
        DEBUG_XCOVER_MARK_LINE;
        if (!nStandby && !nHibernate)
        {
            DEBUG_XCOVER_MARK_LINE;
            pwrPolicy.user.IdleTimeoutAc   = 0;
            pwrPolicy.mach.DozeS4TimeoutAc = 0;
            pwrPolicy.user.IdleAc.Action   = PowerActionNone;
        }
        else if (!nStandby && nHibernate)
        {
            DEBUG_XCOVER_MARK_LINE;
            pwrPolicy.user.IdleTimeoutAc   = nHibernate;
            pwrPolicy.mach.DozeS4TimeoutAc = 0;
            pwrPolicy.user.IdleAc.Action   = PowerActionHibernate;
        }
        else
        {
            DEBUG_XCOVER_MARK_LINE;
            pwrPolicy.user.IdleTimeoutAc   = nStandby;
            pwrPolicy.mach.DozeS4TimeoutAc = 0;
            if (nHibernate > nStandby)
            {
                DEBUG_XCOVER_MARK_LINE;
                pwrPolicy.mach.DozeS4TimeoutAc = nHibernate - nStandby;
            }
            pwrPolicy.user.IdleAc.Action   = PowerActionSleep;
        }
        pwrPolicy.user.SpindownTimeoutAc = nSpindowTime;
        pwrPolicy.user.VideoTimeoutAc    = nVideoOffTime;
    }
    else                                                           /// 直流电源
    {
        DEBUG_XCOVER_MARK_LINE;
        if (!nStandby && !nHibernate)
        {
            DEBUG_XCOVER_MARK_LINE;
            pwrPolicy.user.IdleTimeoutDc   = 0;
            pwrPolicy.mach.DozeS4TimeoutDc = 0;
            pwrPolicy.user.IdleDc.Action   = PowerActionNone;
        }
        else if (!nStandby && nHibernate)
        {
            DEBUG_XCOVER_MARK_LINE;
            pwrPolicy.user.IdleTimeoutDc   = nHibernate;
            pwrPolicy.mach.DozeS4TimeoutDc = 0;
            pwrPolicy.user.IdleDc.Action   = PowerActionHibernate;
        }
        else
        {
            DEBUG_XCOVER_MARK_LINE;
            pwrPolicy.user.IdleTimeoutDc   = nStandby;
            pwrPolicy.mach.DozeS4TimeoutDc = 0;
            if (nHibernate > nStandby)
            {
                DEBUG_XCOVER_MARK_LINE;
                pwrPolicy.mach.DozeS4TimeoutDc = nHibernate - nStandby;
            }
            pwrPolicy.user.IdleDc.Action   = PowerActionSleep;
        }
        pwrPolicy.user.SpindownTimeoutDc   = nSpindowTime;
        pwrPolicy.user.VideoTimeoutDc      = nVideoOffTime;
    }
    DEBUG_XCOVER_MARK_LINE;
    if (!SetActivePwrScheme(nIndex,NULL,&pwrPolicy))
    {
        return HRESULT_FROM_WIN32(GetLastError());
    }
    DEBUG_XCOVER_MARK_LINE;
    return S_OK;
}
int Xcover_init(void)
{
    mark_file_start_();
    mark_file_end_();
    DEBUG_XCOVER_MARK_LINE;
    return 0;
}
static void mark_file_end_(void)
{
    XCOVER_MARK_FILE_END();
}

