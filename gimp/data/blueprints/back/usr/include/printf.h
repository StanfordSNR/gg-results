// GGHASH:VW2MCZpYCxXcQsCGoBDmpEqqOXdddPtWZfvr6pt3mj_E00001a90
#ifndef _PRINTF_H
#define _PRINTF_H 1
#include <features.h>
#include <bits/types/FILE.h>
#define __need_size_t 
#define __need_wchar_t 
#include <stddef.h>
#include <stdarg.h>
#define PA_FLAG_MASK 0xff00
#define PA_FLAG_LONG_LONG (1 << 8)
#define PA_FLAG_LONG_DOUBLE PA_FLAG_LONG_LONG
#define PA_FLAG_LONG (1 << 9)
#define PA_FLAG_SHORT (1 << 10)
#define PA_FLAG_PTR (1 << 11)
#ifdef __LDBL_COMPAT
# include <bits/printf-ldbl.h>
#endif
#endif
