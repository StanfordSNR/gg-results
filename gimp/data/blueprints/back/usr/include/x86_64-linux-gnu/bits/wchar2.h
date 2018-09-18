// GGHASH:VoqhI1cyFYAtbnjkuKNCHhtzi.0u.yKXFfUXEY6rgLdk00005019
#ifndef _WCHAR_H
# error "Never include <bits/wchar2.h> directly; use <wchar.h> instead."
#endif
#ifdef __USE_GNU
#endif
#ifdef __va_arg_pack
#elif !defined __cplusplus
#define swprintf(s,n,...) (__bos (s) != (size_t) -1 || __USE_FORTIFY_LEVEL > 1 ? __swprintf_chk (s, n, __USE_FORTIFY_LEVEL - 1, __bos (s) / sizeof (wchar_t), __VA_ARGS__) : swprintf (s, n, __VA_ARGS__))
#endif
#if __USE_FORTIFY_LEVEL > 1
# ifdef __va_arg_pack
# elif !defined __cplusplus
#define wprintf(...) __wprintf_chk (__USE_FORTIFY_LEVEL - 1, __VA_ARGS__)
#define fwprintf(stream,...) __fwprintf_chk (stream, __USE_FORTIFY_LEVEL - 1, __VA_ARGS__)
# endif
#endif
#ifdef __USE_GNU
#endif
#define __WCHAR_MB_LEN_MAX 16
#if defined MB_LEN_MAX && MB_LEN_MAX != __WCHAR_MB_LEN_MAX
# error "Assumed value of MB_LEN_MAX wrong"
#endif
#ifdef __USE_GNU
#endif
