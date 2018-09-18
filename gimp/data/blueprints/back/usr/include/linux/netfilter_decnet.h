// GGHASH:ViEFp4kJt5xTUM5lmMThd0FkmT7OWXGcGrHN0k4svBlU0000078f
#ifndef __LINUX_DECNET_NETFILTER_H
#define __LINUX_DECNET_NETFILTER_H 
#include <linux/netfilter.h>
#include <limits.h>
#define NFC_DN_SRC 0x0001
#define NFC_DN_DST 0x0002
#define NFC_DN_IF_IN 0x0004
#define NFC_DN_IF_OUT 0x0008
#define NF_DN_PRE_ROUTING 0
#define NF_DN_LOCAL_IN 1
#define NF_DN_FORWARD 2
#define NF_DN_LOCAL_OUT 3
#define NF_DN_POST_ROUTING 4
#define NF_DN_HELLO 5
#define NF_DN_ROUTE 6
#define NF_DN_NUMHOOKS 7
#define NFDN_RTMSG(r) ((unsigned char *)(r) + NLMSG_ALIGN(sizeof(struct nf_dn_rtmsg)))
#define DNRMG_L1_GROUP 0x01
#define DNRMG_L2_GROUP 0x02
#define DNRNG_NLGRP_NONE DNRNG_NLGRP_NONE
#define DNRNG_NLGRP_L1 DNRNG_NLGRP_L1
#define DNRNG_NLGRP_L2 DNRNG_NLGRP_L2
#define DNRNG_NLGRP_MAX (__DNRNG_NLGRP_MAX - 1)
#endif
