#include "version.h"
#include "stdio.h"
#include <stdlib.h>
#include <string.h>

int 
ModifyVersionLine(
				  char* Buf,
				  int	Len,
				  FILE* File,
				  int Offset
				  )
{
	int Error = ERROR_SUCCESS;
	char VerRevisionString[VER_BUILD_LENGTH] = {0};
	char VerBuildSring[VER_BUILD_QFE_LENGTH] = {0};
	int Ver;
	char* pTemp;
	int Pos = 0;
	
	//
	// 保存Revision_Number的文件位置信息
	//
	static char  tempBuf[MAX_LINE_LENGTH] = {0};
	static int	 tempLen;
	static int	 tempOffset;

	if (Buf == NULL || Len <= 0)
	{
		ERROR_EXIT(INVALID_PARAMETER);
	}
	
	//
	// check the buffer length is bigger than VER_BUILD_STRING
	//
	if (Len > VER_BUILD_LENGTH)
	{
		memcpy(VerRevisionString, Buf, VER_BUILD_LENGTH - 1);

		if (strcmp(VerRevisionString, VER_BUILD_STRING) == 0)
		{
			//
			// 记录Revision_Number的文件位置信息
			//
			memcpy(tempBuf, Buf, Len - 1);
			tempLen = Len;
			tempOffset = Offset;

			ERROR_EXIT(ERROR_LINE_VERSION)
		}
	}
	if (Len > VER_BUILD_QFE_LENGTH)
	{
		
		memcpy(VerBuildSring, Buf, VER_BUILD_QFE_LENGTH - 1);

		if (strcmp(VerBuildSring, VER_BUILD_QFE_STRING) != 0)
		{
			ERROR_EXIT(ERROR_LINE_VERSION);
		}
	}
	else
	{
		ERROR_EXIT(ERROR_LINE_VERSION);
	}
	
	//
	// Get the version
	//
	pTemp = Buf + VER_BUILD_QFE_LENGTH;
	Ver = atoi(pTemp);
	
	if (Ver <= 0)
	{
		ERROR_EXIT(ERROR_LINE_VERSION);
	}
	
	for (;;)
	{
		//
		// Find the first 
		//
		if (*pTemp >= '0' && *pTemp <= '9')
		{
			break;
		}
		
		Pos += 1;
		pTemp ++;
	}
	
	Ver ++;
	if (Ver == 10)
	{
		Pos -= 1;
	}
	
	//
	// Build_Number满100置为1，并增加Revision_Number
	//
	if (Ver == 100)
	{
		Ver = 1;
		*(Buf + VER_BUILD_QFE_LENGTH + Pos) = ' ';
		Pos += 1;
		
		//
		// 增加Revision_Number
		//
		Error = ModifyVersionRevision(tempBuf, tempLen, File, tempOffset);
		if (Error > 0)
		{
			goto exit;
		}
	}
	
	sprintf(Buf + VER_BUILD_QFE_LENGTH + Pos, "%d\n", Ver);
	
	Error = fseek(File, Offset, SEEK_SET);
	if (Error > 0)
	{
		goto exit;
	}
	
	Error = fwrite(Buf, sizeof(char), Len - 1, File);
	if (Error == (Len - 1))
	{
		Error = 0;
	}
	
exit:
	return Error;
}

int
ModifyVersionRevision( 
					  char* Buf, 
					  int Len, 
					  FILE* File, 
					  int Offset 
					  )
{
	int Error = ERROR_SUCCESS;
	int Ver;
	char* pTemp;
	int Pos = 0;

	if (Buf == NULL || Len <= 0)
	{
		ERROR_EXIT(INVALID_PARAMETER);
	}
	
	//
	// check the buffer length is bigger than VER_BUILD_STRING
	//
	if (Len <= VER_BUILD_LENGTH)
	{
		ERROR_EXIT(ERROR_LINE_VERSION);
	}

	//
	// Get the version
	//
	pTemp = Buf + VER_BUILD_LENGTH;
	Ver = atoi(pTemp);
	
	if (Ver <= 0)
	{
		ERROR_EXIT(ERROR_LINE_VERSION);
	}

	for (;;)
	{
		//
		// Find the first 
		//
		if (*pTemp >= '0' && *pTemp <= '9')
		{
			break;
		}
		
		Pos += 1;
		pTemp ++;
	}
	
	Ver ++;
	if (
		Ver == 10 ||
		Ver == 100
		)
	{
		Pos -= 1;
	}

	sprintf(Buf + VER_BUILD_LENGTH + Pos, "%d\n", Ver);

	Error = fseek(File, Offset, SEEK_SET);
	if (Error > 0)
	{
		goto exit;
	}

	Error = fwrite(Buf, sizeof(char), Len - 1, File);
	if (Error == (Len - 1))
	{
		Error = 0;
	}

exit:
	return Error;
}

