// GGHASH:V_GFSSyq9cwHLmUFcGdhGsOid8rqoJY0wRkYoCyeMP2A0000157d
#define ABORT() abort();
#ifndef SH_PATH
#define SH_PATH "/bin/sh"
#endif
#ifdef DJGPP
#define BIT_BUCKET "nul"
#define OP_BINARY O_BINARY
#define PERL_SYS_INIT_BODY(c,v) MALLOC_CHECK_TAINT2(*c,*v) Perl_DJGPP_init(c,v); PERLIO_INIT
#define init_os_extras Perl_init_os_extras
#define HAS_UTIME 
#define HAS_KILL 
# if (DJGPP==2 && DJGPP_MINOR < 2)
#define NO_LOCALECONV_MON_THOUSANDS_SEP 
# endif
# ifndef PERL_CORE
#define PERL_FS_VER_FMT "%d_%d_%d"
# endif
#define PERL_FS_VERSION STRINGIFY(PERL_REVISION) "_" STRINGIFY(PERL_VERSION) "_" STRINGIFY(PERL_SUBVERSION)
#else
# ifdef WIN32
#define PERL_SYS_INIT_BODY(c,v) MALLOC_CHECK_TAINT2(*c,*v) Perl_win32_init(c,v); PERLIO_INIT
#define PERL_SYS_TERM_BODY() Perl_win32_term()
#define BIT_BUCKET "nul"
# else
# ifdef NETWARE
#define PERL_SYS_INIT_BODY(c,v) MALLOC_CHECK_TAINT2(*c,*v) Perl_nw5_init(c,v); PERLIO_INIT
#define BIT_BUCKET "nwnul"
# else
#define PERL_SYS_INIT_BODY(c,v) MALLOC_CHECK_TAINT2(*c,*v); PERLIO_INIT
#define BIT_BUCKET "\\dev\\nul"
# endif
# endif
#endif
#ifndef PERL_SYS_TERM_BODY
#define PERL_SYS_TERM_BODY() HINTS_REFCNT_TERM; OP_CHECK_MUTEX_TERM; OP_REFCNT_TERM; PERLIO_TERM; MALLOC_TERM; LOCALE_TERM;
#endif
#define dXSUB_SYS dNOOP
#undef USEMYBINMODE
#if defined(WIN64) || defined(USE_LARGE_FILES)
#define Stat_t struct _stati64
#else
#if defined(UNDER_CE)
#define Stat_t struct xcestat
#else
#define Stat_t struct stat
#endif
#endif
#define USE_STAT_RDEV 
#undef ACME_MESS
#include <signal.h>
#define fwrite1 fwrite
#define Fstat(fd,bufptr) fstat((fd),(bufptr))
#ifdef DJGPP
#define Fflush(fp) djgpp_fflush(fp)
#else
#define Fflush(fp) fflush(fp)
#endif
#define Mkdir(path,mode) mkdir((path),(mode))
#ifndef WIN32
#define Stat(fname,bufptr) stat((fname),(bufptr))
#else
#define HAS_IOCTL 
#define HAS_UTIME 
#define HAS_KILL 
#define HAS_WAIT 
#define HAS_CHOWN 
#endif
#ifdef DJGPP
#include <sys/wait.h>
#undef WEXITSTATUS
#undef WIFEXITED
#undef WIFSIGNALED
#undef WIFSTOPPED
#undef WNOHANG
#undef WSTOPSIG
#undef WTERMSIG
#undef WUNTRACED
#define WEXITSTATUS(stat_val) ((stat_val) >> 8)
#define WIFEXITED(stat_val) 0
#define WIFSIGNALED(stat_val) 0
#define WIFSTOPPED(stat_val) 0
#define WNOHANG 0
#define WSTOPSIG(stat_val) 0
#define WTERMSIG(stat_val) 0
#define WUNTRACED 0
#endif
#define PERL_NO_DEV_RANDOM 
