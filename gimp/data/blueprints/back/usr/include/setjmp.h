// GGHASH:VgegpHQOoSf4IfM4zs0unKwFDUopKN1AXgvNww6o7Bdg00000e55
#ifndef _SETJMP_H
#define _SETJMP_H 1
#include <features.h>
#include <bits/setjmp.h>
#include <bits/types/__sigset_t.h>
#define setjmp(env) _setjmp (env)
#if defined __USE_MISC || defined __USE_XOPEN
#endif
#ifdef __USE_POSIX
#define sigsetjmp(env,savemask) __sigsetjmp (env, savemask)
#endif
#if __USE_FORTIFY_LEVEL > 0
# include <bits/setjmp2.h>
#endif
#endif
