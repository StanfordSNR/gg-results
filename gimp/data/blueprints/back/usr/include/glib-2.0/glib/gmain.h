// GGHASH:V9odSLMwsWBgQJRqPgSmk0jedtgM4w1GMZXfG3E9zzUQ00005e32
#ifndef __G_MAIN_H__
#define __G_MAIN_H__ 
#if !defined (__GLIB_H_INSIDE__) && !defined (GLIB_COMPILATION)
#error "Only <glib.h> can be included directly."
#endif
#include <glib/gpoll.h>
#include <glib/gslist.h>
#include <glib/gthread.h>
#define G_PRIORITY_HIGH -100
#define G_PRIORITY_DEFAULT 0
#define G_PRIORITY_HIGH_IDLE 100
#define G_PRIORITY_DEFAULT_IDLE 200
#define G_PRIORITY_LOW 300
#define G_SOURCE_REMOVE FALSE
#define G_SOURCE_CONTINUE TRUE
#ifdef G_OS_UNIX
#endif
#define g_clear_handle_id(tag_ptr,clear_func) G_STMT_START { G_STATIC_ASSERT (sizeof *(tag_ptr) == sizeof (guint)); guint *_tag_ptr = (guint *) (tag_ptr); guint _handle_id; _handle_id = *_tag_ptr; if (_handle_id > 0) { *_tag_ptr = 0; clear_func (_handle_id); } } G_STMT_END
#ifdef G_OS_UNIX
#endif
#endif
