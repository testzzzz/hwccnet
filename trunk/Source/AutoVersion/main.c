#include "version.h"
#include <string.h>

int
main(
	int argc, 
	char* argv[]
	)
{
	int Error = 0;
	FILE* File = NULL;
	char* FilePath = argv[1];
	char FileBuf[MAX_LINE_LENGTH] = {0};
	char* Buf;
	size_t Read;
	char c = 0;
	int LineNumber = 1;
	int LineLength = 0;
	int LineOffset = 0;

	//
	// Make sure that the input parameter is more than one
	//

	if (argc <= 1 || argc >= 5)
	{
		ERROR_EXIT(INVALID_PARAMETER);
	}

	File = fopen(
		FilePath,		// File path
		"r+"			// Open for read and write
		);
	if (File == NULL)
	{
		printf("Open file failed:%s", FilePath);
		ERROR_EXIT(ERROR_OPENFILE);
	}

	Buf = FileBuf;
	for (;;)
	{
		Read = fread(&c, sizeof(char), 1, File);

		//
		// Read at the end of the file
		//

		if (Read <= 0)
		{
			ERROR_EXIT(ERROR_SUCCESS);
		}

		//
		// Copy the read character to the buf
		//

		*Buf++ = c;
		LineLength ++;

		//
		// At the end of the line
		//

		if (c == '\n')
		{
			switch (argc)
			{
				case 2:
					Error = ModifyVersionLine(
						FileBuf, 
						LineLength, 
						File, 
						LineOffset
						);
					break;
				//
				// 根据命令行参数修改版本号
				//
				case 4:
					if (strcmp(argv[2], "-major") == 0)
					{
						Error = ModifyMajorVersion(
							FileBuf, 
							LineLength, 
							File, 
							LineOffset,
							argv[3]
						);
					}
					else if (strcmp(argv[2], "-minor") == 0)
					{
						Error = ModifyMinorVersion(
							FileBuf, 
							LineLength, 
							File, 
							LineOffset,
							argv[3]
						);
					}
					else
					{
						ERROR_EXIT(INVALID_PARAMETER);
					}
					break;

				default:
					ERROR_EXIT(INVALID_PARAMETER);
					break;
			}

			LineNumber ++;
			LineOffset += LineLength + 1;

			memset(FileBuf, 0, LineLength);
			Buf = FileBuf;
			LineLength = 0;

			if (Error == 0)
			{
				ERROR_EXIT(ERROR_SUCCESS);
			}
		}

		//
		// Check the line length
		//

		if (Buf - FileBuf >= MAX_LINE_LENGTH)
		{
			printf("Line %d length is bigger than %d\n", LineNumber, ERROR_LINELENGTH);
			ERROR_EXIT(ERROR_LINELENGTH);
		}
	}
	
exit:
	if (File != NULL)
	{
		fclose(File);
		File = NULL;
	}
	return Error;
}
