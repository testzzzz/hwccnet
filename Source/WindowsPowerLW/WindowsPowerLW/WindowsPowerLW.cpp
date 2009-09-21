//////////////////////////////////////////////////////////
///
/// @file      WindowsPowerLW.cpp
///
/// @brief     ��װ��windows power managementd ��һЩ������������һЩ�������
///
/// @version   1.0
///
/// @author    ����־
///
/// @date      2009-09-16
/// 
/// <�޸�����>      <�޸���>        <�޸�����>\n
///  2009-09-16      ����־            ����
///  2009-09-17      ����־        ����ע�ͺͲ��ֹ���
///
////////////////////////////////////////////////////////////
#include "WindowsPowerLW.h"

WindowsPowerLW::WindowsPowerLW(void)
{
}

WindowsPowerLW::~WindowsPowerLW(void)
{
}

////////////////////////////////////////////////////////////
///
/// @brief ��ȡ��ǰWindows�µĵ�Դʹ�÷������͵�Դ�����
///
/// @param __out UINT& nIndex                             ��ǰ����ʹ�õ�Power scheme������
/// @param __out POWER_POLICY& PwrPolicy                  ��Դ���ԵĽṹ��
/// @param __out SYSTEM_POWER_STATUS &systemPowerStatus   ϵͳ��Դ/���״̬
///
/// @return HRESULT
///
/// @retval S_OK ��������
/// @retval ͨ��GetLastError()����
///
////////////////////////////////////////////////////////////
HRESULT WindowsPowerLW::GetCurrentPowerScheme(
    __out UINT& nIndex, 
    __out POWER_POLICY& PwrPolicy,
    __out SYSTEM_POWER_STATUS &SystemPowerStatus
    )
{
    memset(&PwrPolicy,NULL,sizeof(POWER_POLICY));
    //�õ���ǰ����ʹ�õ�Power Scheme������ 

    if (!GetActivePwrScheme(&nIndex))
    {
        return HRESULT_FROM_WIN32(::GetLastError());
    }
    if (!ReadPwrScheme(nIndex,&PwrPolicy))
    {
        return HRESULT_FROM_WIN32(::GetLastError());
    }
    //�õ���Դ���
    if (!GetSystemPowerStatus(&SystemPowerStatus))
    {
        return HRESULT_FROM_WIN32(GetLastError());
    }
    return S_OK;
}

////////////////////////////////////////////////////////////
///
/// @brief ��ȡ��ǰWindows�Ƿ����޸ĵ�Դʹ�÷�����Ȩ��
///
/// @param __out bool* cuwpsFlag           - Ȩ�ޱ�־
///
/// @return HRESULT
///
/// @retval S_OK ��������
/// @retval ͨ��GetLastError()����
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
/// @brief ��ȡ��ǰWindows�µĵ�Դʹ�÷����Ĵ���ʱ��
///
/// @param __out ULONG& nStandby                         ϵͳ����ʱ��
/// @param __out ULONG& nHibernate                       ϵͳ����ʱ��
/// @param __in POWER_POLICY& PwrPolicy                  ��Դ���ԵĽṹ��
/// @param __in SYSTEM_POWER_STATUS systemPowerStatus    ϵͳ��Դ/���״̬
///
/// @return HRESULT
///
/// @retval S_OK ��������
/// @retval ͨ��GetLastError()����
///
////////////////////////////////////////////////////////////
HRESULT WindowsPowerLW::GetSuspendTime(
    __out ULONG& nStandby,
    __out ULONG& nHibernate,
    __in POWER_POLICY pwrPolicy,
    __in SYSTEM_POWER_STATUS SystemPowerStatus
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
/// @brief ��ȡ��ǰWindows�µĵ�Դʹ�÷����Ĺرռ�����ʱ��
///
/// @param __out ULONG& nVideoOffTime                    �رռ�����ʱ��
/// @param __in POWER_POLICY& PwrPolicy                  ��Դ���ԵĽṹ��
/// @param __in SYSTEM_POWER_STATUS systemPowerStatus    ϵͳ��Դ/���״̬
///
/// @return HRESULT
///
/// @retval S_OK ��������
/// @retval ͨ��GetLastError()����
///
////////////////////////////////////////////////////////////
HRESULT WindowsPowerLW::GetVideoOffTime(
    __out ULONG& nVideoOffTime,
    __in POWER_POLICY pwrPolicy,
    __in SYSTEM_POWER_STATUS SysPowerStatus
    )
{
    if (SysPowerStatus.ACLineStatus)
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
/// @brief ��ȡ��ǰWindows�µĵ�Դʹ�÷����Ĺر�Ӳ��ʱ��
///
/// @param __out ULONG& nSpindownTime                    �ر�Ӳ��ʱ��
/// @param __in POWER_POLICY& PwrPolicy                  ��Դ���ԵĽṹ��
/// @param __in SYSTEM_POWER_STATUS systemPowerStatus    ϵͳ��Դ/���״̬
///
/// @return HRESULT
///
/// @retval S_OK ��������
/// @retval ͨ��GetLastError()����
///
////////////////////////////////////////////////////////////
HRESULT WindowsPowerLW::GetDiskSpindownTime(
    __out ULONG &nSpindowTime,
    __in POWER_POLICY pwrPolicy,
    __in SYSTEM_POWER_STATUS SystemPowrStatus
    )
{
    if (SystemPowrStatus.ACLineStatus)
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
/// @brief ���õ�ǰWindows�µĵ�Դʹ�÷���
///
/// @param __in UINT nIndex                              ��ǰ��Դʹ�÷���������
/// @param __in POWER_POLICY& PwrPolicy                  ��Դ���ԵĽṹ��
/// @param __in SYSTEM_POWER_STATUS systemPowerStatus    ϵͳ��Դ/���״̬
/// @param __in ULONG nStandby = PWR_NEVER               ϵͳ����ʱ�䣬Ĭ��ֵΪ0
/// @param __in ULONG nHibernate = PWR_NEVER             ϵͳ����ʱ�䣬Ĭ��ֵΪ0
/// @param __in ULONG& nSpindownTime = PWR_NEVER         �ر�Ӳ��ʱ�䣬Ĭ��ֵΪ0
/// @param __in ULONG nVedioOffTime = PWR_NEVER          �رռ�����ʱ�䣬Ĭ��ֵΪ0
///
/// @return HRESULT
///
/// @retval S_OK ��������
/// @retval ͨ��GetLastError()����
///
////////////////////////////////////////////////////////////
HRESULT WindowsPowerLW::UpdateCurrentPowerScheme(
    __in UINT nIndex,
    __in POWER_POLICY pwrPolicy,
    __in SYSTEM_POWER_STATUS SystemPowerStatus,
    __in ULONG nStandby,
    __in ULONG nHibernate,
    __in ULONG nSpindowTime,
    __in ULONG nVideoOffTime
    )
{
    /// ��Ϊֱ����Դ�ͽ�����Դ
    if (SystemPowerStatus.ACLineStatus)                              /// ������Դ
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
    else                                                           /// ֱ����Դ
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
