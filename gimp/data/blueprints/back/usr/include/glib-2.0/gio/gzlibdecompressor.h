// GGHASH:VkHI6br8BWSXWTffOpVw47CNU5ArIllTXChLKUd4GeAw000008a4
#ifndef __G_ZLIB_DECOMPRESSOR_H__
#define __G_ZLIB_DECOMPRESSOR_H__ 
#if !defined (__GIO_GIO_H_INSIDE__) && !defined (GIO_COMPILATION)
#error "Only <gio/gio.h> can be included directly."
#endif
#include <gio/gconverter.h>
#include <gio/gfileinfo.h>
#define G_TYPE_ZLIB_DECOMPRESSOR (g_zlib_decompressor_get_type ())
#define G_ZLIB_DECOMPRESSOR(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_ZLIB_DECOMPRESSOR, GZlibDecompressor))
#define G_ZLIB_DECOMPRESSOR_CLASS(k) (G_TYPE_CHECK_CLASS_CAST((k), G_TYPE_ZLIB_DECOMPRESSOR, GZlibDecompressorClass))
#define G_IS_ZLIB_DECOMPRESSOR(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_ZLIB_DECOMPRESSOR))
#define G_IS_ZLIB_DECOMPRESSOR_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), G_TYPE_ZLIB_DECOMPRESSOR))
#define G_ZLIB_DECOMPRESSOR_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), G_TYPE_ZLIB_DECOMPRESSOR, GZlibDecompressorClass))
#endif
