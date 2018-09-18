// GGHASH:V_.3m6r2XbzYRSK6cfkx8MbulHbAkk_BQFdIUXbGk6kQ000005a0
#ifndef _BITS_G_CONFIG_H
#define _BITS_G_CONFIG_H 1
#if !defined _BITS_LIBIO_H && !defined _G_CONFIG_H
# error "Never include <bits/_G_config.h> directly; use <stdio.h> instead."
#endif
#include <bits/types.h>
#define __need_size_t 
#if defined _LIBC || defined _GLIBCPP_USE_WCHAR_T
#define __need_wchar_t 
#endif
#define __need_NULL 
#include <stddef.h>
#include <bits/types/__mbstate_t.h>
#if defined _LIBC || defined _GLIBCPP_USE_WCHAR_T
# include <bits/types/wint_t.h>
#endif
#if defined _LIBC || defined _GLIBCPP_USE_WCHAR_T
# include <gconv.h>
#endif
#define _G_va_list __gnuc_va_list
#define _G_HAVE_MMAP 1
#define _G_HAVE_MREMAP 1
#define _G_IO_IO_FILE_VERSION 0x20001
#define _G_HAVE_ST_BLKSIZE defined (_STATBUF_ST_BLKSIZE)
#define _G_BUFSIZ 8192
#endif
