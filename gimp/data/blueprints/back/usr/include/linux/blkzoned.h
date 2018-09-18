// GGHASH:VN7BfEUNupSDdlMmKwKAHxYlIS8p0WDWkD_rei7k99MM00001430
#ifndef _BLKZONED_H
#define _BLKZONED_H 
#include <linux/types.h>
#include <linux/ioctl.h>
#define BLKREPORTZONE _IOWR(0x12, 130, struct blk_zone_report)
#define BLKRESETZONE _IOW(0x12, 131, struct blk_zone_range)
#endif
