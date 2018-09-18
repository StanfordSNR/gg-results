// GGHASH:VVZYXC3DY0bencyZFBVIDPBxsonkREOv9TRGRKt8Pk3c00000566
#ifndef _LINUX_UUID_H_
#define _LINUX_UUID_H_ 
#include <linux/types.h>
#include <linux/string.h>
#define GUID_INIT(a,b,c,d0,d1,d2,d3,d4,d5,d6,d7) ((guid_t) {{ (a) & 0xff, ((a) >> 8) & 0xff, ((a) >> 16) & 0xff, ((a) >> 24) & 0xff, (b) & 0xff, ((b) >> 8) & 0xff, (c) & 0xff, ((c) >> 8) & 0xff, (d0), (d1), (d2), (d3), (d4), (d5), (d6), (d7) }})
#define UUID_LE(a,b,c,d0,d1,d2,d3,d4,d5,d6,d7) GUID_INIT(a, b, c, d0, d1, d2, d3, d4, d5, d6, d7)
#define NULL_UUID_LE UUID_LE(0x00000000, 0x0000, 0x0000, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00)
#endif
