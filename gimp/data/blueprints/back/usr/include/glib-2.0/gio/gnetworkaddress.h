// GGHASH:VWXqoGB94O0GCA8_CwG78b1N5gd542m3LsELob7hv_Kw00000b8c
#ifndef __G_NETWORK_ADDRESS_H__
#define __G_NETWORK_ADDRESS_H__ 
#if !defined (__GIO_GIO_H_INSIDE__) && !defined (GIO_COMPILATION)
#error "Only <gio/gio.h> can be included directly."
#endif
#include <gio/giotypes.h>
#define G_TYPE_NETWORK_ADDRESS (g_network_address_get_type ())
#define G_NETWORK_ADDRESS(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_NETWORK_ADDRESS, GNetworkAddress))
#define G_NETWORK_ADDRESS_CLASS(k) (G_TYPE_CHECK_CLASS_CAST((k), G_TYPE_NETWORK_ADDRESS, GNetworkAddressClass))
#define G_IS_NETWORK_ADDRESS(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_NETWORK_ADDRESS))
#define G_IS_NETWORK_ADDRESS_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), G_TYPE_NETWORK_ADDRESS))
#define G_NETWORK_ADDRESS_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), G_TYPE_NETWORK_ADDRESS, GNetworkAddressClass))
#endif
