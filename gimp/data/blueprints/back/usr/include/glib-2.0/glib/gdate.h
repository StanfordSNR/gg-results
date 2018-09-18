// GGHASH:VW8SqdNYvYrRS6.RZQ_LwXpOH0L04kiZstJEoBKinu1M00002de0
#ifndef __G_DATE_H__
#define __G_DATE_H__ 
#if !defined (__GLIB_H_INSIDE__) && !defined (GLIB_COMPILATION)
#error "Only <glib.h> can be included directly."
#endif
#include <time.h>
#include <glib/gtypes.h>
#include <glib/gquark.h>
#define G_DATE_BAD_JULIAN 0U
#define G_DATE_BAD_DAY 0U
#define G_DATE_BAD_YEAR 0U
#ifndef G_DISABLE_DEPRECATED
#endif
#ifndef G_DISABLE_DEPRECATED
#define g_date_weekday g_date_get_weekday
#define g_date_month g_date_get_month
#define g_date_year g_date_get_year
#define g_date_day g_date_get_day
#define g_date_julian g_date_get_julian
#define g_date_day_of_year g_date_get_day_of_year
#define g_date_monday_week_of_year g_date_get_monday_week_of_year
#define g_date_sunday_week_of_year g_date_get_sunday_week_of_year
#define g_date_days_in_month g_date_get_days_in_month
#define g_date_monday_weeks_in_year g_date_get_monday_weeks_in_year
#define g_date_sunday_weeks_in_year g_date_get_sunday_weeks_in_year
#endif
#endif
