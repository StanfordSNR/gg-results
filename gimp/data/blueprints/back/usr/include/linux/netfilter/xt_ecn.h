// GGHASH:V2bNEaqAYKlpeiQY.SiYNZeLXUtYifd80qNyLi5ncdL8000002e0
#ifndef _XT_ECN_H
#define _XT_ECN_H 
#include <linux/types.h>
#include <linux/netfilter/xt_dscp.h>
#define XT_ECN_IP_MASK (~XT_DSCP_MASK)
#define XT_ECN_OP_MATCH_IP 0x01
#define XT_ECN_OP_MATCH_ECE 0x10
#define XT_ECN_OP_MATCH_CWR 0x20
#define XT_ECN_OP_MATCH_MASK 0xce
#endif
