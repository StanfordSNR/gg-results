// GGHASH:VEVksYmPWWU.44iDrIb2bGaHi6Tad_t8Zv7apPyOrWFU00003a59
#ifdef XTHREADS
#include <X11/Xthreads.h>
#endif
#ifdef WIN32
#include <X11/Xlibint.h>
#include <X11/Xwinsock.h>
#endif
#ifdef X11_t
#define FamilyInternet 0
#define FamilyDECnet 1
#define FamilyChaos 2
#define FamilyInternet6 6
#define FamilyAmoeba 33
#define FamilyLocalHost 252
#define FamilyKrb5Principal 253
#define FamilyNetname 254
#define FamilyLocal 256
#define FamilyWild 65535
#if defined(TCPCONN)
#if defined(IPv6) && defined(AF_INET6)
#endif
#endif
#if defined(UNIXCONN) || defined(LOCALCONN)
#endif
#if (defined(__SCO__) || defined(__UNIXWARE__)) && defined(LOCALCONN)
#endif
#endif
#ifdef ICE_t
# if defined(TCPCONN) || defined(UNIXCONN)
#define X_INCLUDE_NETDB_H 
#define XOS_USE_NO_LOCKING 
# include <X11/Xos_r.h>
# endif
#include <signal.h>
#if defined(UNIXCONN) || defined(LOCALCONN)
#endif
#if defined(TCPCONN)
#if defined(IPv6) && defined(AF_INET6)
#endif
#if defined(IPv6) && defined(AF_INET6)
#endif
#if defined(IPv6) && defined(AF_INET6)
#endif
#endif
#include <setjmp.h>
#ifdef SIGALRM
#endif
#if defined(UNIXCONN) || defined(LOCALCONN)
#endif
#if defined(TCPCONN)
#if defined(IPv6) && defined(AF_INET6)
#endif
#if defined(IPv6) && defined(AF_INET6)
#endif
#ifdef XTHREADS_NEEDS_BYNAMEPARAMS
#endif
#if defined(IPv6) && defined(AF_INET6)
#endif
#ifdef SIGALRM
#endif
#ifdef SIGALRM
#endif
#if defined(IPv6) && defined(AF_INET6)
#else
#endif
#endif
#endif
#if defined(WIN32) && defined(TCPCONN)
#endif
#include <ctype.h>
#ifdef TRANS_SERVER
#include <sys/types.h>
#include <sys/stat.h>
#include <errno.h>
#if !defined(S_IFLNK) && !defined(S_ISLNK)
#undef lstat
#define lstat(a,b) stat(a,b)
#endif
#define FAIL_IF_NOMODE 1
#define FAIL_IF_NOT_ROOT 2
#define WARN_NO_ACCESS 4
#if !defined(WIN32) && !defined(__CYGWIN__)
#ifdef FAIL_HARD
#endif
#endif
#ifndef WIN32
#ifdef FAIL_HARD
#endif
#else
#endif
#ifdef HAS_FCHOWN
#endif
#ifdef FAIL_HARD
#endif
#if !defined(__APPLE_CC__) && !defined(__CYGWIN__)
#endif
#ifdef FAIL_HARD
#endif
#endif
