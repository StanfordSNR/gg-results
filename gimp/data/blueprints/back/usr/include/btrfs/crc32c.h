// GGHASH:Vk6E0cPeng6apTtdiXgQEksdrReUFYGrdTI9o8lsL9e000000447
#ifndef __CRC32C__
#define __CRC32C__ 
#if BTRFS_FLAT_INCLUDES
#include "kerncompat.h"
#else
#include <btrfs/kerncompat.h>
#endif
#define crc32c(seed,data,length) crc32c_le(seed, (unsigned char const *)data, length)
#define btrfs_crc32c crc32c
#endif
