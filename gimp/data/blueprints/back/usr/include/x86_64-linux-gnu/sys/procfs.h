// GGHASH:VVjw7d2uaHx7V84aM5CQ6jFv_Kfg20etFgPveVsugCBs00001379
#ifndef _SYS_PROCFS_H
#define _SYS_PROCFS_H 1
#include <features.h>
#include <sys/time.h>
#include <sys/types.h>
#include <sys/user.h>
#ifdef __x86_64__
#else
#endif
#define ELF_NGREG (sizeof (struct user_regs_struct) / sizeof(elf_greg_t))
#ifndef __x86_64__
#else
#endif
#define ELF_PRARGSZ (80)
#if __WORDSIZE == 32
#else
#endif
#endif
