// GGHASH:VnQ8l1Eb9ILJLiiNkmsaDwkaDnCqR_tgyXS2TVi.t9NY0000025e
#ifndef _ARPT_MANGLE_H
#define _ARPT_MANGLE_H 
#include <linux/netfilter_arp/arp_tables.h>
#define ARPT_MANGLE_ADDR_LEN_MAX sizeof(struct in_addr)
#define ARPT_MANGLE_SDEV 0x01
#define ARPT_MANGLE_TDEV 0x02
#define ARPT_MANGLE_SIP 0x04
#define ARPT_MANGLE_TIP 0x08
#define ARPT_MANGLE_MASK 0x0f
#endif
