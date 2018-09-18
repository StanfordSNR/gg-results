// GGHASH:Vd5SGcdTGgPrAMAd10FaJJEwNIPIbhRuEL0Zw964nxYE000013f3
#ifndef PERL_MICRO
#define HAS_IOCTL 
#define HAS_UTIME 
#define HAS_GROUP 
#define HAS_PASSWD 
#define HAS_KILL 
#define HAS_WAIT 
#endif
#undef USEMYBINMODE
#define Stat_t struct stat
#define USE_STAT_RDEV 
#undef ACME_MESS
# include <signal.h>
#ifndef SIGABRT
#define SIGABRT SIGILL
#endif
#ifndef SIGILL
#define SIGILL 6
#endif
#define ABORT() kill(PerlProc_getpid(),SIGABRT);
#define fwrite1 fwrite
#define Stat(fname,bufptr) stat((fname),(bufptr))
#ifdef __amigaos4__
#define Fstat(fd,bufptr) afstat((fd),(bufptr))
#endif
#ifndef Fstat
#define Fstat(fd,bufptr) fstat((fd),(bufptr))
#endif
#define Fflush(fp) fflush(fp)
#define Mkdir(path,mode) mkdir((path),(mode))
#if defined(__amigaos4__)
#define PERL_SYS_INIT_BODY(c,v) MALLOC_CHECK_TAINT2(*c,*v) PERL_FPU_INIT; PERLIO_INIT; MALLOC_INIT; amigaos4_init_fork_array(); amigaos4_init_environ_sema();
#define PERL_SYS_TERM_BODY() HINTS_REFCNT_TERM; OP_CHECK_MUTEX_TERM; OP_REFCNT_TERM; PERLIO_TERM; MALLOC_TERM; LOCALE_TERM; amigaos4_dispose_fork_array();
#endif
#ifndef PERL_SYS_INIT_BODY
#define PERL_SYS_INIT_BODY(c,v) MALLOC_CHECK_TAINT2(*c,*v) PERL_FPU_INIT; PERLIO_INIT; MALLOC_INIT
#endif
#ifndef PERL_SYS_TERM_BODY
#define PERL_SYS_TERM_BODY() HINTS_REFCNT_TERM; OP_CHECK_MUTEX_TERM; OP_REFCNT_TERM; PERLIO_TERM; MALLOC_TERM; LOCALE_TERM;
#endif
#define BIT_BUCKET "/dev/null"
#define dXSUB_SYS dNOOP
#ifndef NO_ENVIRON_ARRAY
#define USE_ENVIRON_ARRAY 
#endif
