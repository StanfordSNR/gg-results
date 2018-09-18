// GGHASH:Vlr0C45NoZra_CVfGDh99xg0oJ00o5qy6oVdrDuFm9KA00000f5d
#ifndef __G_MEMORY_OUTPUT_STREAM_H__
#define __G_MEMORY_OUTPUT_STREAM_H__ 
#if !defined (__GIO_GIO_H_INSIDE__) && !defined (GIO_COMPILATION)
#error "Only <gio/gio.h> can be included directly."
#endif
#include <gio/goutputstream.h>
#define G_TYPE_MEMORY_OUTPUT_STREAM (g_memory_output_stream_get_type ())
#define G_MEMORY_OUTPUT_STREAM(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_MEMORY_OUTPUT_STREAM, GMemoryOutputStream))
#define G_MEMORY_OUTPUT_STREAM_CLASS(k) (G_TYPE_CHECK_CLASS_CAST((k), G_TYPE_MEMORY_OUTPUT_STREAM, GMemoryOutputStreamClass))
#define G_IS_MEMORY_OUTPUT_STREAM(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_MEMORY_OUTPUT_STREAM))
#define G_IS_MEMORY_OUTPUT_STREAM_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), G_TYPE_MEMORY_OUTPUT_STREAM))
#define G_MEMORY_OUTPUT_STREAM_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), G_TYPE_MEMORY_OUTPUT_STREAM, GMemoryOutputStreamClass))
#endif
