// GGHASH:V42CByvqMzIFgPuVfXro3fE0p8nw2rFb4YgpmV60hje400000598
#ifndef _SYS_PARAM_H
# error "Never use <bits/param.h> directly; include <sys/param.h> instead."
#endif
#ifndef ARG_MAX
#define __undef_ARG_MAX 
#endif
#include <linux/limits.h>
#include <linux/param.h>
#ifdef __undef_ARG_MAX
#undef ARG_MAX
#undef __undef_ARG_MAX
#endif
#define MAXSYMLINKS 20
#define NOFILE 256
#define NCARGS 131072
