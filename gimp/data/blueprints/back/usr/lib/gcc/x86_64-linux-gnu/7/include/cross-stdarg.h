// GGHASH:VeYISHCFkhwpS01z7uiXEuZd6SFL0RM6suN0VyrgBKSE000009fe
#ifndef __CROSS_STDARG_H_INCLUDED
#define __CROSS_STDARG_H_INCLUDED 
#ifndef __x86_64__
#define __builtin_ms_va_list __builtin_va_list
#define __builtin_ms_va_copy __builtin_va_copy
#define __builtin_ms_va_start __builtin_va_start
#define __builtin_ms_va_end __builtin_va_end
#define __builtin_sysv_va_list __builtin_va_list
#define __builtin_sysv_va_copy __builtin_va_copy
#define __builtin_sysv_va_start __builtin_va_start
#define __builtin_sysv_va_end __builtin_va_end
#endif
#define __ms_va_copy(__d,__s) __builtin_ms_va_copy(__d,__s)
#define __ms_va_start(__v,__l) __builtin_ms_va_start(__v,__l)
#define __ms_va_arg(__v,__l) __builtin_va_arg(__v,__l)
#define __ms_va_end(__v) __builtin_ms_va_end(__v)
#define __sysv_va_copy(__d,__s) __builtin_sysv_va_copy(__d,__s)
#define __sysv_va_start(__v,__l) __builtin_sysv_va_start(__v,__l)
#define __sysv_va_arg(__v,__l) __builtin_va_arg(__v,__l)
#define __sysv_va_end(__v) __builtin_sysv_va_end(__v)
#ifndef __GNUC_SYSV_VA_LIST
#define __GNUC_SYSV_VA_LIST 
#endif
#ifndef _SYSV_VA_LIST_DEFINED
#define _SYSV_VA_LIST_DEFINED 
#endif
#ifndef __GNUC_MS_VA_LIST
#define __GNUC_MS_VA_LIST 
#endif
#ifndef _MS_VA_LIST_DEFINED
#define _MS_VA_LIST_DEFINED 
#endif
#endif
