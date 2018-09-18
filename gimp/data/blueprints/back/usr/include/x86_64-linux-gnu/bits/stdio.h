// GGHASH:V7vIAKHRX2tau.PTXvLpkYHvO585NJXG0NzGxxxtwpVo00001574
#ifndef _STDIO_H
# error "Never include <bits/stdio.h> directly; use <stdio.h> instead."
#endif
#ifndef __extern_inline
#define __STDIO_INLINE inline
#else
#define __STDIO_INLINE __extern_inline
#endif
#ifdef __USE_EXTERN_INLINES
# if !(__USE_FORTIFY_LEVEL > 0 && defined __fortify_function)
# endif
# ifdef __USE_MISC
# endif
# ifdef __USE_POSIX
# endif
# ifdef __USE_MISC
# endif
# ifdef __USE_POSIX
# endif
# ifdef __USE_GNU
# endif
# ifdef __USE_MISC
# endif
#endif
#if defined __USE_MISC && defined __GNUC__ && defined __OPTIMIZE__ && !defined __cplusplus
#define fread_unlocked(ptr,size,n,stream) (__extension__ ((__builtin_constant_p (size) && __builtin_constant_p (n) && (size_t) (size) * (size_t) (n) <= 8 && (size_t) (size) != 0) ? ({ char *__ptr = (char *) (ptr); FILE *__stream = (stream); size_t __cnt; for (__cnt = (size_t) (size) * (size_t) (n); __cnt > 0; --__cnt) { int __c = _IO_getc_unlocked (__stream); if (__c == EOF) break; *__ptr++ = __c; } ((size_t) (size) * (size_t) (n) - __cnt) / (size_t) (size); }) : (((__builtin_constant_p (size) && (size_t) (size) == 0) || (__builtin_constant_p (n) && (size_t) (n) == 0)) ? ((void) (ptr), (void) (stream), (void) (size), (void) (n), (size_t) 0) : fread_unlocked (ptr, size, n, stream))))
#define fwrite_unlocked(ptr,size,n,stream) (__extension__ ((__builtin_constant_p (size) && __builtin_constant_p (n) && (size_t) (size) * (size_t) (n) <= 8 && (size_t) (size) != 0) ? ({ const char *__ptr = (const char *) (ptr); FILE *__stream = (stream); size_t __cnt; for (__cnt = (size_t) (size) * (size_t) (n); __cnt > 0; --__cnt) if (_IO_putc_unlocked (*__ptr++, __stream) == EOF) break; ((size_t) (size) * (size_t) (n) - __cnt) / (size_t) (size); }) : (((__builtin_constant_p (size) && (size_t) (size) == 0) || (__builtin_constant_p (n) && (size_t) (n) == 0)) ? ((void) (ptr), (void) (stream), (void) (size), (void) (n), (size_t) 0) : fwrite_unlocked (ptr, size, n, stream))))
#endif
#undef __STDIO_INLINE
