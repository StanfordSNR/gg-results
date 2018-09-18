// GGHASH:VOrhToLD03dpMdYhyHDrkplCkALVIPY9mRln0xkzV8r4000010d6
#ifndef __G_UNIX_H__
#define __G_UNIX_H__ 
#include <unistd.h>
#include <errno.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <fcntl.h>
#include <glib.h>
#ifndef G_OS_UNIX
#error "This header may only be used on UNIX"
#endif
#define G_UNIX_ERROR (g_unix_error_quark())
#endif
