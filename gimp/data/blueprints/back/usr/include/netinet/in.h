// GGHASH:VeZWQWUC2n8it2yy5rc9lHx7uAFBUEZIyinIp9Kk_yUQ00005479
#ifndef _NETINET_IN_H
#define _NETINET_IN_H 1
#include <features.h>
#include <bits/stdint-uintn.h>
#include <sys/socket.h>
#include <bits/types.h>
#include <bits/in.h>
#define IPPROTO_IP IPPROTO_IP
#define IPPROTO_ICMP IPPROTO_ICMP
#define IPPROTO_IGMP IPPROTO_IGMP
#define IPPROTO_IPIP IPPROTO_IPIP
#define IPPROTO_TCP IPPROTO_TCP
#define IPPROTO_EGP IPPROTO_EGP
#define IPPROTO_PUP IPPROTO_PUP
#define IPPROTO_UDP IPPROTO_UDP
#define IPPROTO_IDP IPPROTO_IDP
#define IPPROTO_TP IPPROTO_TP
#define IPPROTO_DCCP IPPROTO_DCCP
#define IPPROTO_IPV6 IPPROTO_IPV6
#define IPPROTO_RSVP IPPROTO_RSVP
#define IPPROTO_GRE IPPROTO_GRE
#define IPPROTO_ESP IPPROTO_ESP
#define IPPROTO_AH IPPROTO_AH
#define IPPROTO_MTP IPPROTO_MTP
#define IPPROTO_BEETPH IPPROTO_BEETPH
#define IPPROTO_ENCAP IPPROTO_ENCAP
#define IPPROTO_PIM IPPROTO_PIM
#define IPPROTO_COMP IPPROTO_COMP
#define IPPROTO_SCTP IPPROTO_SCTP
#define IPPROTO_UDPLITE IPPROTO_UDPLITE
#define IPPROTO_MPLS IPPROTO_MPLS
#define IPPROTO_RAW IPPROTO_RAW
#if !__USE_KERNEL_IPV6_DEFS
#define IPPROTO_HOPOPTS IPPROTO_HOPOPTS
#define IPPROTO_ROUTING IPPROTO_ROUTING
#define IPPROTO_FRAGMENT IPPROTO_FRAGMENT
#define IPPROTO_ICMPV6 IPPROTO_ICMPV6
#define IPPROTO_NONE IPPROTO_NONE
#define IPPROTO_DSTOPTS IPPROTO_DSTOPTS
#define IPPROTO_MH IPPROTO_MH
#endif
#define IN_CLASSA(a) ((((in_addr_t)(a)) & 0x80000000) == 0)
#define IN_CLASSA_NET 0xff000000
#define IN_CLASSA_NSHIFT 24
#define IN_CLASSA_HOST (0xffffffff & ~IN_CLASSA_NET)
#define IN_CLASSA_MAX 128
#define IN_CLASSB(a) ((((in_addr_t)(a)) & 0xc0000000) == 0x80000000)
#define IN_CLASSB_NET 0xffff0000
#define IN_CLASSB_NSHIFT 16
#define IN_CLASSB_HOST (0xffffffff & ~IN_CLASSB_NET)
#define IN_CLASSB_MAX 65536
#define IN_CLASSC(a) ((((in_addr_t)(a)) & 0xe0000000) == 0xc0000000)
#define IN_CLASSC_NET 0xffffff00
#define IN_CLASSC_NSHIFT 8
#define IN_CLASSC_HOST (0xffffffff & ~IN_CLASSC_NET)
#define IN_CLASSD(a) ((((in_addr_t)(a)) & 0xf0000000) == 0xe0000000)
#define IN_MULTICAST(a) IN_CLASSD(a)
#define IN_EXPERIMENTAL(a) ((((in_addr_t)(a)) & 0xe0000000) == 0xe0000000)
#define IN_BADCLASS(a) ((((in_addr_t)(a)) & 0xf0000000) == 0xf0000000)
#define INADDR_ANY ((in_addr_t) 0x00000000)
#define INADDR_BROADCAST ((in_addr_t) 0xffffffff)
#define INADDR_NONE ((in_addr_t) 0xffffffff)
#define IN_LOOPBACKNET 127
#ifndef INADDR_LOOPBACK
#define INADDR_LOOPBACK ((in_addr_t) 0x7f000001)
#endif
#define INADDR_UNSPEC_GROUP ((in_addr_t) 0xe0000000)
#define INADDR_ALLHOSTS_GROUP ((in_addr_t) 0xe0000001)
#define INADDR_ALLRTRS_GROUP ((in_addr_t) 0xe0000002)
#define INADDR_MAX_LOCAL_GROUP ((in_addr_t) 0xe00000ff)
#if !__USE_KERNEL_IPV6_DEFS
#define s6_addr __in6_u.__u6_addr8
#ifdef __USE_MISC
#define s6_addr16 __in6_u.__u6_addr16
#define s6_addr32 __in6_u.__u6_addr32
#endif
#endif
#define IN6ADDR_ANY_INIT { { { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 } } }
#define IN6ADDR_LOOPBACK_INIT { { { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1 } } }
#define INET_ADDRSTRLEN 16
#define INET6_ADDRSTRLEN 46
#if !__USE_KERNEL_IPV6_DEFS
#endif
#ifdef __USE_MISC
#endif
#if !__USE_KERNEL_IPV6_DEFS
#endif
#ifdef __USE_MISC
#define IP_MSFILTER_SIZE(numsrc) (sizeof (struct ip_msfilter) - sizeof (struct in_addr) + (numsrc) * sizeof (struct in_addr))
#define GROUP_FILTER_SIZE(numsrc) (sizeof (struct group_filter) - sizeof (struct sockaddr_storage) + ((numsrc) * sizeof (struct sockaddr_storage)))
#endif
#include <endian.h>
#include <bits/byteswap.h>
#include <bits/uintn-identity.h>
#ifdef __OPTIMIZE__
# if __BYTE_ORDER == __BIG_ENDIAN
#define ntohl(x) __uint32_identity (x)
#define ntohs(x) __uint16_identity (x)
#define htonl(x) __uint32_identity (x)
#define htons(x) __uint16_identity (x)
# else
# if __BYTE_ORDER == __LITTLE_ENDIAN
#define ntohl(x) __bswap_32 (x)
#define ntohs(x) __bswap_16 (x)
#define htonl(x) __bswap_32 (x)
#define htons(x) __bswap_16 (x)
# endif
# endif
#endif
#ifdef __GNUC__
#define IN6_IS_ADDR_UNSPECIFIED(a) (__extension__ ({ const struct in6_addr *__a = (const struct in6_addr *) (a); __a->__in6_u.__u6_addr32[0] == 0 && __a->__in6_u.__u6_addr32[1] == 0 && __a->__in6_u.__u6_addr32[2] == 0 && __a->__in6_u.__u6_addr32[3] == 0; }))
#define IN6_IS_ADDR_LOOPBACK(a) (__extension__ ({ const struct in6_addr *__a = (const struct in6_addr *) (a); __a->__in6_u.__u6_addr32[0] == 0 && __a->__in6_u.__u6_addr32[1] == 0 && __a->__in6_u.__u6_addr32[2] == 0 && __a->__in6_u.__u6_addr32[3] == htonl (1); }))
#define IN6_IS_ADDR_LINKLOCAL(a) (__extension__ ({ const struct in6_addr *__a = (const struct in6_addr *) (a); (__a->__in6_u.__u6_addr32[0] & htonl (0xffc00000)) == htonl (0xfe800000); }))
#define IN6_IS_ADDR_SITELOCAL(a) (__extension__ ({ const struct in6_addr *__a = (const struct in6_addr *) (a); (__a->__in6_u.__u6_addr32[0] & htonl (0xffc00000)) == htonl (0xfec00000); }))
#define IN6_IS_ADDR_V4MAPPED(a) (__extension__ ({ const struct in6_addr *__a = (const struct in6_addr *) (a); __a->__in6_u.__u6_addr32[0] == 0 && __a->__in6_u.__u6_addr32[1] == 0 && __a->__in6_u.__u6_addr32[2] == htonl (0xffff); }))
#define IN6_IS_ADDR_V4COMPAT(a) (__extension__ ({ const struct in6_addr *__a = (const struct in6_addr *) (a); __a->__in6_u.__u6_addr32[0] == 0 && __a->__in6_u.__u6_addr32[1] == 0 && __a->__in6_u.__u6_addr32[2] == 0 && ntohl (__a->__in6_u.__u6_addr32[3]) > 1; }))
#define IN6_ARE_ADDR_EQUAL(a,b) (__extension__ ({ const struct in6_addr *__a = (const struct in6_addr *) (a); const struct in6_addr *__b = (const struct in6_addr *) (b); __a->__in6_u.__u6_addr32[0] == __b->__in6_u.__u6_addr32[0] && __a->__in6_u.__u6_addr32[1] == __b->__in6_u.__u6_addr32[1] && __a->__in6_u.__u6_addr32[2] == __b->__in6_u.__u6_addr32[2] && __a->__in6_u.__u6_addr32[3] == __b->__in6_u.__u6_addr32[3]; }))
#else
#define IN6_IS_ADDR_UNSPECIFIED(a) (((const uint32_t *) (a))[0] == 0 && ((const uint32_t *) (a))[1] == 0 && ((const uint32_t *) (a))[2] == 0 && ((const uint32_t *) (a))[3] == 0)
#define IN6_IS_ADDR_LOOPBACK(a) (((const uint32_t *) (a))[0] == 0 && ((const uint32_t *) (a))[1] == 0 && ((const uint32_t *) (a))[2] == 0 && ((const uint32_t *) (a))[3] == htonl (1))
#define IN6_IS_ADDR_LINKLOCAL(a) ((((const uint32_t *) (a))[0] & htonl (0xffc00000)) == htonl (0xfe800000))
#define IN6_IS_ADDR_SITELOCAL(a) ((((const uint32_t *) (a))[0] & htonl (0xffc00000)) == htonl (0xfec00000))
#define IN6_IS_ADDR_V4MAPPED(a) ((((const uint32_t *) (a))[0] == 0) && (((const uint32_t *) (a))[1] == 0) && (((const uint32_t *) (a))[2] == htonl (0xffff)))
#define IN6_IS_ADDR_V4COMPAT(a) ((((const uint32_t *) (a))[0] == 0) && (((const uint32_t *) (a))[1] == 0) && (((const uint32_t *) (a))[2] == 0) && (ntohl (((const uint32_t *) (a))[3]) > 1))
#define IN6_ARE_ADDR_EQUAL(a,b) ((((const uint32_t *) (a))[0] == ((const uint32_t *) (b))[0]) && (((const uint32_t *) (a))[1] == ((const uint32_t *) (b))[1]) && (((const uint32_t *) (a))[2] == ((const uint32_t *) (b))[2]) && (((const uint32_t *) (a))[3] == ((const uint32_t *) (b))[3]))
#endif
#define IN6_IS_ADDR_MULTICAST(a) (((const uint8_t *) (a))[0] == 0xff)
#ifdef __USE_MISC
#endif
#define IN6_IS_ADDR_MC_NODELOCAL(a) (IN6_IS_ADDR_MULTICAST(a) && ((((const uint8_t *) (a))[1] & 0xf) == 0x1))
#define IN6_IS_ADDR_MC_LINKLOCAL(a) (IN6_IS_ADDR_MULTICAST(a) && ((((const uint8_t *) (a))[1] & 0xf) == 0x2))
#define IN6_IS_ADDR_MC_SITELOCAL(a) (IN6_IS_ADDR_MULTICAST(a) && ((((const uint8_t *) (a))[1] & 0xf) == 0x5))
#define IN6_IS_ADDR_MC_ORGLOCAL(a) (IN6_IS_ADDR_MULTICAST(a) && ((((const uint8_t *) (a))[1] & 0xf) == 0x8))
#define IN6_IS_ADDR_MC_GLOBAL(a) (IN6_IS_ADDR_MULTICAST(a) && ((((const uint8_t *) (a))[1] & 0xf) == 0xe))
#ifdef __USE_GNU
#if !__USE_KERNEL_IPV6_DEFS
#endif
#endif
#endif
