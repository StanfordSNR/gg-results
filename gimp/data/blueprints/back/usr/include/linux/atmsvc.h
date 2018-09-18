// GGHASH:VeVUCQXR5LtRSk63mxWgphdhUV7n8zB3EMooZzXNlJl40000073d
#ifndef _LINUX_ATMSVC_H
#define _LINUX_ATMSVC_H 
#include <linux/atmapi.h>
#include <linux/atm.h>
#include <linux/atmioc.h>
#define ATMSIGD_CTRL _IO('a',ATMIOC_SPECIAL)
#define SELECT_TOP_PCR(tp) ((tp).pcr ? (tp).pcr : (tp).max_pcr && (tp).max_pcr != ATM_MAX_PCR ? (tp).max_pcr : (tp).min_pcr ? (tp).min_pcr : ATM_MAX_PCR)
#endif
