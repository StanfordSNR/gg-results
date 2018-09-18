// GGHASH:V9kbafkF.HvDlKEp5kUfKpgO8qnOxsvhc7Zx23SYQTzM000013ed
#ifndef __LINUX_V4L2_MEDIABUS_H
#define __LINUX_V4L2_MEDIABUS_H 
#include <linux/media-bus-format.h>
#include <linux/types.h>
#include <linux/videodev2.h>
#define V4L2_MBUS_FROM_MEDIA_BUS_FMT(name) V4L2_MBUS_FMT_ ## name = MEDIA_BUS_FMT_ ## name
#endif
