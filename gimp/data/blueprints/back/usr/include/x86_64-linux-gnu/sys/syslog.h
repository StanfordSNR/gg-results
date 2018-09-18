// GGHASH:VxMEAiEYQjeAmVM6C4DRTzzJz4tm6WObYw9Z4xNjehD800001e16
#ifndef _SYS_SYSLOG_H
#define _SYS_SYSLOG_H 1
#include <features.h>
#define __need___va_list 
#include <stdarg.h>
#include <bits/syslog-path.h>
#define LOG_EMERG 0
#define LOG_ALERT 1
#define LOG_CRIT 2
#define LOG_ERR 3
#define LOG_WARNING 4
#define LOG_NOTICE 5
#define LOG_INFO 6
#define LOG_DEBUG 7
#define LOG_PRIMASK 0x07
#define LOG_PRI(p) ((p) & LOG_PRIMASK)
#define LOG_MAKEPRI(fac,pri) ((fac) | (pri))
#ifdef SYSLOG_NAMES
#define INTERNAL_NOPRI 0x10
#define INTERNAL_MARK LOG_MAKEPRI(LOG_NFACILITIES << 3, 0)
#endif
#define LOG_KERN (0<<3)
#define LOG_USER (1<<3)
#define LOG_MAIL (2<<3)
#define LOG_DAEMON (3<<3)
#define LOG_AUTH (4<<3)
#define LOG_SYSLOG (5<<3)
#define LOG_LPR (6<<3)
#define LOG_NEWS (7<<3)
#define LOG_UUCP (8<<3)
#define LOG_CRON (9<<3)
#define LOG_AUTHPRIV (10<<3)
#define LOG_FTP (11<<3)
#define LOG_LOCAL0 (16<<3)
#define LOG_LOCAL1 (17<<3)
#define LOG_LOCAL2 (18<<3)
#define LOG_LOCAL3 (19<<3)
#define LOG_LOCAL4 (20<<3)
#define LOG_LOCAL5 (21<<3)
#define LOG_LOCAL6 (22<<3)
#define LOG_LOCAL7 (23<<3)
#define LOG_NFACILITIES 24
#define LOG_FACMASK 0x03f8
#define LOG_FAC(p) (((p) & LOG_FACMASK) >> 3)
#ifdef SYSLOG_NAMES
#endif
#define LOG_MASK(pri) (1 << (pri))
#define LOG_UPTO(pri) ((1 << ((pri)+1)) - 1)
#define LOG_PID 0x01
#define LOG_CONS 0x02
#define LOG_ODELAY 0x04
#define LOG_NDELAY 0x08
#define LOG_NOWAIT 0x10
#define LOG_PERROR 0x20
#ifdef __USE_MISC
#endif
#if __USE_FORTIFY_LEVEL > 0 && defined __fortify_function
# include <bits/syslog.h>
#endif
#ifdef __LDBL_COMPAT
# include <bits/syslog-ldbl.h>
#endif
#endif
