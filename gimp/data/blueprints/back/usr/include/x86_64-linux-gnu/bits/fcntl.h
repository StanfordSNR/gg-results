// GGHASH:VWoIgh8OE.ZoF3BCJoybZ4AUokv29Xw.3ozJrX0LrVsc000008c5
#ifndef _FCNTL_H
# error "Never use <bits/fcntl.h> directly; include <fcntl.h> instead."
#endif
#ifdef __x86_64__
#define __O_LARGEFILE 0
#endif
#ifdef __x86_64__
#define F_GETLK64 5
#define F_SETLK64 6
#define F_SETLKW64 7
#endif
#ifndef __USE_FILE_OFFSET64
#else
#endif
#ifdef __USE_LARGEFILE64
#endif
#include <bits/fcntl-linux.h>
