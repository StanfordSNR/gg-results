// GGHASH:VA8sNdoL_Yn7D4b9roFaIMzgQt1Sd4U8McXzMLpWhil400004345
#ifndef _BITS_LIBIO_H
#define _BITS_LIBIO_H 1
#if !defined _STDIO_H && !defined _LIBIO_H
# error "Never include <bits/libio.h> directly; use <stdio.h> instead."
#endif
#include <bits/_G_config.h>
#define _IO_fpos_t _G_fpos_t
#define _IO_fpos64_t _G_fpos64_t
#define _IO_size_t size_t
#define _IO_ssize_t __ssize_t
#define _IO_off_t __off_t
#define _IO_off64_t __off64_t
#define _IO_pid_t __pid_t
#define _IO_uid_t __uid_t
#define _IO_iconv_t _G_iconv_t
#define _IO_HAVE_ST_BLKSIZE _G_HAVE_ST_BLKSIZE
#define _IO_BUFSIZ _G_BUFSIZ
#define _IO_va_list _G_va_list
#define _IO_wint_t wint_t
#define __need___va_list 
#include <stdarg.h>
#ifdef __GNUC_VA_LIST
#undef _IO_va_list
#define _IO_va_list __gnuc_va_list
#endif
#ifndef __P
# include <sys/cdefs.h>
#endif
#define _IO_UNIFIED_JUMPTABLES 1
#ifndef EOF
#define EOF (-1)
#endif
#ifndef NULL
# if defined __GNUG__ && (__GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 8))
#define NULL (__null)
# else
# if !defined(__cplusplus)
#define NULL ((void*)0)
# else
#define NULL (0)
# endif
# endif
#endif
#define _IOS_INPUT 1
#define _IOS_OUTPUT 2
#define _IOS_ATEND 4
#define _IOS_APPEND 8
#define _IOS_TRUNC 16
#define _IOS_NOCREATE 32
#define _IOS_NOREPLACE 64
#define _IOS_BIN 128
#define _IO_MAGIC 0xFBAD0000
#define _OLD_STDIO_MAGIC 0xFABC0000
#define _IO_MAGIC_MASK 0xFFFF0000
#define _IO_USER_BUF 1
#define _IO_UNBUFFERED 2
#define _IO_NO_READS 4
#define _IO_NO_WRITES 8
#define _IO_EOF_SEEN 0x10
#define _IO_ERR_SEEN 0x20
#define _IO_DELETE_DONT_CLOSE 0x40
#define _IO_LINKED 0x80
#define _IO_IN_BACKUP 0x100
#define _IO_LINE_BUF 0x200
#define _IO_TIED_PUT_GET 0x400
#define _IO_CURRENTLY_PUTTING 0x800
#define _IO_IS_APPENDING 0x1000
#define _IO_IS_FILEBUF 0x2000
#define _IO_BAD_SEEN 0x4000
#define _IO_USER_LOCK 0x8000
#define _IO_FLAGS2_MMAP 1
#define _IO_FLAGS2_NOTCANCEL 2
#ifdef _LIBC
#define _IO_FLAGS2_FORTIFY 4
#endif
#define _IO_FLAGS2_USER_WBUF 8
#ifdef _LIBC
#define _IO_FLAGS2_SCANF_STD 16
#define _IO_FLAGS2_NOCLOSE 32
#define _IO_FLAGS2_CLOEXEC 64
#define _IO_FLAGS2_NEED_LOCK 128
#endif
#define _IO_SKIPWS 01
#define _IO_LEFT 02
#define _IO_RIGHT 04
#define _IO_INTERNAL 010
#define _IO_DEC 020
#define _IO_OCT 040
#define _IO_HEX 0100
#define _IO_SHOWBASE 0200
#define _IO_SHOWPOINT 0400
#define _IO_UPPERCASE 01000
#define _IO_SHOWPOS 02000
#define _IO_SCIENTIFIC 04000
#define _IO_FIXED 010000
#define _IO_UNITBUF 020000
#define _IO_STDIO 040000
#define _IO_DONT_CLOSE 0100000
#define _IO_BOOLALPHA 0200000
#ifndef _IO_lock_t_defined
#endif
#if 0
#endif
#if defined _LIBC || defined _GLIBCPP_USE_WCHAR_T
#endif
#define _IO_file_flags _flags
#if 0
#else
#endif
#define __HAVE_COLUMN 
#ifdef _IO_USE_OLD_IO_FILE
#endif
#if defined _G_IO_IO_FILE_VERSION && _G_IO_IO_FILE_VERSION == 0x20001
# if defined _LIBC || defined _GLIBCPP_USE_WCHAR_T
# else
# endif
#endif
#ifndef __cplusplus
#endif
#ifndef _LIBC
#define _IO_stdin ((_IO_FILE*)(&_IO_2_1_stdin_))
#define _IO_stdout ((_IO_FILE*)(&_IO_2_1_stdout_))
#define _IO_stderr ((_IO_FILE*)(&_IO_2_1_stderr_))
#else
#endif
#ifdef __USE_GNU
#endif
#ifdef __cplusplus
#endif
#if defined _LIBC || defined _GLIBCPP_USE_WCHAR_T
#endif
#if __GNUC__ >= 3
#define _IO_BE(expr,res) __builtin_expect ((expr), res)
#else
#define _IO_BE(expr,res) (expr)
#endif
#define _IO_getc_unlocked(_fp) (_IO_BE ((_fp)->_IO_read_ptr >= (_fp)->_IO_read_end, 0) ? __uflow (_fp) : *(unsigned char *) (_fp)->_IO_read_ptr++)
#define _IO_peekc_unlocked(_fp) (_IO_BE ((_fp)->_IO_read_ptr >= (_fp)->_IO_read_end, 0) && __underflow (_fp) == EOF ? EOF : *(unsigned char *) (_fp)->_IO_read_ptr)
#define _IO_putc_unlocked(_ch,_fp) (_IO_BE ((_fp)->_IO_write_ptr >= (_fp)->_IO_write_end, 0) ? __overflow (_fp, (unsigned char) (_ch)) : (unsigned char) (*(_fp)->_IO_write_ptr++ = (_ch)))
#if defined _LIBC || defined _GLIBCPP_USE_WCHAR_T
#define _IO_getwc_unlocked(_fp) (_IO_BE ((_fp)->_wide_data == NULL || ((_fp)->_wide_data->_IO_read_ptr >= (_fp)->_wide_data->_IO_read_end), 0) ? __wuflow (_fp) : (_IO_wint_t) *(_fp)->_wide_data->_IO_read_ptr++)
#define _IO_putwc_unlocked(_wch,_fp) (_IO_BE ((_fp)->_wide_data == NULL || ((_fp)->_wide_data->_IO_write_ptr >= (_fp)->_wide_data->_IO_write_end), 0) ? __woverflow (_fp, _wch) : (_IO_wint_t) (*(_fp)->_wide_data->_IO_write_ptr++ = (_wch)))
#endif
#define _IO_feof_unlocked(__fp) (((__fp)->_flags & _IO_EOF_SEEN) != 0)
#define _IO_ferror_unlocked(__fp) (((__fp)->_flags & _IO_ERR_SEEN) != 0)
#define _IO_PENDING_OUTPUT_COUNT(_fp) ((_fp)->_IO_write_ptr - (_fp)->_IO_write_base)
#define _IO_peekc(_fp) _IO_peekc_unlocked (_fp)
#define _IO_flockfile(_fp) 
#define _IO_funlockfile(_fp) 
#define _IO_ftrylockfile(_fp) 
#ifndef _IO_cleanup_region_start
#define _IO_cleanup_region_start(_fct,_fp) 
#endif
#ifndef _IO_cleanup_region_end
#define _IO_cleanup_region_end(_Doit) 
#endif
#define _IO_need_lock(_fp) (((_fp)->_flags2 & _IO_FLAGS2_NEED_LOCK) != 0)
#if defined _LIBC || defined _GLIBCPP_USE_WCHAR_T
# if __GNUC__ >= 2
# if defined _LIBC && defined SHARED
# include <shlib-compat.h>
# if SHLIB_COMPAT (libc, GLIBC_2_0, GLIBC_2_1)
#define _IO_fwide_maybe_incompatible (__builtin_expect (&_IO_stdin_used == NULL, 0))
# endif
# endif
# ifndef _IO_fwide_maybe_incompatible
#define _IO_fwide_maybe_incompatible (0)
# endif
#define _IO_fwide(__fp,__mode) ({ int __result = (__mode); if (__result < 0 && ! _IO_fwide_maybe_incompatible) { if ((__fp)->_mode == 0) (__fp)->_mode = -1; __result = (__fp)->_mode; } else if (__builtin_constant_p (__mode) && (__mode) == 0) __result = _IO_fwide_maybe_incompatible ? -1 : (__fp)->_mode; else __result = _IO_fwide (__fp, __result); __result; })
# endif
#endif
#ifdef __LDBL_COMPAT
# include <bits/libio-ldbl.h>
#endif
#ifdef __cplusplus
#endif
#endif
