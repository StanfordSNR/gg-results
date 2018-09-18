// GGHASH:VK8gexZBaHZqWPNjNsvtebU1cOkWI3KxBD6YJfcu1LaA0000016d
#ifndef __LINUX_RAW_H
#define __LINUX_RAW_H 
#include <linux/types.h>
#define RAW_SETBIND _IO( 0xac, 0 )
#define RAW_GETBIND _IO( 0xac, 1 )
#define MAX_RAW_MINORS CONFIG_MAX_RAW_DEVS
#endif
