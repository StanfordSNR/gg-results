// GGHASH:VJJ81GA8h4vTY7ThCMwE8lNqETU38FkPPs6kx2UG9mOQ00000dcb
#ifndef __G_SIMPLE_PROXY_RESOLVER_H__
#define __G_SIMPLE_PROXY_RESOLVER_H__ 
#if !defined (__GIO_GIO_H_INSIDE__) && !defined (GIO_COMPILATION)
#error "Only <gio/gio.h> can be included directly."
#endif
#include <gio/gproxyresolver.h>
#define G_TYPE_SIMPLE_PROXY_RESOLVER (g_simple_proxy_resolver_get_type ())
#define G_SIMPLE_PROXY_RESOLVER(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_SIMPLE_PROXY_RESOLVER, GSimpleProxyResolver))
#define G_SIMPLE_PROXY_RESOLVER_CLASS(k) (G_TYPE_CHECK_CLASS_CAST((k), G_TYPE_SIMPLE_PROXY_RESOLVER, GSimpleProxyResolverClass))
#define G_IS_SIMPLE_PROXY_RESOLVER(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_SIMPLE_PROXY_RESOLVER))
#define G_IS_SIMPLE_PROXY_RESOLVER_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), G_TYPE_SIMPLE_PROXY_RESOLVER))
#define G_SIMPLE_PROXY_RESOLVER_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), G_TYPE_SIMPLE_PROXY_RESOLVER, GSimpleProxyResolverClass))
#endif