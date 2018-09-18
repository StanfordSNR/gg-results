// GGHASH:VhnuMEwSzJIiPYAS0PmQEeYh_hlYfeeTknIILVVL1gdw00002472
#ifndef _RIO_MPORT_CDEV_H_
#define _RIO_MPORT_CDEV_H_ 
#include <linux/ioctl.h>
#include <linux/types.h>
#define RIO_TRANSFER_MODE_MAPPED (1 << 0)
#define RIO_TRANSFER_MODE_TRANSFER (1 << 1)
#define RIO_CAP_DBL_SEND (1 << 2)
#define RIO_CAP_DBL_RECV (1 << 3)
#define RIO_CAP_PW_SEND (1 << 4)
#define RIO_CAP_PW_RECV (1 << 5)
#define RIO_CAP_MAP_OUTB (1 << 6)
#define RIO_CAP_MAP_INB (1 << 7)
#define RIO_DOORBELL (1 << 0)
#define RIO_PORTWRITE (1 << 1)
#define RIO_MAP_ANY_ADDR (__u64)(~((__u64) 0))
#define RIO_MAX_DEVNAME_SZ 20
#define RIO_MPORT_DRV_MAGIC 'm'
#define RIO_MPORT_MAINT_HDID_SET _IOW(RIO_MPORT_DRV_MAGIC, 1, __u16)
#define RIO_MPORT_MAINT_COMPTAG_SET _IOW(RIO_MPORT_DRV_MAGIC, 2, __u32)
#define RIO_MPORT_MAINT_PORT_IDX_GET _IOR(RIO_MPORT_DRV_MAGIC, 3, __u32)
#define RIO_MPORT_GET_PROPERTIES _IOR(RIO_MPORT_DRV_MAGIC, 4, struct rio_mport_properties)
#define RIO_MPORT_MAINT_READ_LOCAL _IOR(RIO_MPORT_DRV_MAGIC, 5, struct rio_mport_maint_io)
#define RIO_MPORT_MAINT_WRITE_LOCAL _IOW(RIO_MPORT_DRV_MAGIC, 6, struct rio_mport_maint_io)
#define RIO_MPORT_MAINT_READ_REMOTE _IOR(RIO_MPORT_DRV_MAGIC, 7, struct rio_mport_maint_io)
#define RIO_MPORT_MAINT_WRITE_REMOTE _IOW(RIO_MPORT_DRV_MAGIC, 8, struct rio_mport_maint_io)
#define RIO_ENABLE_DOORBELL_RANGE _IOW(RIO_MPORT_DRV_MAGIC, 9, struct rio_doorbell_filter)
#define RIO_DISABLE_DOORBELL_RANGE _IOW(RIO_MPORT_DRV_MAGIC, 10, struct rio_doorbell_filter)
#define RIO_ENABLE_PORTWRITE_RANGE _IOW(RIO_MPORT_DRV_MAGIC, 11, struct rio_pw_filter)
#define RIO_DISABLE_PORTWRITE_RANGE _IOW(RIO_MPORT_DRV_MAGIC, 12, struct rio_pw_filter)
#define RIO_SET_EVENT_MASK _IOW(RIO_MPORT_DRV_MAGIC, 13, __u32)
#define RIO_GET_EVENT_MASK _IOR(RIO_MPORT_DRV_MAGIC, 14, __u32)
#define RIO_MAP_OUTBOUND _IOWR(RIO_MPORT_DRV_MAGIC, 15, struct rio_mmap)
#define RIO_UNMAP_OUTBOUND _IOW(RIO_MPORT_DRV_MAGIC, 16, struct rio_mmap)
#define RIO_MAP_INBOUND _IOWR(RIO_MPORT_DRV_MAGIC, 17, struct rio_mmap)
#define RIO_UNMAP_INBOUND _IOW(RIO_MPORT_DRV_MAGIC, 18, __u64)
#define RIO_ALLOC_DMA _IOWR(RIO_MPORT_DRV_MAGIC, 19, struct rio_dma_mem)
#define RIO_FREE_DMA _IOW(RIO_MPORT_DRV_MAGIC, 20, __u64)
#define RIO_TRANSFER _IOWR(RIO_MPORT_DRV_MAGIC, 21, struct rio_transaction)
#define RIO_WAIT_FOR_ASYNC _IOW(RIO_MPORT_DRV_MAGIC, 22, struct rio_async_tx_wait)
#define RIO_DEV_ADD _IOW(RIO_MPORT_DRV_MAGIC, 23, struct rio_rdev_info)
#define RIO_DEV_DEL _IOW(RIO_MPORT_DRV_MAGIC, 24, struct rio_rdev_info)
#endif
