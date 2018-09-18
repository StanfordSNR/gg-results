// GGHASH:VmIGNYXEqPmjJSyrQhNMd9iZskItXNTbCIS2XH3NvVVo000006a8
#ifndef _SETJMP_H
# error "Never include <bits/setjmp2.h> directly; use <setjmp.h> instead."
#endif
#ifdef __REDIRECT_NTH
#else
#define longjmp __longjmp_chk
#define _longjmp __longjmp_chk
#define siglongjmp __longjmp_chk
#endif
