// GGHASH:VybdhHrkApctxmOTYQ9ogSjgjtUH_QN8yeKYY_25ZIAM000006c0
#ifndef _DIRENT_H
# error "Never use <bits/dirent.h> directly; include <dirent.h> instead."
#endif
#ifndef __USE_FILE_OFFSET64
#else
#endif
#ifdef __USE_LARGEFILE64
#endif
#define d_fileno d_ino
#undef _DIRENT_HAVE_D_NAMLEN
#define _DIRENT_HAVE_D_RECLEN 
#define _DIRENT_HAVE_D_OFF 
#define _DIRENT_HAVE_D_TYPE 
#if defined __OFF_T_MATCHES_OFF64_T && defined __INO_T_MATCHES_INO64_T
#define _DIRENT_MATCHES_DIRENT64 1
#endif
