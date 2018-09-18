// GGHASH:VM76LVYCqeViUgzrKy8as4NzQ9_N5Hhze69fagYnrjRc00001081
#ifndef _ASM_X86_MTRR_H
#define _ASM_X86_MTRR_H 
#include <linux/types.h>
#include <linux/ioctl.h>
#include <linux/errno.h>
#define MTRR_IOCTL_BASE 'M'
#ifdef __i386__
#else
#endif
#define MTRR_NUM_FIXED_RANGES 88
#define MTRR_MAX_VAR_RANGES 256
#define MTRRphysBase_MSR(reg) (0x200 + 2 * (reg))
#define MTRRphysMask_MSR(reg) (0x200 + 2 * (reg) + 1)
#define MTRRIOC_ADD_ENTRY _IOW(MTRR_IOCTL_BASE, 0, struct mtrr_sentry)
#define MTRRIOC_SET_ENTRY _IOW(MTRR_IOCTL_BASE, 1, struct mtrr_sentry)
#define MTRRIOC_DEL_ENTRY _IOW(MTRR_IOCTL_BASE, 2, struct mtrr_sentry)
#define MTRRIOC_GET_ENTRY _IOWR(MTRR_IOCTL_BASE, 3, struct mtrr_gentry)
#define MTRRIOC_KILL_ENTRY _IOW(MTRR_IOCTL_BASE, 4, struct mtrr_sentry)
#define MTRRIOC_ADD_PAGE_ENTRY _IOW(MTRR_IOCTL_BASE, 5, struct mtrr_sentry)
#define MTRRIOC_SET_PAGE_ENTRY _IOW(MTRR_IOCTL_BASE, 6, struct mtrr_sentry)
#define MTRRIOC_DEL_PAGE_ENTRY _IOW(MTRR_IOCTL_BASE, 7, struct mtrr_sentry)
#define MTRRIOC_GET_PAGE_ENTRY _IOWR(MTRR_IOCTL_BASE, 8, struct mtrr_gentry)
#define MTRRIOC_KILL_PAGE_ENTRY _IOW(MTRR_IOCTL_BASE, 9, struct mtrr_sentry)
#define MTRR_TYPE_UNCACHABLE 0
#define MTRR_TYPE_WRCOMB 1
#define MTRR_TYPE_WRTHROUGH 4
#define MTRR_TYPE_WRPROT 5
#define MTRR_TYPE_WRBACK 6
#define MTRR_NUM_TYPES 7
#define MTRR_TYPE_INVALID 0xff
#endif
