// GGHASH:V0hVhntg8Y9ZcSFLDQs.oKaq.zBiDX5juZQMI.zwYMKs000007ee
#ifndef TIME64_CONFIG_H
#define TIME64_CONFIG_H 
#define INT_64_T NV
#define USE_TM64 
#define USE_SYSTEM_LOCALTIME 
#ifdef VMS
#define USE_SYSTEM_GMTIME 
#endif
#define SYSTEM_LOCALTIME_MAX CAT2(LOCALTIME_MAX,.0)
#define SYSTEM_LOCALTIME_MIN CAT2(LOCALTIME_MIN,.0)
#define SYSTEM_GMTIME_MAX CAT2(GMTIME_MAX,.0)
#define SYSTEM_GMTIME_MIN CAT2(GMTIME_MIN,.0)
#endif
