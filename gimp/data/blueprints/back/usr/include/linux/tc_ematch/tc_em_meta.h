// GGHASH:V5ujY8bZUWd_3040tK_.d2_s4g65U94duJS2gMTkp9qY00000844
#ifndef __LINUX_TC_EM_META_H
#define __LINUX_TC_EM_META_H 
#include <linux/types.h>
#include <linux/pkt_cls.h>
#define TCA_EM_META_MAX (__TCA_EM_META_MAX - 1)
#define TCF_META_TYPE_MASK (0xf << 12)
#define TCF_META_TYPE(kind) (((kind) & TCF_META_TYPE_MASK) >> 12)
#define TCF_META_ID_MASK 0x7ff
#define TCF_META_ID(kind) ((kind) & TCF_META_ID_MASK)
#define TCF_META_TYPE_MAX (__TCF_META_TYPE_MAX - 1)
#define TCF_META_ID_MAX (__TCF_META_ID_MAX - 1)
#endif
