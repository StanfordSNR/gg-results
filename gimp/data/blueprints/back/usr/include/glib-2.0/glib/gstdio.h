// GGHASH:VIETDp9pxVR1QncOR8e2NNmMWKk8uELkjgEqOSGJEBDU000012f0
#ifndef __G_STDIO_H__
#define __G_STDIO_H__ 
#include <glib/gprintf.h>
#include <sys/stat.h>
#if (defined (__MINGW64_VERSION_MAJOR) || defined (_MSC_VER)) && !defined(_WIN64)
#else
#endif
#if defined(G_OS_UNIX) && !defined(G_STDIO_NO_WRAP_ON_UNIX)
#ifndef __GTK_DOC_IGNORE__
#define g_chmod chmod
#define g_open open
#define g_creat creat
#define g_rename rename
#define g_mkdir mkdir
#define g_stat stat
#define g_lstat lstat
#define g_remove remove
#define g_fopen fopen
#define g_freopen freopen
#define g_utime utime
#endif
#else
#endif
#endif
