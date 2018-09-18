// GGHASH:VFrHBUNPg_TxA6Z3ArwfdADjAqRV8cSS6Mlxiw4mZKXc00002238
#ifndef NCURSES_TERM_ENTRY_H_incl
#define NCURSES_TERM_ENTRY_H_incl 1
#ifdef __cplusplus
#endif
#include <term.h>
#if NCURSES_XNAMES
#define NUM_BOOLEANS(tp) (tp)->num_Booleans
#define NUM_NUMBERS(tp) (tp)->num_Numbers
#define NUM_STRINGS(tp) (tp)->num_Strings
#define EXT_NAMES(tp,i,limit,index,table) (i >= limit) ? tp->ext_Names[index] : table[i]
#else
#define NUM_BOOLEANS(tp) BOOLCOUNT
#define NUM_NUMBERS(tp) NUMCOUNT
#define NUM_STRINGS(tp) STRCOUNT
#define EXT_NAMES(tp,i,limit,index,table) table[i]
#endif
#define NUM_EXT_NAMES(tp) (unsigned) ((tp)->ext_Booleans + (tp)->ext_Numbers + (tp)->ext_Strings)
#define for_each_boolean(n,tp) for(n = 0; n < NUM_BOOLEANS(tp); n++)
#define for_each_number(n,tp) for(n = 0; n < NUM_NUMBERS(tp); n++)
#define for_each_string(n,tp) for(n = 0; n < NUM_STRINGS(tp); n++)
#if NCURSES_XNAMES
#define for_each_ext_boolean(n,tp) for(n = BOOLCOUNT; (int) n < (int) NUM_BOOLEANS(tp); n++)
#define for_each_ext_number(n,tp) for(n = NUMCOUNT; (int) n < (int) NUM_NUMBERS(tp); n++)
#define for_each_ext_string(n,tp) for(n = STRCOUNT; (int) n < (int) NUM_STRINGS(tp); n++)
#endif
#define ExtBoolname(tp,i,names) EXT_NAMES(tp, i, BOOLCOUNT, (i - (tp->num_Booleans - tp->ext_Booleans)), names)
#define ExtNumname(tp,i,names) EXT_NAMES(tp, i, NUMCOUNT, (i - (tp->num_Numbers - tp->ext_Numbers)) + tp->ext_Booleans, names)
#define ExtStrname(tp,i,names) EXT_NAMES(tp, i, STRCOUNT, (i - (tp->num_Strings - tp->ext_Strings)) + (tp->ext_Numbers + tp->ext_Booleans), names)
#ifdef NCURSES_INTERNALS
#if NCURSES_USE_DATABASE
#endif
#if NCURSES_USE_TERMCAP
#endif
#define MAX_USES 32
#define MAX_CROSSLINKS 16
#define for_entry_list(qp) for (qp = _nc_head; qp; qp = qp->next)
#define MAX_LINE 132
#define NULLHOOK (bool(*)(ENTRY *))0
#define WANTED(s) ((s) == ABSENT_STRING)
#define PRESENT(s) (((s) != ABSENT_STRING) && ((s) != CANCELLED_STRING))
#define ANDMISSING(p,q) { if (PRESENT(p) && !PRESENT(q)) _nc_warning(#p " but no " #q); }
#define PAIRED(p,q) { if (PRESENT(q) && !PRESENT(p)) _nc_warning(#q " but no " #p); if (PRESENT(p) && !PRESENT(q)) _nc_warning(#p " but no " #q); }
#if NCURSES_XNAMES
#endif
#endif
#ifdef __cplusplus
#endif
#endif
