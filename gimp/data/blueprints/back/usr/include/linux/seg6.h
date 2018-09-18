// GGHASH:Vqa5PSK0bsMHOjGfT_i_9SS1SBZrn_BpQHuEIMxMqoLc00000492
#ifndef _LINUX_SEG6_H
#define _LINUX_SEG6_H 
#include <linux/types.h>
#include <linux/in6.h>
#define SR6_FLAG1_PROTECTED (1 << 6)
#define SR6_FLAG1_OAM (1 << 5)
#define SR6_FLAG1_ALERT (1 << 4)
#define SR6_FLAG1_HMAC (1 << 3)
#define SR6_TLV_INGRESS 1
#define SR6_TLV_EGRESS 2
#define SR6_TLV_OPAQUE 3
#define SR6_TLV_PADDING 4
#define SR6_TLV_HMAC 5
#define sr_has_hmac(srh) ((srh)->flags & SR6_FLAG1_HMAC)
#endif
