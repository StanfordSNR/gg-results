// GGHASH:V30I_c_Ir2gYXk0C_RIQmdN3kGfBgwQLPusjNj0zdN4o000012f6
#ifndef __GDK_CURSOR_H__
#define __GDK_CURSOR_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GDK_H_INSIDE__) && !defined (GDK_COMPILATION)
#error "Only <gdk/gdk.h> can be included directly."
#endif
#include <gdk/gdktypes.h>
#include <gdk-pixbuf/gdk-pixbuf.h>
#define GDK_TYPE_CURSOR (gdk_cursor_get_type ())
#ifndef GDK_MULTIHEAD_SAFE
#endif
#ifndef GDK_DISABLE_DEPRECATED
#define gdk_cursor_destroy gdk_cursor_unref
#endif
#endif
