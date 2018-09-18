// GGHASH:VRwZGq7hY0vzNKNgnr9HsZnkowgPvpwtuXPlOtEqv1LQ00000ccc
#ifndef __LINUX__AIO_ABI_H
#define __LINUX__AIO_ABI_H 
#include <linux/types.h>
#include <linux/fs.h>
#include <asm/byteorder.h>
#define IOCB_FLAG_RESFD (1 << 0)
#if defined(__BYTE_ORDER) ? __BYTE_ORDER == __LITTLE_ENDIAN : defined(__LITTLE_ENDIAN)
#elif defined(__BYTE_ORDER) ? __BYTE_ORDER == __BIG_ENDIAN : defined(__BIG_ENDIAN)
#else
#error edit for your odd byteorder.
#endif
#undef IFBIG
#undef IFLITTLE
#endif
