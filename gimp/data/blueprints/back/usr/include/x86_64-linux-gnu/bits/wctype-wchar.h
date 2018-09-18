// GGHASH:VaWp6_._xdgxwJHVFoayWOujRuHSjHnB_lt1gb3YiBRI0000189d
#ifndef _BITS_WCTYPE_WCHAR_H
#define _BITS_WCTYPE_WCHAR_H 1
#if !defined _WCTYPE_H && !defined _WCHAR_H
#error "Never include <bits/wctype-wchar.h> directly; include <wctype.h> or <wchar.h> instead."
#endif
#include <bits/types.h>
#include <bits/types/wint_t.h>
# ifndef _ISwbit
# include <endian.h>
# if __BYTE_ORDER == __BIG_ENDIAN
#define _ISwbit(bit) (1 << (bit))
# else
#define _ISwbit(bit) ((bit) < 8 ? (int) ((1UL << (bit)) << 24) : ((bit) < 16 ? (int) ((1UL << (bit)) << 8) : ((bit) < 24 ? (int) ((1UL << (bit)) >> 8) : (int) ((1UL << (bit)) >> 24))))
# endif
# endif
# ifdef __USE_ISOC99
# endif
#endif
