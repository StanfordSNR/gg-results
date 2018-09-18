// GGHASH:VtRTGe0OUtHh9.4G.bEV9Izw2.nZQ_SU0QKKL7w8h8d0000010f4
#ifndef __LINUX_NEIGHBOUR_H
#define __LINUX_NEIGHBOUR_H 
#include <linux/types.h>
#include <linux/netlink.h>
#define NDA_MAX (__NDA_MAX - 1)
#define NTF_USE 0x01
#define NTF_SELF 0x02
#define NTF_MASTER 0x04
#define NTF_PROXY 0x08
#define NTF_EXT_LEARNED 0x10
#define NTF_OFFLOADED 0x20
#define NTF_ROUTER 0x80
#define NUD_INCOMPLETE 0x01
#define NUD_REACHABLE 0x02
#define NUD_STALE 0x04
#define NUD_DELAY 0x08
#define NUD_PROBE 0x10
#define NUD_FAILED 0x20
#define NUD_NOARP 0x40
#define NUD_PERMANENT 0x80
#define NUD_NONE 0x00
#define NDTPA_MAX (__NDTPA_MAX - 1)
#define NDTA_MAX (__NDTA_MAX - 1)
#endif
