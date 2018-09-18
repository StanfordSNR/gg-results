// GGHASH:Vc_rxQhj7OBywfri_qwfboK6.whP6jP2eTNLFAe4d6GU00000c0e
#ifndef __G_SOCKET_ADDRESS_H__
#define __G_SOCKET_ADDRESS_H__ 
#if !defined (__GIO_GIO_H_INSIDE__) && !defined (GIO_COMPILATION)
#error "Only <gio/gio.h> can be included directly."
#endif
#include <gio/giotypes.h>
#define G_TYPE_SOCKET_ADDRESS (g_socket_address_get_type ())
#define G_SOCKET_ADDRESS(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_SOCKET_ADDRESS, GSocketAddress))
#define G_SOCKET_ADDRESS_CLASS(k) (G_TYPE_CHECK_CLASS_CAST((k), G_TYPE_SOCKET_ADDRESS, GSocketAddressClass))
#define G_IS_SOCKET_ADDRESS(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_SOCKET_ADDRESS))
#define G_IS_SOCKET_ADDRESS_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), G_TYPE_SOCKET_ADDRESS))
#define G_SOCKET_ADDRESS_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), G_TYPE_SOCKET_ADDRESS, GSocketAddressClass))
#endif
