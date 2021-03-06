// GGHASH:VAh42f9ONE_RTZ1U2a8gR7nlmC8PKZSOk8.xi4XxRGQs00004647
#ifndef __LINUX_RTNETLINK_H
#define __LINUX_RTNETLINK_H 
#include <linux/types.h>
#include <linux/netlink.h>
#include <linux/if_link.h>
#include <linux/if_addr.h>
#include <linux/neighbour.h>
#define RTNL_FAMILY_IPMR 128
#define RTNL_FAMILY_IP6MR 129
#define RTNL_FAMILY_MAX 129
#define RTM_BASE RTM_BASE
#define RTM_NEWLINK RTM_NEWLINK
#define RTM_DELLINK RTM_DELLINK
#define RTM_GETLINK RTM_GETLINK
#define RTM_SETLINK RTM_SETLINK
#define RTM_NEWADDR RTM_NEWADDR
#define RTM_DELADDR RTM_DELADDR
#define RTM_GETADDR RTM_GETADDR
#define RTM_NEWROUTE RTM_NEWROUTE
#define RTM_DELROUTE RTM_DELROUTE
#define RTM_GETROUTE RTM_GETROUTE
#define RTM_NEWNEIGH RTM_NEWNEIGH
#define RTM_DELNEIGH RTM_DELNEIGH
#define RTM_GETNEIGH RTM_GETNEIGH
#define RTM_NEWRULE RTM_NEWRULE
#define RTM_DELRULE RTM_DELRULE
#define RTM_GETRULE RTM_GETRULE
#define RTM_NEWQDISC RTM_NEWQDISC
#define RTM_DELQDISC RTM_DELQDISC
#define RTM_GETQDISC RTM_GETQDISC
#define RTM_NEWTCLASS RTM_NEWTCLASS
#define RTM_DELTCLASS RTM_DELTCLASS
#define RTM_GETTCLASS RTM_GETTCLASS
#define RTM_NEWTFILTER RTM_NEWTFILTER
#define RTM_DELTFILTER RTM_DELTFILTER
#define RTM_GETTFILTER RTM_GETTFILTER
#define RTM_NEWACTION RTM_NEWACTION
#define RTM_DELACTION RTM_DELACTION
#define RTM_GETACTION RTM_GETACTION
#define RTM_NEWPREFIX RTM_NEWPREFIX
#define RTM_GETMULTICAST RTM_GETMULTICAST
#define RTM_GETANYCAST RTM_GETANYCAST
#define RTM_NEWNEIGHTBL RTM_NEWNEIGHTBL
#define RTM_GETNEIGHTBL RTM_GETNEIGHTBL
#define RTM_SETNEIGHTBL RTM_SETNEIGHTBL
#define RTM_NEWNDUSEROPT RTM_NEWNDUSEROPT
#define RTM_NEWADDRLABEL RTM_NEWADDRLABEL
#define RTM_DELADDRLABEL RTM_DELADDRLABEL
#define RTM_GETADDRLABEL RTM_GETADDRLABEL
#define RTM_GETDCB RTM_GETDCB
#define RTM_SETDCB RTM_SETDCB
#define RTM_NEWNETCONF RTM_NEWNETCONF
#define RTM_DELNETCONF RTM_DELNETCONF
#define RTM_GETNETCONF RTM_GETNETCONF
#define RTM_NEWMDB RTM_NEWMDB
#define RTM_DELMDB RTM_DELMDB
#define RTM_GETMDB RTM_GETMDB
#define RTM_NEWNSID RTM_NEWNSID
#define RTM_DELNSID RTM_DELNSID
#define RTM_GETNSID RTM_GETNSID
#define RTM_NEWSTATS RTM_NEWSTATS
#define RTM_GETSTATS RTM_GETSTATS
#define RTM_NEWCACHEREPORT RTM_NEWCACHEREPORT
#define RTM_MAX (((__RTM_MAX + 3) & ~3) - 1)
#define RTM_NR_MSGTYPES (RTM_MAX + 1 - RTM_BASE)
#define RTM_NR_FAMILIES (RTM_NR_MSGTYPES >> 2)
#define RTM_FAM(cmd) (((cmd) - RTM_BASE) >> 2)
#define RTA_ALIGNTO 4U
#define RTA_ALIGN(len) ( ((len)+RTA_ALIGNTO-1) & ~(RTA_ALIGNTO-1) )
#define RTA_OK(rta,len) ((len) >= (int)sizeof(struct rtattr) && (rta)->rta_len >= sizeof(struct rtattr) && (rta)->rta_len <= (len))
#define RTA_NEXT(rta,attrlen) ((attrlen) -= RTA_ALIGN((rta)->rta_len), (struct rtattr*)(((char*)(rta)) + RTA_ALIGN((rta)->rta_len)))
#define RTA_LENGTH(len) (RTA_ALIGN(sizeof(struct rtattr)) + (len))
#define RTA_SPACE(len) RTA_ALIGN(RTA_LENGTH(len))
#define RTA_DATA(rta) ((void*)(((char*)(rta)) + RTA_LENGTH(0)))
#define RTA_PAYLOAD(rta) ((int)((rta)->rta_len) - RTA_LENGTH(0))
#define RTN_MAX (__RTN_MAX - 1)
#define RTPROT_UNSPEC 0
#define RTPROT_REDIRECT 1
#define RTPROT_KERNEL 2
#define RTPROT_BOOT 3
#define RTPROT_STATIC 4
#define RTPROT_GATED 8
#define RTPROT_RA 9
#define RTPROT_MRT 10
#define RTPROT_ZEBRA 11
#define RTPROT_BIRD 12
#define RTPROT_DNROUTED 13
#define RTPROT_XORP 14
#define RTPROT_NTK 15
#define RTPROT_DHCP 16
#define RTPROT_MROUTED 17
#define RTPROT_BABEL 42
#define RTM_F_NOTIFY 0x100
#define RTM_F_CLONED 0x200
#define RTM_F_EQUALIZE 0x400
#define RTM_F_PREFIX 0x800
#define RTM_F_LOOKUP_TABLE 0x1000
#define RTM_F_FIB_MATCH 0x2000
#define RTA_MAX (__RTA_MAX - 1)
#define RTM_RTA(r) ((struct rtattr*)(((char*)(r)) + NLMSG_ALIGN(sizeof(struct rtmsg))))
#define RTM_PAYLOAD(n) NLMSG_PAYLOAD(n,sizeof(struct rtmsg))
#define RTNH_F_DEAD 1
#define RTNH_F_PERVASIVE 2
#define RTNH_F_ONLINK 4
#define RTNH_F_OFFLOAD 8
#define RTNH_F_LINKDOWN 16
#define RTNH_F_UNRESOLVED 32
#define RTNH_COMPARE_MASK (RTNH_F_DEAD | RTNH_F_LINKDOWN | RTNH_F_OFFLOAD)
#define RTNH_ALIGNTO 4
#define RTNH_ALIGN(len) ( ((len)+RTNH_ALIGNTO-1) & ~(RTNH_ALIGNTO-1) )
#define RTNH_OK(rtnh,len) ((rtnh)->rtnh_len >= sizeof(struct rtnexthop) && ((int)(rtnh)->rtnh_len) <= (len))
#define RTNH_NEXT(rtnh) ((struct rtnexthop*)(((char*)(rtnh)) + RTNH_ALIGN((rtnh)->rtnh_len)))
#define RTNH_LENGTH(len) (RTNH_ALIGN(sizeof(struct rtnexthop)) + (len))
#define RTNH_SPACE(len) RTNH_ALIGN(RTNH_LENGTH(len))
#define RTNH_DATA(rtnh) ((struct rtattr*)(((char*)(rtnh)) + RTNH_LENGTH(0)))
#define RTNETLINK_HAVE_PEERINFO 1
#define RTAX_UNSPEC RTAX_UNSPEC
#define RTAX_LOCK RTAX_LOCK
#define RTAX_MTU RTAX_MTU
#define RTAX_WINDOW RTAX_WINDOW
#define RTAX_RTT RTAX_RTT
#define RTAX_RTTVAR RTAX_RTTVAR
#define RTAX_SSTHRESH RTAX_SSTHRESH
#define RTAX_CWND RTAX_CWND
#define RTAX_ADVMSS RTAX_ADVMSS
#define RTAX_REORDERING RTAX_REORDERING
#define RTAX_HOPLIMIT RTAX_HOPLIMIT
#define RTAX_INITCWND RTAX_INITCWND
#define RTAX_FEATURES RTAX_FEATURES
#define RTAX_RTO_MIN RTAX_RTO_MIN
#define RTAX_INITRWND RTAX_INITRWND
#define RTAX_QUICKACK RTAX_QUICKACK
#define RTAX_CC_ALGO RTAX_CC_ALGO
#define RTAX_FASTOPEN_NO_COOKIE RTAX_FASTOPEN_NO_COOKIE
#define RTAX_MAX (__RTAX_MAX - 1)
#define RTAX_FEATURE_ECN (1 << 0)
#define RTAX_FEATURE_SACK (1 << 1)
#define RTAX_FEATURE_TIMESTAMP (1 << 2)
#define RTAX_FEATURE_ALLFRAG (1 << 3)
#define RTAX_FEATURE_MASK (RTAX_FEATURE_ECN | RTAX_FEATURE_SACK | RTAX_FEATURE_TIMESTAMP | RTAX_FEATURE_ALLFRAG)
#define PREFIX_MAX (__PREFIX_MAX - 1)
#define TCA_MAX (__TCA_MAX - 1)
#define TCA_RTA(r) ((struct rtattr*)(((char*)(r)) + NLMSG_ALIGN(sizeof(struct tcmsg))))
#define TCA_PAYLOAD(n) NLMSG_PAYLOAD(n,sizeof(struct tcmsg))
#define NDUSEROPT_MAX (__NDUSEROPT_MAX - 1)
#define RTMGRP_LINK 1
#define RTMGRP_NOTIFY 2
#define RTMGRP_NEIGH 4
#define RTMGRP_TC 8
#define RTMGRP_IPV4_IFADDR 0x10
#define RTMGRP_IPV4_MROUTE 0x20
#define RTMGRP_IPV4_ROUTE 0x40
#define RTMGRP_IPV4_RULE 0x80
#define RTMGRP_IPV6_IFADDR 0x100
#define RTMGRP_IPV6_MROUTE 0x200
#define RTMGRP_IPV6_ROUTE 0x400
#define RTMGRP_IPV6_IFINFO 0x800
#define RTMGRP_DECnet_IFADDR 0x1000
#define RTMGRP_DECnet_ROUTE 0x4000
#define RTMGRP_IPV6_PREFIX 0x20000
#define RTNLGRP_NONE RTNLGRP_NONE
#define RTNLGRP_LINK RTNLGRP_LINK
#define RTNLGRP_NOTIFY RTNLGRP_NOTIFY
#define RTNLGRP_NEIGH RTNLGRP_NEIGH
#define RTNLGRP_TC RTNLGRP_TC
#define RTNLGRP_IPV4_IFADDR RTNLGRP_IPV4_IFADDR
#define RTNLGRP_IPV4_MROUTE RTNLGRP_IPV4_MROUTE
#define RTNLGRP_IPV4_ROUTE RTNLGRP_IPV4_ROUTE
#define RTNLGRP_IPV4_RULE RTNLGRP_IPV4_RULE
#define RTNLGRP_IPV6_IFADDR RTNLGRP_IPV6_IFADDR
#define RTNLGRP_IPV6_MROUTE RTNLGRP_IPV6_MROUTE
#define RTNLGRP_IPV6_ROUTE RTNLGRP_IPV6_ROUTE
#define RTNLGRP_IPV6_IFINFO RTNLGRP_IPV6_IFINFO
#define RTNLGRP_DECnet_IFADDR RTNLGRP_DECnet_IFADDR
#define RTNLGRP_DECnet_ROUTE RTNLGRP_DECnet_ROUTE
#define RTNLGRP_DECnet_RULE RTNLGRP_DECnet_RULE
#define RTNLGRP_IPV6_PREFIX RTNLGRP_IPV6_PREFIX
#define RTNLGRP_IPV6_RULE RTNLGRP_IPV6_RULE
#define RTNLGRP_ND_USEROPT RTNLGRP_ND_USEROPT
#define RTNLGRP_PHONET_IFADDR RTNLGRP_PHONET_IFADDR
#define RTNLGRP_PHONET_ROUTE RTNLGRP_PHONET_ROUTE
#define RTNLGRP_DCB RTNLGRP_DCB
#define RTNLGRP_IPV4_NETCONF RTNLGRP_IPV4_NETCONF
#define RTNLGRP_IPV6_NETCONF RTNLGRP_IPV6_NETCONF
#define RTNLGRP_MDB RTNLGRP_MDB
#define RTNLGRP_MPLS_ROUTE RTNLGRP_MPLS_ROUTE
#define RTNLGRP_NSID RTNLGRP_NSID
#define RTNLGRP_MPLS_NETCONF RTNLGRP_MPLS_NETCONF
#define RTNLGRP_IPV4_MROUTE_R RTNLGRP_IPV4_MROUTE_R
#define RTNLGRP_IPV6_MROUTE_R RTNLGRP_IPV6_MROUTE_R
#define RTNLGRP_MAX (__RTNLGRP_MAX - 1)
#define TCA_ACT_TAB TCA_ROOT_TAB
#define TCAA_MAX TCA_ROOT_TAB
#define TCA_ROOT_MAX (__TCA_ROOT_MAX - 1)
#define TA_RTA(r) ((struct rtattr*)(((char*)(r)) + NLMSG_ALIGN(sizeof(struct tcamsg))))
#define TA_PAYLOAD(n) NLMSG_PAYLOAD(n,sizeof(struct tcamsg))
#define TCA_FLAG_LARGE_DUMP_ON (1 << 0)
#define RTEXT_FILTER_VF (1 << 0)
#define RTEXT_FILTER_BRVLAN (1 << 1)
#define RTEXT_FILTER_BRVLAN_COMPRESSED (1 << 2)
#define RTEXT_FILTER_SKIP_STATS (1 << 3)
#endif
