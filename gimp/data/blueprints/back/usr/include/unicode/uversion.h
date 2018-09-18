// GGHASH:VqyaXkBL.oUqOdaZKvxyTRMZNRdrXYuibuOOSOH_93BI0000199b
#ifndef UVERSION_H
#define UVERSION_H 
#include "unicode/umachine.h"
#include "unicode/uvernum.h"
#define U_COPYRIGHT_STRING_LENGTH 128
#define U_MAX_VERSION_LENGTH 4
#define U_VERSION_DELIMITER '.'
#define U_MAX_VERSION_STRING_LENGTH 20
#ifdef __cplusplus
# if U_DISABLE_RENAMING
#define U_ICU_NAMESPACE icu
# else
#define U_ICU_NAMESPACE U_ICU_ENTRY_POINT_RENAME(icu)
# endif
#define U_NAMESPACE_BEGIN extern "C++" { namespace U_ICU_NAMESPACE {
#define U_NAMESPACE_END } }
#define U_NAMESPACE_USE using namespace U_ICU_NAMESPACE;
#define U_NAMESPACE_QUALIFIER U_ICU_NAMESPACE::
# ifndef U_USING_ICU_NAMESPACE
#define U_USING_ICU_NAMESPACE 1
# endif
# if U_USING_ICU_NAMESPACE
# endif
#else
#define U_NAMESPACE_BEGIN 
#define U_NAMESPACE_END 
#define U_NAMESPACE_USE 
#define U_NAMESPACE_QUALIFIER 
#endif
#endif
