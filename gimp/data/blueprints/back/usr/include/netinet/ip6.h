// GGHASH:VffFEzqbQtj_rnkXiaqlTFwUJm.dO_k2HjJ8Fx.pxNSs00001511
#ifndef _NETINET_IP6_H
#define _NETINET_IP6_H 1
#include <inttypes.h>
#include <netinet/in.h>
#define ip6_vfc ip6_ctlun.ip6_un2_vfc
#define ip6_flow ip6_ctlun.ip6_un1.ip6_un1_flow
#define ip6_plen ip6_ctlun.ip6_un1.ip6_un1_plen
#define ip6_nxt ip6_ctlun.ip6_un1.ip6_un1_nxt
#define ip6_hlim ip6_ctlun.ip6_un1.ip6_un1_hlim
#define ip6_hops ip6_ctlun.ip6_un1.ip6_un1_hlim
#if __BYTE_ORDER == __BIG_ENDIAN
#define IP6F_OFF_MASK 0xfff8
#define IP6F_RESERVED_MASK 0x0006
#define IP6F_MORE_FRAG 0x0001
#else
#define IP6F_OFF_MASK 0xf8ff
#define IP6F_RESERVED_MASK 0x0600
#define IP6F_MORE_FRAG 0x0100
#endif
#define IP6OPT_TYPE(o) ((o) & 0xc0)
#define IP6OPT_TYPE_SKIP 0x00
#define IP6OPT_TYPE_DISCARD 0x40
#define IP6OPT_TYPE_FORCEICMP 0x80
#define IP6OPT_TYPE_ICMP 0xc0
#define IP6OPT_TYPE_MUTABLE 0x20
#define IP6OPT_PAD1 0
#define IP6OPT_PADN 1
#define IP6OPT_JUMBO 0xc2
#define IP6OPT_NSAP_ADDR 0xc3
#define IP6OPT_TUNNEL_LIMIT 0x04
#define IP6OPT_ROUTER_ALERT 0x05
#define IP6OPT_JUMBO_LEN 6
#if __BYTE_ORDER == __BIG_ENDIAN
#define IP6_ALERT_MLD 0x0000
#define IP6_ALERT_RSVP 0x0001
#define IP6_ALERT_AN 0x0002
#else
#define IP6_ALERT_MLD 0x0000
#define IP6_ALERT_RSVP 0x0100
#define IP6_ALERT_AN 0x0200
#endif
#endif
