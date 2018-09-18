// GGHASH:VE1xa7d_plTqJTsqc9Vh8pLhNEJ3cmCVS2Sv83pulsE8000025e2
#ifndef _LINUX_IN_H
#define _LINUX_IN_H 
#include <linux/types.h>
#include <linux/libc-compat.h>
#include <linux/socket.h>
#if __UAPI_DEF_IN_IPPROTO
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
#endif
#if __UAPI_DEF_IN_ADDR
#endif
#define IP_TOS 1
#define IP_TTL 2
#define IP_HDRINCL 3
#define IP_OPTIONS 4
#define IP_ROUTER_ALERT 5
#define IP_RECVOPTS 6
#define IP_RETOPTS 7
#define IP_PKTINFO 8
#define IP_PKTOPTIONS 9
#define IP_MTU_DISCOVER 10
#define IP_RECVERR 11
#define IP_RECVTTL 12
#define IP_RECVTOS 13
#define IP_MTU 14
#define IP_FREEBIND 15
#define IP_IPSEC_POLICY 16
#define IP_XFRM_POLICY 17
#define IP_PASSSEC 18
#define IP_TRANSPARENT 19
#define IP_RECVRETOPTS IP_RETOPTS
#define IP_ORIGDSTADDR 20
#define IP_RECVORIGDSTADDR IP_ORIGDSTADDR
#define IP_MINTTL 21
#define IP_NODEFRAG 22
#define IP_CHECKSUM 23
#define IP_BIND_ADDRESS_NO_PORT 24
#define IP_RECVFRAGSIZE 25
#define IP_PMTUDISC_DONT 0
#define IP_PMTUDISC_WANT 1
#define IP_PMTUDISC_DO 2
#define IP_PMTUDISC_PROBE 3
#define IP_PMTUDISC_INTERFACE 4
#define IP_PMTUDISC_OMIT 5
#define IP_MULTICAST_IF 32
#define IP_MULTICAST_TTL 33
#define IP_MULTICAST_LOOP 34
#define IP_ADD_MEMBERSHIP 35
#define IP_DROP_MEMBERSHIP 36
#define IP_UNBLOCK_SOURCE 37
#define IP_BLOCK_SOURCE 38
#define IP_ADD_SOURCE_MEMBERSHIP 39
#define IP_DROP_SOURCE_MEMBERSHIP 40
#define IP_MSFILTER 41
#define MCAST_JOIN_GROUP 42
#define MCAST_BLOCK_SOURCE 43
#define MCAST_UNBLOCK_SOURCE 44
#define MCAST_LEAVE_GROUP 45
#define MCAST_JOIN_SOURCE_GROUP 46
#define MCAST_LEAVE_SOURCE_GROUP 47
#define MCAST_MSFILTER 48
#define IP_MULTICAST_ALL 49
#define IP_UNICAST_IF 50
#define MCAST_EXCLUDE 0
#define MCAST_INCLUDE 1
#define IP_DEFAULT_MULTICAST_TTL 1
#define IP_DEFAULT_MULTICAST_LOOP 1
#if __UAPI_DEF_IP_MREQ
#define IP_MSFILTER_SIZE(numsrc) (sizeof(struct ip_msfilter) - sizeof(__u32) + (numsrc) * sizeof(__u32))
#define GROUP_FILTER_SIZE(numsrc) (sizeof(struct group_filter) - sizeof(struct __kernel_sockaddr_storage) + (numsrc) * sizeof(struct __kernel_sockaddr_storage))
#endif
#if __UAPI_DEF_IN_PKTINFO
#endif
#if __UAPI_DEF_SOCKADDR_IN
#define __SOCK_SIZE__ 16
#define sin_zero __pad
#endif
#if __UAPI_DEF_IN_CLASS
#define IN_CLASSA(a) ((((long int) (a)) & 0x80000000) == 0)
#define IN_CLASSA_NET 0xff000000
#define IN_CLASSA_NSHIFT 24
#define IN_CLASSA_HOST (0xffffffff & ~IN_CLASSA_NET)
#define IN_CLASSA_MAX 128
#define IN_CLASSB(a) ((((long int) (a)) & 0xc0000000) == 0x80000000)
#define IN_CLASSB_NET 0xffff0000
#define IN_CLASSB_NSHIFT 16
#define IN_CLASSB_HOST (0xffffffff & ~IN_CLASSB_NET)
#define IN_CLASSB_MAX 65536
#define IN_CLASSC(a) ((((long int) (a)) & 0xe0000000) == 0xc0000000)
#define IN_CLASSC_NET 0xffffff00
#define IN_CLASSC_NSHIFT 8
#define IN_CLASSC_HOST (0xffffffff & ~IN_CLASSC_NET)
#define IN_CLASSD(a) ((((long int) (a)) & 0xf0000000) == 0xe0000000)
#define IN_MULTICAST(a) IN_CLASSD(a)
#define IN_MULTICAST_NET 0xF0000000
#define IN_EXPERIMENTAL(a) ((((long int) (a)) & 0xf0000000) == 0xf0000000)
#define IN_BADCLASS(a) IN_EXPERIMENTAL((a))
#define INADDR_ANY ((unsigned long int) 0x00000000)
#define INADDR_BROADCAST ((unsigned long int) 0xffffffff)
#define INADDR_NONE ((unsigned long int) 0xffffffff)
#define IN_LOOPBACKNET 127
#define INADDR_LOOPBACK 0x7f000001
#define IN_LOOPBACK(a) ((((long int) (a)) & 0xff000000) == 0x7f000000)
#define INADDR_UNSPEC_GROUP 0xe0000000U
#define INADDR_ALLHOSTS_GROUP 0xe0000001U
#define INADDR_ALLRTRS_GROUP 0xe0000002U
#define INADDR_MAX_LOCAL_GROUP 0xe00000ffU
#endif
#include <asm/byteorder.h>
#endif
