// GGHASH:Vni7TrFwfYmm2Nh1.0D4FpmvBXqCWJiYnMkME0KHS5Ro00001153
#ifndef _NET_TIMESTAMPING_H
#define _NET_TIMESTAMPING_H 
#include <linux/types.h>
#include <linux/socket.h>
#define SOF_TIMESTAMPING_TX_RECORD_MASK (SOF_TIMESTAMPING_TX_HARDWARE | SOF_TIMESTAMPING_TX_SOFTWARE | SOF_TIMESTAMPING_TX_SCHED | SOF_TIMESTAMPING_TX_ACK)
#endif