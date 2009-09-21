//////////////////////////////////////////////////////////
///
/// @file      WindowsPowerLW.h
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
#pragma once
#include <Windows.h>
#include <WinBase.h>
#include <powrprof.h>
#include <iostream>
using namespace std;
#pragma comment (lib,"powrprof.lib")
/// @struct _SYSTEM_POWER_INFORMATION
/// @brief 系统电源信息，类中暂时未使用
typedef struct _SYSTEM_POWER_INFORMATION {
    ULONG MaxIdlenessAllowed;
    ULONG Idleness;
    ULONG TimeRemaining;
    UCHAR CoolingMode;
} SYSTEM_POWER_INFORMATION,
*PSYSTEM_POWER_INFORMATION;
/// @def PWR_NEVER
/// 电源使用设置的默认时间参数
#define PWR_NEVER 0
/// @def UNREFERENCED
/// 未使用的参数
#undef UNREFERENCED
#define UNREFERENCED(x)     x
/// @class WindowsPowerLW
/// @brief 封装了Windows Power management，支持电源状态获取和电源使用方案设置
class WindowsPowerLW
{
public:
    WindowsPowerLW(void);
    ~WindowsPowerLW(void);

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
    HRESULT GetCurrentPowerScheme(
        __out UINT& nIndex, 
        __out POWER_POLICY& PwrPolicy,
        __out SYSTEM_POWER_STATUS &SystemPowerStatus
        );

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
    HRESULT CanUserWritePowerScheme(
        __out bool* cuwpsFlag
        );

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
    HRESULT GetSuspendTime(
        __out ULONG& nStandby,
        __out ULONG& nHibernate,
        __in POWER_POLICY pwrPolicy,
        __in SYSTEM_POWER_STATUS SystemPowerStatus
        );

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
    HRESULT GetVideoOffTime(
        __out ULONG& nVideoOffTime,
        __in POWER_POLICY pwrPolicy,
        __in SYSTEM_POWER_STATUS SystemPowerStatus
        );

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
    HRESULT GetDiskSpindownTime(
        __out ULONG& nSpindownTime,
        __in POWER_POLICY pwrPolicy,
        __in SYSTEM_POWER_STATUS SystemPowerStatus
        );

    ////////////////////////////////////////////////////////////
    ///
    /// @brief 设置当前Windows下的电源使用方案
    ///
    /// @param __in UINT nIndex                              当前电源使用方案的索引
    /// @param __in POWER_POLICY& PwrPolicy                  电源策略的结构体
    /// @param __in SYSTEM_POWER_STATUS systemPowerStatus    系统电源/电池状态
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
    HRESULT UpdateCurrentPowerScheme( 
        __in UINT nIndex,
        __in POWER_POLICY pwrPolicy,
        __in SYSTEM_POWER_STATUS SystemPowerStatus,
        __in ULONG nStandby = PWR_NEVER,
        __in ULONG nHibernate = PWR_NEVER,
        __in ULONG nSpindownTime = PWR_NEVER,
        __in ULONG nVedioOffTime = PWR_NEVER
        );

private:
};