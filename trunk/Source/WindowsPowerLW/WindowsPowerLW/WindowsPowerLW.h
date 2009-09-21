//////////////////////////////////////////////////////////
///
/// @file      WindowsPowerLW.h
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
#pragma once
#include <Windows.h>
#include <WinBase.h>
#include <powrprof.h>
#include <iostream>
using namespace std;
#pragma comment (lib,"powrprof.lib")
/// @struct _SYSTEM_POWER_INFORMATION
/// @brief ϵͳ��Դ��Ϣ��������ʱδʹ��
typedef struct _SYSTEM_POWER_INFORMATION {
    ULONG MaxIdlenessAllowed;
    ULONG Idleness;
    ULONG TimeRemaining;
    UCHAR CoolingMode;
} SYSTEM_POWER_INFORMATION,
*PSYSTEM_POWER_INFORMATION;
/// @def PWR_NEVER
/// ��Դʹ�����õ�Ĭ��ʱ�����
#define PWR_NEVER 0
/// @def UNREFERENCED
/// δʹ�õĲ���
#undef UNREFERENCED
#define UNREFERENCED(x)     x
/// @class WindowsPowerLW
/// @brief ��װ��Windows Power management��֧�ֵ�Դ״̬��ȡ�͵�Դʹ�÷�������
class WindowsPowerLW
{
public:
    WindowsPowerLW(void);
    ~WindowsPowerLW(void);

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
    HRESULT GetCurrentPowerScheme(
        __out UINT& nIndex, 
        __out POWER_POLICY& PwrPolicy,
        __out SYSTEM_POWER_STATUS &SystemPowerStatus
        );

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
    HRESULT CanUserWritePowerScheme(
        __out bool* cuwpsFlag
        );

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
    HRESULT GetSuspendTime(
        __out ULONG& nStandby,
        __out ULONG& nHibernate,
        __in POWER_POLICY pwrPolicy,
        __in SYSTEM_POWER_STATUS SystemPowerStatus
        );

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
    HRESULT GetVideoOffTime(
        __out ULONG& nVideoOffTime,
        __in POWER_POLICY pwrPolicy,
        __in SYSTEM_POWER_STATUS SystemPowerStatus
        );

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
    HRESULT GetDiskSpindownTime(
        __out ULONG& nSpindownTime,
        __in POWER_POLICY pwrPolicy,
        __in SYSTEM_POWER_STATUS SystemPowerStatus
        );

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