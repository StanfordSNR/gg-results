// GGHASH:VTFWeqC9BonUeNd8ERRybgZWyba1h1XkwV8UDKoEOjwU000024f8
#ifndef _PERLIO_H
#define _PERLIO_H 
#ifndef USE_PERLIO
#define USE_STDIO 
#endif
#ifdef USE_STDIO
# error "stdio is no longer supported as the default base layer -- use perlio."
#endif
#include <stdio.h>
#if defined(USE_64_BIT_STDIO) && defined(HAS_FTELLO) && !defined(USE_FTELL64)
#define ftell ftello
#endif
#if defined(USE_64_BIT_STDIO) && defined(HAS_FSEEKO) && !defined(USE_FSEEK64)
#define fseek fseeko
#endif
#if defined(POSIX_BC) && defined(O_BINARY) && !defined(O_TEXT)
#undef O_BINARY
#endif
#ifndef PerlIO
#define PerlIO PerlIO
#define PERLIO_LAYERS 1
#ifdef PERLIO_FUNCS_CONST
#define PERLIO_FUNCS_DECL(funcs) const PerlIO_funcs funcs
#define PERLIO_FUNCS_CAST(funcs) (PerlIO_funcs*)(funcs)
#else
#define PERLIO_FUNCS_DECL(funcs) PerlIO_funcs funcs
#define PERLIO_FUNCS_CAST(funcs) (funcs)
#endif
#endif
#ifdef PERL_CORE
# ifndef PERLIO_NOT_STDIO
#define PERLIO_NOT_STDIO 1
# endif
#else
# ifndef PERLIO_NOT_STDIO
#define PERLIO_NOT_STDIO 0
# endif
#endif
#ifdef PERLIO_NOT_STDIO
#if PERLIO_NOT_STDIO
#include "nostdio.h"
#else
#endif
#else
#include "fakesdio.h"
#endif
#ifndef Fpos_t
#define Fpos_t Off_t
#endif
#ifndef EOF
#define EOF (-1)
#endif
#ifndef BUFSIZ
#define BUFSIZ 1024
#endif
#ifndef PERLIOBUF_DEFAULT_BUFSIZ
#define PERLIOBUF_DEFAULT_BUFSIZ (BUFSIZ > 8192 ? BUFSIZ : 8192)
#endif
#ifndef SEEK_SET
#define SEEK_SET 0
#endif
#ifndef SEEK_CUR
#define SEEK_CUR 1
#endif
#ifndef SEEK_END
#define SEEK_END 2
#endif
#define PERLIO_DUP_CLONE 1
#define PERLIO_DUP_FD 2
#ifndef __attribute__format__
# ifdef HASATTRIBUTE_FORMAT
#define __attribute__format__(x,y,z) __attribute__((format(x,y,z)))
# else
#define __attribute__format__(x,y,z) 
# endif
#endif
#ifndef PerlIO_init
#endif
#ifndef PerlIO_stdoutf
#endif
#ifndef PerlIO_puts
#endif
#ifndef PerlIO_open
#endif
#ifndef PerlIO_openn
#endif
#ifndef PerlIO_eof
#endif
#ifndef PerlIO_error
#endif
#ifndef PerlIO_clearerr
#endif
#ifndef PerlIO_getc
#endif
#ifndef PerlIO_putc
#endif
#ifndef PerlIO_ungetc
#endif
#ifndef PerlIO_fdopen
#endif
#ifndef PerlIO_importFILE
#endif
#ifndef PerlIO_exportFILE
#endif
#ifndef PerlIO_findFILE
#endif
#ifndef PerlIO_releaseFILE
#endif
#ifndef PerlIO_read
#endif
#ifndef PerlIO_unread
#endif
#ifndef PerlIO_write
#endif
#ifndef PerlIO_setlinebuf
#endif
#ifndef PerlIO_printf
#endif
#ifndef PerlIO_vprintf
#endif
#ifndef PerlIO_tell
#endif
#ifndef PerlIO_seek
#endif
#ifndef PerlIO_rewind
#endif
#ifndef PerlIO_has_base
#endif
#ifndef PerlIO_has_cntptr
#endif
#ifndef PerlIO_fast_gets
#endif
#ifndef PerlIO_canset_cnt
#endif
#ifndef PerlIO_get_ptr
#endif
#ifndef PerlIO_get_cnt
#endif
#ifndef PerlIO_set_cnt
#endif
#ifndef PerlIO_set_ptrcnt
#endif
#ifndef PerlIO_get_base
#endif
#ifndef PerlIO_get_bufsiz
#endif
#ifndef PerlIO_tmpfile
#endif
#ifndef PerlIO_stdin
#endif
#ifndef PerlIO_stdout
#endif
#ifndef PerlIO_stderr
#endif
#ifndef PerlIO_getpos
#endif
#ifndef PerlIO_setpos
#endif
#ifndef PerlIO_fdupopen
#endif
#if !defined(PerlIO_modestr)
#endif
#ifndef PerlIO_isutf8
#endif
#ifndef PerlIO_apply_layers
#endif
#ifndef PerlIO_binmode
#endif
#ifndef PerlIO_getname
#endif
#ifdef PERLIO_LAYERS
#endif
#endif
