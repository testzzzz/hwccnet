// LWC.h : 宏定义文件
//
//==================================================================//
//
// 版权所有: 乐为软件
//
// 文件名称: LWC.h
//
// 文件描述: 包含的头文件
//
// 版本信息: 1.0
//
// 作    者: 甘先志
//
// 开发日期: 2009-07-14
//
// 备注信息: 
//
// 修改记录: 
// 修改日期      修改者   修改内容描述
// 2009-07-14     游枭    增加宏定义DIV_ZERO，错误地址
// 2009-07-17	  游枭	  增加宏定义UNREFERENCED
//------------------------------------------------------------
//
//==================================================================//

#ifndef _KEY_H_
#define _KEY_H_

typedef enum
{
    LWK_0,
    LWK_1,
    LWK_2,
    LWK_3,
    LWK_4,
    LWK_5,
    LWK_6,
    LWK_7,
    LWK_8,
    LWK_9,
    LWK_C,
    LWK_CE,
    LWK_D,
    LWK_ADD,
    LWK_SUB,
    LWK_MUL,
    LWK_DIV,
    LWK_EQU,
    LWK_REV
}LW_KEY;

#define DIV_ZERO    _HRESULT_TYPEDEF_(0x80020001L)

#define UNREFERENCED(x)     x

#endif 