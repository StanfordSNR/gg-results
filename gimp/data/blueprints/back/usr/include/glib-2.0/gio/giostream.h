// GGHASH:VywVEm0INZdaxIlsPDJXiw6D19.OHVXoKhL2TxXYVrdY000012fe
#ifndef __G_IO_STREAM_H__
#define __G_IO_STREAM_H__ 
#if !defined (__GIO_GIO_H_INSIDE__) && !defined (GIO_COMPILATION)
#error "Only <gio/gio.h> can be included directly."
#endif
#include <gio/ginputstream.h>
#include <gio/goutputstream.h>
#include <gio/gcancellable.h>
#include <gio/gioerror.h>
#define G_TYPE_IO_STREAM (g_io_stream_get_type ())
#define G_IO_STREAM(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_IO_STREAM, GIOStream))
#define G_IO_STREAM_CLASS(k) (G_TYPE_CHECK_CLASS_CAST((k), G_TYPE_IO_STREAM, GIOStreamClass))
#define G_IS_IO_STREAM(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_IO_STREAM))
#define G_IS_IO_STREAM_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), G_TYPE_IO_STREAM))
#define G_IO_STREAM_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), G_TYPE_IO_STREAM, GIOStreamClass))
#endif
