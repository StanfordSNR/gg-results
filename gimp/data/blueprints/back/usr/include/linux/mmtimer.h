// GGHASH:VVECb4VGwR8IoEECiazt.y.WJD__bGzqvFjRfKk41Fs000000845
#ifndef _LINUX_MMTIMER_H
#define _LINUX_MMTIMER_H 
#define MMTIMER_IOCTL_BASE 'm'
#define MMTIMER_GETOFFSET _IO(MMTIMER_IOCTL_BASE, 0)
#define MMTIMER_GETRES _IOR(MMTIMER_IOCTL_BASE, 1, unsigned long)
#define MMTIMER_GETFREQ _IOR(MMTIMER_IOCTL_BASE, 2, unsigned long)
#define MMTIMER_GETBITS _IO(MMTIMER_IOCTL_BASE, 4)
#define MMTIMER_MMAPAVAIL _IO(MMTIMER_IOCTL_BASE, 6)
#define MMTIMER_GETCOUNTER _IOR(MMTIMER_IOCTL_BASE, 9, unsigned long)
#endif
