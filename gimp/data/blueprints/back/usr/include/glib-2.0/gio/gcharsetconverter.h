// GGHASH:VE_EXwfTIcokWNccCzesr3rzhZulKW.It6xs8aAB7s.U000009d6
#ifndef __G_CHARSET_CONVERTER_H__
#define __G_CHARSET_CONVERTER_H__ 
#if !defined (__GIO_GIO_H_INSIDE__) && !defined (GIO_COMPILATION)
#error "Only <gio/gio.h> can be included directly."
#endif
#include <gio/gconverter.h>
#define G_TYPE_CHARSET_CONVERTER (g_charset_converter_get_type ())
#define G_CHARSET_CONVERTER(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_CHARSET_CONVERTER, GCharsetConverter))
#define G_CHARSET_CONVERTER_CLASS(k) (G_TYPE_CHECK_CLASS_CAST((k), G_TYPE_CHARSET_CONVERTER, GCharsetConverterClass))
#define G_IS_CHARSET_CONVERTER(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_CHARSET_CONVERTER))
#define G_IS_CHARSET_CONVERTER_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), G_TYPE_CHARSET_CONVERTER))
#define G_CHARSET_CONVERTER_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), G_TYPE_CHARSET_CONVERTER, GCharsetConverterClass))
#endif
