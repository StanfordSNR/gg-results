// GGHASH:VnzsSK61Z8vJM392aSsN9i0vwy.Nm.QsnmWPCfuPHNTE00001977
#ifndef __MIC_COMMON_H_
#define __MIC_COMMON_H_ 
#include <linux/virtio_ring.h>
#define __mic_align(a,x) (((a) + (x) - 1) & ~((x) - 1))
#define MIC_VIRTIO_RING_ALIGN 4096
#define MIC_MAX_VRINGS 4
#define MIC_VRING_ENTRIES 128
#define MIC_MAX_VRING_ENTRIES 128
#define MIC_MAX_DESC_BLK_SIZE 256
#define mic_aligned_desc_size(d) __mic_align(mic_desc_size(d), 8)
#ifndef INTEL_MIC_CARD
#endif
#define MIC_DP_SIZE 4096
#define MIC_MAGIC 0xc0ffee00
#endif
