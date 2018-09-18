// GGHASH:VnIAwrI0_XkniqI.444F1vTbSJ6cwNiaaCLdIO2skr1w000018c0
#ifndef _LINUX_VIRTIO_RING_H
#define _LINUX_VIRTIO_RING_H 
#include <stdint.h>
#include <linux/types.h>
#include <linux/virtio_types.h>
#define VRING_DESC_F_NEXT 1
#define VRING_DESC_F_WRITE 2
#define VRING_DESC_F_INDIRECT 4
#define VRING_USED_F_NO_NOTIFY 1
#define VRING_AVAIL_F_NO_INTERRUPT 1
#define VIRTIO_RING_F_INDIRECT_DESC 28
#define VIRTIO_RING_F_EVENT_IDX 29
#define VRING_AVAIL_ALIGN_SIZE 2
#define VRING_USED_ALIGN_SIZE 4
#define VRING_DESC_ALIGN_SIZE 16
#define vring_used_event(vr) ((vr)->avail->ring[(vr)->num])
#define vring_avail_event(vr) (*(__virtio16 *)&(vr)->used->ring[(vr)->num])
#endif
