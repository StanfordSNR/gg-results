// GGHASH:VYmwPBcKT7m5e7lTfCE_WkfPmji7oX1GsTlUcfkIDJvk00000c40
#ifndef _LINUX_VIRTIO_CONSOLE_H
#define _LINUX_VIRTIO_CONSOLE_H 
#include <linux/types.h>
#include <linux/virtio_types.h>
#include <linux/virtio_ids.h>
#include <linux/virtio_config.h>
#define VIRTIO_CONSOLE_F_SIZE 0
#define VIRTIO_CONSOLE_F_MULTIPORT 1
#define VIRTIO_CONSOLE_F_EMERG_WRITE 2
#define VIRTIO_CONSOLE_BAD_ID (~(__u32)0)
#define VIRTIO_CONSOLE_DEVICE_READY 0
#define VIRTIO_CONSOLE_PORT_ADD 1
#define VIRTIO_CONSOLE_PORT_REMOVE 2
#define VIRTIO_CONSOLE_PORT_READY 3
#define VIRTIO_CONSOLE_CONSOLE_PORT 4
#define VIRTIO_CONSOLE_RESIZE 5
#define VIRTIO_CONSOLE_PORT_OPEN 6
#define VIRTIO_CONSOLE_PORT_NAME 7
#endif
