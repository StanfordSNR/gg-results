// GGHASH:VoUKDT3NzfU4dsE8MhRIn7jf6x4.M8QIoSKtj12Eqj4o0000617a
#ifndef __LINUX_DCBNL_H__
#define __LINUX_DCBNL_H__ 
#include <linux/types.h>
#define IEEE_8021QAZ_MAX_TCS 8
#define IEEE_8021QAZ_TSA_STRICT 0
#define IEEE_8021QAZ_TSA_CB_SHAPER 1
#define IEEE_8021QAZ_TSA_ETS 2
#define IEEE_8021QAZ_TSA_VENDOR 255
#define CEE_DCBX_MAX_PGS 8
#define CEE_DCBX_MAX_PRIO 8
#define IEEE_8021QAZ_APP_SEL_ETHERTYPE 1
#define IEEE_8021QAZ_APP_SEL_STREAM 2
#define IEEE_8021QAZ_APP_SEL_DGRAM 3
#define IEEE_8021QAZ_APP_SEL_ANY 4
#define IEEE_8021QAZ_APP_SEL_DSCP 5
#define DCB_ATTR_IEEE_MAX (__DCB_ATTR_IEEE_MAX - 1)
#define DCB_ATTR_IEEE_APP_MAX (__DCB_ATTR_IEEE_APP_MAX - 1)
#define DCB_ATTR_CEE_MAX (__DCB_ATTR_CEE_MAX - 1)
#define DCB_ATTR_CEE_PEER_APP_MAX (__DCB_ATTR_CEE_PEER_APP_MAX - 1)
#define DCB_ATTR_CEE_APP_MAX (__DCB_ATTR_CEE_APP_MAX - 1)
#define DCB_CAP_DCBX_HOST 0x01
#define DCB_CAP_DCBX_LLD_MANAGED 0x02
#define DCB_CAP_DCBX_VER_CEE 0x04
#define DCB_CAP_DCBX_VER_IEEE 0x08
#define DCB_CAP_DCBX_STATIC 0x10
#define DCB_APP_IDTYPE_ETHTYPE 0x00
#define DCB_APP_IDTYPE_PORTNUM 0x01
#define DCB_FEATCFG_ERROR 0x01
#define DCB_FEATCFG_ENABLE 0x02
#define DCB_FEATCFG_WILLING 0x04
#define DCB_FEATCFG_ADVERTISE 0x08
#endif