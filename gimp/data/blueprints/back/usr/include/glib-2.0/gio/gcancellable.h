// GGHASH:V8TcyYRLlZHGyV2OW_Z9MJBoGSltk6Uy8FFV4.XiOYg000000fda
#ifndef __G_CANCELLABLE_H__
#define __G_CANCELLABLE_H__ 
#if !defined (__GIO_GIO_H_INSIDE__) && !defined (GIO_COMPILATION)
#error "Only <gio/gio.h> can be included directly."
#endif
#include <gio/giotypes.h>
#define G_TYPE_CANCELLABLE (g_cancellable_get_type ())
#define G_CANCELLABLE(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_CANCELLABLE, GCancellable))
#define G_CANCELLABLE_CLASS(k) (G_TYPE_CHECK_CLASS_CAST((k), G_TYPE_CANCELLABLE, GCancellableClass))
#define G_IS_CANCELLABLE(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_CANCELLABLE))
#define G_IS_CANCELLABLE_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), G_TYPE_CANCELLABLE))
#define G_CANCELLABLE_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), G_TYPE_CANCELLABLE, GCancellableClass))
#endif
