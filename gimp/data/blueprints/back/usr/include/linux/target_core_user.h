// GGHASH:Vi0r5GeoBRwBox3vTUnjwtebR8m1yggNzSg6ut8iyo.c00000eb8
#ifndef __TARGET_CORE_USER_H
#define __TARGET_CORE_USER_H 
#include <linux/types.h>
#include <linux/uio.h>
#define TCMU_VERSION "2.0"
#define TCMU_MAILBOX_VERSION 2
#define ALIGN_SIZE 64
#define TCMU_MAILBOX_FLAG_CAP_OOOC (1 << 0)
#define TCMU_UFLAG_UNKNOWN_OP 0x1
#define TCMU_OP_MASK 0x7
#define TCMU_SENSE_BUFFERSIZE 96
#define TCMU_OP_ALIGN_SIZE sizeof(__u64)
#define TCMU_CMD_MAX (__TCMU_CMD_MAX - 1)
#define TCMU_ATTR_MAX (__TCMU_ATTR_MAX - 1)
#endif
