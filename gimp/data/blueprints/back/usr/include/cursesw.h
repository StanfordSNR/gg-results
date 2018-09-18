// GGHASH:VxHi2qEfCKvDNKz7ceX64EEK39J0lYleMxS1mAiEkARA0000c237
#ifndef NCURSES_CURSESW_H_incl
#define NCURSES_CURSESW_H_incl 1
# include <curses.h>
#include <etip.h>
#undef lines
#undef UNDEF
#define UNDEF(name) CUR_ ##name
#ifdef addch
#undef addch
#define addch UNDEF(addch)
#endif
#ifdef addchstr
#undef addchstr
#define addchstr UNDEF(addchstr)
#endif
#ifdef addnstr
#undef addnstr
#define addnstr UNDEF(addnstr)
#endif
#ifdef addstr
#undef addstr
#define addstr UNDEF(addstr)
#endif
#ifdef attroff
#undef attroff
#define attroff UNDEF(attroff)
#endif
#ifdef attron
#undef attron
#define attron UNDEF(attron)
#endif
#ifdef attrset
#undef attrset
#define attrset UNDEF(attrset)
#endif
#ifdef bkgd
#undef bkgd
#define bkgd UNDEF(bkgd)
#endif
#ifdef bkgdset
#undef bkgdset
#define bkgdset UNDEF(bkgdset)
#endif
#ifdef border
#undef border
#define border UNDEF(border)
#endif
#ifdef box
#undef box
#define box UNDEF(box)
#endif
#ifdef chgat
#undef chgat
#define chgat UNDEF(chgat)
#endif
#ifdef clear
#undef clear
#define clear UNDEF(clear)
#endif
#ifdef clearok
#undef clearok
#define clearok UNDEF(clearok)
#else
#endif
#ifdef clrtobot
#undef clrtobot
#define clrtobot UNDEF(clrtobot)
#endif
#ifdef clrtoeol
#undef clrtoeol
#define clrtoeol UNDEF(clrtoeol)
#endif
#ifdef color_set
#undef color_set
#define color_set UNDEF(color_set)
#endif
#ifdef crmode
#undef crmode
#define crmode UNDEF(crmode)
#endif
#ifdef delch
#undef delch
#define delch UNDEF(delch)
#endif
#ifdef deleteln
#undef deleteln
#define deleteln UNDEF(deleteln)
#endif
#ifdef echochar
#undef echochar
#define echochar UNDEF(echochar)
#endif
#ifdef erase
#undef erase
#define erase UNDEF(erase)
#endif
#ifdef fixterm
#undef fixterm
#define fixterm UNDEF(fixterm)
#endif
#ifdef flushok
#undef flushok
#define flushok UNDEF(flushok)
#else
#define _no_flushok 
#endif
#ifdef getattrs
#undef getattrs
#define getattrs UNDEF(getattrs)
#endif
#ifdef getbegyx
#undef getbegyx
#define getbegyx UNDEF(getbegyx)
#endif
#ifdef getbkgd
#undef getbkgd
#define getbkgd UNDEF(getbkgd)
#endif
#ifdef getch
#undef getch
#define getch UNDEF(getch)
#endif
#ifdef getmaxyx
#undef getmaxyx
#define getmaxyx UNDEF(getmaxyx)
#endif
#ifdef getnstr
#undef getnstr
#define getnstr UNDEF(getnstr)
#endif
#ifdef getparyx
#undef getparyx
#define getparyx UNDEF(getparyx)
#endif
#ifdef getstr
#undef getstr
#define getstr UNDEF(getstr)
#endif
#ifdef getyx
#undef getyx
#define getyx UNDEF(getyx)
#endif
#ifdef hline
#undef hline
#define hline UNDEF(hline)
#endif
#ifdef inch
#undef inch
#define inch UNDEF(inch)
#endif
#ifdef inchstr
#undef inchstr
#define inchstr UNDEF(inchstr)
#endif
#ifdef innstr
#undef innstr
#define innstr UNDEF(innstr)
#endif
#ifdef insch
#undef insch
#define insch UNDEF(insch)
#endif
#ifdef insdelln
#undef insdelln
#define insdelln UNDEF(insdelln)
#endif
#ifdef insertln
#undef insertln
#define insertln UNDEF(insertln)
#endif
#ifdef insnstr
#undef insnstr
#define insnstr UNDEF(insnstr)
#endif
#ifdef insstr
#undef insstr
#define insstr UNDEF(insstr)
#endif
#ifdef instr
#undef instr
#define instr UNDEF(instr)
#endif
#ifdef intrflush
#undef intrflush
#define intrflush UNDEF(intrflush)
#endif
#ifdef is_linetouched
#undef is_linetouched
#define is_linetouched UNDEF(is_linetouched)
#endif
#ifdef leaveok
#undef leaveok
#define leaveok UNDEF(leaveok)
#else
#endif
#ifdef move
#undef move
#define move UNDEF(move)
#endif
#ifdef mvaddch
#undef mvaddch
#define mvaddch UNDEF(mvaddch)
#endif
#ifdef mvaddnstr
#undef mvaddnstr
#define mvaddnstr UNDEF(mvaddnstr)
#endif
#ifdef mvaddstr
#undef mvaddstr
#define mvaddstr UNDEF(mvaddstr)
#endif
#ifdef mvchgat
#undef mvchgat
#define mvchgat UNDEF(mvchgat)
#endif
#ifdef mvdelch
#undef mvdelch
#define mvdelch UNDEF(mvdelch)
#endif
#ifdef mvgetch
#undef mvgetch
#define mvgetch UNDEF(mvgetch)
#endif
#ifdef mvgetnstr
#undef mvgetnstr
#define mvgetnstr UNDEF(mvgetnstr)
#endif
#ifdef mvgetstr
#undef mvgetstr
#define mvgetstr UNDEF(mvgetstr)
#endif
#ifdef mvinch
#undef mvinch
#define mvinch UNDEF(mvinch)
#endif
#ifdef mvinnstr
#undef mvinnstr
#define mvinnstr UNDEF(mvinnstr)
#endif
#ifdef mvinsch
#undef mvinsch
#define mvinsch UNDEF(mvinsch)
#endif
#ifdef mvinsnstr
#undef mvinsnstr
#define mvinsnstr UNDEF(mvinsnstr)
#endif
#ifdef mvinsstr
#undef mvinsstr
#define mvinsstr UNDEF(mvinsstr)
#endif
#ifdef mvwaddch
#undef mvwaddch
#define mvwaddch UNDEF(mvwaddch)
#endif
#ifdef mvwaddchnstr
#undef mvwaddchnstr
#define mvwaddchnstr UNDEF(mvwaddchnstr)
#endif
#ifdef mvwaddchstr
#undef mvwaddchstr
#define mvwaddchstr UNDEF(mvwaddchstr)
#endif
#ifdef mvwaddnstr
#undef mvwaddnstr
#define mvwaddnstr UNDEF(mvwaddnstr)
#endif
#ifdef mvwaddstr
#undef mvwaddstr
#define mvwaddstr UNDEF(mvwaddstr)
#endif
#ifdef mvwchgat
#undef mvwchgat
#define mvwchgat UNDEF(mvwchgat)
#endif
#ifdef mvwdelch
#undef mvwdelch
#define mvwdelch UNDEF(mvwdelch)
#endif
#ifdef mvwgetch
#undef mvwgetch
#define mvwgetch UNDEF(mvwgetch)
#endif
#ifdef mvwgetnstr
#undef mvwgetnstr
#define mvwgetnstr UNDEF(mvwgetnstr)
#endif
#ifdef mvwgetstr
#undef mvwgetstr
#define mvwgetstr UNDEF(mvwgetstr)
#endif
#ifdef mvwhline
#undef mvwhline
#define mvwhline UNDEF(mvwhline)
#endif
#ifdef mvwinch
#undef mvwinch
#define mvwinch UNDEF(mvwinch)
#endif
#ifdef mvwinchnstr
#undef mvwinchnstr
#define mvwinchnstr UNDEF(mvwinchnstr)
#endif
#ifdef mvwinchstr
#undef mvwinchstr
#define mvwinchstr UNDEF(mvwinchstr)
#endif
#ifdef mvwinnstr
#undef mvwinnstr
#define mvwinnstr UNDEF(mvwinnstr)
#endif
#ifdef mvwinsch
#undef mvwinsch
#define mvwinsch UNDEF(mvwinsch)
#endif
#ifdef mvwinsnstr
#undef mvwinsnstr
#define mvwinsnstr UNDEF(mvwinsnstr)
#endif
#ifdef mvwinsstr
#undef mvwinsstr
#define mvwinsstr UNDEF(mvwinsstr)
#endif
#ifdef mvwvline
#undef mvwvline
#define mvwvline UNDEF(mvwvline)
#endif
#ifdef napms
#undef napms
#define napms UNDEF(napms)
#endif
#ifdef nocrmode
#undef nocrmode
#define nocrmode UNDEF(nocrmode)
#endif
#ifdef nodelay
#undef nodelay
#define nodelay UNDEF(nodelay)
#endif
#ifdef redrawwin
#undef redrawwin
#define redrawwin UNDEF(redrawwin)
#endif
#ifdef refresh
#undef refresh
#define refresh UNDEF(refresh)
#endif
#ifdef resetterm
#undef resetterm
#define resetterm UNDEF(resetterm)
#endif
#ifdef saveterm
#undef saveterm
#define saveterm UNDEF(saveterm)
#endif
#ifdef scrl
#undef scrl
#define scrl UNDEF(scrl)
#endif
#ifdef scroll
#undef scroll
#define scroll UNDEF(scroll)
#endif
#ifdef scrollok
#undef scrollok
#define scrollok UNDEF(scrollok)
#else
#if defined(__NCURSES_H)
#else
#endif
#endif
#ifdef setscrreg
#undef setscrreg
#define setscrreg UNDEF(setscrreg)
#endif
#ifdef standend
#undef standend
#define standend UNDEF(standend)
#endif
#ifdef standout
#undef standout
#define standout UNDEF(standout)
#endif
#ifdef subpad
#undef subpad
#define subpad UNDEF(subpad)
#endif
#ifdef timeout
#undef timeout
#define timeout UNDEF(timeout)
#endif
#ifdef touchline
#undef touchline
#define touchline UNDEF(touchline)
#endif
#ifdef touchwin
#undef touchwin
#define touchwin UNDEF(touchwin)
#endif
#ifdef untouchwin
#undef untouchwin
#define untouchwin UNDEF(untouchwin)
#endif
#ifdef vline
#undef vline
#define vline UNDEF(vline)
#endif
#ifdef waddchstr
#undef waddchstr
#define waddchstr UNDEF(waddchstr)
#endif
#ifdef waddstr
#undef waddstr
#define waddstr UNDEF(waddstr)
#endif
#ifdef wattroff
#undef wattroff
#define wattroff UNDEF(wattroff)
#endif
#ifdef wattrset
#undef wattrset
#define wattrset UNDEF(wattrset)
#endif
#ifdef winch
#undef winch
#define winch UNDEF(winch)
#endif
#ifdef winchnstr
#undef winchnstr
#define winchnstr UNDEF(winchnstr)
#endif
#ifdef winchstr
#undef winchstr
#define winchstr UNDEF(winchstr)
#endif
#ifdef winsstr
#undef winsstr
#define winsstr UNDEF(winsstr)
#endif
#ifdef wstandend
#undef wstandend
#define wstandend UNDEF(wstandend)
#endif
#ifdef wstandout
#undef wstandout
#define wstandout UNDEF(wstandout)
#endif
#if __GNUG__ >= 2
#else
#endif
#if __GNUG__ >= 2
#else
#endif
#if (__GNUG__ >= 2) && !defined(printf)
#else
#endif
#if (__GNUG__ >= 2) && !defined(printf)
#else
#endif
#ifndef _no_flushok
#endif
#if defined(NCURSES_EXT_FUNCS) && (NCURSES_EXT_FUNCS != 0)
#endif
#endif
