// GGHASH:Vcwhve_H9lmrjMVMi_XJWh2A4Q80XnNx_43DcRB.B2Y800012213
#ifndef USTRING_H
#define USTRING_H 
#include "unicode/utypes.h"
#include "unicode/putil.h"
#include "unicode/uiter.h"
#ifndef UBRK_TYPEDEF_UBREAK_ITERATOR
#define UBRK_TYPEDEF_UBREAK_ITERATOR 
#endif
#if !UCONFIG_NO_CONVERSION
#endif
#if defined(U_DECLARE_UTF16)
#define U_STRING_DECL(var,cs,length) static const UChar *var=(const UChar *)U_DECLARE_UTF16(cs)
#define U_STRING_INIT(var,cs,length) 
#elif U_SIZEOF_WCHAR_T==U_SIZEOF_UCHAR && (U_CHARSET_FAMILY==U_ASCII_FAMILY || (U_SIZEOF_UCHAR == 2 && defined(U_WCHAR_IS_UTF16)))
#define U_STRING_DECL(var,cs,length) static const UChar var[(length)+1]=L ## cs
#define U_STRING_INIT(var,cs,length) 
#elif U_SIZEOF_UCHAR==1 && U_CHARSET_FAMILY==U_ASCII_FAMILY
#define U_STRING_DECL(var,cs,length) static const UChar var[(length)+1]=cs
#define U_STRING_INIT(var,cs,length) 
#else
#define U_STRING_DECL(var,cs,length) static UChar var[(length)+1]
#define U_STRING_INIT(var,cs,length) u_charsToUChars(cs, var, length+1)
#endif
#if !UCONFIG_NO_BREAK_ITERATION
#endif
#if defined(U_WCHAR_IS_UTF16) || defined(U_WCHAR_IS_UTF32) || !UCONFIG_NO_CONVERSION
#endif
#endif
