// GGHASH:VyqHDo7YLVGMRHv_4eBXthw3g_jaFmfjY37vt0ksm6MA00000b18
#ifndef _IFADDRS_H
#define _IFADDRS_H 1
#include <features.h>
#include <sys/socket.h>
# ifndef ifa_broadaddr
#define ifa_broadaddr ifa_ifu.ifu_broadaddr
# endif
# ifndef ifa_dstaddr
#define ifa_dstaddr ifa_ifu.ifu_dstaddr
# endif
#endif
