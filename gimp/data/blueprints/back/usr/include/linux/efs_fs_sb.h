// GGHASH:V5yLIrjUeiP2.njugmeUc0hcyNWpL1f8_c0j_jyTv5eQ000008b3
#ifndef __EFS_FS_SB_H__
#define __EFS_FS_SB_H__ 
#include <linux/types.h>
#include <linux/magic.h>
#define EFS_MAGIC 0x072959
#define EFS_NEWMAGIC 0x07295a
#define IS_EFS_MAGIC(x) ((x == EFS_MAGIC) || (x == EFS_NEWMAGIC))
#define EFS_SUPER 1
#define EFS_ROOTINODE 2
#endif
