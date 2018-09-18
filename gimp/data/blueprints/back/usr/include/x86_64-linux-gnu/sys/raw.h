// GGHASH:VEPTO1kAKe6loeBnuLD7.Iw.D5cRgthLHZQy8efDCMIs0000049d
#ifndef _SYS_RAW_H
#define _SYS_RAW_H 1
#include <stdint.h>
#include <sys/ioctl.h>
#define RAW_MAJOR 162
#define RAW_SETBIND _IO(0xac, 0)
#define RAW_GETBIND _IO(0xac, 1)
#endif
