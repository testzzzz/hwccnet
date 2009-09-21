

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 7.00.0500 */
/* at Fri Sep 11 17:08:21 2009
 */
/* Compiler settings for .\RSSPlugin.idl:
    Oicf, W1, Zp8, env=Win32 (32b run)
    protocol : dce , ms_ext, c_ext, robust
    error checks: stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
//@@MIDL_FILE_HEADING(  )

#pragma warning( disable: 4049 )  /* more than 64k source lines */


#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, IID_IRSSPlugin2,0xAC9E3B7E,0xAE04,0x4E51,0x8C,0x47,0x34,0xCA,0x5C,0xDA,0x49,0x3C);


MIDL_DEFINE_GUID(IID, IID_IRSSImportant,0x27E2BF87,0x0368,0x46C0,0x98,0xC2,0xBD,0xCB,0x04,0xB0,0xDF,0x2E);


MIDL_DEFINE_GUID(IID, LIBID_RSSPluginLib,0xEFADFE4B,0x15AE,0x480A,0x90,0xA7,0x1E,0x7A,0x8E,0xCB,0x46,0xE4);


MIDL_DEFINE_GUID(CLSID, CLSID_RSSPlugin2,0x8E4D9061,0x3E51,0x48B1,0xBC,0x86,0x88,0xB6,0x2E,0xB0,0xE8,0x12);


MIDL_DEFINE_GUID(CLSID, CLSID_RSSImportant,0xAEB4E820,0xD9CF,0x49D0,0xAE,0x52,0x18,0x8C,0xC8,0xAA,0x19,0xDE);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



