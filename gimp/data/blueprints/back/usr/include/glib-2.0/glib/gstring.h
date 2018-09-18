// GGHASH:VMDwjZieYRy56l66OxNvHwiZSt5nR6fW4qHkATe05FTY00001f24
#ifndef __G_STRING_H__
#define __G_STRING_H__ 
#if !defined (__GLIB_H_INSIDE__) && !defined (GLIB_COMPILATION)
#error "Only <glib.h> can be included directly."
#endif
#include <glib/gtypes.h>
#include <glib/gunicode.h>
#include <glib/gbytes.h>
#include <glib/gutils.h>
#ifdef G_CAN_INLINE
#define g_string_append_c(gstr,c) g_string_append_c_inline (gstr, c)
#endif
#ifndef G_DISABLE_DEPRECATED
#define g_string_sprintf g_string_printf
#define g_string_sprintfa g_string_append_printf
#endif
#endif
