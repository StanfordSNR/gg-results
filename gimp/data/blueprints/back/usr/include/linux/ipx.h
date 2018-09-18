// GGHASH:VixJ8Xayt2FFEyTHAdW1jgVz0qalUySi_DwfDmNf30Pw0000092b
#ifndef _IPX_H_
#define _IPX_H_ 
#include <linux/libc-compat.h>
#include <linux/types.h>
#include <linux/sockios.h>
#include <linux/socket.h>
#define IPX_NODE_LEN 6
#define IPX_MTU 576
#if __UAPI_DEF_SOCKADDR_IPX
#endif
#define sipx_special sipx_port
#define sipx_action sipx_zero
#define IPX_DLTITF 0
#define IPX_CRTITF 1
#if __UAPI_DEF_IPX_ROUTE_DEFINITION
#endif
#if __UAPI_DEF_IPX_INTERFACE_DEFINITION
#define IPX_FRAME_NONE 0
#define IPX_FRAME_SNAP 1
#define IPX_FRAME_8022 2
#define IPX_FRAME_ETHERII 3
#define IPX_FRAME_8023 4
#define IPX_FRAME_TR_8022 5
#define IPX_SPECIAL_NONE 0
#define IPX_PRIMARY 1
#define IPX_INTERNAL 2
#endif
#if __UAPI_DEF_IPX_CONFIG_DATA
#endif
#if __UAPI_DEF_IPX_ROUTE_DEF
#define IPX_ROUTE_NO_ROUTER 0
#define IPX_RT_SNAP 8
#define IPX_RT_8022 4
#define IPX_RT_BLUEBOOK 2
#define IPX_RT_ROUTED 1
#endif
#define SIOCAIPXITFCRT (SIOCPROTOPRIVATE)
#define SIOCAIPXPRISLT (SIOCPROTOPRIVATE + 1)
#define SIOCIPXCFGDATA (SIOCPROTOPRIVATE + 2)
#define SIOCIPXNCPCONN (SIOCPROTOPRIVATE + 3)
#endif
