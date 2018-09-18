// GGHASH:VTJaxQ2xZXqxPsf3qmWZ6ZjY..PvYXB6aP7MNWSM6fP000014c42
#ifndef UCNV_H
#define UCNV_H 
#include "unicode/ucnv_err.h"
#include "unicode/uenum.h"
#include "unicode/localpointer.h"
#ifndef __USET_H__
#endif
#if !UCONFIG_NO_CONVERSION
#define UCNV_MAX_CONVERTER_NAME_LENGTH 60
#define UCNV_MAX_FULL_FILE_NAME_LENGTH (600+UCNV_MAX_CONVERTER_NAME_LENGTH)
#define UCNV_SI 0x0F
#define UCNV_SO 0x0E
#define UCNV_OPTION_SEP_CHAR ','
#define UCNV_OPTION_SEP_STRING ","
#define UCNV_VALUE_SEP_CHAR '='
#define UCNV_VALUE_SEP_STRING "="
#define UCNV_LOCALE_OPTION_STRING ",locale="
#define UCNV_VERSION_OPTION_STRING ",version="
#define UCNV_SWAP_LFNL_OPTION_STRING ",swaplfnl"
#ifndef U_HIDE_DEPRECATED_API
#define U_CNV_SAFECLONE_BUFFERSIZE 1024
#endif
#if U_SHOW_CPLUSPLUS_API
#endif
#define UCNV_GET_MAX_BYTES_FOR_STRING(length,maxCharSize) (((int32_t)(length)+10)*(int32_t)(maxCharSize))
#ifndef U_HIDE_DEPRECATED_API
#endif
#ifndef U_HIDE_SYSTEM_API
#endif
#endif
#endif
