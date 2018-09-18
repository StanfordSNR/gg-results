// GGHASH:VQUNg1JAsipOqvA.e6A6NwDok2wqO0MJalB4DUG.Leuk000006ba
#ifndef __G_SIMPLE_IO_STREAM_H__
#define __G_SIMPLE_IO_STREAM_H__ 
#if !defined (__GIO_GIO_H_INSIDE__) && !defined (GIO_COMPILATION)
#error "Only <gio/gio.h> can be included directly."
#endif
#include <gio/giotypes.h>
#include <gio/giostream.h>
#define G_TYPE_SIMPLE_IO_STREAM (g_simple_io_stream_get_type ())
#define G_SIMPLE_IO_STREAM(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), G_TYPE_SIMPLE_IO_STREAM, GSimpleIOStream))
#define G_IS_SIMPLE_IO_STREAM(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), G_TYPE_SIMPLE_IO_STREAM))
#endif
