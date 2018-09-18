// GGHASH:V5H0aKYN_uZlPRY6LgUqo.2y3HhufeAhcubhj9r5SejE000012cf
#ifndef _LINUX_MEI_H
#define _LINUX_MEI_H 
#include <linux/uuid.h>
#define IOCTL_MEI_CONNECT_CLIENT _IOWR('H' , 0x01, struct mei_connect_client_data)
#define IOCTL_MEI_NOTIFY_SET _IOW('H', 0x02, __u32)
#define IOCTL_MEI_NOTIFY_GET _IOR('H', 0x03, __u32)
#endif
