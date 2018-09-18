// GGHASH:VP3Y0.KrtwY120.PYKV0ZQkujSf3fkISeIwgTRNKVeDk00000628
#include <time.h>
#include "time64_config.h"
#ifndef TIME64_H
#define TIME64_H 
#ifdef HAS_TM_TM_GMTOFF
#endif
#ifdef HAS_TM_TM_ZONE
# if defined(__GLIBC__) || (defined(__ANDROID__) && !defined(__cplusplus)) || defined(__QNX__) || defined(__CYGWIN__)
# endif
#endif
#ifdef USE_TM64
#define TM TM64
#else
#define TM tm
#endif
#ifdef HAS_LOCALTIME_R
#define LOCALTIME_R(clock,result) (L_R_TZSET localtime_r(clock, result))
#else
#define LOCALTIME_R(clock,result) (L_R_TZSET S_localtime_r(clock, result))
#endif
#ifdef HAS_GMTIME_R
#define GMTIME_R(clock,result) gmtime_r(clock, result)
#else
#define GMTIME_R(clock,result) S_gmtime_r(clock, result)
#endif
#endif
