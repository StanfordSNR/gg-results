// GGHASH:VgpB6FzemEo48SA6.7Fu31fLEE_M50UcJv9I6vC4DLSU00000f8f
#ifndef __G_DEPRECATED_MAIN_H__
#define __G_DEPRECATED_MAIN_H__ 
#if !defined (__GLIB_H_INSIDE__) && !defined (GLIB_COMPILATION)
#error "Only <glib.h> can be included directly."
#endif
#include <glib/gmain.h>
#ifndef G_DISABLE_DEPRECATED
#define g_main_new(is_running) g_main_loop_new (NULL, is_running)
#define g_main_run(loop) g_main_loop_run(loop)
#define g_main_quit(loop) g_main_loop_quit(loop)
#define g_main_destroy(loop) g_main_loop_unref(loop)
#define g_main_is_running(loop) g_main_loop_is_running(loop)
#define g_main_iteration(may_block) g_main_context_iteration (NULL, may_block)
#define g_main_pending() g_main_context_pending (NULL)
#define g_main_set_poll_func(func) g_main_context_set_poll_func (NULL, func)
#endif
#endif
