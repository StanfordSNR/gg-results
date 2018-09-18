// GGHASH:V2P3t2V1LDxE0HGTvXe.cABZIHHy6YRmRTSesA4C4u0800000b72
#ifndef _CTTIMEOUT_NETLINK_H
#define _CTTIMEOUT_NETLINK_H 
#include <linux/netfilter/nfnetlink.h>
#define CTA_TIMEOUT_MAX (__CTA_TIMEOUT_MAX - 1)
#define CTA_TIMEOUT_GENERIC_MAX (__CTA_TIMEOUT_GENERIC_MAX - 1)
#define CTA_TIMEOUT_TCP_MAX (__CTA_TIMEOUT_TCP_MAX - 1)
#define CTA_TIMEOUT_UDP_MAX (__CTA_TIMEOUT_UDP_MAX - 1)
#define CTA_TIMEOUT_UDPLITE_MAX (__CTA_TIMEOUT_UDPLITE_MAX - 1)
#define CTA_TIMEOUT_ICMP_MAX (__CTA_TIMEOUT_ICMP_MAX - 1)
#define CTA_TIMEOUT_DCCP_MAX (__CTA_TIMEOUT_DCCP_MAX - 1)
#define CTA_TIMEOUT_SCTP_MAX (__CTA_TIMEOUT_SCTP_MAX - 1)
#define CTA_TIMEOUT_ICMPV6_MAX (__CTA_TIMEOUT_ICMPV6_MAX - 1)
#define CTA_TIMEOUT_GRE_MAX (__CTA_TIMEOUT_GRE_MAX - 1)
#define CTNL_TIMEOUT_NAME_MAX 32
#endif
