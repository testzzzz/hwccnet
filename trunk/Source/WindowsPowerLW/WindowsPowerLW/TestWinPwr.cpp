//////////////////////////////////////////////////////////
///
/// @file      TestWinPwr.cpp 
///
/// @brief     ����WindowsPowerLW���еĺ�����ʵ�ֲ鿴���޸ĵ�Դʹ�÷��������Ǹ����Գ���
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
////////////////////////////////////////////////////////////
///
/// @brief ��ȡ��ǰWindows�µĵ�Դʹ�÷������͵�Դ�����
///
/// @param int argc        -δʹ��
/// @param char* argv[]    -δʹ��
///
/// @return int
///
/// @retval 0 ����ϵͳ
///
////////////////////////////////////////////////////////////
int main(int argc,char*argv[])
{
    UNREFERENCED(argc);
    UNREFERENCED(argv);

    HRESULT Error = S_OK;
    WindowsPowerLW *pWinPwrLW = NULL;
    UINT nIndex = 0;                                          ///< ��Դʹ�÷�������
    POWER_POLICY pwrPolicy;                                   ///< ϵͳ��Դʹ�÷���
    SYSTEM_POWER_STATUS SystemPowerStatus;                    ///< ϵͳ��Դ״̬

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

    Error = pWinPwrLW->GetCurrentPowerScheme(
        nIndex,
        pwrPolicy,
        SystemPowerStatus
        );
    if (FAILED(Error))
    {
        cout << "GetCurrentPowerScheme Error " << endl;
       goto exit;
    }

//     pWinPwrLW->UpdateCurrentPowerScheme(nIndex,pwrPolicy,SystemPowerStatus,1200,3600,7200,3600);
//     Error = pWinPwrLW->GetCurrentPowerScheme(
//         nIndex,
//         pwrPolicy,
//         SystemPowerStatus
//         );
//     if (FAILED(Error))
//     {
//         cout << "GetCurrentPowerScheme Error " << endl;
//         return 0;
//     }

    ULONG nStandby          = 0;
    ULONG nHibernate        = 0;
    ULONG nVideoOffTime     = 0;
    ULONG nSpindownTime     = 0;

    Error = pWinPwrLW->GetSuspendTime(
        nStandby,
        nHibernate,
        pwrPolicy,
        SystemPowerStatus);
    if (FAILED(Error))
    {
        cout << "GetSuspendTime Error " << endl;
        goto exit;
    }

    Error = pWinPwrLW->GetDiskSpindownTime(
        nSpindownTime,
        pwrPolicy,
        SystemPowerStatus
        );
    if (FAILED(Error))
    {
        cout << "GetDiskSpindownTime Error" << endl;
        goto exit;
    }

    Error = pWinPwrLW->GetVideoOffTime(
        nVideoOffTime,
        pwrPolicy,
        SystemPowerStatus
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
    delete pWinPwrLW;
    system("pause");
    return 0;
}