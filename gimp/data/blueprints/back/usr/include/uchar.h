// GGHASH:VT7RNR20YIK6WHbPXKmJe2L818gQ2HNYaNcNOzBU0i7800000908
#ifndef _UCHAR_H
#define _UCHAR_H 1
#include <features.h>
#define __need_size_t 
#include <stddef.h>
#include <bits/types/mbstate_t.h>
#if defined __GNUC__ && !defined __USE_ISOCXX11
# if !defined __CHAR16_TYPE__ || !defined __CHAR32_TYPE__
# if defined __STDC_VERSION__ && __STDC_VERSION__ < 201000L
# error "<uchar.h> requires ISO C11 mode"
# else
# error "definitions of __CHAR16_TYPE__ and/or __CHAR32_TYPE__ missing"
# endif
# endif
#endif
#endif
