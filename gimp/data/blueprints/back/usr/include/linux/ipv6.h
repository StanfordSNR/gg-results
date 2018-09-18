// GGHASH:VuP6ysKH4aqPHNeu327sUujYQwE9d8roJQgvgWneIpvM00000f7f
#ifndef _IPV6_H
#define _IPV6_H 
#include <linux/libc-compat.h>
#include <linux/types.h>
#include <linux/in6.h>
#include <asm/byteorder.h>
#define IPV6_MIN_MTU 1280
#if __UAPI_DEF_IN6_PKTINFO
#endif
#if __UAPI_DEF_IP6_MTUINFO
#endif
#define IPV6_SRCRT_STRICT 0x01
#define IPV6_SRCRT_TYPE_0 0
#define IPV6_SRCRT_TYPE_2 2
#define IPV6_SRCRT_TYPE_4 4
#define ipv6_destopt_hdr ipv6_opt_hdr
#define ipv6_hopopt_hdr ipv6_opt_hdr
#define IPV6_OPT_ROUTERALERT_MLD 0x0000
#define rt0_type rt_hdr.type
#define rt2_type rt_hdr.type
#if defined(__LITTLE_ENDIAN_BITFIELD)
#elif defined(__BIG_ENDIAN_BITFIELD)
#else
#error "Please fix <asm/byteorder.h>"
#endif
#endif
