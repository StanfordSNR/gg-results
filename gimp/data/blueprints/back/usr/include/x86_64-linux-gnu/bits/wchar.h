// GGHASH:VNBzmqYpm8KToDu3yvH4Kt4GpZfuxXR1BURrEPlHH1kQ00000771
#ifndef _BITS_WCHAR_H
#define _BITS_WCHAR_H 1
#ifdef __WCHAR_MAX__
#define __WCHAR_MAX __WCHAR_MAX__
#elif L'\0' - 1 > 0
#define __WCHAR_MAX (0xffffffffu + L'\0')
#else
#define __WCHAR_MAX (0x7fffffff + L'\0')
#endif
#ifdef __WCHAR_MIN__
#define __WCHAR_MIN __WCHAR_MIN__
#elif L'\0' - 1 > 0
#define __WCHAR_MIN (L'\0' + 0)
#else
#define __WCHAR_MIN (-__WCHAR_MAX - 1)
#endif
#endif
