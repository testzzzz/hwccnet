// stdafx.h : 标准系统包含文件的包含文件，
// 或是经常使用但不常更改的
// 特定于项目的包含文件
//

#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>

#ifndef   _WIN32_DCOM   
#define   _WIN32_DCOM   
#endif  

#include <windows.h>
#include <iostream>
#import "..\DcomSvr\Debug\DcomSvr.tlb" raw_interfaces_only, no_namespace,named_guids
using namespace std;

// TODO: 在此处引用程序需要的其他头文件
