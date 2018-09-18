// GGHASH:VvBdhn7BCmf0cpiTQllbmW_tbJJdgLwRkAQ3pqPiZ_BE00000b5d
#ifndef __G_INITABLE_H__
#define __G_INITABLE_H__ 
#if !defined (__GIO_GIO_H_INSIDE__) && !defined (GIO_COMPILATION)
#error "Only <gio/gio.h> can be included directly."
#endif
#include <gio/giotypes.h>
#define G_TYPE_INITABLE (g_initable_get_type ())
#define G_INITABLE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), G_TYPE_INITABLE, GInitable))
#define G_IS_INITABLE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), G_TYPE_INITABLE))
#define G_INITABLE_GET_IFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), G_TYPE_INITABLE, GInitableIface))
#define G_TYPE_IS_INITABLE(type) (g_type_is_a ((type), G_TYPE_INITABLE))
#endif
