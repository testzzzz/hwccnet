/* this file contains the actual definitions of */
/* the IIDs and CLSIDs */

/* link this file in with the server and any clients */


/* File created by MIDL compiler version 5.01.0164 */
/* at Wed Jan 14 17:24:54 2009
 */

//@@MIDL_FILE_HEADING(  )
#ifdef __cplusplus
extern "C"{
#endif 


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

const IID IID_IRSSParse = {0x1E76FA32,0xDFD4,0x4000,{0x90,0x8B,0xB2,0xD4,0xA2,0x56,0xF6,0x44}};


const IID LIBID_RSSPARSE_VC6_COMLib = {0xEFC45A4D,0x0F1C,0x4140,{0x96,0x0C,0xD4,0x30,0x6B,0x49,0xB0,0x8A}};


const CLSID CLSID_RSSParse = {0xF5789789,0xA93D,0x4BBA,{0xB1,0xDE,0xC1,0xEE,0x43,0xE8,0x0C,0x2B}};


#ifdef __cplusplus
}
#endif

