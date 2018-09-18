// GGHASH:VcEWFMqTGUFiKycApdlRdSWJOTodnK5KaD8Kd.c_e4T800000fe3
#ifndef __G_PROXY_H__
#define __G_PROXY_H__ 
#if !defined (__GIO_GIO_H_INSIDE__) && !defined (GIO_COMPILATION)
#error "Only <gio/gio.h> can be included directly."
#endif
#include <gio/giotypes.h>
#define G_TYPE_PROXY (g_proxy_get_type ())
#define G_PROXY(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_PROXY, GProxy))
#define G_IS_PROXY(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_PROXY))
#define G_PROXY_GET_IFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), G_TYPE_PROXY, GProxyInterface))
#define G_PROXY_EXTENSION_POINT_NAME "gio-proxy"
#endif
