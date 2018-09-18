// GGHASH:VwWZsqFprZls6baxHR.n199AglbqUFbR7f2NMNRYNHg4000014da
#ifndef __G_FILE_OUTPUT_STREAM_H__
#define __G_FILE_OUTPUT_STREAM_H__ 
#if !defined (__GIO_GIO_H_INSIDE__) && !defined (GIO_COMPILATION)
#error "Only <gio/gio.h> can be included directly."
#endif
#include <gio/goutputstream.h>
#define G_TYPE_FILE_OUTPUT_STREAM (g_file_output_stream_get_type ())
#define G_FILE_OUTPUT_STREAM(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_FILE_OUTPUT_STREAM, GFileOutputStream))
#define G_FILE_OUTPUT_STREAM_CLASS(k) (G_TYPE_CHECK_CLASS_CAST((k), G_TYPE_FILE_OUTPUT_STREAM, GFileOutputStreamClass))
#define G_IS_FILE_OUTPUT_STREAM(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_FILE_OUTPUT_STREAM))
#define G_IS_FILE_OUTPUT_STREAM_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), G_TYPE_FILE_OUTPUT_STREAM))
#define G_FILE_OUTPUT_STREAM_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), G_TYPE_FILE_OUTPUT_STREAM, GFileOutputStreamClass))
#endif
