// GGHASH:VWhEvFwy3gLy4JHLu_6lpTF0RmKJTdZDTj2cGkcBnNsU00001230
#ifndef __G_FILE_INPUT_STREAM_H__
#define __G_FILE_INPUT_STREAM_H__ 
#if !defined (__GIO_GIO_H_INSIDE__) && !defined (GIO_COMPILATION)
#error "Only <gio/gio.h> can be included directly."
#endif
#include <gio/ginputstream.h>
#define G_TYPE_FILE_INPUT_STREAM (g_file_input_stream_get_type ())
#define G_FILE_INPUT_STREAM(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_FILE_INPUT_STREAM, GFileInputStream))
#define G_FILE_INPUT_STREAM_CLASS(k) (G_TYPE_CHECK_CLASS_CAST((k), G_TYPE_FILE_INPUT_STREAM, GFileInputStreamClass))
#define G_IS_FILE_INPUT_STREAM(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_FILE_INPUT_STREAM))
#define G_IS_FILE_INPUT_STREAM_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), G_TYPE_FILE_INPUT_STREAM))
#define G_FILE_INPUT_STREAM_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), G_TYPE_FILE_INPUT_STREAM, GFileInputStreamClass))
#endif
