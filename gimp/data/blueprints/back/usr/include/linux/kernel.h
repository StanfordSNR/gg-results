// GGHASH:Vu0StV7HUfpizF0prhtlNiFg21lVukPTARcBPqIJx9GE000001b6
#ifndef _LINUX_KERNEL_H
#define _LINUX_KERNEL_H 
#include <linux/sysinfo.h>
#define __ALIGN_KERNEL(x,a) __ALIGN_KERNEL_MASK(x, (typeof(x))(a) - 1)
#define __ALIGN_KERNEL_MASK(x,mask) (((x) + (mask)) & ~(mask))
#define __KERNEL_DIV_ROUND_UP(n,d) (((n) + (d) - 1) / (d))
#endif
