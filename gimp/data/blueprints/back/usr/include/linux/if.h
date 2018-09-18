// GGHASH:VCq3NN87RMDiPt_mDe3MvD3SBus.msmyZGn5wlesosIo00002a3d
#ifndef _LINUX_IF_H
#define _LINUX_IF_H 
#include <linux/libc-compat.h>
#include <linux/types.h>
#include <linux/socket.h>
#include <sys/socket.h>
#if __UAPI_DEF_IF_IFNAMSIZ
#define IFNAMSIZ 16
#endif
#define IFALIASZ 256
#include <linux/hdlc/ioctl.h>
#if __UAPI_DEF_IF_NET_DEVICE_FLAGS_LOWER_UP_DORMANT_ECHO != 0 || __UAPI_DEF_IF_NET_DEVICE_FLAGS != 0
#if __UAPI_DEF_IF_NET_DEVICE_FLAGS
#endif
#if __UAPI_DEF_IF_NET_DEVICE_FLAGS_LOWER_UP_DORMANT_ECHO
#endif
#endif
#if __UAPI_DEF_IF_NET_DEVICE_FLAGS
#define IFF_UP IFF_UP
#define IFF_BROADCAST IFF_BROADCAST
#define IFF_DEBUG IFF_DEBUG
#define IFF_LOOPBACK IFF_LOOPBACK
#define IFF_POINTOPOINT IFF_POINTOPOINT
#define IFF_NOTRAILERS IFF_NOTRAILERS
#define IFF_RUNNING IFF_RUNNING
#define IFF_NOARP IFF_NOARP
#define IFF_PROMISC IFF_PROMISC
#define IFF_ALLMULTI IFF_ALLMULTI
#define IFF_MASTER IFF_MASTER
#define IFF_SLAVE IFF_SLAVE
#define IFF_MULTICAST IFF_MULTICAST
#define IFF_PORTSEL IFF_PORTSEL
#define IFF_AUTOMEDIA IFF_AUTOMEDIA
#define IFF_DYNAMIC IFF_DYNAMIC
#endif
#if __UAPI_DEF_IF_NET_DEVICE_FLAGS_LOWER_UP_DORMANT_ECHO
#define IFF_LOWER_UP IFF_LOWER_UP
#define IFF_DORMANT IFF_DORMANT
#define IFF_ECHO IFF_ECHO
#endif
#define IFF_VOLATILE (IFF_LOOPBACK|IFF_POINTOPOINT|IFF_BROADCAST|IFF_ECHO| IFF_MASTER|IFF_SLAVE|IFF_RUNNING|IFF_LOWER_UP|IFF_DORMANT)
#define IF_GET_IFACE 0x0001
#define IF_GET_PROTO 0x0002
#define IF_IFACE_V35 0x1000
#define IF_IFACE_V24 0x1001
#define IF_IFACE_X21 0x1002
#define IF_IFACE_T1 0x1003
#define IF_IFACE_E1 0x1004
#define IF_IFACE_SYNC_SERIAL 0x1005
#define IF_IFACE_X21D 0x1006
#define IF_PROTO_HDLC 0x2000
#define IF_PROTO_PPP 0x2001
#define IF_PROTO_CISCO 0x2002
#define IF_PROTO_FR 0x2003
#define IF_PROTO_FR_ADD_PVC 0x2004
#define IF_PROTO_FR_DEL_PVC 0x2005
#define IF_PROTO_X25 0x2006
#define IF_PROTO_HDLC_ETH 0x2007
#define IF_PROTO_FR_ADD_ETH_PVC 0x2008
#define IF_PROTO_FR_DEL_ETH_PVC 0x2009
#define IF_PROTO_FR_PVC 0x200A
#define IF_PROTO_FR_ETH_PVC 0x200B
#define IF_PROTO_RAW 0x200C
#if __UAPI_DEF_IF_IFMAP
#endif
#if __UAPI_DEF_IF_IFREQ
#define IFHWADDRLEN 6
#endif
#define ifr_name ifr_ifrn.ifrn_name
#define ifr_hwaddr ifr_ifru.ifru_hwaddr
#define ifr_addr ifr_ifru.ifru_addr
#define ifr_dstaddr ifr_ifru.ifru_dstaddr
#define ifr_broadaddr ifr_ifru.ifru_broadaddr
#define ifr_netmask ifr_ifru.ifru_netmask
#define ifr_flags ifr_ifru.ifru_flags
#define ifr_metric ifr_ifru.ifru_ivalue
#define ifr_mtu ifr_ifru.ifru_mtu
#define ifr_map ifr_ifru.ifru_map
#define ifr_slave ifr_ifru.ifru_slave
#define ifr_data ifr_ifru.ifru_data
#define ifr_ifindex ifr_ifru.ifru_ivalue
#define ifr_bandwidth ifr_ifru.ifru_ivalue
#define ifr_qlen ifr_ifru.ifru_ivalue
#define ifr_newname ifr_ifru.ifru_newname
#define ifr_settings ifr_ifru.ifru_settings
#if __UAPI_DEF_IF_IFCONF
#endif
#define ifc_buf ifc_ifcu.ifcu_buf
#define ifc_req ifc_ifcu.ifcu_req
#endif
