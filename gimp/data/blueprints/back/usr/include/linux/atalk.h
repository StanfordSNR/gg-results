// GGHASH:Vt7hgb_lhNZOGAiuPdeOcWKojw9aAENQSEsSJ5Fn_pEM000003ff
#ifndef __LINUX_ATALK_H__
#define __LINUX_ATALK_H__ 
#include <linux/types.h>
#include <asm/byteorder.h>
#include <linux/socket.h>
#define ATPORT_FIRST 1
#define ATPORT_RESERVED 128
#define ATPORT_LAST 254
#define ATADDR_ANYNET (__u16)0
#define ATADDR_ANYNODE (__u8)0
#define ATADDR_ANYPORT (__u8)0
#define ATADDR_BCAST (__u8)255
#define DDP_MAXSZ 587
#define DDP_MAXHOPS 15
#define SIOCATALKDIFADDR (SIOCPROTOPRIVATE + 0)
#endif
