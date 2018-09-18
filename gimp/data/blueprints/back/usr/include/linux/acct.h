// GGHASH:VajyUNtMQYgKkLfYK1hAHWZ9ZM8eJcNIYwO0wWda7xZM00000e95
#ifndef _LINUX_ACCT_H
#define _LINUX_ACCT_H 
#include <linux/types.h>
#include <asm/param.h>
#include <asm/byteorder.h>
#define ACCT_COMM 16
#define AFORK 0x01
#define ASU 0x02
#define ACOMPAT 0x04
#define ACORE 0x08
#define AXSIG 0x10
#if defined(__BYTE_ORDER) ? __BYTE_ORDER == __BIG_ENDIAN : defined(__BIG_ENDIAN)
#define ACCT_BYTEORDER 0x80
#elif defined(__BYTE_ORDER) ? __BYTE_ORDER == __LITTLE_ENDIAN : defined(__LITTLE_ENDIAN)
#define ACCT_BYTEORDER 0x00
#else
#error unspecified endianness
#endif
#define ACCT_VERSION 2
#define AHZ (HZ)
#endif
