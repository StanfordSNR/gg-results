// GGHASH:VoMWjOisy.EE9NvcvwUJk3wxPED9v11L8_ez5EAvFsGY00000e57
#ifndef __G_LOADABLE_ICON_H__
#define __G_LOADABLE_ICON_H__ 
#if !defined (__GIO_GIO_H_INSIDE__) && !defined (GIO_COMPILATION)
#error "Only <gio/gio.h> can be included directly."
#endif
#include <gio/giotypes.h>
#define G_TYPE_LOADABLE_ICON (g_loadable_icon_get_type ())
#define G_LOADABLE_ICON(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), G_TYPE_LOADABLE_ICON, GLoadableIcon))
#define G_IS_LOADABLE_ICON(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), G_TYPE_LOADABLE_ICON))
#define G_LOADABLE_ICON_GET_IFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), G_TYPE_LOADABLE_ICON, GLoadableIconIface))
#endif
