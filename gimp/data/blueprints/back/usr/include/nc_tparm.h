// GGHASH:VdN4EWWhO0hJ2melAyn9162PUFcOiXJayrN.Gp62.5uo00001065
#ifndef NC_TPARM_included
#define NC_TPARM_included 1
#include <ncurses_cfg.h>
#include <curses.h>
#ifndef TPARM_ARG
#ifdef NCURSES_TPARM_ARG
#define TPARM_ARG NCURSES_TPARM_ARG
#else
#define TPARM_ARG long
#endif
#endif
#define TPARM_N(n) (TPARM_ARG)(n)
#define TPARM_9(a,b,c,d,e,f,g,h,i,j) tparm(a,TPARM_N(b),TPARM_N(c),TPARM_N(d),TPARM_N(e),TPARM_N(f),TPARM_N(g),TPARM_N(h),TPARM_N(i),TPARM_N(j))
#if NCURSES_TPARM_VARARGS
#define TPARM_8(a,b,c,d,e,f,g,h,i) tparm(a,TPARM_N(b),TPARM_N(c),TPARM_N(d),TPARM_N(e),TPARM_N(f),TPARM_N(g),TPARM_N(h),TPARM_N(i))
#define TPARM_7(a,b,c,d,e,f,g,h) tparm(a,TPARM_N(b),TPARM_N(c),TPARM_N(d),TPARM_N(e),TPARM_N(f),TPARM_N(g),TPARM_N(h))
#define TPARM_6(a,b,c,d,e,f,g) tparm(a,TPARM_N(b),TPARM_N(c),TPARM_N(d),TPARM_N(e),TPARM_N(f),TPARM_N(g))
#define TPARM_5(a,b,c,d,e,f) tparm(a,TPARM_N(b),TPARM_N(c),TPARM_N(d),TPARM_N(e),TPARM_N(f))
#define TPARM_4(a,b,c,d,e) tparm(a,TPARM_N(b),TPARM_N(c),TPARM_N(d),TPARM_N(e))
#define TPARM_3(a,b,c,d) tparm(a,TPARM_N(b),TPARM_N(c),TPARM_N(d))
#define TPARM_2(a,b,c) tparm(a,TPARM_N(b),TPARM_N(c))
#define TPARM_1(a,b) tparm(a,TPARM_N(b))
#define TPARM_0(a) tparm(a)
#else
#define TPARM_8(a,b,c,d,e,f,g,h,i) TPARM_9(a,b,c,d,e,f,g,h,i,0)
#define TPARM_7(a,b,c,d,e,f,g,h) TPARM_8(a,b,c,d,e,f,g,h,0)
#define TPARM_6(a,b,c,d,e,f,g) TPARM_7(a,b,c,d,e,f,g,0)
#define TPARM_5(a,b,c,d,e,f) TPARM_6(a,b,c,d,e,f,0)
#define TPARM_4(a,b,c,d,e) TPARM_5(a,b,c,d,e,0)
#define TPARM_3(a,b,c,d) TPARM_4(a,b,c,d,0)
#define TPARM_2(a,b,c) TPARM_3(a,b,c,0)
#define TPARM_1(a,b) TPARM_2(a,b,0)
#define TPARM_1(a,b) TPARM_2(a,b,0)
#define TPARM_0(a) TPARM_1(a,0)
#endif
#endif