int
ModifyMajorVersion(
				   char* Buf,
				   int	Len,
				   FILE* File,
				   int Offset,
				   char* Num
				   )
{
	int Error = ERROR_SUCCESS;
	char MajorVerString[VER_MAJORVERSION_LENGTH] = {0};
	int Ver;
	char* pTemp;
	int Pos = 0;

	if (Buf == NULL || Len <= 0)
	{
		ERROR_EXIT(INVALID_PARAMETER);
	}
	
	//
	// check the buffer length is bigger than VER_MAJORVERSION_STRING
	//
	if (Len > VER_MAJORVERSION_LENGTH)
	{
		memcpy(MajorVerString, Buf, VER_MAJORVERSION_LENGTH - 1);

		if (strcmp(MajorVerString, VER_MAJORVERSION_STRING) != 0)
		{
			ERROR_EXIT(ERROR_LINE_VERSION);
		}
	}
	else
	{
		ERROR_EXIT(ERROR_LINE_VERSION);
	}

	//
	// Get the version
	//
	pTemp = Buf + VER_MAJORVERSION_LENGTH;
	Ver = atoi(Num);
	
	if (Ver < 0)
	{
		ERROR_EXIT(ERROR_LINE_VERSION);
	}
	
	for (;;)
	{
		//
		// Find the first 
		//
		if (*pTemp >= '0' && *pTemp <= '9')
		{
			break;
		}
		
		Pos += 1;
		pTemp ++;
	}

	if (Ver >= 10)
	{
		Pos -= 1;
	}
	
	sprintf(Buf + VER_MAJORVERSION_LENGTH + Pos, "%d\n", Ver);
	
	Error = fseek(File, Offset, SEEK_SET);
	if (Error > 0)
	{
		goto exit;
	}
	
	Error = fwrite(Buf, sizeof(char), Len - 1, File);
	if (Error == (Len - 1))
	{
		Error = 0;
	}
	
exit:
	return Error;
}

int
ModifyMinorVersion(
				   char* Buf,
				   int	Len,
				   FILE* File,
				   int Offset,
				   char* Num
				   )
{
	int Error = ERROR_SUCCESS;
	char MinorVerString[VER_MINOREVERSION_LENGTH] = {0};
	int Ver;
	char* pTemp;
	int Pos = 0;

	if (Buf == NULL || Len <= 0)
	{
		ERROR_EXIT(INVALID_PARAMETER);
	}
	
	//
	// check the buffer length is bigger than VER_MINOREVERSION_STRING
	//
	if (Len > VER_MINOREVERSION_LENGTH)
	{
		memcpy(MinorVerString, Buf, VER_MINOREVERSION_LENGTH - 1);

		if (strcmp(MinorVerString, VER_MINOREVERSION_STRING) != 0)
		{
			ERROR_EXIT(ERROR_LINE_VERSION);
		}
	}
	else
	{
		ERROR_EXIT(ERROR_LINE_VERSION);
	}

	//
	// Get the version
	//
	pTemp = Buf + VER_MINOREVERSION_LENGTH;
	Ver = atoi(Num);
	
	if (Ver < 0)
	{
		ERROR_EXIT(ERROR_LINE_VERSION);
	}
	
	for (;;)
	{
		//
		// Find the first 
		//
		if (*pTemp >= '0' && *pTemp <= '9')
		{
			break;
		}
		
		Pos += 1;
		pTemp ++;
	}

	if (Ver >= 10)
	{
		Pos -= 1;
	}
	
	sprintf(Buf + VER_MINOREVERSION_LENGTH + Pos, "%d", Ver);
	
	Error = fseek(File, Offset, SEEK_SET);
	if (Error > 0)
	{
		goto exit;
	}
	
	Error = fwrite(Buf, sizeof(char), Len - 1, File);
	if (Error == (Len - 1))
	{
		Error = 0;
	}
	
exit:
	return Error;
}
