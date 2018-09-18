// GGHASH:VJz7kG6ml2Q.lKzMSV9GOHjWu59_UJii4R2drfNWFh7A00000694
#ifndef _SYS_SYSLOG_H
# error "Never include <bits/syslog.h> directly; use <sys/syslog.h> instead."
#endif
#ifdef __va_arg_pack
#elif !defined __cplusplus
#define syslog(pri,...) __syslog_chk (pri, __USE_FORTIFY_LEVEL - 1, __VA_ARGS__)
#endif
#ifdef __USE_MISC
#endif
