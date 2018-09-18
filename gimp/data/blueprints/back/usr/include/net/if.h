// GGHASH:V4ceQZS5w0AwIYEgwS1seKy1m8YcC19x7Rb6M5G1elPc00001b45
#ifndef _NET_IF_H
#define _NET_IF_H 1
#include <features.h>
#ifdef __USE_MISC
# include <sys/types.h>
# include <sys/socket.h>
#endif
#define IF_NAMESIZE 16
#ifdef __USE_MISC
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
#define ifa_broadaddr ifa_ifu.ifu_broadaddr
#define ifa_dstaddr ifa_ifu.ifu_dstaddr
#define IFHWADDRLEN 6
#define IFNAMSIZ IF_NAMESIZE
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
#define _IOT_ifreq _IOT(_IOTS(char),IFNAMSIZ,_IOTS(char),16,0,0)
#define _IOT_ifreq_short _IOT(_IOTS(char),IFNAMSIZ,_IOTS(short),1,0,0)
#define _IOT_ifreq_int _IOT(_IOTS(char),IFNAMSIZ,_IOTS(int),1,0,0)
#define ifc_buf ifc_ifcu.ifcu_buf
#define ifc_req ifc_ifcu.ifcu_req
#define _IOT_ifconf _IOT(_IOTS(struct ifconf),1,0,0,0,0)
#endif
#endif
