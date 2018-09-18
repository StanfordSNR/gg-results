// GGHASH:V8d4SYRhg_bwycxzGqAlDiy94n92los1zpqocKI7ZnpY000035c1
#ifndef _PERLIOL_H
#define _PERLIOL_H 
#define PERLIO_K_RAW 0x00000001
#define PERLIO_K_BUFFERED 0x00000002
#define PERLIO_K_CANCRLF 0x00000004
#define PERLIO_K_FASTGETS 0x00000008
#define PERLIO_K_DUMMY 0x00000010
#define PERLIO_K_UTF8 0x00008000
#define PERLIO_K_DESTRUCT 0x00010000
#define PERLIO_K_MULTIARG 0x00020000
#ifdef VMS
#elif defined (OS2)
#elif defined (WIN32)
#endif
#define PERLIO_F_EOF 0x00000100
#define PERLIO_F_CANWRITE 0x00000200
#define PERLIO_F_CANREAD 0x00000400
#define PERLIO_F_ERROR 0x00000800
#define PERLIO_F_TRUNCATE 0x00001000
#define PERLIO_F_APPEND 0x00002000
#define PERLIO_F_CRLF 0x00004000
#define PERLIO_F_UTF8 0x00008000
#define PERLIO_F_UNBUF 0x00010000
#define PERLIO_F_WRBUF 0x00020000
#define PERLIO_F_RDBUF 0x00040000
#define PERLIO_F_LINEBUF 0x00080000
#define PERLIO_F_TEMP 0x00100000
#define PERLIO_F_OPEN 0x00200000
#define PERLIO_F_FASTGETS 0x00400000
#define PERLIO_F_TTY 0x00800000
#define PERLIO_F_NOTREG 0x01000000
#define PERLIO_F_CLEARED 0x02000000
#define PerlIOBase(f) (*(f))
#define PerlIOSelf(f,type) ((type *)PerlIOBase(f))
#define PerlIONext(f) (&(PerlIOBase(f)->next))
#define PerlIOValid(f) ((f) && *(f))
#undef EXTPERLIO
#ifdef PERLIO_FUNCS_CONST
#define EXTPERLIO EXTCONST
#else
#define EXTPERLIO EXT
#endif
#ifdef WIN32
#endif
#define PerlIOArg PerlIO_arg_fetch(layers,n)
#ifdef PERLIO_USING_CRLF
#define PERLIO_STDTEXT "t"
#else
#define PERLIO_STDTEXT ""
#endif
#ifdef USE_STDIO_PTR
#endif
#ifdef FILE_base
#endif
#endif
