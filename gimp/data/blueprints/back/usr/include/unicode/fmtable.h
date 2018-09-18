// GGHASH:VCJ4ONlshgiSIOrd79D2F9ibQNWrauAsTb0hv1c9tlgY00006191
#ifndef FMTABLE_H
#define FMTABLE_H 
#include "unicode/utypes.h"
#if !UCONFIG_NO_FORMATTING
#include "unicode/unistr.h"
#include "unicode/stringpiece.h"
#include "unicode/uformattable.h"
#if U_PLATFORM == U_PF_OS400
#define UNUM_INTERNAL_STACKARRAY_SIZE 144
#else
#define UNUM_INTERNAL_STACKARRAY_SIZE 128
#endif
#if !UCONFIG_NO_CONVERSION
#endif
#ifndef U_HIDE_DEPRECATED_API
#endif
#ifndef U_HIDE_INTERNAL_API
#endif
#ifndef U_HIDE_DEPRECATED_API
#endif
#endif
#endif
