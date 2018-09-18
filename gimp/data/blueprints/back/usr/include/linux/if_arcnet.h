// GGHASH:VTGpaCb1ni4jgzt1DW8YiUZpwCMhB2zOJh2lizDfdQ6g00000e85
#ifndef _LINUX_IF_ARCNET_H
#define _LINUX_IF_ARCNET_H 
#include <linux/types.h>
#include <linux/if_ether.h>
#define ARC_P_IP 212
#define ARC_P_IPV6 196
#define ARC_P_ARP 213
#define ARC_P_RARP 214
#define ARC_P_IPX 250
#define ARC_P_NOVELL_EC 236
#define ARC_P_IP_RFC1051 240
#define ARC_P_ARP_RFC1051 241
#define ARC_P_ETHER 232
#define ARC_P_DATAPOINT_BOOT 0
#define ARC_P_DATAPOINT_MOUNT 1
#define ARC_P_POWERLAN_BEACON 8
#define ARC_P_POWERLAN_BEACON2 243
#define ARC_P_LANSOFT 251
#define ARC_P_ATALK 0xDD
#define ARCNET_ALEN 1
#define RFC1201_HDR_SIZE 4
#define RFC1051_HDR_SIZE 1
#define ETH_ENCAP_HDR_SIZE 14
#define ARC_HDR_SIZE 4
#endif
