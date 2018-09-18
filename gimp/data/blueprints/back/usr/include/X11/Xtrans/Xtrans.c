// GGHASH:VUUCvLTIE2N1y5Xj0mtjfttR4qY3JhF2CaaPR3aTnBW0000081b6
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#ifdef HAVE_SYSTEMD_DAEMON
#include <systemd/sd-daemon.h>
#endif
#define TRANS_TLI_INET_INDEX 1
#define TRANS_TLI_TCP_INDEX 2
#define TRANS_TLI_TLI_INDEX 3
#define TRANS_SOCKET_UNIX_INDEX 4
#define TRANS_SOCKET_LOCAL_INDEX 5
#define TRANS_SOCKET_INET_INDEX 6
#define TRANS_SOCKET_TCP_INDEX 7
#define TRANS_DNET_INDEX 8
#define TRANS_LOCAL_LOCAL_INDEX 9
#define TRANS_LOCAL_PTS_INDEX 10
#define TRANS_LOCAL_NAMED_INDEX 11
#define TRANS_LOCAL_SCO_INDEX 13
#define TRANS_SOCKET_INET6_INDEX 14
#define TRANS_LOCAL_PIPE_INDEX 15
#if defined(TCPCONN)
#if defined(IPv6) && defined(AF_INET6)
#endif
#endif
#if defined(UNIXCONN)
#if !defined(LOCALCONN)
#endif
#endif
#if defined(LOCALCONN)
#ifndef sun
#endif
#if defined(SVR4) || defined(__SVR4)
#endif
#ifdef sun
#endif
#if defined(__SCO__) || defined(__UNIXWARE__)
#endif
#endif
#define NUMTRANS (sizeof(Xtransports)/sizeof(Xtransport_table))
#ifdef WIN32
#define ioctl ioctlsocket
#endif
#define PROTOBUFSIZE 20
#ifndef TEST_t
#endif
#if defined(IPv6) && defined(AF_INET6)
#endif
#if defined(FONT_t) || defined(FS_t)
#endif
#ifdef HAVE_LAUNCHD
#endif
#if defined(WIN32) && defined(TCPCONN)
#endif
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
#if defined(O_NONBLOCK) && !defined(SCO325)
#else
#ifdef FIOSNBIO
#else
#if defined(WIN32)
#ifdef WIN32
#else
#endif
#else
#ifdef FNDELAY
#else
#endif
#endif
#endif
#endif
#ifdef F_SETFD
#ifdef FD_CLOEXEC
#else
#endif
#endif
#ifdef TRANS_SERVER
#endif
#ifdef TRANS_CLIENT
#ifdef HAVE_LAUNCHD
#endif
#endif
#if XTRANS_SEND_FDS
#endif
#ifdef TRANS_SERVER
#ifdef HAVE_SYSTEMD_DAEMON
#if defined(IPv6) && defined(AF_INET6)
#endif
#endif
#ifdef XQUARTZ_EXPORTS_LAUNCHD_FD
#endif
#if defined(IPv6) && defined(AF_INET6)
#endif
#ifdef XQUARTZ_EXPORTS_LAUNCHD_FD
#endif
#if defined(IPv6) && defined(AF_INET6)
#endif
#if defined(IPv6) && defined(AF_INET6)
#endif
#endif
#if defined(SYSV) && defined(__i386__) && !defined(__SCO__) && !defined(sun) || defined(WIN32)
#endif
#if defined(SYSV) && defined(__i386__) && !defined(__SCO__) && !defined(sun) || defined(WIN32)
#endif
#if defined(_POSIX_SOURCE) || defined(USG) || defined(SVR4) || defined(__SVR4) || defined(__SCO__)
#ifndef NEED_UTSNAME
#define NEED_UTSNAME 
#endif
#include <sys/utsname.h>
#endif
#ifdef NEED_UTSNAME
#else
#endif
