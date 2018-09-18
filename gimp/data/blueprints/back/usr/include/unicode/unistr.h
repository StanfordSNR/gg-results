// GGHASH:VSkcAyFMOT7RSCCNWsoWRwP6cnPm0J7X70G7APeS1mFA0002be9e
#ifndef UNISTR_H
#define UNISTR_H 
#include <cstddef>
#include "unicode/utypes.h"
#include "unicode/char16ptr.h"
#include "unicode/rep.h"
#include "unicode/std_string.h"
#include "unicode/stringpiece.h"
#include "unicode/bytestream.h"
#ifndef USTRING_H
#endif
#if !UCONFIG_NO_BREAK_ITERATION
#endif
#if !UCONFIG_NO_BREAK_ITERATION
#endif
#define US_INV icu::UnicodeString::kInvariant
#if !U_CHAR16_IS_TYPEDEF
#define UNICODE_STRING(cs,_length) icu::UnicodeString(TRUE, u ## cs, _length)
#else
#define UNICODE_STRING(cs,_length) icu::UnicodeString(TRUE, (const char16_t*)u ## cs, _length)
#endif
#define UNICODE_STRING_SIMPLE(cs) UNICODE_STRING(cs, -1)
#ifndef UNISTR_FROM_CHAR_EXPLICIT
# if defined(U_COMBINED_IMPLEMENTATION) || defined(U_COMMON_IMPLEMENTATION) || defined(U_I18N_IMPLEMENTATION) || defined(U_IO_IMPLEMENTATION)
#define UNISTR_FROM_CHAR_EXPLICIT explicit
# else
#define UNISTR_FROM_CHAR_EXPLICIT 
# endif
#endif
#ifndef UNISTR_FROM_STRING_EXPLICIT
# if defined(U_COMBINED_IMPLEMENTATION) || defined(U_COMMON_IMPLEMENTATION) || defined(U_I18N_IMPLEMENTATION) || defined(U_IO_IMPLEMENTATION)
#define UNISTR_FROM_STRING_EXPLICIT explicit
# else
#define UNISTR_FROM_STRING_EXPLICIT 
# endif
#endif
#ifndef UNISTR_OBJECT_SIZE
#define UNISTR_OBJECT_SIZE 64
#endif
#if U_CHARSET_IS_UTF8 || !UCONFIG_NO_CONVERSION
#endif
#if !UCONFIG_NO_CONVERSION
#endif
#if U_HAVE_RVALUE_REFERENCES
#endif
#if !UCONFIG_NO_BREAK_ITERATION
#endif
#if !U_CHAR16_IS_TYPEDEF
#endif
#if U_SIZEOF_WCHAR_T==2 || defined(U_IN_DOXYGEN)
#endif
#if !U_CHAR16_IS_TYPEDEF
#endif
#if U_SIZEOF_WCHAR_T==2 || defined(U_IN_DOXYGEN)
#endif
#if !U_CHAR16_IS_TYPEDEF
#endif
#if U_SIZEOF_WCHAR_T==2 || defined(U_IN_DOXYGEN)
#endif
#if U_CHARSET_IS_UTF8 || !UCONFIG_NO_CONVERSION
#endif
#if !UCONFIG_NO_CONVERSION
#endif
#if U_HAVE_RVALUE_REFERENCES
#endif
#if !UCONFIG_NO_CONVERSION
#endif
#if !UCONFIG_NO_BREAK_ITERATION
#endif
#if !UCONFIG_NO_CONVERSION
#endif
#endif
