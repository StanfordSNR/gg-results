// GGHASH:VcfOuj3eN.GhxAEb06oC5uAmDJL_9zqjGAIRe8qPwCPE000045b8
#ifndef _LANGINFO_H
#define _LANGINFO_H 1
#include <nl_types.h>
#include <bits/locale.h>
#define _NL_ITEM(category,index) (((category) << 16) | (index))
#define _NL_ITEM_CATEGORY(item) ((int) (item) >> 16)
#define _NL_ITEM_INDEX(item) ((int) (item) & 0xffff)
#define ABDAY_1 ABDAY_1
#define ABDAY_2 ABDAY_2
#define ABDAY_3 ABDAY_3
#define ABDAY_4 ABDAY_4
#define ABDAY_5 ABDAY_5
#define ABDAY_6 ABDAY_6
#define ABDAY_7 ABDAY_7
#define DAY_1 DAY_1
#define DAY_2 DAY_2
#define DAY_3 DAY_3
#define DAY_4 DAY_4
#define DAY_5 DAY_5
#define DAY_6 DAY_6
#define DAY_7 DAY_7
#define ABMON_1 ABMON_1
#define ABMON_2 ABMON_2
#define ABMON_3 ABMON_3
#define ABMON_4 ABMON_4
#define ABMON_5 ABMON_5
#define ABMON_6 ABMON_6
#define ABMON_7 ABMON_7
#define ABMON_8 ABMON_8
#define ABMON_9 ABMON_9
#define ABMON_10 ABMON_10
#define ABMON_11 ABMON_11
#define ABMON_12 ABMON_12
#define MON_1 MON_1
#define MON_2 MON_2
#define MON_3 MON_3
#define MON_4 MON_4
#define MON_5 MON_5
#define MON_6 MON_6
#define MON_7 MON_7
#define MON_8 MON_8
#define MON_9 MON_9
#define MON_10 MON_10
#define MON_11 MON_11
#define MON_12 MON_12
#define AM_STR AM_STR
#define PM_STR PM_STR
#define D_T_FMT D_T_FMT
#define D_FMT D_FMT
#define T_FMT T_FMT
#define T_FMT_AMPM T_FMT_AMPM
#define ERA ERA
#ifdef __USE_GNU
#define ERA_YEAR __ERA_YEAR
#endif
#define ERA_D_FMT ERA_D_FMT
#define ALT_DIGITS ALT_DIGITS
#define ERA_D_T_FMT ERA_D_T_FMT
#define ERA_T_FMT ERA_T_FMT
#define _DATE_FMT _DATE_FMT
#ifdef __USE_GNU
#define ALTMON_1 __ALTMON_1
#define ALTMON_2 __ALTMON_2
#define ALTMON_3 __ALTMON_3
#define ALTMON_4 __ALTMON_4
#define ALTMON_5 __ALTMON_5
#define ALTMON_6 __ALTMON_6
#define ALTMON_7 __ALTMON_7
#define ALTMON_8 __ALTMON_8
#define ALTMON_9 __ALTMON_9
#define ALTMON_10 __ALTMON_10
#define ALTMON_11 __ALTMON_11
#define ALTMON_12 __ALTMON_12
#endif
#define CODESET CODESET
#ifdef __USE_GNU
#define INT_CURR_SYMBOL __INT_CURR_SYMBOL
#endif
#ifdef __USE_GNU
#define CURRENCY_SYMBOL __CURRENCY_SYMBOL
#endif
#ifdef __USE_GNU
#define MON_DECIMAL_POINT __MON_DECIMAL_POINT
#endif
#ifdef __USE_GNU
#define MON_THOUSANDS_SEP __MON_THOUSANDS_SEP
#endif
#ifdef __USE_GNU
#define MON_GROUPING __MON_GROUPING
#endif
#ifdef __USE_GNU
#define POSITIVE_SIGN __POSITIVE_SIGN
#endif
#ifdef __USE_GNU
#define NEGATIVE_SIGN __NEGATIVE_SIGN
#endif
#ifdef __USE_GNU
#define INT_FRAC_DIGITS __INT_FRAC_DIGITS
#endif
#ifdef __USE_GNU
#define FRAC_DIGITS __FRAC_DIGITS
#endif
#ifdef __USE_GNU
#define P_CS_PRECEDES __P_CS_PRECEDES
#endif
#ifdef __USE_GNU
#define P_SEP_BY_SPACE __P_SEP_BY_SPACE
#endif
#ifdef __USE_GNU
#define N_CS_PRECEDES __N_CS_PRECEDES
#endif
#ifdef __USE_GNU
#define N_SEP_BY_SPACE __N_SEP_BY_SPACE
#endif
#ifdef __USE_GNU
#define P_SIGN_POSN __P_SIGN_POSN
#endif
#ifdef __USE_GNU
#define N_SIGN_POSN __N_SIGN_POSN
#endif
#define CRNCYSTR _NL_MONETARY_CRNCYSTR
#ifdef __USE_GNU
#define INT_P_CS_PRECEDES __INT_P_CS_PRECEDES
#endif
#ifdef __USE_GNU
#define INT_P_SEP_BY_SPACE __INT_P_SEP_BY_SPACE
#endif
#ifdef __USE_GNU
#define INT_N_CS_PRECEDES __INT_N_CS_PRECEDES
#endif
#ifdef __USE_GNU
#define INT_N_SEP_BY_SPACE __INT_N_SEP_BY_SPACE
#endif
#ifdef __USE_GNU
#define INT_P_SIGN_POSN __INT_P_SIGN_POSN
#endif
#ifdef __USE_GNU
#define INT_N_SIGN_POSN __INT_N_SIGN_POSN
#endif
#ifdef __USE_GNU
#define DECIMAL_POINT __DECIMAL_POINT
#endif
#define RADIXCHAR RADIXCHAR
#ifdef __USE_GNU
#define THOUSANDS_SEP __THOUSANDS_SEP
#endif
#define THOUSEP THOUSEP
#ifdef __USE_GNU
#define GROUPING __GROUPING
#endif
#define YESEXPR __YESEXPR
#define NOEXPR __NOEXPR
#if defined __USE_GNU || (defined __USE_XOPEN && !defined __USE_XOPEN2K)
#define YESSTR __YESSTR
#endif
#if defined __USE_GNU || (defined __USE_XOPEN && !defined __USE_XOPEN2K)
#define NOSTR __NOSTR
#endif
#define _NL_LOCALE_NAME(category) _NL_ITEM ((category), _NL_ITEM_INDEX (-1))
#ifdef __USE_GNU
#define NL_LOCALE_NAME(category) _NL_LOCALE_NAME (category)
#endif
#ifdef __USE_XOPEN2K8
# include <bits/types/locale_t.h>
#endif
#endif
