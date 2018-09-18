// GGHASH:Vo_3Y_dah7gViqg7IvQNjZMRL7QzqKXM_JHS95hUPx0I0000044b
#ifndef _LINUX_KCOV_IOCTLS_H
#define _LINUX_KCOV_IOCTLS_H 
#include <linux/types.h>
#define KCOV_INIT_TRACE _IOR('c', 1, unsigned long)
#define KCOV_ENABLE _IO('c', 100)
#define KCOV_DISABLE _IO('c', 101)
#define KCOV_CMP_CONST (1 << 0)
#define KCOV_CMP_SIZE(n) ((n) << 1)
#define KCOV_CMP_MASK KCOV_CMP_SIZE(3)
#endif
