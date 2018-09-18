// GGHASH:V1t2V0WOpcmwVlMFLijbWT.vPlHC7q0JafSLBVbfpHO000028cd9
#ifndef _config_h_
#define _config_h_ 
#define LOC_SED ""
#define HAS_FORK 
#ifdef HAS_GETTIMEOFDAY
#define Timeval struct timeval
#endif
#define HAS_MEMCMP 
#define HAS_MEMCPY 
#define HAS_MEMSET 
#define HAS_READDIR 
#define HAS_REGCOMP 
#define HAS_RENAME 
#define HAS_STAT 
#define HAS_STRTOL 
#if defined(HAS_GETGROUPS) || defined(HAS_SETGROUPS)
#define Groups_t int
#endif
#define I_MATH 
#define I_STDDEF 
#define I_STDLIB 
#define I_STRING 
#define I_SYS_STAT 
#define STDCHAR char
#ifdef CAN_VAPROTO
#define _V(args) args
#else
#define _V(args) ()
#endif
#define INTSIZE 4
#define LONGSIZE 4
#define SHORTSIZE 2
#ifdef HAS_QUAD
#define Quad_t int64_t
#define Uquad_t uint64_t
#define QUADKIND 4
#define QUAD_IS_INT 1
#define QUAD_IS_LONG 2
#define QUAD_IS_LONG_LONG 3
#define QUAD_IS_INT64_T 4
#define QUAD_IS___INT64 5
#endif
#define MEM_ALIGNBYTES 4
#if defined(MULTIARCH)
# ifdef __LITTLE_ENDIAN__
# if LONGSIZE == 4
#define BYTEORDER 0x1234
# else
# if LONGSIZE == 8
#define BYTEORDER 0x12345678
# endif
# endif
# else
# ifdef __BIG_ENDIAN__
# if LONGSIZE == 4
#define BYTEORDER 0x4321
# else
# if LONGSIZE == 8
#define BYTEORDER 0x87654321
# endif
# endif
# endif
# endif
#else
#define BYTEORDER 0x1234
#endif
#define CHARBITS 8
#define CASTFLAGS 0
#define Gconvert(x,n,t,b) sprintf((b),"%.*g",(n),(x))
#if defined(HAS_GNULIBC) && !defined(_GNU_SOURCE)
#define _GNU_SOURCE 
#endif
#ifdef HAS_SIGSETJMP
#define Sigjmp_buf sigjmp_buf
#define Sigsetjmp(buf,save_mask) sigsetjmp((buf),(save_mask))
#define Siglongjmp(buf,retval) siglongjmp((buf),(retval))
#else
#define Sigjmp_buf jmp_buf
#define Sigsetjmp(buf,save_mask) setjmp((buf))
#define Siglongjmp(buf,retval) longjmp((buf),(retval))
#endif
#define PERL_STATIC_INLINE static
#ifdef USE_STDIO_PTR
#define FILE_ptr(fp) ((fp)->_IO_read_ptr)
#define FILE_cnt(fp) ((fp)->_IO_read_end - (fp)->_IO_read_ptr)
#endif
#ifdef USE_STDIO_BASE
#define FILE_base(fp) ((fp)->_IO_read_base)
#define FILE_bufsiz(fp) ((fp)->_IO_read_end - (fp)->_IO_read_base)
#endif
#define HAS_VPRINTF 
#define DOUBLESIZE 8
#define I_TIME 
#define VAL_O_NONBLOCK O_NONBLOCK
#define VAL_EAGAIN EAGAIN
#define RD_NODATA -1
#undef EOF_NONBLOCK
#define PTRSIZE 4
#define Drand01() Perl_drand48()
#define Rand_seed_t U32
#define seedDrand01(x) Perl_drand48_init((Rand_seed_t)x)
#define RANDBITS 48
#define SSize_t int
#define BIN "/usr/local/bin"
#define BIN_EXP "/usr/local/bin"
#define PERL_RELOCATABLE_INC "undef"
#define PRIVLIB "/usr/local/lib/perl5/5.26"
#define PRIVLIB_EXP "/usr/local/lib/perl5/5.26"
#define SITELIB "/usr/local/lib/perl5/5.26"
#define SITELIB_EXP "/usr/local/lib/perl5/5.26"
#define SITELIB_STEM "/usr/local/lib/perl5"
#define OSNAME "unknown"
#define OSVERS "unknown"
#if 42 == 1
#define CAT2(a,b) a b
#define STRINGIFY(a) "a"
#endif
#if 42 == 42
#define PeRl_CaTiFy(a,b) a ## b
#define PeRl_StGiFy(a) #a
#define CAT2(a,b) PeRl_CaTiFy(a,b)
#define StGiFy(a) PeRl_StGiFy(a)
#define STRINGIFY(a) PeRl_StGiFy(a)
#endif
#if 42 != 1 && 42 != 42
#include "Bletch: How does this C preprocessor concatenate tokens?"
#endif
#define CPPSTDIN "cc -E"
#define CPPMINUS "-"
#define CPPRUN "cc -E"
#define CPPLAST "-"
#ifndef HASCONST
#define const 
#endif
#ifdef HAS_CSH
#define CSH ""
#endif
#ifdef HAS_PHOSTNAME
#define PHOSTNAME "/bin/hostname"
#endif
#ifdef HAS_LONG_DOUBLE
#define LONG_DOUBLESIZE 8
#define LONG_DOUBLEKIND 0
#define LONG_DOUBLE_IS_DOUBLE 0
#define LONG_DOUBLE_IS_IEEE_754_128_BIT_LITTLE_ENDIAN 1
#define LONG_DOUBLE_IS_IEEE_754_128_BIT_BIG_ENDIAN 2
#define LONG_DOUBLE_IS_X86_80_BIT_LITTLE_ENDIAN 3
#define LONG_DOUBLE_IS_X86_80_BIT_BIG_ENDIAN 4
#define LONG_DOUBLE_IS_DOUBLEDOUBLE_128_BIT_LE_LE 5
#define LONG_DOUBLE_IS_DOUBLEDOUBLE_128_BIT_BE_BE 6
#define LONG_DOUBLE_IS_DOUBLEDOUBLE_128_BIT_LE_BE 7
#define LONG_DOUBLE_IS_DOUBLEDOUBLE_128_BIT_BE_LE 8
#define LONG_DOUBLE_IS_VAX_H_FLOAT 9
#define LONG_DOUBLE_IS_UNKNOWN_FORMAT -1
#define LONG_DOUBLE_IS_DOUBLEDOUBLE_128_BIT_LITTLE_ENDIAN LONG_DOUBLE_IS_DOUBLEDOUBLE_128_BIT_LE_LE
#define LONG_DOUBLE_IS_DOUBLEDOUBLE_128_BIT_BIG_ENDIAN LONG_DOUBLE_IS_DOUBLEDOUBLE_128_BIT_BE_BE
#undef LONG_DOUBLE_STYLE_IEEE
#undef LONG_DOUBLE_STYLE_IEEE_DOUBLEDOUBLE
#undef LONG_DOUBLE_STYLE_IEEE_EXTENDED
#undef LONG_DOUBLE_STYLE_IEEE_STD
#undef LONG_DOUBLE_STYLE_VAX
#endif
#ifdef HAS_LONG_LONG
#define LONGLONGSIZE 8
#endif
#define HAS_MEMCHR 
#define Mmap_t void *
#define Shmat_t void *
#ifndef USE_STAT_BLOCKS
#endif
#define Strerror(e) strerror(e)
#define HAS_STRTOUL 
#define Signal_t int
#ifndef HASVOLATILE
#define volatile 
#endif
#define I_DIRENT 
#define Direntry_t struct dirent
#define I_STDARG 
#define Malloc_t void *
#define Free_t void
#ifdef CAN_PROTOTYPE
#define _(args) args
#else
#define _(args) ()
#endif
#define SH_PATH "/bin/sh"
#define SIG_NAME 0
#define SIG_NUM 0
#define SIG_SIZE 1
#ifndef USE_CROSS_COMPILE
#define PERL_TARGETARCH ""
#endif
#if defined(HAS_PROCSELFEXE) && !defined(PROCSELFEXE_PATH)
#define PROCSELFEXE_PATH 
#endif
#define HAS_PTRDIFF_T 
#ifndef USE_SITECUSTOMIZE
#endif
#ifndef U32_ALIGNMENT_REQUIRED
#define U32_ALIGNMENT_REQUIRED 
#endif
#define I_ASSERT 
#define DB_Hash_t u_int32_t
#define DB_Prefix_t size_t
#define DB_VERSION_MAJOR_CFG 0
#define DB_VERSION_MINOR_CFG 0
#define DB_VERSION_PATCH_CFG 0
#define DOUBLEINFBYTES 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x7f
#define DOUBLENANBYTES 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x7f
#define LONGDBLINFBYTES 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
#define LONGDBLNANBYTES 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
#define DOUBLEKIND 3
#define DOUBLE_IS_IEEE_754_32_BIT_LITTLE_ENDIAN 1
#define DOUBLE_IS_IEEE_754_32_BIT_BIG_ENDIAN 2
#define DOUBLE_IS_IEEE_754_64_BIT_LITTLE_ENDIAN 3
#define DOUBLE_IS_IEEE_754_64_BIT_BIG_ENDIAN 4
#define DOUBLE_IS_IEEE_754_128_BIT_LITTLE_ENDIAN 5
#define DOUBLE_IS_IEEE_754_128_BIT_BIG_ENDIAN 6
#define DOUBLE_IS_IEEE_754_64_BIT_MIXED_ENDIAN_LE_BE 7
#define DOUBLE_IS_IEEE_754_64_BIT_MIXED_ENDIAN_BE_LE 8
#define DOUBLE_IS_VAX_F_FLOAT 9
#define DOUBLE_IS_VAX_D_FLOAT 10
#define DOUBLE_IS_VAX_G_FLOAT 11
#define DOUBLE_IS_IBM_SINGLE_32_BIT 12
#define DOUBLE_IS_IBM_DOUBLE_64_BIT 13
#define DOUBLE_IS_CRAY_SINGLE_64_BIT 14
#define DOUBLE_IS_UNKNOWN_FORMAT -1
#define DOUBLE_HAS_INF 
#define DOUBLE_HAS_NAN 
#define DOUBLE_HAS_NEGATIVE_ZERO 
#define DOUBLE_HAS_SUBNORMALS 
#undef DOUBLE_STYLE_CRAY
#undef DOUBLE_STYLE_IBM
#define DOUBLE_STYLE_IEEE 
#undef DOUBLE_STYLE_VAX
#define DOUBLEMANTBITS 52
#define LONGDBLMANTBITS 64
#define NVMANTBITS 52
#define NEED_VA_COPY 
#define IVTYPE long
#define UVTYPE unsigned long
#define I8TYPE signed char
#define U8TYPE unsigned char
#define I16TYPE short
#define U16TYPE unsigned short
#define I32TYPE long
#define U32TYPE unsigned long
#ifdef HAS_QUAD
#define I64TYPE int64_t
#define U64TYPE uint64_t
#endif
#define NVTYPE double
#define IVSIZE 4
#define UVSIZE 4
#define I8SIZE 1
#define U8SIZE 1
#define I16SIZE 2
#define U16SIZE 2
#define I32SIZE 4
#define U32SIZE 4
#ifdef HAS_QUAD
#define I64SIZE 8
#define U64SIZE 8
#endif
#define NVSIZE 8
#undef NV_PRESERVES_UV
#define NV_PRESERVES_UV_BITS 0
#define NV_OVERFLOWS_INTEGERS_AT 256.0*256.0*256.0*256.0*256.0*256.0*2.0*2.0*2.0*2.0*2.0
#undef NV_ZERO_IS_ALLBITS_ZERO
#if UVSIZE == 8
# ifdef BYTEORDER
# if BYTEORDER == 0x1234
#undef BYTEORDER
#define BYTEORDER 0x12345678
# else
# if BYTEORDER == 0x4321
#undef BYTEORDER
#define BYTEORDER 0x87654321
# endif
# endif
# endif
#endif
#define IVdf "ld"
#define UVuf "lu"
#define UVof "lo"
#define UVxf "lx"
#define UVXf "lX"
#define NVef "e"
#define NVff "f"
#define NVgf "g"
#define SELECT_MIN_BITS 32
#define ST_INO_SIGN 1
#define ST_INO_SIZE 4
#define STARTPERL "#!perl"
#ifdef HAS_STDIO_STREAM_ARRAY
#define STDIO_STREAM_ARRAY 
#endif
#define GMTIME_MAX 2147483647
#define GMTIME_MIN 0
#define LOCALTIME_MAX 2147483647
#define LOCALTIME_MIN 0
#ifndef USE_64_BIT_INT
#endif
#ifndef USE_64_BIT_ALL
#endif
#ifndef USE_FAST_STDIO
#endif
#ifndef USE_LARGE_FILES
#endif
#ifndef USE_LONG_DOUBLE
#endif
#ifndef USE_MORE_BITS
#endif
#ifndef MULTIPLICITY
#endif
#ifndef USE_PERLIO
#endif
#ifndef USE_QUADMATH
#endif
#ifndef USE_SOCKS
#endif
#define Netdb_host_t const char *
#define Netdb_hlen_t int
#define Netdb_name_t const char *
#define Netdb_net_t unsigned long
#define Select_fd_set_t int
#define Sock_size_t int
#define ARCHNAME "unknown"
#define ASCTIME_R_PROTO 0
#define CRYPT_R_PROTO 0
#define CTERMID_R_PROTO 0
#define CTIME_R_PROTO 0
#define DRAND48_R_PROTO 0
#define ENDGRENT_R_PROTO 0
#define ENDHOSTENT_R_PROTO 0
#define ENDNETENT_R_PROTO 0
#define ENDPROTOENT_R_PROTO 0
#define ENDPWENT_R_PROTO 0
#define ENDSERVENT_R_PROTO 0
#define GETGRENT_R_PROTO 0
#define GETGRGID_R_PROTO 0
#define GETGRNAM_R_PROTO 0
#define GETHOSTBYADDR_R_PROTO 0
#define GETHOSTBYNAME_R_PROTO 0
#define GETHOSTENT_R_PROTO 0
#define GETLOGIN_R_PROTO 0
#define GETNETBYADDR_R_PROTO 0
#define GETNETBYNAME_R_PROTO 0
#define GETNETENT_R_PROTO 0
#define GETPROTOBYNAME_R_PROTO 0
#define GETPROTOBYNUMBER_R_PROTO 0
#define GETPROTOENT_R_PROTO 0
#define GETPWENT_R_PROTO 0
#define GETPWNAM_R_PROTO 0
#define GETPWUID_R_PROTO 0
#define GETSERVBYNAME_R_PROTO 0
#define GETSERVBYPORT_R_PROTO 0
#define GETSERVENT_R_PROTO 0
#define GETSPNAM_R_PROTO 0
#define GMTIME_R_PROTO 0
#ifdef LOCALTIME_R_NEEDS_TZSET
#define L_R_TZSET tzset(),
#else
#define L_R_TZSET 
#endif
#define LOCALTIME_R_PROTO 0
#define SCHED_YIELD sched_yield()
#define RANDOM_R_PROTO 0
#define READDIR64_R_PROTO 0
#define READDIR_R_PROTO 0
#define SETGRENT_R_PROTO 0
#define SETHOSTENT_R_PROTO 0
#define SETLOCALE_R_PROTO 0
#define SETNETENT_R_PROTO 0
#define SETPROTOENT_R_PROTO 0
#define SETPWENT_R_PROTO 0
#define SETSERVENT_R_PROTO 0
#define SRAND48_R_PROTO 0
#define SRANDOM_R_PROTO 0
#define STRERROR_R_PROTO 0
#define TMPNAM_R_PROTO 0
#define TTYNAME_R_PROTO 0
#if defined(USE_5005THREADS) && !defined(USE_ITHREADS)
#define USE_THREADS 
#endif
#define HAS_TIME 
#define Time_t time_t
#define Fpos_t int
#define Gid_t_f "lu"
#define Gid_t_sign 1
#define Gid_t_size 4
#define Gid_t int
#define Off_t int
#define LSEEKSIZE 4
#define Off_t_size 4
#define Mode_t int
#define Pid_t int
#define Size_t_size 4
#define Size_t size_t
#define Uid_t_f "lu"
#define Uid_t_sign 1
#define Uid_t_size 4
#define Uid_t int
#endif
