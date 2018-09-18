// GGHASH:VP79fPfEEq9nmqG4Ej544altmG1JKgY8Uj81An9L4LvU00000711
#ifndef _GETOPT_POSIX_H
#define _GETOPT_POSIX_H 1
#if !defined _UNISTD_H && !defined _STDIO_H
#error "Never include getopt_posix.h directly; use unistd.h instead."
#endif
#include <bits/getopt_core.h>
#if defined __USE_POSIX2 && !defined __USE_POSIX_IMPLICITLY && !defined __USE_GNU && !defined _GETOPT_H
# ifdef __REDIRECT
# else
#define getopt __posix_getopt
# endif
#endif
#endif
