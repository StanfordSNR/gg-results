// GGHASH:Vq52u40FU732uEQfaMqTcUB7S1qEdtewv.BnYFEqPJh400000b53
#ifndef __NETIPX_IPX_H
#define __NETIPX_IPX_H 1
#include <sys/types.h>
#include <stdint.h>
#include <bits/sockaddr.h>
#define SOL_IPX 256
#define IPX_TYPE 1
#define IPX_NODE_LEN 6
#define IPX_MTU 576
#define sipx_special sipx_port
#define sipx_action sipx_zero
#define IPX_DLTITF 0
#define IPX_CRTITF 1
#define IPX_FRAME_NONE 0
#define IPX_FRAME_SNAP 1
#define IPX_FRAME_8022 2
#define IPX_FRAME_ETHERII 3
#define IPX_FRAME_8023 4
#define IPX_FRAME_TR_8022 5
#define IPX_SPECIAL_NONE 0
#define IPX_PRIMARY 1
#define IPX_INTERNAL 2
#define IPX_ROUTE_NO_ROUTER 0
#define IPX_RT_SNAP 8
#define IPX_RT_8022 4
#define IPX_RT_BLUEBOOK 2
#define IPX_RT_ROUTED 1
#define SIOCAIPXITFCRT (SIOCPROTOPRIVATE)
#define SIOCAIPXPRISLT (SIOCPROTOPRIVATE + 1)
#define SIOCIPXCFGDATA (SIOCPROTOPRIVATE + 2)
#define SIOCIPXNCPCONN (SIOCPROTOPRIVATE + 3)
#endif
