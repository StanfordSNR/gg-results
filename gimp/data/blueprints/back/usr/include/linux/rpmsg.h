// GGHASH:VptXwW8VLR37RHdm0vfSQo9rOS..KH3bFgV2DabgYW2M000003ea
#ifndef _RPMSG_H_
#define _RPMSG_H_ 
#include <linux/ioctl.h>
#include <linux/types.h>
#define RPMSG_CREATE_EPT_IOCTL _IOW(0xb5, 0x1, struct rpmsg_endpoint_info)
#define RPMSG_DESTROY_EPT_IOCTL _IO(0xb5, 0x2)
#endif
