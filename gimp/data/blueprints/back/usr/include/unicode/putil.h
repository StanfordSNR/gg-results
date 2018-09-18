// GGHASH:VW_wB7UsJvR_INFmz7GyVVKqmWhqy_guZff9Gnu2Nq.A00001958
#ifndef PUTIL_H
#define PUTIL_H 
#include "unicode/utypes.h"
#ifndef U_HIDE_INTERNAL_API
#endif
#if U_PLATFORM_USES_ONLY_WIN32_API
#define U_FILE_SEP_CHAR '\\'
#define U_FILE_ALT_SEP_CHAR '/'
#define U_PATH_SEP_CHAR ';'
#define U_FILE_SEP_STRING "\\"
#define U_FILE_ALT_SEP_STRING "/"
#define U_PATH_SEP_STRING ";"
#else
#define U_FILE_SEP_CHAR '/'
#define U_FILE_ALT_SEP_CHAR '/'
#define U_PATH_SEP_CHAR ':'
#define U_FILE_SEP_STRING "/"
#define U_FILE_ALT_SEP_STRING "/"
#define U_PATH_SEP_STRING ":"
#endif
#endif
