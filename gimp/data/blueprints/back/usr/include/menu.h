// GGHASH:VOlVXVgkSLuHPW6YDRRF2qHELlyFwtWis4e8MCVyT3SQ00002fa5
#ifndef ETI_MENU
#define ETI_MENU 
#ifdef AMIGA
#define TEXT TEXT_ncurses
#endif
#include <curses.h>
#include <eti.h>
#ifdef __cplusplus
#endif
#define O_ONEVALUE (0x01)
#define O_SHOWDESC (0x02)
#define O_ROWMAJOR (0x04)
#define O_IGNORECASE (0x08)
#define O_SHOWMATCH (0x10)
#define O_NONCYCLIC (0x20)
#define O_MOUSE_MENU (0x40)
#define O_SELECTABLE (0x01)
#if !NCURSES_OPAQUE_MENU
#endif
#if !NCURSES_OPAQUE_MENU
#endif
#if 1
#endif
#define REQ_LEFT_ITEM (KEY_MAX + 1)
#define REQ_RIGHT_ITEM (KEY_MAX + 2)
#define REQ_UP_ITEM (KEY_MAX + 3)
#define REQ_DOWN_ITEM (KEY_MAX + 4)
#define REQ_SCR_ULINE (KEY_MAX + 5)
#define REQ_SCR_DLINE (KEY_MAX + 6)
#define REQ_SCR_DPAGE (KEY_MAX + 7)
#define REQ_SCR_UPAGE (KEY_MAX + 8)
#define REQ_FIRST_ITEM (KEY_MAX + 9)
#define REQ_LAST_ITEM (KEY_MAX + 10)
#define REQ_NEXT_ITEM (KEY_MAX + 11)
#define REQ_PREV_ITEM (KEY_MAX + 12)
#define REQ_TOGGLE_ITEM (KEY_MAX + 13)
#define REQ_CLEAR_PATTERN (KEY_MAX + 14)
#define REQ_BACK_PATTERN (KEY_MAX + 15)
#define REQ_NEXT_MATCH (KEY_MAX + 16)
#define REQ_PREV_MATCH (KEY_MAX + 17)
#define MIN_MENU_COMMAND (KEY_MAX + 1)
#define MAX_MENU_COMMAND (KEY_MAX + 17)
#if defined(MAX_COMMAND)
# if (MAX_MENU_COMMAND > MAX_COMMAND)
# error Something is wrong -- MAX_MENU_COMMAND is greater than MAX_COMMAND
# elif (MAX_COMMAND != (KEY_MAX + 128))
# error Something is wrong -- MAX_COMMAND is already inconsistently defined.
# endif
#else
#define MAX_COMMAND (KEY_MAX + 128)
#endif
#if NCURSES_SP_FUNCS
#endif
#ifdef __cplusplus
#endif
#endif
