// GGHASH:V5DGGa0nUSdI9stXBA91Jq6KE6JyI.ymeA5A2BUkBFBQ00000b43
#ifndef _LINUX_SYNC_H
#define _LINUX_SYNC_H 
#include <linux/ioctl.h>
#include <linux/types.h>
#define SYNC_IOC_MAGIC '>'
#define SYNC_IOC_MERGE _IOWR(SYNC_IOC_MAGIC, 3, struct sync_merge_data)
#define SYNC_IOC_FILE_INFO _IOWR(SYNC_IOC_MAGIC, 4, struct sync_file_info)
#endif
