// GGHASH:VcUl1RY_8OcDpqYO6L4gJpdT6IRaNuXa0VqXqHdhqcbA00000867
#ifndef __LINUX_IP6_NETFILTER_H
#define __LINUX_IP6_NETFILTER_H 
#include <linux/netfilter.h>
#include <limits.h>
#define NFC_IP6_SRC 0x0001
#define NFC_IP6_DST 0x0002
#define NFC_IP6_IF_IN 0x0004
#define NFC_IP6_IF_OUT 0x0008
#define NFC_IP6_TOS 0x0010
#define NFC_IP6_PROTO 0x0020
#define NFC_IP6_OPTIONS 0x0040
#define NFC_IP6_FRAG 0x0080
#define NFC_IP6_TCPFLAGS 0x0100
#define NFC_IP6_SRC_PT 0x0200
#define NFC_IP6_DST_PT 0x0400
#define NFC_IP6_PROTO_UNKNOWN 0x2000
#define NF_IP6_PRE_ROUTING 0
#define NF_IP6_LOCAL_IN 1
#define NF_IP6_FORWARD 2
#define NF_IP6_LOCAL_OUT 3
#define NF_IP6_POST_ROUTING 4
#define NF_IP6_NUMHOOKS 5
#endif
