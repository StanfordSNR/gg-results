// GGHASH:VYVmUdt4rTd1Nz7mo4XClBCJHu4FaaAjpQynB.Wr3YFQ000011b1
#ifndef __G_INET_ADDRESS_H__
#define __G_INET_ADDRESS_H__ 
#if !defined (__GIO_GIO_H_INSIDE__) && !defined (GIO_COMPILATION)
#error "Only <gio/gio.h> can be included directly."
#endif
#include <gio/giotypes.h>
#define G_TYPE_INET_ADDRESS (g_inet_address_get_type ())
#define G_INET_ADDRESS(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_INET_ADDRESS, GInetAddress))
#define G_INET_ADDRESS_CLASS(k) (G_TYPE_CHECK_CLASS_CAST((k), G_TYPE_INET_ADDRESS, GInetAddressClass))
#define G_IS_INET_ADDRESS(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_INET_ADDRESS))
#define G_IS_INET_ADDRESS_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), G_TYPE_INET_ADDRESS))
#define G_INET_ADDRESS_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), G_TYPE_INET_ADDRESS, GInetAddressClass))
#endif
