// GGHASH:VniuNsK8XmxlNJZ2Um5buwKD6TL7._F79SMUBgygdA3800002145
#ifndef IB_USER_MAD_H
#define IB_USER_MAD_H 
#include <linux/types.h>
#include <rdma/rdma_user_ioctl.h>
#define IB_USER_MAD_ABI_VERSION 5
#define IB_USER_MAD_LONGS_PER_METHOD_MASK (128 / (8 * sizeof (long)))
#define IB_USER_MAD_REG_FLAGS_CAP (IB_USER_MAD_USER_RMPP)
#endif
