// GGHASH:VkkUkyNpDz8b7mQr.8B2dYz60tWf7aqmk7iQN8BMPtIg000004ab
#ifndef _LINUX_SELINUX_NETLINK_H
#define _LINUX_SELINUX_NETLINK_H 
#include <linux/types.h>
#define SELNL_MSG_BASE 0x10
#define SELNL_GRP_NONE 0x00000000
#define SELNL_GRP_AVC 0x00000001
#define SELNL_GRP_ALL 0xffffffff
#define SELNLGRP_NONE SELNLGRP_NONE
#define SELNLGRP_AVC SELNLGRP_AVC
#define SELNLGRP_MAX (__SELNLGRP_MAX - 1)
#endif