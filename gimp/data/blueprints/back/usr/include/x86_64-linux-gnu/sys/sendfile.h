// GGHASH:VqCNaB0t.DFQ4U2Kj2aZLGNEGHU2igt.B9wDhwXyOY1U0000070d
#ifndef _SYS_SENDFILE_H
#define _SYS_SENDFILE_H 1
#include <features.h>
#include <sys/types.h>
#ifndef __USE_FILE_OFFSET64
#else
# ifdef __REDIRECT_NTH
# else
#define sendfile sendfile64
# endif
#endif
#ifdef __USE_LARGEFILE64
#endif
#endif
