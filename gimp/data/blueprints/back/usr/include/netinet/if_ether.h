// GGHASH:V7mZvfW8KgHwyD4P8b7um08dL7TiMqa1Jx6ggdspQfww00000f87
#ifndef __NETINET_IF_ETHER_H
#define __NETINET_IF_ETHER_H 1
#include <features.h>
#include <sys/types.h>
#include <linux/if_ether.h>
#ifdef __USE_MISC
#include <net/ethernet.h>
#include <net/if_arp.h>
#define arp_hrd ea_hdr.ar_hrd
#define arp_pro ea_hdr.ar_pro
#define arp_hln ea_hdr.ar_hln
#define arp_pln ea_hdr.ar_pln
#define arp_op ea_hdr.ar_op
#define ETHER_MAP_IP_MULTICAST(ipaddr,enaddr) { (enaddr)[0] = 0x01; (enaddr)[1] = 0x00; (enaddr)[2] = 0x5e; (enaddr)[3] = ((uint8_t *)ipaddr)[1] & 0x7f; (enaddr)[4] = ((uint8_t *)ipaddr)[2]; (enaddr)[5] = ((uint8_t *)ipaddr)[3]; }
#endif
#endif
