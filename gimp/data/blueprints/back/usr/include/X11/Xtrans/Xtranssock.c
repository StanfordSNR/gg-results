// GGHASH:V1_jwRjBcCB6syqNtLk40Ybg5GgwwAbEupZK_OdRL7XI000104e4
#include <ctype.h>
#ifdef XTHREADS
#include <X11/Xthreads.h>
#endif
#ifndef WIN32
#if defined(TCPCONN) || defined(UNIXCONN)
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#endif
#if defined(TCPCONN) || defined(UNIXCONN)
#define X_INCLUDE_NETDB_H 
#define XOS_USE_NO_LOCKING 
#include <X11/Xos_r.h>
#endif
#ifdef UNIXCONN
#ifndef X_NO_SYS_UN
#include <sys/un.h>
#endif
#include <sys/stat.h>
#endif
#ifndef NO_TCP_H
#if defined(linux) || defined(__GLIBC__)
#include <sys/param.h>
#endif
#if defined(__NetBSD__) || defined(__OpenBSD__) || defined(__FreeBSD__) || defined(__DragonFly__)
#include <sys/param.h>
#include <machine/endian.h>
#endif
#include <netinet/tcp.h>
#endif
#include <sys/ioctl.h>
#if defined(SVR4) || defined(__SVR4)
#include <sys/filio.h>
#endif
#if (defined(__i386__) && defined(SYSV)) && !defined(SCO325) && !defined(sun)
#include <net/errno.h>
#endif
#if defined(__i386__) && defined(SYSV)
#include <sys/stropts.h>
#endif
#include <unistd.h>
#else
#include <X11/Xwinsock.h>
#include <X11/Xwindows.h>
#include <X11/Xw32defs.h>
#undef close
#define close closesocket
#define ECONNREFUSED WSAECONNREFUSED
#define EADDRINUSE WSAEADDRINUSE
#define EPROTOTYPE WSAEPROTOTYPE
#undef EWOULDBLOCK
#define EWOULDBLOCK WSAEWOULDBLOCK
#define EINPROGRESS WSAEINPROGRESS
#undef EINTR
#define EINTR WSAEINTR
#define X_INCLUDE_NETDB_H 
#define XOS_USE_MTSAFE_NETDBAPI 
#include <X11/Xos_r.h>
#endif
#if defined(SO_DONTLINGER) && defined(SO_LINGER)
#undef SO_DONTLINGER
#endif
#define SocketInitOnce() 
#ifdef linux
#define HAVE_ABSTRACT_SOCKETS 
#endif
#define MIN_BACKLOG 128
#ifdef SOMAXCONN
#if SOMAXCONN > MIN_BACKLOG
#define BACKLOG SOMAXCONN
#endif
#endif
#ifndef BACKLOG
#define BACKLOG MIN_BACKLOG
#endif
#ifdef TCPCONN
#if !defined(IPv6) || !defined(AF_INET6)
#else
#endif
#endif
#ifdef UNIXCONN
#if !defined(LOCALCONN)
#endif
#endif
#define NUMSOCKETFAMILIES (sizeof(Sockettrans2devtab)/sizeof(Sockettrans2dev))
#ifdef TCPCONN
#endif
#ifdef UNIXCONN
#if defined(X11_t)
#define UNIX_PATH "/tmp/.X11-unix/X"
#define UNIX_DIR "/tmp/.X11-unix"
#endif
#if defined(XIM_t)
#define UNIX_PATH "/tmp/.XIM-unix/XIM"
#define UNIX_DIR "/tmp/.XIM-unix"
#endif
#if defined(FS_t) || defined(FONT_t)
#define UNIX_PATH "/tmp/.font-unix/fs"
#define UNIX_DIR "/tmp/.font-unix"
#endif
#if defined(ICE_t)
#define UNIX_PATH "/tmp/.ICE-unix/"
#define UNIX_DIR "/tmp/.ICE-unix"
#endif
#if defined(TEST_t)
#define UNIX_PATH "/tmp/.Test-unix/test"
#define UNIX_DIR "/tmp/.Test-unix"
#endif
#if defined(LBXPROXY_t)
#define UNIX_PATH "/tmp/.X11-unix/X"
#define UNIX_DIR "/tmp/.X11-unix"
#endif
#endif
#define PORTBUFSIZE 32
#ifndef MAXHOSTNAMELEN
#define MAXHOSTNAMELEN 255
#endif
#if defined HAVE_SOCKLEN_T || (defined(IPv6) && defined(AF_INET6))
#define SOCKLEN_T socklen_t
#elif defined(SVR4) || defined(__SVR4) || defined(__SCO__)
#define SOCKLEN_T size_t
#else
#define SOCKLEN_T int
#endif
#if defined(IPv6) && defined(AF_INET6)
#else
#endif
#if defined(IPv6) && defined(AF_INET6)
#else
#endif
#ifdef WIN32
#endif
#if defined(IPv6) && defined(AF_INET6)
#else
#endif
#if defined(IPv6) && defined(AF_INET6)
#endif
#if defined(IPv6) && defined(AF_INET6)
#endif
#ifdef WIN32
#endif
#ifndef WIN32
#if (defined(X11_t) && !defined(USE_POLL)) || defined(FS_t) || defined(FONT_t)
#endif
#endif
#ifdef WIN32
#endif
#ifdef TCP_NODELAY
#if defined(IPv6) && defined(AF_INET6)
#endif
#endif
#ifdef SO_SNDBUF
#endif
#ifdef TRANS_REOPEN
#ifdef SOCK_MAXADDRLEN
#else
#endif
#ifdef BSD44SOCKETS
#endif
#ifdef HAS_STRLCPY
#else
#endif
#endif
#ifdef TRANS_CLIENT
#endif
#ifdef TRANS_SERVER
#ifdef SO_REUSEADDR
#if defined(IPv6) && defined(AF_INET6)
#endif
#endif
#ifdef IPV6_V6ONLY
#endif
#endif
#ifdef TRANS_CLIENT
#endif
#ifdef TRANS_SERVER
#ifdef IPV6_V6ONLY
#endif
#endif
#ifdef TRANS_REOPEN
#endif
#ifdef UNIXCONN
#ifdef HAVE_ABSTRACT_SOCKETS
#endif
#endif
#ifdef TRANS_SERVER
#if defined(IPv6) && defined(AF_INET6)
#endif
#ifdef SO_REUSEADDR
#else
#endif
#if defined(IPv6) && defined(AF_INET6)
#endif
#ifdef SO_DONTLINGER
#else
#ifdef SO_LINGER
#endif
#endif
#ifdef TCPCONN
#if defined(IPv6) && defined(AF_INET6)
#else
#endif
#ifdef XTHREADS_NEEDS_BYNAMEPARAMS
#endif
#ifdef X11_t
#endif
#ifdef X11_t
#endif
#if defined(IPv6) && defined(AF_INET6)
#ifdef BSD44SOCKETS
#endif
#ifdef SIN6_LEN
#endif
#else
#ifdef BSD44SOCKETS
#endif
#endif
#endif
#ifdef UNIXCONN
#ifdef HAVE_ABSTRACT_SOCKETS
#endif
#ifdef UNIX_DIR
#ifdef HAS_STICKY_DIR_BIT
#else
#endif
#endif
#if (defined(BSD44SOCKETS) || defined(__UNIXWARE__))
#endif
#if defined(BSD44SOCKETS) || defined(SUN_LEN)
#else
#endif
#ifdef HAVE_ABSTRACT_SOCKETS
#endif
#if defined(NCR) || defined(SCO325) || !defined(S_IFSOCK)
#else
#endif
#ifdef UNIX_DIR
#ifdef HAS_STICKY_DIR_BIT
#else
#endif
#endif
#endif
#ifdef TCPCONN
#ifdef WIN32
#endif
#ifdef TCP_NODELAY
#endif
#endif
#ifdef UNIXCONN
#endif
#endif
#ifdef TRANS_CLIENT
#ifdef TCPCONN
#if defined(IPv6) && defined(AF_INET6)
#endif
#if defined(IPv6) && defined(AF_INET6)
#else
#endif
#ifdef XTHREADS_NEEDS_BYNAMEPARAMS
#endif
#ifdef X11_t
#endif
#ifdef X11_t
#endif
#if defined(IPv6) && defined(AF_INET6)
#else
#ifdef BSD44SOCKETS
#endif
#ifndef INADDR_NONE
#define INADDR_NONE ((in_addr_t) 0xffffffff)
#endif
#endif
#ifdef WIN32
#else
#endif
#if defined(IPv6) && defined(AF_INET6)
#if defined(EHOSTDOWN)
#endif
#endif
#if defined(IPv6) && defined(AF_INET6)
#endif
#endif
#ifdef UNIXCONN
#if defined(IPv6) && defined(AF_INET6)
#else
#ifdef XTHREADS_NEEDS_BYNAMEPARAMS
#endif
#endif
#ifdef HAVE_ABSTRACT_SOCKETS
#endif
#if (defined(BSD44SOCKETS) || defined(__UNIXWARE__))
#endif
#if defined(BSD44SOCKETS) || defined(SUN_LEN)
#else
#endif
#endif
#endif
#ifdef WIN32
#else
#if defined(__i386__) && defined(SYSV) && !defined(SCO325)
#else
#endif
#endif
#if XTRANS_SEND_FDS
#define MAX_FDS 128
#endif
#if defined(WIN32)
#ifdef WIN32
#endif
#else
#if XTRANS_SEND_FDS
#else
#endif
#endif
#if XTRANS_SEND_FDS
#else
#endif
#if XTRANS_SEND_FDS
#endif
#if defined(WIN32)
#ifdef WIN32
#endif
#else
#if XTRANS_SEND_FDS
#endif
#endif
#ifdef WIN32
#else
#endif
#ifdef TCPCONN
#ifdef WIN32
#else
#endif
#endif
#ifdef UNIXCONN
#if XTRANS_SEND_FDS
#endif
#if XTRANS_SEND_FDS
#endif
#endif
#ifdef TCPCONN
# ifdef TRANS_SERVER
#if defined(IPv6) && defined(AF_INET6)
#endif
# endif
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
#endif
#ifdef TRANS_CLIENT
#endif
#if XTRANS_SEND_FDS
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
#ifdef TRANS_SERVER
#endif
#ifdef TRANS_CLIENT
#endif
#if XTRANS_SEND_FDS
#endif
#if defined(IPv6) && defined(AF_INET6)
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
#endif
#ifdef TRANS_CLIENT
#endif
#if XTRANS_SEND_FDS
#endif
#endif
#endif
#ifdef UNIXCONN
#if !defined(LOCALCONN)
#ifdef HAVE_ABSTRACT_SOCKETS
#else
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
#ifdef TRANS_SERVER
#endif
#ifdef TRANS_CLIENT
#endif
#if XTRANS_SEND_FDS
#endif
#endif
# ifdef TRANS_SERVER
# if !defined(LOCALCONN)
# endif
# endif
#if !defined(LOCALCONN) && !defined(HAVE_ABSTRACT_SOCKETS)
#else
#endif
#ifdef TRANS_CLIENT
#endif
#ifdef TRANS_SERVER
#if !defined(LOCALCONN)
#else
#endif
#endif
#ifdef TRANS_CLIENT
#endif
#ifdef TRANS_SERVER
#endif
#ifdef TRANS_REOPEN
#endif
#ifdef TRANS_SERVER
#endif
#ifdef TRANS_CLIENT
#endif
#if XTRANS_SEND_FDS
#endif
#endif
