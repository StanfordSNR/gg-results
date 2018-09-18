// GGHASH:V4bF5lCBxZLTAbGb_Ipgd7_gqFVa1DVssFkaJVTxTnn400000a3b
#ifndef __LINUX_PUBLIC_GNTALLOC_H__
#define __LINUX_PUBLIC_GNTALLOC_H__ 
#include <linux/types.h>
#define IOCTL_GNTALLOC_ALLOC_GREF _IOC(_IOC_NONE, 'G', 5, sizeof(struct ioctl_gntalloc_alloc_gref))
#define GNTALLOC_FLAG_WRITABLE 1
#define IOCTL_GNTALLOC_DEALLOC_GREF _IOC(_IOC_NONE, 'G', 6, sizeof(struct ioctl_gntalloc_dealloc_gref))
#define IOCTL_GNTALLOC_SET_UNMAP_NOTIFY _IOC(_IOC_NONE, 'G', 7, sizeof(struct ioctl_gntalloc_unmap_notify))
#define UNMAP_NOTIFY_CLEAR_BYTE 0x1
#define UNMAP_NOTIFY_SEND_EVENT 0x2
#endif
