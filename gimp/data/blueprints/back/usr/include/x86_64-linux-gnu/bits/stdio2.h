// GGHASH:VJQy2aFp..3UP3lCFGn2qlSKko5zex4vV54UtAc8.Zso00003103
#ifndef _STDIO_H
# error "Never include <bits/stdio2.h> directly; use <stdio.h> instead."
#endif
#ifdef __va_arg_pack
#elif !defined __cplusplus
#define sprintf(str,...) __builtin___sprintf_chk (str, __USE_FORTIFY_LEVEL - 1, __bos (str), __VA_ARGS__)
#endif
#if defined __USE_ISOC99 || defined __USE_UNIX98
# ifdef __va_arg_pack
# elif !defined __cplusplus
#define snprintf(str,len,...) __builtin___snprintf_chk (str, len, __USE_FORTIFY_LEVEL - 1, __bos (str), __VA_ARGS__)
# endif
#endif
#if __USE_FORTIFY_LEVEL > 1
# ifdef __va_arg_pack
# elif !defined __cplusplus
#define printf(...) __printf_chk (__USE_FORTIFY_LEVEL - 1, __VA_ARGS__)
#define fprintf(stream,...) __fprintf_chk (stream, __USE_FORTIFY_LEVEL - 1, __VA_ARGS__)
# endif
#ifdef __USE_EXTERN_INLINES
#else
#endif
# ifdef __USE_XOPEN2K8
# ifdef __va_arg_pack
# elif !defined __cplusplus
#define dprintf(fd,...) __dprintf_chk (fd, __USE_FORTIFY_LEVEL - 1, __VA_ARGS__)
# endif
# endif
# ifdef __USE_GNU
# ifdef __va_arg_pack
# elif !defined __cplusplus
#define asprintf(ptr,...) __asprintf_chk (ptr, __USE_FORTIFY_LEVEL - 1, __VA_ARGS__)
#define __asprintf(ptr,...) __asprintf_chk (ptr, __USE_FORTIFY_LEVEL - 1, __VA_ARGS__)
#define obstack_printf(obstack,...) __obstack_printf_chk (obstack, __USE_FORTIFY_LEVEL - 1, __VA_ARGS__)
# endif
# endif
#endif
#if __GLIBC_USE (DEPRECATED_GETS)
#endif
#ifdef __USE_GNU
#endif
#ifdef __USE_MISC
#undef fread_unlocked
# ifdef __USE_EXTERN_INLINES
# endif
#endif
