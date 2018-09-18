// GGHASH:Vvk_HctcSzTIr.F0FSe6WneBr83Z16G9IFan7H2Fr1tI00000d6b
#ifndef __G_ICON_H__
#define __G_ICON_H__ 
#if !defined (__GIO_GIO_H_INSIDE__) && !defined (GIO_COMPILATION)
#error "Only <gio/gio.h> can be included directly."
#endif
#include <gio/giotypes.h>
#define G_TYPE_ICON (g_icon_get_type ())
#define G_ICON(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), G_TYPE_ICON, GIcon))
#define G_IS_ICON(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), G_TYPE_ICON))
#define G_ICON_GET_IFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), G_TYPE_ICON, GIconIface))
#endif
