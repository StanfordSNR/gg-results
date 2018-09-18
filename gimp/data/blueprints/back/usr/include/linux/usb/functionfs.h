// GGHASH:V_4B3QHKi93TfgkU4vqT58e.RU1A4dNX6EtblhW0YX7c00002882
#ifndef __LINUX_FUNCTIONFS_H__
#define __LINUX_FUNCTIONFS_H__ 
#include <linux/types.h>
#include <linux/ioctl.h>
#include <linux/usb/ch9.h>
#define FUNCTIONFS_FIFO_STATUS _IO('g', 1)
#define FUNCTIONFS_FIFO_FLUSH _IO('g', 2)
#define FUNCTIONFS_CLEAR_HALT _IO('g', 3)
#define FUNCTIONFS_INTERFACE_REVMAP _IO('g', 128)
#define FUNCTIONFS_ENDPOINT_REVMAP _IO('g', 129)
#define FUNCTIONFS_ENDPOINT_DESC _IOR('g', 130, struct usb_endpoint_descriptor)
#endif
