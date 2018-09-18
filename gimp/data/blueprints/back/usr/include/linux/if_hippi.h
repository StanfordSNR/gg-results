// GGHASH:VQZkZE9hPU.KWHRg936qCtOL_j5MuuOmN.1cbIwjHuQ00000108b
#ifndef _LINUX_IF_HIPPI_H
#define _LINUX_IF_HIPPI_H 
#include <linux/types.h>
#include <asm/byteorder.h>
#define HIPPI_ALEN 6
#define HIPPI_HLEN sizeof(struct hippi_hdr)
#define HIPPI_ZLEN 0
#define HIPPI_DATA_LEN 65280
#define HIPPI_FRAME_LEN (HIPPI_DATA_LEN + HIPPI_HLEN)
#define HIPPI_EXTENDED_SAP 0xAA
#define HIPPI_UI_CMD 0x03
#if 0
#if defined (__BIG_ENDIAN_BITFIELD)
#if 0
#endif
#elif defined(__LITTLE_ENDIAN_BITFIELD)
#if 0
#endif
#else
#error "Please fix <asm/byteorder.h>"
#endif
#else
#endif
#if defined (__BIG_ENDIAN_BITFIELD)
#elif defined(__LITTLE_ENDIAN_BITFIELD)
#endif
#if defined (__BIG_ENDIAN_BITFIELD)
#elif defined(__LITTLE_ENDIAN_BITFIELD)
#endif
#define HIPPI_OUI_LEN 3
#endif
