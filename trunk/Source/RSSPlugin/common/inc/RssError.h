//////////////////////////////////////////////////////////
///
/// @file      RSSError.h
///
/// @brief     ������һЩ�������
///
/// @version   1.0
///
/// @author    ����
///
/// @date      2009-02-26
/// 
/// <�޸�����>      <�޸���>        <�޸�����>\n
///
////////////////////////////////////////////////////////////
#ifndef RSS_ERROR__H
#define RSS_ERROR__H

#pragma once

//
// Error code ��׼�������windows������ 0x00000000 winerror.h
// 0x x  xxx xxxx 
// ��һ����: ��������� 0x8 - ���� 0x4-���� 0x0 ��ȷ
// �ڶ�����: ģ������
// ������?? --
//

//==================================================================//
//
// ����ģ������
//
#define MODULE_COMMON           0x001
#define MODULE_TAOBAO_HANDLER   0x002
#define MODULE_RESOURCE_MANAGER 0x003

//
// ��ϢId: TKD_SUCCESS
//
// ��Ϣ����:
//
//   ��ȷ����.
#define RSS_SUCCESS             0x00000000


//
//
// ͨ��ģ������������
//

//
// ��ϢId: COMMON_ALLOC_FAILED
//
// ��Ϣ����:
//
//   �����ڴ�ʧ��.
#define COMMON_ALLOC_FAILED         0x80010001

//
// ��ϢId: COMMON_INVALID_PARAMETER
//
// ��Ϣ����:
//
//   ����Ĳ���.
#define COMMON_INVALID_PARAMETER    0x80010002

//
// ��ϢId: COMMON_INVALID_POINTER
//
// ��Ϣ����:
//
//   ����Ĳ���.
#define COMMON_INVALID_POINTER      0x80010003

//
// Message Id: COMMON_INVALID_POINTER
//
// Message Description:
//
//   Invalid handle
#define COMMON_INVALID_HANDLE       0x80010004

//
// ��ϢId: TAOBAO_INVALID_USER
//
// ��Ϣ����:
//
//   ����Ĳ���.
#define TAOBAO_INVALID_USER	        0x80020001

//
// ��ϢId: HTTP_INVALID_SESSION
//
// ��Ϣ����:
//
//   ����Http�ĻỰʧ��
#define HTTP_INVALID_SESSION        0x80030001

//
// ��ϢId: HTTP_INVALID_CONNECT
//
// ��Ϣ����:
//
//   ����Http������ʧ��
#define HTTP_INVALID_CONNECT        0x80030002

//
// ��ϢId: HTTP_INVALID_CONNECT
//
// ��Ϣ����:
//
//   ��������ʧ��
#define HTTP_INVALID_REQUEST        0x80030003

//
// ��ϢId: HTTP_INVALID_CONNECT
//
// ��Ϣ����:
//
//   ��������ʧ��
#define HTTP_SEND_REQUEST           0x80030004

//
// ��ϢId: HTTP_RECEIVE_REQUEST
//
// ��Ϣ����:
//
//   ��������ʧ��
#define HTTP_RECEIVE_REQUEST        0x80030005

//
// ��ϢId: ERROR_RSS_NODATE
//
// ��Ϣ����:
//
//   û��Ҫ��ѯ��RSS����
#define RSS_NODATE                  0x80030006

#endif // RSS_ERROR__H