// GGHASH:Vee7z2EmpHYknyvmcWY_qKI98hj8HgL5azzpbCWiZVMo00000c27
#ifndef __G_INET_SOCKET_ADDRESS_H__
#define __G_INET_SOCKET_ADDRESS_H__ 
#if !defined (__GIO_GIO_H_INSIDE__) && !defined (GIO_COMPILATION)
#error "Only <gio/gio.h> can be included directly."
#endif
#include <gio/gsocketaddress.h>
#define G_TYPE_INET_SOCKET_ADDRESS (g_inet_socket_address_get_type ())
#define G_INET_SOCKET_ADDRESS(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_INET_SOCKET_ADDRESS, GInetSocketAddress))
#define G_INET_SOCKET_ADDRESS_CLASS(k) (G_TYPE_CHECK_CLASS_CAST((k), G_TYPE_INET_SOCKET_ADDRESS, GInetSocketAddressClass))
#define G_IS_INET_SOCKET_ADDRESS(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_INET_SOCKET_ADDRESS))
#define G_IS_INET_SOCKET_ADDRESS_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), G_TYPE_INET_SOCKET_ADDRESS))
#define G_INET_SOCKET_ADDRESS_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), G_TYPE_INET_SOCKET_ADDRESS, GInetSocketAddressClass))
#endif
