// GGHASH:Vs2C_6OB2mtqo7mriYyTibEDMvbVXZ3pritUGIUmE0ug00001865
#ifndef _BZLIB_H
#define _BZLIB_H 
#ifdef __cplusplus
#endif
#define BZ_RUN 0
#define BZ_FLUSH 1
#define BZ_FINISH 2
#define BZ_OK 0
#define BZ_RUN_OK 1
#define BZ_FLUSH_OK 2
#define BZ_FINISH_OK 3
#define BZ_STREAM_END 4
#define BZ_SEQUENCE_ERROR (-1)
#define BZ_PARAM_ERROR (-2)
#define BZ_MEM_ERROR (-3)
#define BZ_DATA_ERROR (-4)
#define BZ_DATA_ERROR_MAGIC (-5)
#define BZ_IO_ERROR (-6)
#define BZ_UNEXPECTED_EOF (-7)
#define BZ_OUTBUFF_FULL (-8)
#define BZ_CONFIG_ERROR (-9)
#ifndef BZ_IMPORT
#define BZ_EXPORT 
#endif
#ifndef BZ_NO_STDIO
#include <stdio.h>
#endif
#ifdef _WIN32
# include <windows.h>
# ifdef small
#undef small
# endif
# ifdef BZ_EXPORT
#define BZ_API(func) WINAPI func
#define BZ_EXTERN extern
# else
#define BZ_API(func) (WINAPI * func)
#define BZ_EXTERN 
# endif
#else
#define BZ_API(func) func
#define BZ_EXTERN extern
#endif
#ifndef BZ_NO_STDIO
#define BZ_MAX_UNUSED 5000
#endif
#ifndef BZ_NO_STDIO
#endif
#ifdef __cplusplus
#endif
#endif
