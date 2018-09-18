// GGHASH:VIRTjias0VE01GNoj6T5UucEvnhYVGpWz.E4Of3PH3K800000d41
#ifndef __G_PROXY_RESOLVER_H__
#define __G_PROXY_RESOLVER_H__ 
#if !defined (__GIO_GIO_H_INSIDE__) && !defined (GIO_COMPILATION)
#error "Only <gio/gio.h> can be included directly."
#endif
#include <gio/giotypes.h>
#define G_TYPE_PROXY_RESOLVER (g_proxy_resolver_get_type ())
#define G_PROXY_RESOLVER(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_PROXY_RESOLVER, GProxyResolver))
#define G_IS_PROXY_RESOLVER(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_PROXY_RESOLVER))
#define G_PROXY_RESOLVER_GET_IFACE(o) (G_TYPE_INSTANCE_GET_INTERFACE ((o), G_TYPE_PROXY_RESOLVER, GProxyResolverInterface))
#define G_PROXY_RESOLVER_EXTENSION_POINT_NAME "gio-proxy-resolver"
#endif
