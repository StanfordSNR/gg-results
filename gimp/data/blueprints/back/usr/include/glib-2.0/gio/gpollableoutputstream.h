// GGHASH:VZ5PYSEgpVrZ53HRo.6b5KJM4OA1V8BD62a7ZyGh5eyQ00000f3d
#ifndef __G_POLLABLE_OUTPUT_STREAM_H__
#define __G_POLLABLE_OUTPUT_STREAM_H__ 
#if !defined (__GIO_GIO_H_INSIDE__) && !defined (GIO_COMPILATION)
#error "Only <gio/gio.h> can be included directly."
#endif
#include <gio/gio.h>
#define G_TYPE_POLLABLE_OUTPUT_STREAM (g_pollable_output_stream_get_type ())
#define G_POLLABLE_OUTPUT_STREAM(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), G_TYPE_POLLABLE_OUTPUT_STREAM, GPollableOutputStream))
#define G_IS_POLLABLE_OUTPUT_STREAM(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), G_TYPE_POLLABLE_OUTPUT_STREAM))
#define G_POLLABLE_OUTPUT_STREAM_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), G_TYPE_POLLABLE_OUTPUT_STREAM, GPollableOutputStreamInterface))
#endif
