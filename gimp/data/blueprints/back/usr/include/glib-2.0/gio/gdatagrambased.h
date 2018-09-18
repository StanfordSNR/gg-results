// GGHASH:VMuS4TULY4cQxM_EGlIV8h5zvm8ricsJtXN35q.D.rdg00001a05
#ifndef __G_DATAGRAM_BASED_H__
#define __G_DATAGRAM_BASED_H__ 
#if !defined (__GIO_GIO_H_INSIDE__) && !defined (GIO_COMPILATION)
#error "Only <gio/gio.h> can be included directly."
#endif
#include <gio/giotypes.h>
#define G_TYPE_DATAGRAM_BASED (g_datagram_based_get_type ())
#define G_DATAGRAM_BASED(inst) (G_TYPE_CHECK_INSTANCE_CAST ((inst), G_TYPE_DATAGRAM_BASED, GDatagramBased))
#define G_IS_DATAGRAM_BASED(inst) (G_TYPE_CHECK_INSTANCE_TYPE ((inst), G_TYPE_DATAGRAM_BASED))
#define G_DATAGRAM_BASED_GET_IFACE(inst) (G_TYPE_INSTANCE_GET_INTERFACE ((inst), G_TYPE_DATAGRAM_BASED, GDatagramBasedInterface))
#define G_TYPE_IS_DATAGRAM_BASED(type) (g_type_is_a ((type), G_TYPE_DATAGRAM_BASED))
#endif
