// GGHASH:VVv8Cf.kEWjw2mFEsPPqKcs5UKHoK1UzNyffz2PjlJ7400000eaf
#ifndef _MQUEUE_H
#define _MQUEUE_H 1
#include <features.h>
#include <sys/types.h>
#include <fcntl.h>
#include <bits/types/sigevent_t.h>
#include <bits/types/struct_timespec.h>
#include <bits/mqueue.h>
#ifdef __USE_XOPEN2K
#endif
#if __USE_FORTIFY_LEVEL > 0 && defined __fortify_function && defined __va_arg_pack_len
# include <bits/mqueue2.h>
#endif
#endif
