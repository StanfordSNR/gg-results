// GGHASH:Vcz6RtLZSBx2JcjK7b3xey_KfUmygG.RiLnTv11GzSlc00000c5e
#ifndef __G_PROXY_ADDRESS_H__
#define __G_PROXY_ADDRESS_H__ 
#if !defined (__GIO_GIO_H_INSIDE__) && !defined (GIO_COMPILATION)
#error "Only <gio/gio.h> can be included directly."
#endif
#include <gio/ginetsocketaddress.h>
#define G_TYPE_PROXY_ADDRESS (g_proxy_address_get_type ())
#define G_PROXY_ADDRESS(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_PROXY_ADDRESS, GProxyAddress))
#define G_PROXY_ADDRESS_CLASS(k) (G_TYPE_CHECK_CLASS_CAST((k), G_TYPE_PROXY_ADDRESS, GProxyAddressClass))
#define G_IS_PROXY_ADDRESS(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_PROXY_ADDRESS))
#define G_IS_PROXY_ADDRESS_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), G_TYPE_PROXY_ADDRESS))
#define G_PROXY_ADDRESS_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), G_TYPE_PROXY_ADDRESS, GProxyAddressClass))
#endif
