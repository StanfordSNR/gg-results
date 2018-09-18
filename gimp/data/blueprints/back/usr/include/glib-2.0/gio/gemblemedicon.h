// GGHASH:VZ5k5kQoH0p1hafSFkLYL5o4jJrVBi7Ks7v2b1pZOmOU00000ae4
#ifndef __G_EMBLEMED_ICON_H__
#define __G_EMBLEMED_ICON_H__ 
#if !defined (__GIO_GIO_H_INSIDE__) && !defined (GIO_COMPILATION)
#error "Only <gio/gio.h> can be included directly."
#endif
#include <gio/gicon.h>
#include <gio/gemblem.h>
#define G_TYPE_EMBLEMED_ICON (g_emblemed_icon_get_type ())
#define G_EMBLEMED_ICON(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_EMBLEMED_ICON, GEmblemedIcon))
#define G_EMBLEMED_ICON_CLASS(k) (G_TYPE_CHECK_CLASS_CAST((k), G_TYPE_EMBLEMED_ICON, GEmblemedIconClass))
#define G_IS_EMBLEMED_ICON(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_EMBLEMED_ICON))
#define G_IS_EMBLEMED_ICON_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), G_TYPE_EMBLEMED_ICON))
#define G_EMBLEMED_ICON_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), G_TYPE_EMBLEMED_ICON, GEmblemedIconClass))
#endif
