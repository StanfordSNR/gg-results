// GGHASH:VAWjIkYXsxakxZ7403R1HrIogQAIe4jlDi401jNZ3miE00028e4d
#ifndef _config_h_
#define _config_h_ 
#define LOC_SED "/bin/sed"
#define HAS_ALARM 
#define HAS_BCMP 
#define HAS_BCOPY 
#define HAS_BZERO 
#define HAS_CBRT 
#define HAS_CHOWN 
#define HAS_CHROOT 
#define HAS_CRYPT 
#define HAS_CTERMID 
#define HAS_CUSERID 
#define HAS_DBL_DIG 
#define HAS_DIFFTIME 
#define HAS_DLERROR 
#define HAS_DUP2 
#define HAS_FCHMOD 
#define HAS_FCHOWN 
#define HAS_FCNTL 
#define HAS_FGETPOS 
#define HAS_FLOCK 
#define HAS_FORK 
#define HAS_FSETPOS 
#define HAS_GETTIMEOFDAY 
#ifdef HAS_GETTIMEOFDAY
#define Timeval struct timeval
#endif
#define HAS_GETGROUPS 
#define HAS_GETLOGIN 
#define HAS_GETPGID 
#define HAS_GETPPID 
#define HAS_GETPRIORITY 
#define HAS_INET_ATON 
#define HAS_KILLPG 
#define HAS_LINK 
#define HAS_LOCALECONV 
#define HAS_LOCKF 
#define HAS_LSTAT 
#define HAS_MBLEN 
#define HAS_MBSTOWCS 
#define HAS_MBTOWC 
#define HAS_MEMCMP 
#define HAS_MEMCPY 
#define HAS_MEMMOVE 
#define HAS_MEMSET 
#define HAS_MKDIR 
#define HAS_MKFIFO 
#define HAS_MKTIME 
#define HAS_MSYNC 
#define HAS_MUNMAP 
#define HAS_NICE 
#define HAS_PATHCONF 
#define HAS_FPATHCONF 
#define HAS_PAUSE 
#define HAS_PIPE 
#define HAS_POLL 
#define HAS_READDIR 
#define HAS_SEEKDIR 
#define HAS_TELLDIR 
#define HAS_REWINDDIR 
#define HAS_READLINK 
#define HAS_REGCOMP 
#define HAS_RENAME 
#define HAS_RMDIR 
#define HAS_SELECT 
#define HAS_SETEGID 
#define HAS_SETEUID 
#define HAS_SETGROUPS 
#define HAS_SETLINEBUF 
#define HAS_SETLOCALE 
#define HAS_SETPGID 
#define HAS_SETPRIORITY 
#define HAS_SETREGID 
#define HAS_SETRESGID 
#define HAS_SETREUID 
#define HAS_SETRESUID 
#define HAS_SETSID 
#define HAS_STAT 
#define HAS_STRCHR 
#define HAS_STRCOLL 
#define USE_STRUCT_COPY 
#define HAS_STRTOD 
#define HAS_STRTOL 
#define HAS_STRXFRM 
#define HAS_SYMLINK 
#define HAS_SYSCALL 
#define HAS_SYSCONF 
#define HAS_SYSTEM 
#define HAS_TCGETPGRP 
#define HAS_TCSETPGRP 
#define HAS_TRUNCATE 
#define HAS_TZNAME 
#define HAS_UMASK 
#define HAS_USLEEP 
#define HAS_WAIT4 
#define HAS_WAITPID 
#define HAS_WCSTOMBS 
#define HAS_WCTOMB 
#if defined(HAS_GETGROUPS) || defined(HAS_SETGROUPS)
#define Groups_t gid_t
#endif
#define I_ARPA_INET 
#define I_DBM 
#define I_DLFCN 
#define I_FLOAT 
#define I_GDBM 
#define I_LIMITS 
#define I_LOCALE 
#define I_MATH 
#define I_NETINET_IN 
#define I_STDDEF 
#define I_STDLIB 
#define I_STRING 
#define I_SYS_DIR 
#define I_SYS_FILE 
#define I_SYS_IOCTL 
#define I_SYS_PARAM 
#define I_SYS_POLL 
#define I_SYS_RESOURCE 
#define I_SYS_SELECT 
#define I_SYS_STAT 
#define I_SYS_TIMES 
#define I_SYS_TYPES 
#define I_SYS_UN 
#define I_SYS_WAIT 
#define I_UNISTD 
#define I_UTIME 
#define I_VALUES 
#define STDCHAR char
#define CAN_VAPROTO 
#ifdef CAN_VAPROTO
#define _V(args) args
#else
#define _V(args) ()
#endif
#define INTSIZE 4
#define LONGSIZE 8
#define SHORTSIZE 2
#define HAS_QUAD 
#ifdef HAS_QUAD
#define Quad_t long
#define Uquad_t unsigned long
#define QUADKIND 2
#define QUAD_IS_INT 1
#define QUAD_IS_LONG 2
#define QUAD_IS_LONG_LONG 3
#define QUAD_IS_INT64_T 4
#define QUAD_IS___INT64 5
#endif
#define HAS_EACCESS 
#define MEM_ALIGNBYTES 8
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
#define BYTEORDER 0x12345678
#endif
#define CHARBITS 8
#define CASTNEGFLOAT 
#define CASTFLAGS 0
#define HAS_FD_SET 
#define Gconvert(x,n,t,b) gcvt((x),(n),(b))
#define HAS_GETPAGESIZE 
#define HAS_GNULIBC 
#if defined(HAS_GNULIBC) && !defined(_GNU_SOURCE)
#define _GNU_SOURCE 
#endif
#define HAS_ISASCII 
#define HAS_LCHOWN 
#define HAS_OPEN3 
#define HAS_SANE_MEMCMP 
#define HAS_SIGACTION 
#define HAS_SIGINFO_SI_ERRNO 
#define HAS_SIGINFO_SI_PID 
#define HAS_SIGINFO_SI_UID 
#define HAS_SIGINFO_SI_ADDR 
#define HAS_SIGINFO_SI_STATUS 
#define HAS_SIGINFO_SI_BAND 
#define HAS_SIGINFO_SI_VALUE 
#define HAS_SIGSETJMP 
#ifdef HAS_SIGSETJMP
#define Sigjmp_buf sigjmp_buf
#define Sigsetjmp(buf,save_mask) sigsetjmp((buf),(save_mask))
#define Siglongjmp(buf,retval) siglongjmp((buf),(retval))
#else
#define Sigjmp_buf jmp_buf
#define Sigsetjmp(buf,save_mask) setjmp((buf))
#define Siglongjmp(buf,retval) longjmp((buf),(retval))
#endif
#define HAS_STATIC_INLINE 
#define PERL_STATIC_INLINE static __inline__
#ifdef USE_STDIO_PTR
#define FILE_ptr(fp) ((fp)->_ptr)
#define FILE_cnt(fp) ((fp)->_cnt)
#endif
#ifdef USE_STDIO_BASE
#define FILE_base(fp) ((fp)->_base)
#define FILE_bufsiz(fp) ((fp)->_cnt + (fp)->_ptr - (fp)->_base)
#endif
#define HAS_VPRINTF 
#define DOUBLESIZE 8
#define I_TIME 
#define I_SYS_TIME 
#define HAS_TM_TM_ZONE 
#define HAS_TM_TM_GMTOFF 
#define VAL_O_NONBLOCK O_NONBLOCK
#define VAL_EAGAIN EAGAIN
#define RD_NODATA -1
#define EOF_NONBLOCK 
#define PTRSIZE 8
#define Drand01() Perl_drand48()
#define Rand_seed_t U32
#define seedDrand01(x) Perl_drand48_init((Rand_seed_t)x)
#define RANDBITS 48
#define SSize_t ssize_t
#define ARCHLIB "/usr/lib/x86_64-linux-gnu/perl/5.26"
#define ARCHLIB_EXP "/usr/lib/x86_64-linux-gnu/perl/5.26"
#define BIN "/usr/bin"
#define BIN_EXP "/usr/bin"
#define PERL_RELOCATABLE_INC "undef"
#define PERL_INC_VERSION_LIST "5.26.0","5.26.0/x86_64-linux-gnu-thread-multi",0
#define PRIVLIB "/usr/share/perl/5.26"
#define PRIVLIB_EXP "/usr/share/perl/5.26"
#define SITEARCH "/usr/local/lib/x86_64-linux-gnu/perl/5.26.1"
#define SITEARCH_EXP "/usr/local/lib/x86_64-linux-gnu/perl/5.26.1"
#define SITELIB "/usr/local/share/perl/5.26.1"
#define SITELIB_EXP "/usr/local/share/perl/5.26.1"
#define SITELIB_STEM ""
#define PERL_VENDORARCH "/usr/lib/x86_64-linux-gnu/perl5/5.26"
#define PERL_VENDORARCH_EXP "/usr/lib/x86_64-linux-gnu/perl5/5.26"
#define PERL_VENDORLIB_EXP "/usr/share/perl5"
#define PERL_VENDORLIB_STEM ""
#define OSNAME "linux"
#define OSVERS "4.9.0"
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
#define CPPSTDIN "x86_64-linux-gnu-gcc  -E"
#define CPPMINUS "-"
#define CPPRUN "x86_64-linux-gnu-gcc  -E"
#define CPPLAST "-"
#define HAS_ACCESS 
#define HASATTRIBUTE_DEPRECATED 
#define HASATTRIBUTE_FORMAT 
#define HASATTRIBUTE_NORETURN 
#define HASATTRIBUTE_MALLOC 
#define HASATTRIBUTE_NONNULL 
#define HASATTRIBUTE_PURE 
#define HASATTRIBUTE_UNUSED 
#define HASATTRIBUTE_WARN_UNUSED_RESULT 
#define HAS_BACKTRACE 
#define HASCONST 
#ifndef HASCONST
#define const 
#endif
#ifdef HAS_CSH
#define CSH "csh"
#endif
#define HAS_DLADDR 
#define HAS_ENDGRENT 
#define HAS_ENDHOSTENT 
#define HAS_ENDNETENT 
#define HAS_ENDPROTOENT 
#define HAS_ENDPWENT 
#define HAS_ENDSERVENT 
#define FLEXFILENAMES 
#define HAS_GETGRENT 
#define HAS_GETHOSTBYADDR 
#define HAS_GETHOSTBYNAME 
#define HAS_GETHOSTENT 
#define HAS_GETHOSTNAME 
#define HAS_UNAME 
#ifdef HAS_PHOSTNAME
#define PHOSTNAME "/bin/hostname"
#endif
#define HAS_GETNETBYADDR 
#define HAS_GETNETBYNAME 
#define HAS_GETNETENT 
#define HAS_GETPROTOENT 
#define HAS_GETPGRP 
#define HAS_GETPROTOBYNAME 
#define HAS_GETPROTOBYNUMBER 
#define HAS_GETPWENT 
#define HAS_GETSERVENT 
#define HAS_GETSERVBYNAME 
#define HAS_GETSERVBYPORT 
#define HAS_HTONL 
#define HAS_HTONS 
#define HAS_NTOHL 
#define HAS_NTOHS 
#define HAS_LDEXPL 
#define HAS_LONG_DOUBLE 
#ifdef HAS_LONG_DOUBLE
#define LONG_DOUBLESIZE 16
#define LONG_DOUBLEKIND 3
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
#define LONG_DOUBLE_STYLE_IEEE 
#undef LONG_DOUBLE_STYLE_IEEE_DOUBLEDOUBLE
#define LONG_DOUBLE_STYLE_IEEE_EXTENDED 
#undef LONG_DOUBLE_STYLE_IEEE_STD
#undef LONG_DOUBLE_STYLE_VAX
#endif
#define HAS_LONG_LONG 
#ifdef HAS_LONG_LONG
#define LONGLONGSIZE 8
#endif
#define HAS_MEMCHR 
#define HAS_MKSTEMP 
#define HAS_MMAP 
#define Mmap_t void *
#define HAS_MSG 
#define HAS_SEM 
#define HAS_SETGRENT 
#define HAS_SETHOSTENT 
#define HAS_SETNETENT 
#define HAS_SETPROTOENT 
#define HAS_SETPGRP 
#define HAS_SETPWENT 
#define HAS_SETSERVENT 
#define HAS_SETVBUF 
#define HAS_SHM 
#define Shmat_t void *
#define HAS_SHMAT_PROTOTYPE 
#define HAS_SOCKET 
#define HAS_SOCKETPAIR 
#define HAS_SOCKADDR_IN6 
#define HAS_SIN6_SCOPE_ID 
#define HAS_IP_MREQ 
#define HAS_IP_MREQ_SOURCE 
#define HAS_IPV6_MREQ 
#ifndef USE_STAT_BLOCKS
#define USE_STAT_BLOCKS 
#endif
#define HAS_STRERROR 
#define HAS_SYS_ERRLIST 
#define Strerror(e) strerror(e)
#define HAS_STRTOUL 
#define USE_SEMCTL_SEMUN 
#define USE_SEMCTL_SEMID_DS 
#define Signal_t void
#define HASVOLATILE 
#ifndef HASVOLATILE
#define volatile 
#endif
#define I_DIRENT 
#define Direntry_t struct dirent
#define I_EXECINFO 
#define I_GRP 
#define GRPASSWD 
#define I_NDBM 
#define I_GDBM_NDBM 
#define NDBM_H_USES_PROTOTYPES 
#define GDBM_NDBM_H_USES_PROTOTYPES 
#define I_NETDB 
#define I_PWD 
#define PWGECOS 
#define PWPASSWD 
#define I_SYSUIO 
#define I_TERMIOS 
#define I_STDARG 
#define Malloc_t void *
#define Free_t void
#define PERL_MALLOC_WRAP 
#define CAN_PROTOTYPE 
#ifdef CAN_PROTOTYPE
#define _(args) args
#else
#define _(args) ()
#endif
#define SH_PATH "/bin/sh"
#define SIG_NAME "ZERO", "HUP", "INT", "QUIT", "ILL", "TRAP", "ABRT", "BUS", "FPE", "KILL", "USR1", "SEGV", "USR2", "PIPE", "ALRM", "TERM", "STKFLT", "CHLD", "CONT", "STOP", "TSTP", "TTIN", "TTOU", "URG", "XCPU", "XFSZ", "VTALRM", "PROF", "WINCH", "IO", "PWR", "SYS", "NUM32", "NUM33", "RTMIN", "NUM35", "NUM36", "NUM37", "NUM38", "NUM39", "NUM40", "NUM41", "NUM42", "NUM43", "NUM44", "NUM45", "NUM46", "NUM47", "NUM48", "NUM49", "NUM50", "NUM51", "NUM52", "NUM53", "NUM54", "NUM55", "NUM56", "NUM57", "NUM58", "NUM59", "NUM60", "NUM61", "NUM62", "NUM63", "RTMAX", "IOT", "CLD", "POLL", "UNUSED", 0
#define SIG_NUM 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 6, 17, 29, 31, 0
#define SIG_SIZE 69
#ifndef USE_CROSS_COMPILE
#define PERL_TARGETARCH ""
#endif
#define HAS_ATOLL 
#define HAS_ACOSH 
#define HAS_ASINH 
#define HAS_ATANH 
#define HAS_BUILTIN_EXPECT 
#define HAS_BUILTIN_CHOOSE_EXPR 
#define HAS_C99_VARIADIC_MACROS 
#define HAS_CLEARENV 
#define HAS_STRUCT_CMSGHDR 
#define HAS_COPYSIGN 
#define HAS_COPYSIGNL 
#define HAS_DBMINIT_PROTO 
#define HAS_DIRFD 
#define HAS_ERF 
#define HAS_ERFC 
#define HAS_EXP2 
#define HAS_EXPM1 
#define HAS_FCHDIR 
#define FCNTL_CAN_LOCK 
#define HAS_FDIM 
#define HAS_FEGETROUND 
#define HAS_FINITE 
#define HAS_FINITEL 
#define HAS_FLOCK_PROTO 
#define HAS_FMA 
#define HAS_FMAX 
#define HAS_FMIN 
#define HAS_FPCLASSIFY 
#define HAS_FREXPL 
#define HAS_FSEEKO 
#define HAS_FSTATFS 
#define HAS_FSYNC 
#define HAS_FTELLO 
#define HAS_FUTIMES 
#define HAS_GAI_STRERROR 
#define HAS_GETADDRINFO 
#define HAS_GETCWD 
#define HAS_GETITIMER 
#define HAS_GETMNTENT 
#define HAS_GETNAMEINFO 
#define HAS_GETSPNAM 
#define HAS_HASMNTOPT 
#define HAS_HYPOT 
#define HAS_ILOGB 
#define HAS_ILOGBL 
#define HAS_INETNTOP 
#define HAS_INETPTON 
#define HAS_INT64_T 
#define HAS_ISBLANK 
#define HAS_ISFINITE 
#define HAS_ISINF 
#define HAS_ISINFL 
#define HAS_ISNAN 
#define HAS_ISNANL 
#define HAS_ISNORMAL 
#define HAS_J0 
#define HAS_J0L 
#define HAS_LC_MONETARY_2008 
#define HAS_LDBL_DIG 
#define HAS_LGAMMA 
#define HAS_LGAMMA_R 
#define HAS_LLRINT 
#define HAS_LLRINTL 
#define HAS_LLROUND 
#define HAS_LLROUNDL 
#define HAS_LOG1P 
#define HAS_LOG2 
#define HAS_LOGB 
#define HAS_LRINT 
#define HAS_LRINTL 
#define HAS_LROUND 
#define HAS_LROUNDL 
#define HAS_MADVISE 
#define HAS_MEMMEM 
#define HAS_MKDTEMP 
#define HAS_MKSTEMPS 
#define HAS_MODFL 
#define HAS_MODFL_PROTO 
#define HAS_MPROTECT 
#define HAS_STRUCT_MSGHDR 
#define HAS_NAN 
#define HAS_NEARBYINT 
#define HAS_NEWLOCALE 
#define HAS_FREELOCALE 
#define HAS_USELOCALE 
#define HAS_NEXTAFTER 
#define HAS_NEXTTOWARD 
#define HAS_NL_LANGINFO 
#define HAS_OFF64_T 
#define HAS_PRCTL 
#define HAS_PRCTL_SET_NAME 
#define HAS_PROCSELFEXE 
#if defined(HAS_PROCSELFEXE) && !defined(PROCSELFEXE_PATH)
#define PROCSELFEXE_PATH "/proc/self/exe"
#endif
#define HAS_PTHREAD_ATTR_SETSCOPE 
#define HAS_PTRDIFF_T 
#define HAS_READV 
#define HAS_RECVMSG 
#define HAS_REMAINDER 
#define HAS_REMQUO 
#define HAS_RINT 
#define HAS_ROUND 
#define HAS_SBRK_PROTO 
#define HAS_SCALBN 
#define HAS_SCALBNL 
#define HAS_SENDMSG 
#define HAS_SETITIMER 
#define HAS_SIGNBIT 
#define HAS_SIGPROCMASK 
#ifndef USE_SITECUSTOMIZE
#endif
#define HAS_SNPRINTF 
#define HAS_VSNPRINTF 
#define HAS_SOCKATMARK 
#define HAS_SOCKATMARK_PROTO 
#define SPRINTF_RETURNS_STRLEN 
#define HAS_SQRTL 
#define HAS_SETRESGID_PROTO 
#define HAS_SETRESUID_PROTO 
#define HAS_STRUCT_STATFS_F_FLAGS 
#define HAS_STRUCT_STATFS 
#define HAS_FSTATVFS 
#define HAS_STRERROR_L 
#define HAS_STRFTIME 
#define HAS_STRTOLD 
#define HAS_STRTOLL 
#define HAS_STRTOQ 
#define HAS_STRTOULL 
#define HAS_STRTOUQ 
#define HAS_SYSCALL_PROTO 
#define HAS_TELLDIR_PROTO 
#define HAS_TGAMMA 
#define HAS_TIMEGM 
#define HAS_TRUNC 
#define HAS_TRUNCL 
#ifndef U32_ALIGNMENT_REQUIRED
#define U32_ALIGNMENT_REQUIRED 
#endif
#define HAS_UNSETENV 
#define HAS_USLEEP_PROTO 
#define HAS_USTAT 
#define HAS_WCSCMP 
#define HAS_WCSXFRM 
#define HAS_WRITEV 
#define DEFAULT_INC_EXCLUDES_DOT 
#define USE_DYNAMIC_LOADING 
#define FFLUSH_NULL 
#define I_ASSERT 
#define I_CRYPT 
#define DB_Hash_t u_int32_t
#define DB_Prefix_t size_t
#define DB_VERSION_MAJOR_CFG 5
#define DB_VERSION_MINOR_CFG 3
#define DB_VERSION_PATCH_CFG 28
#define I_FENV 
#define I_INTTYPES 
#define I_LANGINFO 
#define I_MNTENT 
#define I_NETINET_TCP 
#define I_POLL 
#define I_QUADMATH 
#define I_SHADOW 
#define I_STDBOOL 
#define I_STDINT 
#define I_SYSLOG 
#define I_SYS_MOUNT 
#define I_SYS_STATFS 
#define I_SYS_STATVFS 
#define I_SYSUTSNAME 
#define I_SYS_VFS 
#define I_USTAT 
#define DOUBLEINFBYTES 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x7f
#define DOUBLENANBYTES 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xff
#define LONGDBLINFBYTES 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
#define LONGDBLNANBYTES 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
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
#define PERL_PRIfldbl "Lf"
#define PERL_PRIgldbl "Lg"
#define PERL_PRIeldbl "Le"
#define PERL_SCNfldbl "Lf"
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
#define I32TYPE int
#define U32TYPE unsigned int
#ifdef HAS_QUAD
#define I64TYPE long
#define U64TYPE unsigned long
#endif
#define NVTYPE double
#define IVSIZE 8
#define UVSIZE 8
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
#define NV_PRESERVES_UV_BITS 53
#define NV_OVERFLOWS_INTEGERS_AT 256.0*256.0*256.0*256.0*256.0*256.0*2.0*2.0*2.0*2.0*2.0
#define NV_ZERO_IS_ALLBITS_ZERO 
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
#define SELECT_MIN_BITS 64
#define ST_INO_SIGN 1
#define ST_INO_SIZE 8
#define STARTPERL "#!/usr/bin/perl"
#ifdef HAS_STDIO_STREAM_ARRAY
#define STDIO_STREAM_ARRAY 
#endif
#define GMTIME_MAX 67768036191676799
#define GMTIME_MIN -62167219200
#define LOCALTIME_MAX 67768036191676799
#define LOCALTIME_MIN -62167219200
#ifndef USE_64_BIT_INT
#define USE_64_BIT_INT 
#endif
#ifndef USE_64_BIT_ALL
#define USE_64_BIT_ALL 
#endif
#ifndef USE_FAST_STDIO
#endif
#ifndef USE_LARGE_FILES
#define USE_LARGE_FILES 
#endif
#ifndef USE_LONG_DOUBLE
#endif
#ifndef USE_MORE_BITS
#endif
#ifndef MULTIPLICITY
#define MULTIPLICITY 
#endif
#ifndef USE_PERLIO
#define USE_PERLIO 
#endif
#ifndef USE_QUADMATH
#endif
#ifndef USE_SOCKS
#endif
#define HAS_DRAND48_PROTO 
#define HAS_GETHOST_PROTOS 
#define HAS_GETNET_PROTOS 
#define HAS_GETPROTO_PROTOS 
#define HAS_GETSERV_PROTOS 
#define HAS_LSEEK_PROTO 
#define Netdb_host_t char *
#define Netdb_hlen_t size_t
#define Netdb_name_t const char *
#define Netdb_net_t in_addr_t
#define Select_fd_set_t fd_set *
#define Sock_size_t socklen_t
#define ARCHNAME "x86_64-linux-gnu-thread-multi"
#define HAS_ASCTIME_R 
#define ASCTIME_R_PROTO REENTRANT_PROTO_B_SB
#define HAS_CRYPT_R 
#define CRYPT_R_PROTO REENTRANT_PROTO_B_CCS
#define CTERMID_R_PROTO 0
#define HAS_CTIME_R 
#define CTIME_R_PROTO REENTRANT_PROTO_B_SB
#define HAS_DRAND48_R 
#define DRAND48_R_PROTO REENTRANT_PROTO_I_ST
#define ENDGRENT_R_PROTO 0
#define ENDHOSTENT_R_PROTO 0
#define ENDNETENT_R_PROTO 0
#define ENDPROTOENT_R_PROTO 0
#define ENDPWENT_R_PROTO 0
#define ENDSERVENT_R_PROTO 0
#define HAS_GETGRENT_R 
#define GETGRENT_R_PROTO REENTRANT_PROTO_I_SBWR
#define HAS_GETGRGID_R 
#define GETGRGID_R_PROTO REENTRANT_PROTO_I_TSBWR
#define HAS_GETGRNAM_R 
#define GETGRNAM_R_PROTO REENTRANT_PROTO_I_CSBWR
#define HAS_GETHOSTBYADDR_R 
#define GETHOSTBYADDR_R_PROTO REENTRANT_PROTO_I_TsISBWRE
#define HAS_GETHOSTBYNAME_R 
#define GETHOSTBYNAME_R_PROTO REENTRANT_PROTO_I_CSBWRE
#define HAS_GETHOSTENT_R 
#define GETHOSTENT_R_PROTO REENTRANT_PROTO_I_SBWRE
#define HAS_GETLOGIN_R 
#define GETLOGIN_R_PROTO REENTRANT_PROTO_I_BW
#define HAS_GETNETBYADDR_R 
#define GETNETBYADDR_R_PROTO REENTRANT_PROTO_I_uISBWRE
#define HAS_GETNETBYNAME_R 
#define GETNETBYNAME_R_PROTO REENTRANT_PROTO_I_CSBWRE
#define HAS_GETNETENT_R 
#define GETNETENT_R_PROTO REENTRANT_PROTO_I_SBWRE
#define HAS_GETPROTOBYNAME_R 
#define GETPROTOBYNAME_R_PROTO REENTRANT_PROTO_I_CSBWR
#define HAS_GETPROTOBYNUMBER_R 
#define GETPROTOBYNUMBER_R_PROTO REENTRANT_PROTO_I_ISBWR
#define HAS_GETPROTOENT_R 
#define GETPROTOENT_R_PROTO REENTRANT_PROTO_I_SBWR
#define HAS_GETPWENT_R 
#define GETPWENT_R_PROTO REENTRANT_PROTO_I_SBWR
#define HAS_GETPWNAM_R 
#define GETPWNAM_R_PROTO REENTRANT_PROTO_I_CSBWR
#define HAS_GETPWUID_R 
#define GETPWUID_R_PROTO REENTRANT_PROTO_I_TSBWR
#define HAS_GETSERVBYNAME_R 
#define GETSERVBYNAME_R_PROTO REENTRANT_PROTO_I_CCSBWR
#define HAS_GETSERVBYPORT_R 
#define GETSERVBYPORT_R_PROTO REENTRANT_PROTO_I_ICSBWR
#define HAS_GETSERVENT_R 
#define GETSERVENT_R_PROTO REENTRANT_PROTO_I_SBWR
#define HAS_GETSPNAM_R 
#define GETSPNAM_R_PROTO REENTRANT_PROTO_I_CSBWR
#define HAS_GMTIME_R 
#define GMTIME_R_PROTO REENTRANT_PROTO_S_TS
#define LOCALTIME_R_NEEDS_TZSET 
#ifdef LOCALTIME_R_NEEDS_TZSET
#define L_R_TZSET tzset(),
#else
#define L_R_TZSET 
#endif
#define HAS_LOCALTIME_R 
#define LOCALTIME_R_PROTO REENTRANT_PROTO_S_TS
#define HAS_PTHREAD_ATFORK 
#define HAS_PTHREAD_YIELD 
#define SCHED_YIELD sched_yield()
#define HAS_SCHED_YIELD 
#define HAS_RANDOM_R 
#define RANDOM_R_PROTO REENTRANT_PROTO_I_St
#define HAS_READDIR64_R 
#define READDIR64_R_PROTO REENTRANT_PROTO_I_TSR
#define HAS_READDIR_R 
#define READDIR_R_PROTO REENTRANT_PROTO_I_TSR
#define SETGRENT_R_PROTO 0
#define SETHOSTENT_R_PROTO 0
#define SETLOCALE_R_PROTO 0
#define SETNETENT_R_PROTO 0
#define SETPROTOENT_R_PROTO 0
#define SETPWENT_R_PROTO 0
#define SETSERVENT_R_PROTO 0
#define HAS_SRAND48_R 
#define SRAND48_R_PROTO REENTRANT_PROTO_I_LS
#define HAS_SRANDOM_R 
#define SRANDOM_R_PROTO REENTRANT_PROTO_I_TS
#define HAS_STRERROR_R 
#define STRERROR_R_PROTO REENTRANT_PROTO_B_IBW
#define HAS_TMPNAM_R 
#define TMPNAM_R_PROTO REENTRANT_PROTO_B_B
#define HAS_TTYNAME_R 
#define TTYNAME_R_PROTO REENTRANT_PROTO_I_IBW
#define I_PTHREAD 
#define USE_ITHREADS 
#if defined(USE_5005THREADS) && !defined(USE_ITHREADS)
#define USE_THREADS 
#endif
#define HAS_TIME 
#define Time_t time_t
#define HAS_TIMES 
#define Fpos_t fpos_t
#define Gid_t_f "u"
#define Gid_t_sign 1
#define Gid_t_size 4
#define Gid_t gid_t
#define Off_t off_t
#define LSEEKSIZE 8
#define Off_t_size 8
#define Mode_t mode_t
#define Pid_t pid_t
#define Size_t_size 8
#define Size_t size_t
#define Uid_t_f "u"
#define Uid_t_sign 1
#define Uid_t_size 4
#define Uid_t uid_t
#define PERL_BUILD_DATE "Jul 18 2018 14:21:03"
#endif
