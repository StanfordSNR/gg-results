// GGHASH:VG4ukhQgB3vzKslID5AHvWDOIpuXyFMbu6rIan0Cf15s000027db
#ifndef _SYS_SOCKET_H
#define _SYS_SOCKET_H 1
#include <features.h>
#include <bits/types/struct_iovec.h>
#define __need_size_t 
#include <stddef.h>
#include <bits/socket.h>
#ifdef __USE_MISC
# include <bits/types/struct_osockaddr.h>
#endif
#define SHUT_RD SHUT_RD
#define SHUT_WR SHUT_WR
#define SHUT_RDWR SHUT_RDWR
#if defined __cplusplus || !__GNUC_PREREQ (2, 7) || !defined __USE_GNU
#define __SOCKADDR_ARG struct sockaddr *__restrict
#define __CONST_SOCKADDR_ARG const struct sockaddr *
#else
#define __SOCKADDR_ALLTYPES __SOCKADDR_ONETYPE (sockaddr) __SOCKADDR_ONETYPE (sockaddr_at) __SOCKADDR_ONETYPE (sockaddr_ax25) __SOCKADDR_ONETYPE (sockaddr_dl) __SOCKADDR_ONETYPE (sockaddr_eon) __SOCKADDR_ONETYPE (sockaddr_in) __SOCKADDR_ONETYPE (sockaddr_in6) __SOCKADDR_ONETYPE (sockaddr_inarp) __SOCKADDR_ONETYPE (sockaddr_ipx) __SOCKADDR_ONETYPE (sockaddr_iso) __SOCKADDR_ONETYPE (sockaddr_ns) __SOCKADDR_ONETYPE (sockaddr_un) __SOCKADDR_ONETYPE (sockaddr_x25)
#define __SOCKADDR_ONETYPE(type) struct type *__restrict __ ##type ##__;
#undef __SOCKADDR_ONETYPE
#define __SOCKADDR_ONETYPE(type) const struct type *__restrict __ ##type ##__;
#undef __SOCKADDR_ONETYPE
#endif
#ifdef __USE_GNU
#endif
#ifdef __USE_GNU
#endif
#ifdef __USE_GNU
#endif
#ifdef __USE_GNU
#endif
#ifdef __USE_XOPEN2K
#endif
#ifdef __USE_MISC
#endif
#if __USE_FORTIFY_LEVEL > 0 && defined __fortify_function
# include <bits/socket2.h>
#endif
#endif
