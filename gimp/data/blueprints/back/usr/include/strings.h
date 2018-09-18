// GGHASH:VhLGsv_Iuy6pvqV0RpL4qsJ3mWpEqZzc2ZyNA6x7bF1E00001290
#ifndef _STRINGS_H
#define _STRINGS_H 1
#include <features.h>
#define __need_size_t 
#include <stddef.h>
#if defined __cplusplus && __GNUC_PREREQ (4, 4)
#define __CORRECT_ISO_CPP_STRINGS_H_PROTO 
#endif
#if defined __USE_MISC || !defined __USE_XOPEN2K8
# ifdef __CORRECT_ISO_CPP_STRINGS_H_PROTO
# if defined __OPTIMIZE__
# endif
# else
# endif
# ifdef __CORRECT_ISO_CPP_STRINGS_H_PROTO
# if defined __OPTIMIZE__
# endif
# else
# endif
#endif
#if defined __USE_MISC || !defined __USE_XOPEN2K8 || defined __USE_XOPEN2K8XSI
#endif
# ifdef __USE_MISC
# endif
#ifdef __USE_XOPEN2K8
# include <bits/types/locale_t.h>
#endif
#if __GNUC_PREREQ (3,4) && __USE_FORTIFY_LEVEL > 0 && defined __fortify_function
# if defined __USE_MISC || !defined __USE_XOPEN2K8
# include <bits/strings_fortified.h>
# endif
#endif
#endif
