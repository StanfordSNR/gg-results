// GGHASH:VvIg3e1LZA3p00_eu_1JUglviqfcG3HZWxX3X9c6hW3U00000656
#ifndef LINUX_ATM_TCP_H
#define LINUX_ATM_TCP_H 
#include <linux/atmapi.h>
#include <linux/atm.h>
#include <linux/atmioc.h>
#include <linux/types.h>
#define ATMTCP_HDR_MAGIC (~0)
#define ATMTCP_CTRL_OPEN 1
#define ATMTCP_CTRL_CLOSE 2
#define SIOCSIFATMTCP _IO('a',ATMIOC_ITF)
#define ATMTCP_CREATE _IO('a',ATMIOC_ITF+14)
#define ATMTCP_REMOVE _IO('a',ATMIOC_ITF+15)
#endif
