// GGHASH:VfPNYk8fyZg1Nx45ZZHfa3BryqIrzYLNDqNRAry8P1pU00000c2f
#ifndef __G_INET_ADDRESS_MASK_H__
#define __G_INET_ADDRESS_MASK_H__ 
#if !defined (__GIO_GIO_H_INSIDE__) && !defined (GIO_COMPILATION)
#error "Only <gio/gio.h> can be included directly."
#endif
#include <gio/giotypes.h>
#define G_TYPE_INET_ADDRESS_MASK (g_inet_address_mask_get_type ())
#define G_INET_ADDRESS_MASK(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_INET_ADDRESS_MASK, GInetAddressMask))
#define G_INET_ADDRESS_MASK_CLASS(k) (G_TYPE_CHECK_CLASS_CAST((k), G_TYPE_INET_ADDRESS_MASK, GInetAddressMaskClass))
#define G_IS_INET_ADDRESS_MASK(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_INET_ADDRESS_MASK))
#define G_IS_INET_ADDRESS_MASK_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), G_TYPE_INET_ADDRESS_MASK))
#define G_INET_ADDRESS_MASK_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), G_TYPE_INET_ADDRESS_MASK, GInetAddressMaskClass))
#endif
