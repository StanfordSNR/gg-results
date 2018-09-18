// GGHASH:VK6l5gk_ars52QIcEJ4MK.i0nhs05w759UEfy0qAKitk00000b45
#ifndef __G_CONVERTER_H__
#define __G_CONVERTER_H__ 
#if !defined (__GIO_GIO_H_INSIDE__) && !defined (GIO_COMPILATION)
#error "Only <gio/gio.h> can be included directly."
#endif
#include <gio/giotypes.h>
#define G_TYPE_CONVERTER (g_converter_get_type ())
#define G_CONVERTER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), G_TYPE_CONVERTER, GConverter))
#define G_IS_CONVERTER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), G_TYPE_CONVERTER))
#define G_CONVERTER_GET_IFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), G_TYPE_CONVERTER, GConverterIface))
#endif
