// GGHASH:VIWRGJT4oEF3M2YunbkRcp29jnCireynu0nsH5fRWQsE000004bc
#ifndef _BITS_STDIO_LIM_H
#define _BITS_STDIO_LIM_H 1
#ifndef _STDIO_H
# error "Never include <bits/stdio_lim.h> directly; use <stdio.h> instead."
#endif
#define L_tmpnam 20
#define TMP_MAX 238328
#define FILENAME_MAX 4096
#ifdef __USE_POSIX
#define L_ctermid 9
# if !defined __USE_XOPEN2K || defined __USE_GNU
#define L_cuserid 9
# endif
#endif
#undef FOPEN_MAX
#define FOPEN_MAX 16
#endif
