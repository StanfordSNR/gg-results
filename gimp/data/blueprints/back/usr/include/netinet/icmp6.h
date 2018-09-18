// GGHASH:VHe_GGzq06iPWCwFu1TIj1PSIxYKAq.oEjFezPFt2EHA00002cfa
#ifndef _NETINET_ICMP6_H
#define _NETINET_ICMP6_H 1
#include <inttypes.h>
#include <string.h>
#include <sys/types.h>
#include <netinet/in.h>
#define ICMP6_FILTER 1
#define ICMP6_FILTER_BLOCK 1
#define ICMP6_FILTER_PASS 2
#define ICMP6_FILTER_BLOCKOTHERS 3
#define ICMP6_FILTER_PASSONLY 4
#define icmp6_data32 icmp6_dataun.icmp6_un_data32
#define icmp6_data16 icmp6_dataun.icmp6_un_data16
#define icmp6_data8 icmp6_dataun.icmp6_un_data8
#define icmp6_pptr icmp6_data32[0]
#define icmp6_mtu icmp6_data32[0]
#define icmp6_id icmp6_data16[0]
#define icmp6_seq icmp6_data16[1]
#define icmp6_maxdelay icmp6_data16[0]
#define ICMP6_DST_UNREACH 1
#define ICMP6_PACKET_TOO_BIG 2
#define ICMP6_TIME_EXCEEDED 3
#define ICMP6_PARAM_PROB 4
#define ICMP6_INFOMSG_MASK 0x80
#define ICMP6_ECHO_REQUEST 128
#define ICMP6_ECHO_REPLY 129
#define MLD_LISTENER_QUERY 130
#define MLD_LISTENER_REPORT 131
#define MLD_LISTENER_REDUCTION 132
#define ICMP6_DST_UNREACH_NOROUTE 0
#define ICMP6_DST_UNREACH_ADMIN 1
#define ICMP6_DST_UNREACH_BEYONDSCOPE 2
#define ICMP6_DST_UNREACH_ADDR 3
#define ICMP6_DST_UNREACH_NOPORT 4
#define ICMP6_TIME_EXCEED_TRANSIT 0
#define ICMP6_TIME_EXCEED_REASSEMBLY 1
#define ICMP6_PARAMPROB_HEADER 0
#define ICMP6_PARAMPROB_NEXTHEADER 1
#define ICMP6_PARAMPROB_OPTION 2
#define ICMP6_FILTER_WILLPASS(type,filterp) ((((filterp)->icmp6_filt[(type) >> 5]) & (1 << ((type) & 31))) == 0)
#define ICMP6_FILTER_WILLBLOCK(type,filterp) ((((filterp)->icmp6_filt[(type) >> 5]) & (1 << ((type) & 31))) != 0)
#define ICMP6_FILTER_SETPASS(type,filterp) ((((filterp)->icmp6_filt[(type) >> 5]) &= ~(1 << ((type) & 31))))
#define ICMP6_FILTER_SETBLOCK(type,filterp) ((((filterp)->icmp6_filt[(type) >> 5]) |= (1 << ((type) & 31))))
#define ICMP6_FILTER_SETPASSALL(filterp) memset (filterp, 0, sizeof (struct icmp6_filter));
#define ICMP6_FILTER_SETBLOCKALL(filterp) memset (filterp, 0xFF, sizeof (struct icmp6_filter));
#define ND_ROUTER_SOLICIT 133
#define ND_ROUTER_ADVERT 134
#define ND_NEIGHBOR_SOLICIT 135
#define ND_NEIGHBOR_ADVERT 136
#define ND_REDIRECT 137
#define nd_rs_type nd_rs_hdr.icmp6_type
#define nd_rs_code nd_rs_hdr.icmp6_code
#define nd_rs_cksum nd_rs_hdr.icmp6_cksum
#define nd_rs_reserved nd_rs_hdr.icmp6_data32[0]
#define nd_ra_type nd_ra_hdr.icmp6_type
#define nd_ra_code nd_ra_hdr.icmp6_code
#define nd_ra_cksum nd_ra_hdr.icmp6_cksum
#define nd_ra_curhoplimit nd_ra_hdr.icmp6_data8[0]
#define nd_ra_flags_reserved nd_ra_hdr.icmp6_data8[1]
#define ND_RA_FLAG_MANAGED 0x80
#define ND_RA_FLAG_OTHER 0x40
#define ND_RA_FLAG_HOME_AGENT 0x20
#define nd_ra_router_lifetime nd_ra_hdr.icmp6_data16[1]
#define nd_ns_type nd_ns_hdr.icmp6_type
#define nd_ns_code nd_ns_hdr.icmp6_code
#define nd_ns_cksum nd_ns_hdr.icmp6_cksum
#define nd_ns_reserved nd_ns_hdr.icmp6_data32[0]
#define nd_na_type nd_na_hdr.icmp6_type
#define nd_na_code nd_na_hdr.icmp6_code
#define nd_na_cksum nd_na_hdr.icmp6_cksum
#define nd_na_flags_reserved nd_na_hdr.icmp6_data32[0]
#if __BYTE_ORDER == __BIG_ENDIAN
#define ND_NA_FLAG_ROUTER 0x80000000
#define ND_NA_FLAG_SOLICITED 0x40000000
#define ND_NA_FLAG_OVERRIDE 0x20000000
#else
#define ND_NA_FLAG_ROUTER 0x00000080
#define ND_NA_FLAG_SOLICITED 0x00000040
#define ND_NA_FLAG_OVERRIDE 0x00000020
#endif
#define nd_rd_type nd_rd_hdr.icmp6_type
#define nd_rd_code nd_rd_hdr.icmp6_code
#define nd_rd_cksum nd_rd_hdr.icmp6_cksum
#define nd_rd_reserved nd_rd_hdr.icmp6_data32[0]
#define ND_OPT_SOURCE_LINKADDR 1
#define ND_OPT_TARGET_LINKADDR 2
#define ND_OPT_PREFIX_INFORMATION 3
#define ND_OPT_REDIRECTED_HEADER 4
#define ND_OPT_MTU 5
#define ND_OPT_RTR_ADV_INTERVAL 7
#define ND_OPT_HOME_AGENT_INFO 8
#define ND_OPT_PI_FLAG_ONLINK 0x80
#define ND_OPT_PI_FLAG_AUTO 0x40
#define ND_OPT_PI_FLAG_RADDR 0x20
#define mld_type mld_icmp6_hdr.icmp6_type
#define mld_code mld_icmp6_hdr.icmp6_code
#define mld_cksum mld_icmp6_hdr.icmp6_cksum
#define mld_maxdelay mld_icmp6_hdr.icmp6_data16[0]
#define mld_reserved mld_icmp6_hdr.icmp6_data16[1]
#define ICMP6_ROUTER_RENUMBERING 138
#define rr_type rr_hdr.icmp6_type
#define rr_code rr_hdr.icmp6_code
#define rr_cksum rr_hdr.icmp6_cksum
#define rr_seqnum rr_hdr.icmp6_data32[0]
#define ICMP6_RR_FLAGS_TEST 0x80
#define ICMP6_RR_FLAGS_REQRESULT 0x40
#define ICMP6_RR_FLAGS_FORCEAPPLY 0x20
#define ICMP6_RR_FLAGS_SPECSITE 0x10
#define ICMP6_RR_FLAGS_PREVDONE 0x08
#define RPM_PCO_ADD 1
#define RPM_PCO_CHANGE 2
#define RPM_PCO_SETGLOBAL 3
#define ICMP6_RR_PCOUSE_RAFLAGS_ONLINK 0x20
#define ICMP6_RR_PCOUSE_RAFLAGS_AUTO 0x10
#if __BYTE_ORDER == __BIG_ENDIAN
#define ICMP6_RR_PCOUSE_FLAGS_DECRVLTIME 0x80000000
#define ICMP6_RR_PCOUSE_FLAGS_DECRPLTIME 0x40000000
#elif __BYTE_ORDER == __LITTLE_ENDIAN
#define ICMP6_RR_PCOUSE_FLAGS_DECRVLTIME 0x80
#define ICMP6_RR_PCOUSE_FLAGS_DECRPLTIME 0x40
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
#define ICMP6_RR_RESULT_FLAGS_OOB 0x0002
#define ICMP6_RR_RESULT_FLAGS_FORBIDDEN 0x0001
#elif __BYTE_ORDER == __LITTLE_ENDIAN
#define ICMP6_RR_RESULT_FLAGS_OOB 0x0200
#define ICMP6_RR_RESULT_FLAGS_FORBIDDEN 0x0100
#endif
#endif
