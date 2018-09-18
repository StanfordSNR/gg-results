// GGHASH:VBwm2Grd0cJsj3O5ZxsQUYCaFtSrirPWhTgpWTj0T6VA0000092e
#ifndef __G_ZLIB_COMPRESSOR_H__
#define __G_ZLIB_COMPRESSOR_H__ 
#if !defined (__GIO_GIO_H_INSIDE__) && !defined (GIO_COMPILATION)
#error "Only <gio/gio.h> can be included directly."
#endif
#include <gio/gconverter.h>
#include <gio/gfileinfo.h>
#define G_TYPE_ZLIB_COMPRESSOR (g_zlib_compressor_get_type ())
#define G_ZLIB_COMPRESSOR(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_ZLIB_COMPRESSOR, GZlibCompressor))
#define G_ZLIB_COMPRESSOR_CLASS(k) (G_TYPE_CHECK_CLASS_CAST((k), G_TYPE_ZLIB_COMPRESSOR, GZlibCompressorClass))
#define G_IS_ZLIB_COMPRESSOR(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_ZLIB_COMPRESSOR))
#define G_IS_ZLIB_COMPRESSOR_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), G_TYPE_ZLIB_COMPRESSOR))
#define G_ZLIB_COMPRESSOR_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), G_TYPE_ZLIB_COMPRESSOR, GZlibCompressorClass))
#endif
