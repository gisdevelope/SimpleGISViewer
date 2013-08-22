#ifndef _TXD_VIEWER_ERROR_CODE
#define _TXD_VIEWER_ERROR_CODE

enum VIEWER_ERR_CODE
{
	VIEWER_OK = 1,
	VIEWER_EOF,
	VIEWER_OPEN_FILE_FAILED,
	VIEWER_READ_FILE_FAILED,
	VIEWER_SET_FILE_POINTER_FAILED
};

#endif