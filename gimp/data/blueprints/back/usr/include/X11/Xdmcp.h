// GGHASH:VcybGtFBJOboK1h_s4EI4RgAgmW7yMLi9nmsU5K1cpCY000018e3
#ifndef _XDMCP_H_
#define _XDMCP_H_ 
#include <X11/Xmd.h>
#include <X11/Xfuncproto.h>
#define XDM_PROTOCOL_VERSION 1
#define XDM_UDP_PORT 177
#define XDM_DEFAULT_MCAST_ADDR6 "ff02:0:0:0:0:0:0:12b"
#define XDM_MAX_MSGLEN 8192
#define XDM_MIN_RTX 2
#define XDM_MAX_RTX 32
#define XDM_RTX_LIMIT 7
#define XDM_KA_RTX_LIMIT 4
#define XDM_DEF_DORMANCY (3 * 60)
#define XDM_MAX_DORMANCY (24 * 60 * 60)
#if defined(IPv6) && defined(AF_INET6)
#endif
#ifdef NOTDEF
#define XDM_MAX_STR_LEN 21
#define XDM_MAX_HOSTS 20
#endif
#ifdef HASXDMAUTH
#endif
#ifndef TRUE
#define TRUE 1
#define FALSE 0
#endif
#endif
