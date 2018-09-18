// GGHASH:VUDGqsSTdTlqp0GabkFjy_q13cnAS3FRjTH4nwdZXYPA000021e1
#ifndef __G_SCANNER_H__
#define __G_SCANNER_H__ 
#if !defined (__GLIB_H_INSIDE__) && !defined (GLIB_COMPILATION)
#error "Only <glib.h> can be included directly."
#endif
#include <glib/gdataset.h>
#include <glib/ghash.h>
#define G_CSET_A_2_Z "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
#define G_CSET_a_2_z "abcdefghijklmnopqrstuvwxyz"
#define G_CSET_DIGITS "0123456789"
#define G_CSET_LATINC "\300\301\302\303\304\305\306" "\307\310\311\312\313\314\315\316\317\320" "\321\322\323\324\325\326" "\330\331\332\333\334\335\336"
#define G_CSET_LATINS "\337\340\341\342\343\344\345\346" "\347\350\351\352\353\354\355\356\357\360" "\361\362\363\364\365\366" "\370\371\372\373\374\375\376\377"
#ifndef G_DISABLE_DEPRECATED
#define g_scanner_add_symbol(scanner,symbol,value) G_STMT_START { g_scanner_scope_add_symbol ((scanner), 0, (symbol), (value)); } G_STMT_END
#define g_scanner_remove_symbol(scanner,symbol) G_STMT_START { g_scanner_scope_remove_symbol ((scanner), 0, (symbol)); } G_STMT_END
#define g_scanner_foreach_symbol(scanner,func,data) G_STMT_START { g_scanner_scope_foreach_symbol ((scanner), 0, (func), (data)); } G_STMT_END
#define g_scanner_freeze_symbol_table(scanner) ((void)0)
#define g_scanner_thaw_symbol_table(scanner) ((void)0)
#endif
#endif
