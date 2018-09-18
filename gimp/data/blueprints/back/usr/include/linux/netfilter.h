// GGHASH:VB4NqJirhXpEg6EmWHeRl5oPbD2pFMly2_YwZS.1hj800000071c
#ifndef __LINUX_NETFILTER_H
#define __LINUX_NETFILTER_H 
#include <linux/types.h>
#include <linux/in.h>
#include <linux/in6.h>
#define NF_DROP 0
#define NF_ACCEPT 1
#define NF_STOLEN 2
#define NF_QUEUE 3
#define NF_REPEAT 4
#define NF_STOP 5
#define NF_MAX_VERDICT NF_STOP
#define NF_VERDICT_MASK 0x000000ff
#define NF_VERDICT_FLAG_QUEUE_BYPASS 0x00008000
#define NF_VERDICT_QMASK 0xffff0000
#define NF_VERDICT_QBITS 16
#define NF_QUEUE_NR(x) ((((x) << 16) & NF_VERDICT_QMASK) | NF_QUEUE)
#define NF_DROP_ERR(x) (((-x) << 16) | NF_DROP)
#define NFC_UNKNOWN 0x4000
#define NFC_ALTERED 0x8000
#define NF_VERDICT_BITS 16
#endif
