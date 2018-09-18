// GGHASH:VA6BMdWOGtGBQR0tnfirnJ6dHpyXPDUE_Hpis0YEGYfw0000089f
#ifndef __GDK_PRIVATE_H__
#define __GDK_PRIVATE_H__ 
#include <gdk/gdk.h>
#define GDK_PARENT_RELATIVE_BG ((GdkPixmap *)1L)
#define GDK_NO_BG ((GdkPixmap *)2L)
#ifndef GDK_COMPILATION
#define GDK_WINDOW_TYPE(d) (gdk_window_get_window_type (GDK_WINDOW (d)))
#define GDK_WINDOW_DESTROYED(d) (gdk_window_is_destroyed (GDK_WINDOW (d)))
#endif
#define GDK_PANGO_UNITS_OVERFLOWS(x,y) (G_UNLIKELY ( (y) >= PANGO_PIXELS (G_MAXINT-PANGO_SCALE)/2 || (x) >= PANGO_PIXELS (G_MAXINT-PANGO_SCALE)/2 || (y) <=-PANGO_PIXELS (G_MAXINT-PANGO_SCALE)/2 || (x) <=-PANGO_PIXELS (G_MAXINT-PANGO_SCALE)/2))
#endif
