// GGHASH:VuVOyy7HWvDK2uKPbiTtfQDG0JHgwem6fWYErjvWVvYo00000a53
#ifndef __G_THEMED_ICON_H__
#define __G_THEMED_ICON_H__ 
#if !defined (__GIO_GIO_H_INSIDE__) && !defined (GIO_COMPILATION)
#error "Only <gio/gio.h> can be included directly."
#endif
#include <gio/giotypes.h>
#define G_TYPE_THEMED_ICON (g_themed_icon_get_type ())
#define G_THEMED_ICON(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_THEMED_ICON, GThemedIcon))
#define G_THEMED_ICON_CLASS(k) (G_TYPE_CHECK_CLASS_CAST((k), G_TYPE_THEMED_ICON, GThemedIconClass))
#define G_IS_THEMED_ICON(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_THEMED_ICON))
#define G_IS_THEMED_ICON_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), G_TYPE_THEMED_ICON))
#define G_THEMED_ICON_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), G_TYPE_THEMED_ICON, GThemedIconClass))
#endif
