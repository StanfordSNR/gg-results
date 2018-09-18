// GGHASH:VkhOhn0T2N8j5B67Ybnt4zGygKaPoQuPiFwlYhEvLK_o00003403
#ifndef _UNISTD_H
# error "Never include <bits/unistd.h> directly; use <unistd.h> instead."
#endif
#ifdef __USE_UNIX98
# ifndef __USE_FILE_OFFSET64
# else
# endif
# ifdef __USE_LARGEFILE64
# endif
#endif
#if defined __USE_XOPEN_EXTENDED || defined __USE_XOPEN2K
#endif
#ifdef __USE_ATFILE
#endif
#if defined __USE_MISC || defined __USE_XOPEN_EXTENDED
#endif
#ifdef __USE_POSIX199506
#endif
#if defined __USE_MISC || defined __USE_UNIX98
#endif
#if defined __USE_MISC || (defined __USE_XOPEN && !defined __USE_UNIX98)
#endif
