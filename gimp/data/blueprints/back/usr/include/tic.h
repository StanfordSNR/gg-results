// GGHASH:VXqYzsE7mDxTyqZw3Q_NksCcurWXi9npUv0AXzThjj8E00003546
#ifndef __TIC_H
#define __TIC_H 
#ifdef __cplusplus
#endif
#include <ncurses_cfg.h>
#include <curses.h>
#define MAGIC 0432
#define MAGIC2 01036
#undef BYTE
#define BYTE(p,n) (unsigned char)((p)[n])
#define IS_NEG1(p) ((BYTE(p,0) == 0377) && (BYTE(p,1) == 0377))
#define IS_NEG2(p) ((BYTE(p,0) == 0376) && (BYTE(p,1) == 0377))
#define LOW_MSB(p) (BYTE(p,0) + 256*BYTE(p,1))
#define IS_TIC_MAGIC(p) (LOW_MSB(p) == MAGIC || LOW_MSB(p) == MAGIC2)
#define quick_prefix(s) (!strncmp((s), "b64:", 4) || !strncmp((s), "hex:", 4))
#define MAX_NAME_SIZE 512
#define MAX_ENTRY_SIZE1 4096
#define MAX_ENTRY_SIZE2 32768
#if NCURSES_EXT_COLORS && HAVE_INIT_EXTENDED_COLOR
#define MAX_ENTRY_SIZE MAX_ENTRY_SIZE2
#else
#define MAX_ENTRY_SIZE MAX_ENTRY_SIZE1
#endif
#if HAVE_LONG_FILE_NAMES
#define MAX_ALIAS 32
#else
#define MAX_ALIAS 14
#endif
#define PRIVATE_INFO "%s/.terminfo"
#define MAX_DEBUG_LEVEL 15
#define DEBUG_LEVEL(n) ((n) << TRACE_SHIFT)
#define set_trace_level(n) _nc_tracing &= DEBUG_LEVEL(MAX_DEBUG_LEVEL) + DEBUG_LEVEL(MAX_DEBUG_LEVEL) - 1, _nc_tracing |= DEBUG_LEVEL(n)
#ifdef TRACE
#define DEBUG(n,a) if (_nc_tracing >= DEBUG_LEVEL(n)) _tracef a
#else
#define DEBUG(n,a) 
#endif
#define BOOLEAN 0
#define NUMBER 1
#define STRING 2
#define CANCEL 3
#define NAMES 4
#define UNDEF 5
#define NO_PUSHBACK -1
#define NOTFOUND ((struct name_table_entry *) 0)
#define ABSENT_BOOLEAN ((signed char)-1)
#define ABSENT_NUMERIC (-1)
#define ABSENT_STRING (char *)0
#define CANCELLED_BOOLEAN ((signed char)-2)
#define CANCELLED_NUMERIC (-2)
#define CANCELLED_STRING (char *)(-1)
#define VALID_BOOLEAN(s) ((unsigned char)(s) <= 1)
#define VALID_NUMERIC(s) ((s) >= 0)
#define VALID_STRING(s) ((s) != CANCELLED_STRING && (s) != ABSENT_STRING)
#define MAX_TERMCAP_LENGTH 1023
#define MAX_TERMINFO_LENGTH 4096
#ifndef TERMINFO
#define TERMINFO "/usr/share/terminfo"
#endif
#ifdef NCURSES_TERM_ENTRY_H_incl
#ifdef NCURSES_INTERNALS
#define SYN_TERMINFO 0
#define SYN_TERMCAP 1
#if BROKEN_LINKER
#define _nc_tinfo_fkeys _nc_tinfo_fkeysf()
#else
#endif
#define NUM_PARM 9
#endif
#endif
#ifdef __cplusplus
#endif
#endif
