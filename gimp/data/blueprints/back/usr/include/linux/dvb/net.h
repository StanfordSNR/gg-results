// GGHASH:VEmMMvsFSfmVv3zz4XQ7OX1er_UFHfE8eZam5kG64kpk0000084f
#ifndef _DVBNET_H_
#define _DVBNET_H_ 
#include <linux/types.h>
#define DVB_NET_FEEDTYPE_MPE 0
#define DVB_NET_FEEDTYPE_ULE 1
#define NET_ADD_IF _IOWR('o', 52, struct dvb_net_if)
#define NET_REMOVE_IF _IO('o', 53)
#define NET_GET_IF _IOWR('o', 54, struct dvb_net_if)
#define __NET_ADD_IF_OLD _IOWR('o', 52, struct __dvb_net_if_old)
#define __NET_GET_IF_OLD _IOWR('o', 54, struct __dvb_net_if_old)
#endif
