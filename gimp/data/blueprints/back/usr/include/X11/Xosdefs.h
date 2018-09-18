// GGHASH:VyrCi1kx9ddzAdxi70HpgRr4lTNkVD7gQwRNKtVFTK1s00000c2b
#ifndef _XOSDEFS_H_
#define _XOSDEFS_H_ 
# ifdef _SCO_DS
# ifndef __SCO__
#define __SCO__ 
# endif
# endif
# ifdef __i386__
# ifdef SYSV
# if !defined(__SCO__) && !defined(__UNIXWARE__) && !defined(__sun)
# if !defined(_POSIX_SOURCE)
#define X_NOT_POSIX 
# endif
# endif
# endif
# endif
# ifdef __sun
# if defined(__SVR4) && !defined(SVR4)
#define SVR4 1
# endif
# ifdef SVR4
#define X_POSIX_C_SOURCE 199300L
# endif
# endif
# ifdef WIN32
# ifndef _POSIX_
#define X_NOT_POSIX 
# endif
# endif
# ifdef __APPLE__
#define NULL_NOT_ZERO 
# if defined(_XOPEN_SOURCE) || defined(_POSIX_SOURCE) || defined(_POSIX_C_SOURCE)
# ifndef _DARWIN_C_SOURCE
#define _DARWIN_C_SOURCE 
# endif
# endif
# endif
# ifdef __GNU__
# ifndef PATH_MAX
#define PATH_MAX 4096
# endif
# ifndef MAXPATHLEN
#define MAXPATHLEN 4096
# endif
# endif
# if defined(__SCO__) || defined(__UNIXWARE__)
# ifndef PATH_MAX
#define PATH_MAX 1024
# endif
# ifndef MAXPATHLEN
#define MAXPATHLEN 1024
# endif
# endif
# if defined(__OpenBSD__) || defined(__NetBSD__) || defined(__FreeBSD__) || defined(__APPLE__) || defined(__DragonFly__)
# ifndef CSRG_BASED
#define CSRG_BASED 
# endif
# endif
#endif
