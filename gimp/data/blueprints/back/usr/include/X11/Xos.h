// GGHASH:VZrfrDq0_Cc8L.mVexszlXsth9KCeR7u.cpmCR0Vm1aQ0000110a
#ifndef _XOS_H_
#define _XOS_H_ 
# include <X11/Xosdefs.h>
# include <sys/types.h>
# if defined(__SCO__) || defined(__UNIXWARE__)
# include <stdint.h>
# endif
# include <string.h>
# if defined(__SCO__) || defined(__UNIXWARE__) || defined(__sun) || defined(__CYGWIN__) || defined(_AIX) || defined(__APPLE__)
# include <strings.h>
# else
# ifndef index
#define index(s,c) (strchr((s),(c)))
# endif
# ifndef rindex
#define rindex(s,c) (strrchr((s),(c)))
# endif
# endif
# if defined(X_NOT_POSIX)
# include <fcntl.h>
# if defined(USL) || defined(__i386__) && (defined(SYSV) || defined(SVR4))
# include <unistd.h>
# endif
# ifdef WIN32
# include <X11/Xw32defs.h>
# else
# include <sys/file.h>
# endif
# else
# include <fcntl.h>
# include <unistd.h>
# endif
# if defined(_POSIX_SOURCE) && defined(SVR4)
#undef _POSIX_SOURCE
# include <sys/time.h>
#define _POSIX_SOURCE 
# elif defined(WIN32)
# include <time.h>
# if !defined(_WINSOCKAPI_) && !defined(_WILLWINSOCK_) && !defined(_TIMEVAL_DEFINED) && !defined(_STRUCT_TIMEVAL)
#define _TIMEVAL_DEFINED 
# endif
# include <sys/timeb.h>
#define gettimeofday(t) { struct _timeb _gtodtmp; _ftime (&_gtodtmp); (t)->tv_sec = _gtodtmp.time; (t)->tv_usec = _gtodtmp.millitm * 1000; }
# else
# include <sys/time.h>
# include <time.h>
# endif
# if defined(_XOPEN_XPG4) || defined(_XOPEN_UNIX)
#define X_GETTIMEOFDAY(t) gettimeofday(t, (struct timezone*)0)
# else
# if defined(SVR4) || defined(__SVR4) || defined(WIN32)
#define X_GETTIMEOFDAY(t) gettimeofday(t)
# else
#define X_GETTIMEOFDAY(t) gettimeofday(t, (struct timezone*)0)
# endif
# endif
# ifdef __GNU__
#define PATH_MAX 4096
#define MAXPATHLEN 4096
#define OPEN_MAX 256
# endif
# if defined(X_NOT_POSIX) && defined(SYSV) && !defined(SIGCHLD)
#define SIGCHLD SIGCLD
# endif
# include <X11/Xarch.h>
#endif
