// GGHASH:VD3pdt8IYiOv2Rxd1FgyXZTPsiIF.JtQFo3pAMY0bo4k000003b3
#ifndef __TYPE_COMPAT_H
#define __TYPE_COMPAT_H 
#ifndef DOC_HIDDEN
#include <stdint.h>
#include <endian.h>
#include <byteswap.h>
#if __BYTE_ORDER == __LITTLE_ENDIAN
#define __cpu_to_le32(x) (x)
#define __cpu_to_be32(x) bswap_32(x)
#define __cpu_to_le16(x) (x)
#define __cpu_to_be16(x) bswap_16(x)
#else
#define __cpu_to_le32(x) bswap_32(x)
#define __cpu_to_be32(x) (x)
#define __cpu_to_le16(x) bswap_16(x)
#define __cpu_to_be16(x) (x)
#endif
#define __le32_to_cpu __cpu_to_le32
#define __be32_to_cpu __cpu_to_be32
#define __le16_to_cpu __cpu_to_le16
#define __be16_to_cpu __cpu_to_be16
#define __le64 __u64
#define __le32 __u32
#define __le16 __u16
#define __le8 __u8
#define __be64 __u64
#define __be32 __u32
#define __be16 __u16
#define __be8 __u8
#endif
#endif
