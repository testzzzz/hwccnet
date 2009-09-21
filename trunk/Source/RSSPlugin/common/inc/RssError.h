//////////////////////////////////////////////////////////
///
/// @file      RSSError.h
///
/// @brief     定义了一些错误代码
///
/// @version   1.0
///
/// @author    姜松
///
/// @date      2009-02-26
/// 
/// <修改日期>      <修改者>        <修改描述>\n
///
////////////////////////////////////////////////////////////
#ifndef RSS_ERROR__H
#define RSS_ERROR__H

#pragma once

//
// Error code 标准，借鉴于windows错误定义 0x00000000 winerror.h
// 0x x  xxx xxxx 
// 第一部分: 错误的类型 0x8 - 错误 0x4-警告 0x0 正确
// 第二部分: 模块类型
// 第三部?? --
//

//==================================================================//
//
// 定义模块类型
//
#define MODULE_COMMON           0x001
#define MODULE_TAOBAO_HANDLER   0x002
#define MODULE_RESOURCE_MANAGER 0x003

//
// 消息Id: TKD_SUCCESS
//
// 消息描述:
//
//   正确操作.
#define RSS_SUCCESS             0x00000000


//
//
// 通用模块错误代码区域
//

//
// 消息Id: COMMON_ALLOC_FAILED
//
// 消息描述:
//
//   申请内存失败.
#define COMMON_ALLOC_FAILED         0x80010001

//
// 消息Id: COMMON_INVALID_PARAMETER
//
// 消息描述:
//
//   错误的参数.
#define COMMON_INVALID_PARAMETER    0x80010002

//
// 消息Id: COMMON_INVALID_POINTER
//
// 消息描述:
//
//   错误的参数.
#define COMMON_INVALID_POINTER      0x80010003

//
// Message Id: COMMON_INVALID_POINTER
//
// Message Description:
//
//   Invalid handle
#define COMMON_INVALID_HANDLE       0x80010004

//
// 消息Id: TAOBAO_INVALID_USER
//
// 消息描述:
//
//   错误的参数.
#define TAOBAO_INVALID_USER	        0x80020001

//
// 消息Id: HTTP_INVALID_SESSION
//
// 消息描述:
//
//   创建Http的会话失败
#define HTTP_INVALID_SESSION        0x80030001

//
// 消息Id: HTTP_INVALID_CONNECT
//
// 消息描述:
//
//   创建Http的连接失败
#define HTTP_INVALID_CONNECT        0x80030002

//
// 消息Id: HTTP_INVALID_CONNECT
//
// 消息描述:
//
//   发送请求失败
#define HTTP_INVALID_REQUEST        0x80030003

//
// 消息Id: HTTP_INVALID_CONNECT
//
// 消息描述:
//
//   发送请求失败
#define HTTP_SEND_REQUEST           0x80030004

//
// 消息Id: HTTP_RECEIVE_REQUEST
//
// 消息描述:
//
//   发送请求失败
#define HTTP_RECEIVE_REQUEST        0x80030005

//
// 消息Id: ERROR_RSS_NODATE
//
// 消息描述:
//
//   没有要查询的RSS数据
#define RSS_NODATE                  0x80030006

#endif // RSS_ERROR__H