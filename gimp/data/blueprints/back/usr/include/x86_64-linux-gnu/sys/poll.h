// GGHASH:VdcfPqwUbEPdcBVB3X22h2FyeSsz2HI3k3TNqvnP2eNY000009f5
#ifndef _SYS_POLL_H
#define _SYS_POLL_H 1
#include <features.h>
#include <bits/poll.h>
#ifdef __USE_GNU
# include <bits/types/__sigset_t.h>
# include <bits/types/struct_timespec.h>
#endif
#ifdef __USE_GNU
#endif
#if __USE_FORTIFY_LEVEL > 0 && defined __fortify_function
# include <bits/poll2.h>
#endif
#endif
