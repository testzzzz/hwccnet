//////////////////////////////////////////////////////////
///
/// @file      RSSGlobal.h
///
/// @brief     定义了一些错误退出和参数检测的宏
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
#ifndef RSS_GLOBAL__H
#define RSS_GLOBAL__H

#include <windows.h>
#include <stdio.h>

#define RESOURCE_SKIN           L"SKIN"
#define RESOURCE_DIALOG         L"Main"

//
// 错误退出
//
#undef ERROR_EXIT
#define ERROR_EXIT(val) \
{ \
    if (val != RSS_SUCCESS) \
    {   \
        Error = val;        \
        goto Exit;          \
    }   \
}

//
// Argument check
//
#undef ARG_CHECK
#define ARG_CHECK(val)  \
{   \
    if (val == NULL) \
    { \
        Error = COMMON_INVALID_PARAMETER; \
        ERROR_EXIT(Error); \
    } \
}  

#undef HR_CHECK
#define HR_CHECK(val)   \
{   \
    if (FAILED(val))    \
    { \
        ERROR_EXIT(val); \
    } \
} 

#undef POINTER_CHECK
#define POINTER_CHECK(val) \
{ \
     if (val == NULL) \
     { \
        Error = COMMON_INVALID_POINTER; \
        ERROR_EXIT(Error); \
     } \
}

#undef HANDLE_CHECK
#define HANDLE_CHECK(val)   \
{ \
    if (val == NULL) \
    {   \
        Error = COMMON_INVALID_HANDLE; \
        ERROR_EXIT(Error); \
    }   \
}

#undef  DELETE_ARRAY
#define DELETE_ARRAY(x)  \
{   \
    if (x) \
    {   \
        delete[] x; \
        x = NULL; \
    }   \
}

#undef  DELETE_BSTR
#define DELETE_BSTR(x)  \
{   \
    if (x) \
    {   \
        SysFreeString(x); \
        x = NULL; \
    }   \
}

//
// unreferenced parameter
//
#undef UNREFERENCED
#define UNREFERENCED(x)     x

#ifdef DEBUG
#define DEBUG_TRACE(msg) \
    AtlTrace(msg); \
    ::MessageBox(NULL, msg, NULL, MB_OK);
#else
#define DEBUG_TRACE(msg) 
#endif

#endif // RSS_GLOBAL__H