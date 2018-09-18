// GGHASH:VKkucYo7HDM9ybxyOYjrjE8Z93QpxN4ICEcno997O5pU000048a9
#ifndef FORM_H
#define FORM_H 
#include <curses.h>
#include <eti.h>
#ifdef __cplusplus
#endif
#ifndef FORM_PRIV_H
#endif
#ifndef NCURSES_FIELD_INTERNALS
#define NCURSES_FIELD_INTERNALS 
#endif
#if !NCURSES_OPAQUE_FORM
#endif
#if 1
#endif
#if 1
#endif
#if !NCURSES_OPAQUE_FORM
#if NCURSES_INTEROP_FUNCS
#else
#endif
#endif
#define NO_JUSTIFICATION (0)
#define JUSTIFY_LEFT (1)
#define JUSTIFY_CENTER (2)
#define JUSTIFY_RIGHT (3)
#define O_VISIBLE (0x0001U)
#define O_ACTIVE (0x0002U)
#define O_PUBLIC (0x0004U)
#define O_EDIT (0x0008U)
#define O_WRAP (0x0010U)
#define O_BLANK (0x0020U)
#define O_AUTOSKIP (0x0040U)
#define O_NULLOK (0x0080U)
#define O_PASSOK (0x0100U)
#define O_STATIC (0x0200U)
#define O_DYNAMIC_JUSTIFY (0x0400U)
#define O_NO_LEFT_STRIP (0x0800U)
#define O_NL_OVERLOAD (0x0001U)
#define O_BS_OVERLOAD (0x0002U)
#define REQ_NEXT_PAGE (KEY_MAX + 1)
#define REQ_PREV_PAGE (KEY_MAX + 2)
#define REQ_FIRST_PAGE (KEY_MAX + 3)
#define REQ_LAST_PAGE (KEY_MAX + 4)
#define REQ_NEXT_FIELD (KEY_MAX + 5)
#define REQ_PREV_FIELD (KEY_MAX + 6)
#define REQ_FIRST_FIELD (KEY_MAX + 7)
#define REQ_LAST_FIELD (KEY_MAX + 8)
#define REQ_SNEXT_FIELD (KEY_MAX + 9)
#define REQ_SPREV_FIELD (KEY_MAX + 10)
#define REQ_SFIRST_FIELD (KEY_MAX + 11)
#define REQ_SLAST_FIELD (KEY_MAX + 12)
#define REQ_LEFT_FIELD (KEY_MAX + 13)
#define REQ_RIGHT_FIELD (KEY_MAX + 14)
#define REQ_UP_FIELD (KEY_MAX + 15)
#define REQ_DOWN_FIELD (KEY_MAX + 16)
#define REQ_NEXT_CHAR (KEY_MAX + 17)
#define REQ_PREV_CHAR (KEY_MAX + 18)
#define REQ_NEXT_LINE (KEY_MAX + 19)
#define REQ_PREV_LINE (KEY_MAX + 20)
#define REQ_NEXT_WORD (KEY_MAX + 21)
#define REQ_PREV_WORD (KEY_MAX + 22)
#define REQ_BEG_FIELD (KEY_MAX + 23)
#define REQ_END_FIELD (KEY_MAX + 24)
#define REQ_BEG_LINE (KEY_MAX + 25)
#define REQ_END_LINE (KEY_MAX + 26)
#define REQ_LEFT_CHAR (KEY_MAX + 27)
#define REQ_RIGHT_CHAR (KEY_MAX + 28)
#define REQ_UP_CHAR (KEY_MAX + 29)
#define REQ_DOWN_CHAR (KEY_MAX + 30)
#define REQ_NEW_LINE (KEY_MAX + 31)
#define REQ_INS_CHAR (KEY_MAX + 32)
#define REQ_INS_LINE (KEY_MAX + 33)
#define REQ_DEL_CHAR (KEY_MAX + 34)
#define REQ_DEL_PREV (KEY_MAX + 35)
#define REQ_DEL_LINE (KEY_MAX + 36)
#define REQ_DEL_WORD (KEY_MAX + 37)
#define REQ_CLR_EOL (KEY_MAX + 38)
#define REQ_CLR_EOF (KEY_MAX + 39)
#define REQ_CLR_FIELD (KEY_MAX + 40)
#define REQ_OVL_MODE (KEY_MAX + 41)
#define REQ_INS_MODE (KEY_MAX + 42)
#define REQ_SCR_FLINE (KEY_MAX + 43)
#define REQ_SCR_BLINE (KEY_MAX + 44)
#define REQ_SCR_FPAGE (KEY_MAX + 45)
#define REQ_SCR_BPAGE (KEY_MAX + 46)
#define REQ_SCR_FHPAGE (KEY_MAX + 47)
#define REQ_SCR_BHPAGE (KEY_MAX + 48)
#define REQ_SCR_FCHAR (KEY_MAX + 49)
#define REQ_SCR_BCHAR (KEY_MAX + 50)
#define REQ_SCR_HFLINE (KEY_MAX + 51)
#define REQ_SCR_HBLINE (KEY_MAX + 52)
#define REQ_SCR_HFHALF (KEY_MAX + 53)
#define REQ_SCR_HBHALF (KEY_MAX + 54)
#define REQ_VALIDATION (KEY_MAX + 55)
#define REQ_NEXT_CHOICE (KEY_MAX + 56)
#define REQ_PREV_CHOICE (KEY_MAX + 57)
#define MIN_FORM_COMMAND (KEY_MAX + 1)
#define MAX_FORM_COMMAND (KEY_MAX + 57)
#if defined(MAX_COMMAND)
# if (MAX_FORM_COMMAND > MAX_COMMAND)
# error Something is wrong -- MAX_FORM_COMMAND is greater than MAX_COMMAND
# elif (MAX_COMMAND != (KEY_MAX + 128))
# error Something is wrong -- MAX_COMMAND is already inconsistently defined.
# endif
#else
#define MAX_COMMAND (KEY_MAX + 128)
#endif
# if NCURSES_WIDECHAR
# endif
#if NCURSES_SP_FUNCS
#endif
#ifdef __cplusplus
#endif
#endif
