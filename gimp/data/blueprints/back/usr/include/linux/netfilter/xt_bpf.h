// GGHASH:V.1NI7cOzuvcqVrEZj4Nq4dO0VnkUO2pa5BFidEDTTjg000003a7
#ifndef _XT_BPF_H
#define _XT_BPF_H 
#include <linux/filter.h>
#include <linux/limits.h>
#include <linux/types.h>
#define XT_BPF_MAX_NUM_INSTR 64
#define XT_BPF_PATH_MAX (XT_BPF_MAX_NUM_INSTR * sizeof(struct sock_filter))
#define XT_BPF_MODE_PATH_PINNED XT_BPF_MODE_FD_PINNED
#endif
