// GGHASH:VAdX.NaNK45AzbySQKoxy5KxFfvVG5ccJOA4LBqTaTxE00000ce0
#ifndef _SYS_ACCT_H
#define _SYS_ACCT_H 1
#include <sys/types.h>
#include <stdint.h>
#include <endian.h>
#include <bits/types/time_t.h>
#define ACCT_COMM 16
#if __BYTE_ORDER == __BIG_ENDIAN
#define ACCT_BYTEORDER 0x80
#else
#define ACCT_BYTEORDER 0x00
#endif
#define AHZ 100
#endif
