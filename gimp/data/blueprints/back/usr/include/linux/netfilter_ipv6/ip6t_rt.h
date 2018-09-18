// GGHASH:VaISEpEyu989wrIYujcprfRg08WAoSdmEGPmauAW8Bko000003d9
#ifndef _IP6T_RT_H
#define _IP6T_RT_H 
#include <linux/types.h>
#include <linux/in6.h>
#define IP6T_RT_HOPS 16
#define IP6T_RT_TYP 0x01
#define IP6T_RT_SGS 0x02
#define IP6T_RT_LEN 0x04
#define IP6T_RT_RES 0x08
#define IP6T_RT_FST_MASK 0x30
#define IP6T_RT_FST 0x10
#define IP6T_RT_FST_NSTRICT 0x20
#define IP6T_RT_INV_TYP 0x01
#define IP6T_RT_INV_SGS 0x02
#define IP6T_RT_INV_LEN 0x04
#define IP6T_RT_INV_MASK 0x07
#endif
