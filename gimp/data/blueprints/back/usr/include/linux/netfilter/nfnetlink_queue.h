// GGHASH:VswItF0vt8d_TZE6WxF.nYlE.oJAL9FBt95PVxPTqiBM00000dab
#ifndef _NFNETLINK_QUEUE_H
#define _NFNETLINK_QUEUE_H 
#include <linux/types.h>
#include <linux/netfilter/nfnetlink.h>
#define NFQA_VLAN_MAX (__NFQA_VLAN_MAX - 1)
#define NFQA_MAX (__NFQA_MAX - 1)
#define NFQA_CFG_MAX (__NFQA_CFG_MAX-1)
#define NFQA_CFG_F_FAIL_OPEN (1 << 0)
#define NFQA_CFG_F_CONNTRACK (1 << 1)
#define NFQA_CFG_F_GSO (1 << 2)
#define NFQA_CFG_F_UID_GID (1 << 3)
#define NFQA_CFG_F_SECCTX (1 << 4)
#define NFQA_CFG_F_MAX (1 << 5)
#define NFQA_SKB_CSUMNOTREADY (1 << 0)
#define NFQA_SKB_GSO (1 << 1)
#define NFQA_SKB_CSUM_NOTVERIFIED (1 << 2)
#endif
