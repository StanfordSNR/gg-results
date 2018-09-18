// GGHASH:VMtyHZuGu8nsRRKOj.R9xKm7xHHm8GEL66gIakdCO4OI00002274
#ifndef __G_RESOLVER_H__
#define __G_RESOLVER_H__ 
#if !defined (__GIO_GIO_H_INSIDE__) && !defined (GIO_COMPILATION)
#error "Only <gio/gio.h> can be included directly."
#endif
#include <gio/giotypes.h>
#define G_TYPE_RESOLVER (g_resolver_get_type ())
#define G_RESOLVER(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_RESOLVER, GResolver))
#define G_RESOLVER_CLASS(k) (G_TYPE_CHECK_CLASS_CAST((k), G_TYPE_RESOLVER, GResolverClass))
#define G_IS_RESOLVER(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_RESOLVER))
#define G_IS_RESOLVER_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), G_TYPE_RESOLVER))
#define G_RESOLVER_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), G_TYPE_RESOLVER, GResolverClass))
#define G_RESOLVER_ERROR (g_resolver_error_quark ())
#endif
