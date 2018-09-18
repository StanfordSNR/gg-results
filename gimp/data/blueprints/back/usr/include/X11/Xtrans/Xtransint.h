// GGHASH:VAume.MNIbzkbdbl9ri_RV0lftAG1DoFeAxpyTTuytUw00002b25
#ifndef _XTRANSINT_H_
#define _XTRANSINT_H_ 
#if !defined(XTRANSDEBUG) && defined(XTRANS_TRANSPORT_C)
#define XTRANSDEBUG 1
#endif
#ifdef WIN32
#define _WILLWINSOCK_ 
#endif
#include "Xtrans.h"
#ifndef _X_UNUSED
#define _X_UNUSED 
#endif
#ifdef XTRANSDEBUG
# include <stdio.h>
#endif
#include <errno.h>
#ifndef WIN32
# include <sys/socket.h>
# include <netinet/in.h>
# include <arpa/inet.h>
# if defined(_POSIX_SOURCE) || defined(USG) || defined(SVR4) || defined(__SVR4) || defined(__SCO__)
# ifndef NEED_UTSNAME
#define NEED_UTSNAME 
# endif
# include <sys/utsname.h>
# endif
#define ESET(val) errno = val
#define EGET() errno
#else
# include <limits.h>
#define ESET(val) WSASetLastError(val)
#define EGET() WSAGetLastError()
#endif
#include <stddef.h>
#ifdef X11_t
#define X_TCP_PORT 6000
#endif
#if XTRANS_SEND_FDS
#endif
#define XTRANS_OPEN_COTS_CLIENT 1
#define XTRANS_OPEN_COTS_SERVER 2
#define XTRANS_OPEN_CLTS_CLIENT 3
#define XTRANS_OPEN_CLTS_SERVER 4
#ifdef TRANS_CLIENT
#endif
#ifdef TRANS_SERVER
#endif
#ifdef TRANS_CLIENT
#endif
#ifdef TRANS_SERVER
#endif
#ifdef TRANS_REOPEN
#endif
#ifdef TRANS_SERVER
#define ADDR_IN_USE_ALLOWED 1
#endif
#ifdef TRANS_CLIENT
#endif
#if XTRANS_SEND_FDS
#endif
#define TRANS_ALIAS (1<<0)
#define TRANS_LOCAL (1<<1)
#define TRANS_DISABLED (1<<2)
#define TRANS_NOLISTEN (1<<3)
#define TRANS_NOUNLINK (1<<4)
#define TRANS_ABSTRACT (1<<5)
#define TRANS_NOXAUTH (1<<6)
#define TRANS_RECEIVED (1<<7)
#define TRANS_KEEPFLAGS (TRANS_NOUNLINK|TRANS_ABSTRACT)
#ifdef XTRANS_TRANSPORT_C
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-function"
#endif
#if defined(SYSV) && defined(__i386__) && !defined(__SCO__) && !defined(sun) || defined(WIN32)
#define READV(ciptr,iov,iovcnt) TRANS(ReadV)(ciptr, iov, iovcnt)
#else
#define READV(ciptr,iov,iovcnt) readv(ciptr->fd, iov, iovcnt)
#endif
#if defined(SYSV) && defined(__i386__) && !defined(__SCO__) && !defined(sun) || defined(WIN32)
#define WRITEV(ciptr,iov,iovcnt) TRANS(WriteV)(ciptr, iov, iovcnt)
#else
#define WRITEV(ciptr,iov,iovcnt) writev(ciptr->fd, iov, iovcnt)
#endif
#ifdef TRANS_SERVER
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef XTRANSDEBUG
#include <stdarg.h>
# if defined(XSERV_t) && defined(TRANS_SERVER)
# include "os.h"
# else
# endif
#endif
#ifdef XTRANSDEBUG
# ifdef XTRANSDEBUGTIMESTAMP
# endif
#endif
#endif
#endif
