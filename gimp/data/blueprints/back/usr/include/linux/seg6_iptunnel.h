// GGHASH:V9rF8yReRME8q3252XKUSgIE.53Hn_LBuaVQtsgZE5jQ0000039f
#ifndef _LINUX_SEG6_IPTUNNEL_H
#define _LINUX_SEG6_IPTUNNEL_H 
#include <linux/seg6.h>
#define SEG6_IPTUNNEL_MAX (__SEG6_IPTUNNEL_MAX - 1)
#define SEG6_IPTUN_ENCAP_SIZE(x) ((sizeof(*x)) + (((x)->srh->hdrlen + 1) << 3))
#endif
