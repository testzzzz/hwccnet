// stdafx.h : include file for standard system include files,
//  or project specific include files that are used frequently, but
//      are changed infrequently
//

#if !defined(AFX_STDAFX_H__8A0BF412_618F_40EF_B491_83DFB90FFEF7__INCLUDED_)
#define AFX_STDAFX_H__8A0BF412_618F_40EF_B491_83DFB90FFEF7__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef   _WIN32_DCOM   
#define   _WIN32_DCOM   
#endif  
#define _WIN32_WINNT   0x0500 

#include <windows.h>
#include <iostream>
#import "../DcomSvr/DcomSvr.tlb" raw_interfaces_only, no_namespace,named_guids
using namespace std;
//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_STDAFX_H__8A0BF412_618F_40EF_B491_83DFB90FFEF7__INCLUDED_)
