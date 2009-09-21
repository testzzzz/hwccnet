#ifndef VERSION_H
#define VERSION_H
#include <stdio.h>
// The max length of a line
#define MAX_LINE_LENGTH		0x100

#define VER_BUILD_STRING			"#define VER_PRODUCTBUILD            /* NT */"
#define VER_BUILD_LENGTH			sizeof(VER_BUILD_STRING)

#define VER_BUILD_QFE_STRING		"#define VER_PRODUCTBUILD_QFE"
#define VER_BUILD_QFE_LENGTH		sizeof(VER_BUILD_QFE_STRING)

#define VER_MAJORVERSION_STRING		"#define VER_PRODUCTMAJORVERSION"
#define VER_MAJORVERSION_LENGTH		sizeof(VER_MAJORVERSION_STRING)

#define VER_MINOREVERSION_STRING	"#define VER_PRODUCTMINORVERSION"
#define VER_MINOREVERSION_LENGTH	sizeof(VER_MINOREVERSION_STRING)

#define ERROR_EXIT(_status_)	\
{	\
	Error = _status_;	\
	goto exit;			\
}

#define ERROR_SUCCESS			0x00000
#define INVALID_PARAMETER		0x00001
#define ERROR_OPENFILE			0x00002	
#define ERROR_READFILE			0x00003
#define ERROR_LINELENGTH		0x00004
#define ERROR_LINE_VERSION		0x00005		// not the version line

int 
ModifyVersionLine(
				  char* Buf,
				  int	Len,
				  FILE* File,
				  int Offset
				  );

int
ModifyVersionRevision(
					  char* Buf,
					  int	Len,
					  FILE* File,
					  int Offset
					  );

int
ModifyMajorVersion(
				   char* Buf,
				   int	Len,
				   FILE* File,
				   int Offset,
				   char* Num
				  );

int
ModifyMinorVersion(
				   char* Buf,
				   int	Len,
				   FILE* File,
				   int Offset,
				   char* Num
				   );

#endif