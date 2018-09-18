// GGHASH:VvFNCf3jpaGdiu.18eJmD4KbZ2eKgKQA_LlQ75b_ARow00013f74
#ifndef __NCURSES_H
#define __NCURSES_H 
#define CURSES 1
#define CURSES_H 1
#define NCURSES_VERSION_MAJOR 6
#define NCURSES_VERSION_MINOR 1
#define NCURSES_VERSION_PATCH 20180127
#undef NCURSES_VERSION
#define NCURSES_VERSION "6.1"
#define NCURSES_MOUSE_VERSION 1
#include <ncurses_dll.h>
#if 1
#include <stdint.h>
#endif
#ifndef NCURSES_ENABLE_STDBOOL_H
#define NCURSES_ENABLE_STDBOOL_H 1
#endif
#ifndef NCURSES_ATTR_T
#define NCURSES_ATTR_T int
#endif
#undef NCURSES_CONST
#define NCURSES_CONST const
#undef NCURSES_INLINE
#define NCURSES_INLINE inline
#undef NCURSES_COLOR_T
#define NCURSES_COLOR_T short
#undef NCURSES_PAIRS_T
#define NCURSES_PAIRS_T short
#ifndef NCURSES_INTERNALS
#define NCURSES_OPAQUE 0
#define NCURSES_OPAQUE_FORM 0
#define NCURSES_OPAQUE_MENU 0
#define NCURSES_OPAQUE_PANEL 0
#endif
#ifndef NCURSES_WATTR_MACROS
#define NCURSES_WATTR_MACROS 1
#endif
#ifndef NCURSES_REENTRANT
#define NCURSES_REENTRANT 0
#endif
#undef NCURSES_INTEROP_FUNCS
#define NCURSES_INTEROP_FUNCS 0
#undef NCURSES_SIZE_T
#define NCURSES_SIZE_T short
#undef NCURSES_TPARM_VARARGS
#define NCURSES_TPARM_VARARGS 1
#undef NCURSES_TPARM_ARG
#define NCURSES_TPARM_ARG long
#undef NCURSES_WCWIDTH_GRAPHICS
#define NCURSES_WCWIDTH_GRAPHICS 1
#undef NCURSES_CH_T
#define NCURSES_CH_T chtype
#if 0 && defined(_LP64)
#else
#endif
#include <stdio.h>
#ifndef NCURSES_WIDECHAR
#if defined(_XOPEN_SOURCE_EXTENDED) || (defined(_XOPEN_SOURCE) && (_XOPEN_SOURCE - 0 >= 500))
#define NCURSES_WIDECHAR 1
#else
#define NCURSES_WIDECHAR 0
#endif
#endif
#include <stdarg.h>
#if NCURSES_WIDECHAR
#include <stddef.h>
#endif
#undef TRUE
#define TRUE 1
#undef FALSE
#define FALSE 0
#if defined(__cplusplus)
#define NCURSES_BOOL bool
#else
#if NCURSES_ENABLE_STDBOOL_H
#include <stdbool.h>
#define NCURSES_BOOL bool
#else
#undef bool
#define bool NCURSES_BOOL
#endif
#endif
#ifdef __cplusplus
#define NCURSES_CAST(type,value) static_cast<type>(value)
#else
#define NCURSES_CAST(type,value) (type)(value)
#endif
#define NCURSES_OK_ADDR(p) (0 != NCURSES_CAST(const void *, (p)))
#define WA_ATTRIBUTES A_ATTRIBUTES
#define WA_NORMAL A_NORMAL
#define WA_STANDOUT A_STANDOUT
#define WA_UNDERLINE A_UNDERLINE
#define WA_REVERSE A_REVERSE
#define WA_BLINK A_BLINK
#define WA_DIM A_DIM
#define WA_BOLD A_BOLD
#define WA_ALTCHARSET A_ALTCHARSET
#define WA_INVIS A_INVIS
#define WA_PROTECT A_PROTECT
#define WA_HORIZONTAL A_HORIZONTAL
#define WA_LEFT A_LEFT
#define WA_LOW A_LOW
#define WA_RIGHT A_RIGHT
#define WA_TOP A_TOP
#define WA_VERTICAL A_VERTICAL
#if 1
#define WA_ITALIC A_ITALIC
#endif
#define COLOR_BLACK 0
#define COLOR_RED 1
#define COLOR_GREEN 2
#define COLOR_YELLOW 3
#define COLOR_BLUE 4
#define COLOR_MAGENTA 5
#define COLOR_CYAN 6
#define COLOR_WHITE 7
#if 0 || NCURSES_REENTRANT
#define acs_map NCURSES_PUBLIC_VAR(acs_map())
#else
#endif
#define NCURSES_ACS(c) (acs_map[NCURSES_CAST(unsigned char,(c))])
#define ACS_ULCORNER NCURSES_ACS('l')
#define ACS_LLCORNER NCURSES_ACS('m')
#define ACS_URCORNER NCURSES_ACS('k')
#define ACS_LRCORNER NCURSES_ACS('j')
#define ACS_LTEE NCURSES_ACS('t')
#define ACS_RTEE NCURSES_ACS('u')
#define ACS_BTEE NCURSES_ACS('v')
#define ACS_TTEE NCURSES_ACS('w')
#define ACS_HLINE NCURSES_ACS('q')
#define ACS_VLINE NCURSES_ACS('x')
#define ACS_PLUS NCURSES_ACS('n')
#define ACS_S1 NCURSES_ACS('o')
#define ACS_S9 NCURSES_ACS('s')
#define ACS_DIAMOND NCURSES_ACS('`')
#define ACS_CKBOARD NCURSES_ACS('a')
#define ACS_DEGREE NCURSES_ACS('f')
#define ACS_PLMINUS NCURSES_ACS('g')
#define ACS_BULLET NCURSES_ACS('~')
#define ACS_LARROW NCURSES_ACS(',')
#define ACS_RARROW NCURSES_ACS('+')
#define ACS_DARROW NCURSES_ACS('.')
#define ACS_UARROW NCURSES_ACS('-')
#define ACS_BOARD NCURSES_ACS('h')
#define ACS_LANTERN NCURSES_ACS('i')
#define ACS_BLOCK NCURSES_ACS('0')
#define ACS_S3 NCURSES_ACS('p')
#define ACS_S7 NCURSES_ACS('r')
#define ACS_LEQUAL NCURSES_ACS('y')
#define ACS_GEQUAL NCURSES_ACS('z')
#define ACS_PI NCURSES_ACS('{')
#define ACS_NEQUAL NCURSES_ACS('|')
#define ACS_STERLING NCURSES_ACS('}')
#define ACS_BSSB ACS_ULCORNER
#define ACS_SSBB ACS_LLCORNER
#define ACS_BBSS ACS_URCORNER
#define ACS_SBBS ACS_LRCORNER
#define ACS_SBSS ACS_RTEE
#define ACS_SSSB ACS_LTEE
#define ACS_SSBS ACS_BTEE
#define ACS_BSSS ACS_TTEE
#define ACS_BSBS ACS_HLINE
#define ACS_SBSB ACS_VLINE
#define ACS_SSSS ACS_PLUS
#undef ERR
#define ERR (-1)
#undef OK
#define OK (0)
#define _SUBWIN 0x01
#define _ENDLINE 0x02
#define _FULLWIN 0x04
#define _SCROLLWIN 0x08
#define _ISPAD 0x10
#define _HASMOVED 0x20
#define _WRAPPED 0x40
#define _NOCHANGE -1
#define _NEWINDEX -1
#if NCURSES_WIDECHAR
#if 0
#ifdef mblen
#undef mblen
#endif
#include <libutf8.h>
#endif
#if 0
#include <wchar.h>
#endif
#if 0
#endif
#if 0
#endif
#define CCHARW_MAX 5
#if 0
#undef NCURSES_EXT_COLORS
#define NCURSES_EXT_COLORS 20180127
#endif
#endif
#if !NCURSES_OPAQUE
#if NCURSES_WIDECHAR
#if 0
#endif
#endif
#endif
#if 1
#ifdef NCURSES_WGETCH_EVENTS
#if !defined(__BEOS__) || defined(__HAIKU__)
#define NCURSES_EVENT_VERSION 1
#endif
#define _NC_EVENT_TIMEOUT_MSEC 1
#define _NC_EVENT_FILE 2
#define _NC_EVENT_FILE_READABLE 2
# if 0
#define _NC_EVENT_FILE_WRITABLE 4
#define _NC_EVENT_FILE_EXCEPTION 8
# endif
#endif
#endif
#if !(defined(__GNUC__) || defined(__GNUG__) || defined(__attribute__))
#define __attribute__(p) 
#endif
#ifndef GCC_PRINTFLIKE
#if defined(GCC_PRINTF) && !defined(printf)
#define GCC_PRINTFLIKE(fmt,var) __attribute__((format(printf,fmt,var)))
#else
#define GCC_PRINTFLIKE(fmt,var) 
#endif
#endif
#ifndef GCC_SCANFLIKE
#if defined(GCC_SCANF) && !defined(scanf)
#define GCC_SCANFLIKE(fmt,var) __attribute__((format(scanf,fmt,var)))
#else
#define GCC_SCANFLIKE(fmt,var) 
#endif
#endif
#ifndef GCC_NORETURN
#define GCC_NORETURN 
#endif
#ifndef GCC_UNUSED
#define GCC_UNUSED 
#endif
#if NCURSES_TPARM_VARARGS
#else
#endif
#define is_linetouched(w,l) ((!(w) || ((l) > getmaxy(w)) || ((l) < 0)) ? ERR : (is_linetouched)((w),(l)))
#if !NCURSES_WIDECHAR
#define vid_attr(a,pair,opts) vidattr(a)
#endif
#if 1
#undef NCURSES_EXT_FUNCS
#define NCURSES_EXT_FUNCS 20180127
#else
#define curses_version() NCURSES_VERSION
#endif
#if 0
#undef NCURSES_SP_FUNCS
#define NCURSES_SP_FUNCS 20180127
#define NCURSES_SP_NAME(name) name ##_sp
#define NCURSES_SP_OUTC NCURSES_SP_NAME(NCURSES_OUTC)
#if 1
#endif
#else
#undef NCURSES_SP_FUNCS
#define NCURSES_SP_FUNCS 0
#define NCURSES_SP_NAME(name) name
#define NCURSES_SP_OUTC NCURSES_OUTC
#endif
#define NCURSES_ATTR_SHIFT 8
#define NCURSES_BITS(mask,shift) (NCURSES_CAST(chtype,(mask)) << ((shift) + NCURSES_ATTR_SHIFT))
#define A_NORMAL (1UL - 1UL)
#define A_ATTRIBUTES NCURSES_BITS(~(1UL - 1UL),0)
#define A_CHARTEXT (NCURSES_BITS(1UL,0) - 1UL)
#define A_COLOR NCURSES_BITS(((1UL) << 8) - 1UL,0)
#define A_STANDOUT NCURSES_BITS(1UL,8)
#define A_UNDERLINE NCURSES_BITS(1UL,9)
#define A_REVERSE NCURSES_BITS(1UL,10)
#define A_BLINK NCURSES_BITS(1UL,11)
#define A_DIM NCURSES_BITS(1UL,12)
#define A_BOLD NCURSES_BITS(1UL,13)
#define A_ALTCHARSET NCURSES_BITS(1UL,14)
#define A_INVIS NCURSES_BITS(1UL,15)
#define A_PROTECT NCURSES_BITS(1UL,16)
#define A_HORIZONTAL NCURSES_BITS(1UL,17)
#define A_LEFT NCURSES_BITS(1UL,18)
#define A_LOW NCURSES_BITS(1UL,19)
#define A_RIGHT NCURSES_BITS(1UL,20)
#define A_TOP NCURSES_BITS(1UL,21)
#define A_VERTICAL NCURSES_BITS(1UL,22)
#if 1
#define A_ITALIC NCURSES_BITS(1UL,23)
#endif
#define getyx(win,y,x) (y = getcury(win), x = getcurx(win))
#define getbegyx(win,y,x) (y = getbegy(win), x = getbegx(win))
#define getmaxyx(win,y,x) (y = getmaxy(win), x = getmaxx(win))
#define getparyx(win,y,x) (y = getpary(win), x = getparx(win))
#define getsyx(y,x) do { if (newscr) { if (is_leaveok(newscr)) (y) = (x) = -1; else getyx(newscr,(y), (x)); } } while(0)
#define setsyx(y,x) do { if (newscr) { if ((y) == -1 && (x) == -1) leaveok(newscr, TRUE); else { leaveok(newscr, FALSE); wmove(newscr, (y), (x)); } } } while(0)
#ifndef NCURSES_NOMACROS
#define wgetstr(w,s) wgetnstr(w, s, -1)
#define getnstr(s,n) wgetnstr(stdscr, s, (n))
#define setterm(term) setupterm(term, 1, (int *)0)
#define fixterm() reset_prog_mode()
#define resetterm() reset_shell_mode()
#define saveterm() def_prog_mode()
#define crmode() cbreak()
#define nocrmode() nocbreak()
#define gettmode() 
#if !NCURSES_OPAQUE
#define getattrs(win) NCURSES_CAST(int, NCURSES_OK_ADDR(win) ? (win)->_attrs : A_NORMAL)
#define getcurx(win) (NCURSES_OK_ADDR(win) ? (win)->_curx : ERR)
#define getcury(win) (NCURSES_OK_ADDR(win) ? (win)->_cury : ERR)
#define getbegx(win) (NCURSES_OK_ADDR(win) ? (win)->_begx : ERR)
#define getbegy(win) (NCURSES_OK_ADDR(win) ? (win)->_begy : ERR)
#define getmaxx(win) (NCURSES_OK_ADDR(win) ? ((win)->_maxx + 1) : ERR)
#define getmaxy(win) (NCURSES_OK_ADDR(win) ? ((win)->_maxy + 1) : ERR)
#define getparx(win) (NCURSES_OK_ADDR(win) ? (win)->_parx : ERR)
#define getpary(win) (NCURSES_OK_ADDR(win) ? (win)->_pary : ERR)
#endif
#define wstandout(win) (wattrset(win,A_STANDOUT))
#define wstandend(win) (wattrset(win,A_NORMAL))
#define wattron(win,at) wattr_on(win, NCURSES_CAST(attr_t, at), NULL)
#define wattroff(win,at) wattr_off(win, NCURSES_CAST(attr_t, at), NULL)
#if !NCURSES_OPAQUE
#if NCURSES_WATTR_MACROS
#if NCURSES_WIDECHAR && 0
#define wattrset(win,at) (NCURSES_OK_ADDR(win) ? ((win)->_color = NCURSES_CAST(int, PAIR_NUMBER(at)), (win)->_attrs = NCURSES_CAST(attr_t, at), OK) : ERR)
#else
#define wattrset(win,at) (NCURSES_OK_ADDR(win) ? ((win)->_attrs = NCURSES_CAST(attr_t, at), OK) : ERR)
#endif
#endif
#endif
#define scroll(win) wscrl(win,1)
#define touchwin(win) wtouchln((win), 0, getmaxy(win), 1)
#define touchline(win,s,c) wtouchln((win), s, c, 1)
#define untouchwin(win) wtouchln((win), 0, getmaxy(win), 0)
#define box(win,v,h) wborder(win, v, v, h, h, 0, 0, 0, 0)
#define border(ls,rs,ts,bs,tl,tr,bl,br) wborder(stdscr, ls, rs, ts, bs, tl, tr, bl, br)
#define hline(ch,n) whline(stdscr, ch, (n))
#define vline(ch,n) wvline(stdscr, ch, (n))
#define winstr(w,s) winnstr(w, s, -1)
#define winchstr(w,s) winchnstr(w, s, -1)
#define winsstr(w,s) winsnstr(w, s, -1)
#if !NCURSES_OPAQUE
#define redrawwin(win) wredrawln(win, 0, (NCURSES_OK_ADDR(win) ? (win)->_maxy+1 : -1))
#endif
#define waddstr(win,str) waddnstr(win,str,-1)
#define waddchstr(win,str) waddchnstr(win,str,-1)
#define COLOR_PAIR(n) (NCURSES_BITS((n), 0) & A_COLOR)
#define PAIR_NUMBER(a) (NCURSES_CAST(int,((NCURSES_CAST(unsigned long,(a)) & A_COLOR) >> NCURSES_ATTR_SHIFT)))
#define addch(ch) waddch(stdscr,(ch))
#define addchnstr(str,n) waddchnstr(stdscr,(str),(n))
#define addchstr(str) waddchstr(stdscr,(str))
#define addnstr(str,n) waddnstr(stdscr,(str),(n))
#define addstr(str) waddnstr(stdscr,(str),-1)
#define attr_get(ap,cp,o) wattr_get(stdscr,(ap),(cp),(o))
#define attr_off(a,o) wattr_off(stdscr,(a),(o))
#define attr_on(a,o) wattr_on(stdscr,(a),(o))
#define attr_set(a,c,o) wattr_set(stdscr,(a),(c),(o))
#define attroff(at) wattroff(stdscr,(at))
#define attron(at) wattron(stdscr,(at))
#define attrset(at) wattrset(stdscr,(at))
#define bkgd(ch) wbkgd(stdscr,(ch))
#define bkgdset(ch) wbkgdset(stdscr,(ch))
#define chgat(n,a,c,o) wchgat(stdscr,(n),(a),(c),(o))
#define clear() wclear(stdscr)
#define clrtobot() wclrtobot(stdscr)
#define clrtoeol() wclrtoeol(stdscr)
#define color_set(c,o) wcolor_set(stdscr,(c),(o))
#define delch() wdelch(stdscr)
#define deleteln() winsdelln(stdscr,-1)
#define echochar(c) wechochar(stdscr,(c))
#define erase() werase(stdscr)
#define getch() wgetch(stdscr)
#define getstr(str) wgetstr(stdscr,(str))
#define inch() winch(stdscr)
#define inchnstr(s,n) winchnstr(stdscr,(s),(n))
#define inchstr(s) winchstr(stdscr,(s))
#define innstr(s,n) winnstr(stdscr,(s),(n))
#define insch(c) winsch(stdscr,(c))
#define insdelln(n) winsdelln(stdscr,(n))
#define insertln() winsdelln(stdscr,1)
#define insnstr(s,n) winsnstr(stdscr,(s),(n))
#define insstr(s) winsstr(stdscr,(s))
#define instr(s) winstr(stdscr,(s))
#define move(y,x) wmove(stdscr,(y),(x))
#define refresh() wrefresh(stdscr)
#define scrl(n) wscrl(stdscr,(n))
#define setscrreg(t,b) wsetscrreg(stdscr,(t),(b))
#define standend() wstandend(stdscr)
#define standout() wstandout(stdscr)
#define timeout(delay) wtimeout(stdscr,(delay))
#define wdeleteln(win) winsdelln(win,-1)
#define winsertln(win) winsdelln(win,1)
#define mvwaddch(win,y,x,ch) (wmove((win),(y),(x)) == ERR ? ERR : waddch((win),(ch)))
#define mvwaddchnstr(win,y,x,str,n) (wmove((win),(y),(x)) == ERR ? ERR : waddchnstr((win),(str),(n)))
#define mvwaddchstr(win,y,x,str) (wmove((win),(y),(x)) == ERR ? ERR : waddchnstr((win),(str),-1))
#define mvwaddnstr(win,y,x,str,n) (wmove((win),(y),(x)) == ERR ? ERR : waddnstr((win),(str),(n)))
#define mvwaddstr(win,y,x,str) (wmove((win),(y),(x)) == ERR ? ERR : waddnstr((win),(str),-1))
#define mvwchgat(win,y,x,n,a,c,o) (wmove((win),(y),(x)) == ERR ? ERR : wchgat((win),(n),(a),(c),(o)))
#define mvwdelch(win,y,x) (wmove((win),(y),(x)) == ERR ? ERR : wdelch(win))
#define mvwgetch(win,y,x) (wmove((win),(y),(x)) == ERR ? ERR : wgetch(win))
#define mvwgetnstr(win,y,x,str,n) (wmove((win),(y),(x)) == ERR ? ERR : wgetnstr((win),(str),(n)))
#define mvwgetstr(win,y,x,str) (wmove((win),(y),(x)) == ERR ? ERR : wgetstr((win),(str)))
#define mvwhline(win,y,x,c,n) (wmove((win),(y),(x)) == ERR ? ERR : whline((win),(c),(n)))
#define mvwinch(win,y,x) (wmove((win),(y),(x)) == ERR ? NCURSES_CAST(chtype, ERR) : winch(win))
#define mvwinchnstr(win,y,x,s,n) (wmove((win),(y),(x)) == ERR ? ERR : winchnstr((win),(s),(n)))
#define mvwinchstr(win,y,x,s) (wmove((win),(y),(x)) == ERR ? ERR : winchstr((win),(s)))
#define mvwinnstr(win,y,x,s,n) (wmove((win),(y),(x)) == ERR ? ERR : winnstr((win),(s),(n)))
#define mvwinsch(win,y,x,c) (wmove((win),(y),(x)) == ERR ? ERR : winsch((win),(c)))
#define mvwinsnstr(win,y,x,s,n) (wmove((win),(y),(x)) == ERR ? ERR : winsnstr((win),(s),(n)))
#define mvwinsstr(win,y,x,s) (wmove((win),(y),(x)) == ERR ? ERR : winsstr((win),(s)))
#define mvwinstr(win,y,x,s) (wmove((win),(y),(x)) == ERR ? ERR : winstr((win),(s)))
#define mvwvline(win,y,x,c,n) (wmove((win),(y),(x)) == ERR ? ERR : wvline((win),(c),(n)))
#define mvaddch(y,x,ch) mvwaddch(stdscr,(y),(x),(ch))
#define mvaddchnstr(y,x,str,n) mvwaddchnstr(stdscr,(y),(x),(str),(n))
#define mvaddchstr(y,x,str) mvwaddchstr(stdscr,(y),(x),(str))
#define mvaddnstr(y,x,str,n) mvwaddnstr(stdscr,(y),(x),(str),(n))
#define mvaddstr(y,x,str) mvwaddstr(stdscr,(y),(x),(str))
#define mvchgat(y,x,n,a,c,o) mvwchgat(stdscr,(y),(x),(n),(a),(c),(o))
#define mvdelch(y,x) mvwdelch(stdscr,(y),(x))
#define mvgetch(y,x) mvwgetch(stdscr,(y),(x))
#define mvgetnstr(y,x,str,n) mvwgetnstr(stdscr,(y),(x),(str),(n))
#define mvgetstr(y,x,str) mvwgetstr(stdscr,(y),(x),(str))
#define mvhline(y,x,c,n) mvwhline(stdscr,(y),(x),(c),(n))
#define mvinch(y,x) mvwinch(stdscr,(y),(x))
#define mvinchnstr(y,x,s,n) mvwinchnstr(stdscr,(y),(x),(s),(n))
#define mvinchstr(y,x,s) mvwinchstr(stdscr,(y),(x),(s))
#define mvinnstr(y,x,s,n) mvwinnstr(stdscr,(y),(x),(s),(n))
#define mvinsch(y,x,c) mvwinsch(stdscr,(y),(x),(c))
#define mvinsnstr(y,x,s,n) mvwinsnstr(stdscr,(y),(x),(s),(n))
#define mvinsstr(y,x,s) mvwinsstr(stdscr,(y),(x),(s))
#define mvinstr(y,x,s) mvwinstr(stdscr,(y),(x),(s))
#define mvvline(y,x,c,n) mvwvline(stdscr,(y),(x),(c),(n))
#if !NCURSES_OPAQUE
#define getbkgd(win) (NCURSES_OK_ADDR(win) ? ((win)->_bkgd) : 0)
#endif
#define slk_attr_off(a,v) ((v) ? ERR : slk_attroff(a))
#define slk_attr_on(a,v) ((v) ? ERR : slk_attron(a))
#if !NCURSES_OPAQUE
#if NCURSES_WATTR_MACROS
#if NCURSES_WIDECHAR && 0
#define wattr_set(win,a,p,opts) (NCURSES_OK_ADDR(win) ? ((void)((win)->_attrs = ((a) & ~A_COLOR), (win)->_color = (opts) ? *(int *)(opts) : (p)), OK) : ERR)
#define wattr_get(win,a,p,opts) (NCURSES_OK_ADDR(win) ? ((void)(NCURSES_OK_ADDR(a) ? (*(a) = (win)->_attrs) : OK), (void)(NCURSES_OK_ADDR(p) ? (*(p) = (NCURSES_PAIRS_T) (win)->_color) : OK), (void)(NCURSES_OK_ADDR(opts) ? (*(int *)(opts) = (win)->_color) : OK), OK) : ERR)
#else
#define wattr_set(win,a,p,opts) (NCURSES_OK_ADDR(win) ? ((void)((win)->_attrs = (((a) & ~A_COLOR) | (attr_t)COLOR_PAIR(p))), OK) : ERR)
#define wattr_get(win,a,p,opts) (NCURSES_OK_ADDR(win) ? ((void)(NCURSES_OK_ADDR(a) ? (*(a) = (win)->_attrs) : OK), (void)(NCURSES_OK_ADDR(p) ? (*(p) = (NCURSES_PAIRS_T) PAIR_NUMBER((win)->_attrs)) : OK), OK) : ERR)
#endif
#endif
#endif
#define vw_printw vwprintw
#define vw_scanw vwscanw
#if !1
#define vsscanf(a,b,c) _nc_vsscanf(a,b,c)
#endif
#if 1
#if !NCURSES_OPAQUE
#define is_cleared(win) (NCURSES_OK_ADDR(win) ? (win)->_clear : FALSE)
#define is_idcok(win) (NCURSES_OK_ADDR(win) ? (win)->_idcok : FALSE)
#define is_idlok(win) (NCURSES_OK_ADDR(win) ? (win)->_idlok : FALSE)
#define is_immedok(win) (NCURSES_OK_ADDR(win) ? (win)->_immed : FALSE)
#define is_keypad(win) (NCURSES_OK_ADDR(win) ? (win)->_use_keypad : FALSE)
#define is_leaveok(win) (NCURSES_OK_ADDR(win) ? (win)->_leaveok : FALSE)
#define is_nodelay(win) (NCURSES_OK_ADDR(win) ? ((win)->_delay == 0) : FALSE)
#define is_notimeout(win) (NCURSES_OK_ADDR(win) ? (win)->_notimeout : FALSE)
#define is_pad(win) (NCURSES_OK_ADDR(win) ? ((win)->_flags & _ISPAD) != 0 : FALSE)
#define is_scrollok(win) (NCURSES_OK_ADDR(win) ? (win)->_scroll : FALSE)
#define is_subwin(win) (NCURSES_OK_ADDR(win) ? ((win)->_flags & _SUBWIN) != 0 : FALSE)
#define is_syncok(win) (NCURSES_OK_ADDR(win) ? (win)->_sync : FALSE)
#define wgetdelay(win) (NCURSES_OK_ADDR(win) ? (win)->_delay : 0)
#define wgetparent(win) (NCURSES_OK_ADDR(win) ? (win)->_parent : 0)
#define wgetscrreg(win,t,b) (NCURSES_OK_ADDR(win) ? (*(t) = (win)->_regtop, *(b) = (win)->_regbottom, OK) : ERR)
#endif
#endif
#endif
#if NCURSES_REENTRANT
#define curscr NCURSES_PUBLIC_VAR(curscr())
#define newscr NCURSES_PUBLIC_VAR(newscr())
#define stdscr NCURSES_PUBLIC_VAR(stdscr())
#define ttytype NCURSES_PUBLIC_VAR(ttytype())
#define COLORS NCURSES_PUBLIC_VAR(COLORS())
#define COLOR_PAIRS NCURSES_PUBLIC_VAR(COLOR_PAIRS())
#define COLS NCURSES_PUBLIC_VAR(COLS())
#define ESCDELAY NCURSES_PUBLIC_VAR(ESCDELAY())
#define LINES NCURSES_PUBLIC_VAR(LINES())
#define TABSIZE NCURSES_PUBLIC_VAR(TABSIZE())
#else
#endif
#define KEY_CODE_YES 0400
#define KEY_MIN 0401
#define KEY_BREAK 0401
#define KEY_SRESET 0530
#define KEY_RESET 0531
#define KEY_DOWN 0402
#define KEY_UP 0403
#define KEY_LEFT 0404
#define KEY_RIGHT 0405
#define KEY_HOME 0406
#define KEY_BACKSPACE 0407
#define KEY_F0 0410
#define KEY_F(n) (KEY_F0+(n))
#define KEY_DL 0510
#define KEY_IL 0511
#define KEY_DC 0512
#define KEY_IC 0513
#define KEY_EIC 0514
#define KEY_CLEAR 0515
#define KEY_EOS 0516
#define KEY_EOL 0517
#define KEY_SF 0520
#define KEY_SR 0521
#define KEY_NPAGE 0522
#define KEY_PPAGE 0523
#define KEY_STAB 0524
#define KEY_CTAB 0525
#define KEY_CATAB 0526
#define KEY_ENTER 0527
#define KEY_PRINT 0532
#define KEY_LL 0533
#define KEY_A1 0534
#define KEY_A3 0535
#define KEY_B2 0536
#define KEY_C1 0537
#define KEY_C3 0540
#define KEY_BTAB 0541
#define KEY_BEG 0542
#define KEY_CANCEL 0543
#define KEY_CLOSE 0544
#define KEY_COMMAND 0545
#define KEY_COPY 0546
#define KEY_CREATE 0547
#define KEY_END 0550
#define KEY_EXIT 0551
#define KEY_FIND 0552
#define KEY_HELP 0553
#define KEY_MARK 0554
#define KEY_MESSAGE 0555
#define KEY_MOVE 0556
#define KEY_NEXT 0557
#define KEY_OPEN 0560
#define KEY_OPTIONS 0561
#define KEY_PREVIOUS 0562
#define KEY_REDO 0563
#define KEY_REFERENCE 0564
#define KEY_REFRESH 0565
#define KEY_REPLACE 0566
#define KEY_RESTART 0567
#define KEY_RESUME 0570
#define KEY_SAVE 0571
#define KEY_SBEG 0572
#define KEY_SCANCEL 0573
#define KEY_SCOMMAND 0574
#define KEY_SCOPY 0575
#define KEY_SCREATE 0576
#define KEY_SDC 0577
#define KEY_SDL 0600
#define KEY_SELECT 0601
#define KEY_SEND 0602
#define KEY_SEOL 0603
#define KEY_SEXIT 0604
#define KEY_SFIND 0605
#define KEY_SHELP 0606
#define KEY_SHOME 0607
#define KEY_SIC 0610
#define KEY_SLEFT 0611
#define KEY_SMESSAGE 0612
#define KEY_SMOVE 0613
#define KEY_SNEXT 0614
#define KEY_SOPTIONS 0615
#define KEY_SPREVIOUS 0616
#define KEY_SPRINT 0617
#define KEY_SREDO 0620
#define KEY_SREPLACE 0621
#define KEY_SRIGHT 0622
#define KEY_SRSUME 0623
#define KEY_SSAVE 0624
#define KEY_SSUSPEND 0625
#define KEY_SUNDO 0626
#define KEY_SUSPEND 0627
#define KEY_UNDO 0630
#define KEY_MOUSE 0631
#define KEY_RESIZE 0632
#define KEY_EVENT 0633
#define KEY_MAX 0777
#if NCURSES_MOUSE_VERSION > 1
#define NCURSES_MOUSE_MASK(b,m) ((m) << (((b) - 1) * 5))
#else
#define NCURSES_MOUSE_MASK(b,m) ((m) << (((b) - 1) * 6))
#endif
#define NCURSES_BUTTON_RELEASED 001L
#define NCURSES_BUTTON_PRESSED 002L
#define NCURSES_BUTTON_CLICKED 004L
#define NCURSES_DOUBLE_CLICKED 010L
#define NCURSES_TRIPLE_CLICKED 020L
#define NCURSES_RESERVED_EVENT 040L
#define BUTTON1_RELEASED NCURSES_MOUSE_MASK(1, NCURSES_BUTTON_RELEASED)
#define BUTTON1_PRESSED NCURSES_MOUSE_MASK(1, NCURSES_BUTTON_PRESSED)
#define BUTTON1_CLICKED NCURSES_MOUSE_MASK(1, NCURSES_BUTTON_CLICKED)
#define BUTTON1_DOUBLE_CLICKED NCURSES_MOUSE_MASK(1, NCURSES_DOUBLE_CLICKED)
#define BUTTON1_TRIPLE_CLICKED NCURSES_MOUSE_MASK(1, NCURSES_TRIPLE_CLICKED)
#define BUTTON2_RELEASED NCURSES_MOUSE_MASK(2, NCURSES_BUTTON_RELEASED)
#define BUTTON2_PRESSED NCURSES_MOUSE_MASK(2, NCURSES_BUTTON_PRESSED)
#define BUTTON2_CLICKED NCURSES_MOUSE_MASK(2, NCURSES_BUTTON_CLICKED)
#define BUTTON2_DOUBLE_CLICKED NCURSES_MOUSE_MASK(2, NCURSES_DOUBLE_CLICKED)
#define BUTTON2_TRIPLE_CLICKED NCURSES_MOUSE_MASK(2, NCURSES_TRIPLE_CLICKED)
#define BUTTON3_RELEASED NCURSES_MOUSE_MASK(3, NCURSES_BUTTON_RELEASED)
#define BUTTON3_PRESSED NCURSES_MOUSE_MASK(3, NCURSES_BUTTON_PRESSED)
#define BUTTON3_CLICKED NCURSES_MOUSE_MASK(3, NCURSES_BUTTON_CLICKED)
#define BUTTON3_DOUBLE_CLICKED NCURSES_MOUSE_MASK(3, NCURSES_DOUBLE_CLICKED)
#define BUTTON3_TRIPLE_CLICKED NCURSES_MOUSE_MASK(3, NCURSES_TRIPLE_CLICKED)
#define BUTTON4_RELEASED NCURSES_MOUSE_MASK(4, NCURSES_BUTTON_RELEASED)
#define BUTTON4_PRESSED NCURSES_MOUSE_MASK(4, NCURSES_BUTTON_PRESSED)
#define BUTTON4_CLICKED NCURSES_MOUSE_MASK(4, NCURSES_BUTTON_CLICKED)
#define BUTTON4_DOUBLE_CLICKED NCURSES_MOUSE_MASK(4, NCURSES_DOUBLE_CLICKED)
#define BUTTON4_TRIPLE_CLICKED NCURSES_MOUSE_MASK(4, NCURSES_TRIPLE_CLICKED)
#if NCURSES_MOUSE_VERSION > 1
#define BUTTON5_RELEASED NCURSES_MOUSE_MASK(5, NCURSES_BUTTON_RELEASED)
#define BUTTON5_PRESSED NCURSES_MOUSE_MASK(5, NCURSES_BUTTON_PRESSED)
#define BUTTON5_CLICKED NCURSES_MOUSE_MASK(5, NCURSES_BUTTON_CLICKED)
#define BUTTON5_DOUBLE_CLICKED NCURSES_MOUSE_MASK(5, NCURSES_DOUBLE_CLICKED)
#define BUTTON5_TRIPLE_CLICKED NCURSES_MOUSE_MASK(5, NCURSES_TRIPLE_CLICKED)
#define BUTTON_CTRL NCURSES_MOUSE_MASK(6, 0001L)
#define BUTTON_SHIFT NCURSES_MOUSE_MASK(6, 0002L)
#define BUTTON_ALT NCURSES_MOUSE_MASK(6, 0004L)
#define REPORT_MOUSE_POSITION NCURSES_MOUSE_MASK(6, 0010L)
#else
#define BUTTON1_RESERVED_EVENT NCURSES_MOUSE_MASK(1, NCURSES_RESERVED_EVENT)
#define BUTTON2_RESERVED_EVENT NCURSES_MOUSE_MASK(2, NCURSES_RESERVED_EVENT)
#define BUTTON3_RESERVED_EVENT NCURSES_MOUSE_MASK(3, NCURSES_RESERVED_EVENT)
#define BUTTON4_RESERVED_EVENT NCURSES_MOUSE_MASK(4, NCURSES_RESERVED_EVENT)
#define BUTTON_CTRL NCURSES_MOUSE_MASK(5, 0001L)
#define BUTTON_SHIFT NCURSES_MOUSE_MASK(5, 0002L)
#define BUTTON_ALT NCURSES_MOUSE_MASK(5, 0004L)
#define REPORT_MOUSE_POSITION NCURSES_MOUSE_MASK(5, 0010L)
#endif
#define ALL_MOUSE_EVENTS (REPORT_MOUSE_POSITION - 1)
#define BUTTON_RELEASE(e,x) ((e) & NCURSES_MOUSE_MASK(x, 001))
#define BUTTON_PRESS(e,x) ((e) & NCURSES_MOUSE_MASK(x, 002))
#define BUTTON_CLICK(e,x) ((e) & NCURSES_MOUSE_MASK(x, 004))
#define BUTTON_DOUBLE_CLICK(e,x) ((e) & NCURSES_MOUSE_MASK(x, 010))
#define BUTTON_TRIPLE_CLICK(e,x) ((e) & NCURSES_MOUSE_MASK(x, 020))
#define BUTTON_RESERVED_EVENT(e,x) ((e) & NCURSES_MOUSE_MASK(x, 040))
#if NCURSES_SP_FUNCS
#endif
#ifndef NCURSES_NOMACROS
#define mouse_trafo(y,x,to_screen) wmouse_trafo(stdscr,y,x,to_screen)
#endif
#if NCURSES_SP_FUNCS
#endif
#if NCURSES_WIDECHAR
#define _tracech_t _tracecchar_t
#define _tracech_t2 _tracecchar_t2
#else
#define _tracech_t _tracechtype
#define _tracech_t2 _tracechtype2
#endif
#define TRACE_DISABLE 0x0000
#define TRACE_TIMES 0x0001
#define TRACE_TPUTS 0x0002
#define TRACE_UPDATE 0x0004
#define TRACE_MOVE 0x0008
#define TRACE_CHARPUT 0x0010
#define TRACE_ORDINARY 0x001F
#define TRACE_CALLS 0x0020
#define TRACE_VIRTPUT 0x0040
#define TRACE_IEVENT 0x0080
#define TRACE_BITS 0x0100
#define TRACE_ICALLS 0x0200
#define TRACE_CCALLS 0x0400
#define TRACE_DATABASE 0x0800
#define TRACE_ATTRS 0x1000
#define TRACE_SHIFT 13
#define TRACE_MAXIMUM ((1 << TRACE_SHIFT) - 1)
#if defined(TRACE) || defined(NCURSES_TEST)
#define OPTIMIZE_MVCUR 0x01
#define OPTIMIZE_HASHMAP 0x02
#define OPTIMIZE_SCROLL 0x04
#define OPTIMIZE_ALL 0xff
#endif
#include <unctrl.h>
#ifdef __cplusplus
#ifndef NCURSES_NOMACROS
#undef box
#undef clear
#undef erase
#undef move
#undef refresh
#endif
#endif
#endif
