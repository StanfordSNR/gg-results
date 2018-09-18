// GGHASH:VYk6INy9NUWkTITq1LyI3W3FPF7_.XFBI.fuojYWrlX8000006ca
#ifndef _LINUX_IF_FC_H
#define _LINUX_IF_FC_H 
#include <linux/types.h>
#define FC_ALEN 6
#define FC_HLEN (sizeof(struct fch_hdr)+sizeof(struct fcllc))
#define FC_ID_LEN 3
#define EXTENDED_SAP 0xAA
#define UI_CMD 0x03
#endif
