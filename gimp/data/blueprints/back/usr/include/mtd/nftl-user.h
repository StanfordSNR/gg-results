// GGHASH:V.zEmjwRdEJkCTY7WA3nk3FM9lFRWpgigqtcgatPMfZI00000844
#ifndef __MTD_NFTL_USER_H__
#define __MTD_NFTL_USER_H__ 
#include <linux/types.h>
#define MAX_ERASE_ZONES (8192 - 512)
#define ERASE_MARK 0x3c69
#define SECTOR_FREE 0xff
#define SECTOR_USED 0x55
#define SECTOR_IGNORE 0x11
#define SECTOR_DELETED 0x00
#define FOLD_MARK_IN_PROGRESS 0x5555
#define ZONE_GOOD 0xff
#define ZONE_BAD_ORIGINAL 0
#define ZONE_BAD_MARKED 7
#endif
