// GGHASH:VJvPBnSShYNCOXF.Ws8bG8X_kDcFfne4Om7xxDZTbNcc000007ca
#ifndef __G_NETWORKING_H__
#define __G_NETWORKING_H__ 
#include <glib.h>
#ifdef G_OS_WIN32
#ifndef _WIN32_WINNT
#define _WIN32_WINNT 0x0501
#endif
#include <winsock2.h>
#include <ws2tcpip.h>
#include <windns.h>
#include <mswsock.h>
#include <iphlpapi.h>
#undef interface
#else
#include <sys/types.h>
#include <netdb.h>
#include <netinet/in.h>
#include <netinet/tcp.h>
#include <resolv.h>
#include <sys/socket.h>
#include <sys/un.h>
#include <net/if.h>
#include <arpa/inet.h>
#include <arpa/nameser.h>
#ifndef T_SRV
#define T_SRV 33
#endif
#ifndef _PATH_RESCONF
#define _PATH_RESCONF "/etc/resolv.conf"
#endif
#ifndef CMSG_LEN
#define CMSG_LEN(len) ((size_t)CMSG_DATA((struct cmsghdr *)NULL) + (len))
#define GLIB_ALIGN_TO_SIZEOF(len,obj) (((len) + sizeof (obj) - 1) & ~(sizeof (obj) - 1))
#define CMSG_SPACE(len) GLIB_ALIGN_TO_SIZEOF (CMSG_LEN (len), struct cmsghdr)
#endif
#endif
#endif
