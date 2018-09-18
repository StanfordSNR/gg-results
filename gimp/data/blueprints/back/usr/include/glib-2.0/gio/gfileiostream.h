// GGHASH:V90dlSzupYjc8EaOmy0ClrIzkkpgs_rbGFQ6uUKNqZ3Q000013b1
#ifndef __G_FILE_IO_STREAM_H__
#define __G_FILE_IO_STREAM_H__ 
#if !defined (__GIO_GIO_H_INSIDE__) && !defined (GIO_COMPILATION)
#error "Only <gio/gio.h> can be included directly."
#endif
#include <gio/giostream.h>
#define G_TYPE_FILE_IO_STREAM (g_file_io_stream_get_type ())
#define G_FILE_IO_STREAM(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_FILE_IO_STREAM, GFileIOStream))
#define G_FILE_IO_STREAM_CLASS(k) (G_TYPE_CHECK_CLASS_CAST((k), G_TYPE_FILE_IO_STREAM, GFileIOStreamClass))
#define G_IS_FILE_IO_STREAM(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_FILE_IO_STREAM))
#define G_IS_FILE_IO_STREAM_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), G_TYPE_FILE_IO_STREAM))
#define G_FILE_IO_STREAM_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), G_TYPE_FILE_IO_STREAM, GFileIOStreamClass))
#endif
