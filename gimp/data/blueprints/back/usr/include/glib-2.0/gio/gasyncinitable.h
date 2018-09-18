// GGHASH:VyYK2c2PwRKDiB717ruNeE4Co0e9obKxsyVHu66.kVLg00001103
#ifndef __G_ASYNC_INITABLE_H__
#define __G_ASYNC_INITABLE_H__ 
#if !defined (__GIO_GIO_H_INSIDE__) && !defined (GIO_COMPILATION)
#error "Only <gio/gio.h> can be included directly."
#endif
#include <gio/giotypes.h>
#include <gio/ginitable.h>
#define G_TYPE_ASYNC_INITABLE (g_async_initable_get_type ())
#define G_ASYNC_INITABLE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), G_TYPE_ASYNC_INITABLE, GAsyncInitable))
#define G_IS_ASYNC_INITABLE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), G_TYPE_ASYNC_INITABLE))
#define G_ASYNC_INITABLE_GET_IFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), G_TYPE_ASYNC_INITABLE, GAsyncInitableIface))
#define G_TYPE_IS_ASYNC_INITABLE(type) (g_type_is_a ((type), G_TYPE_ASYNC_INITABLE))
#endif
