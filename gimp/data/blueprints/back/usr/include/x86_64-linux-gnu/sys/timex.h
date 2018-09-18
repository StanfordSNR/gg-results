// GGHASH:VKdWJPLUpp1mqqCv2mBpqZ.fck2DaXSdRAse5Eaug_sg0000089d
#ifndef _SYS_TIMEX_H
#define _SYS_TIMEX_H 1
#include <features.h>
#include <sys/time.h>
#include <bits/timex.h>
#define NTP_API 4
#define TIME_OK 0
#define TIME_INS 1
#define TIME_DEL 2
#define TIME_OOP 3
#define TIME_WAIT 4
#define TIME_ERROR 5
#define TIME_BAD TIME_ERROR
#define MAXTC 6
#ifdef __REDIRECT_NTH
#else
#define ntp_gettime ntp_gettimex
#endif
#endif
