// GGHASH:VCWn23pebSXeoi4FdqFOW5a8PtvVO.Jk3NKTwtGoC8Jw00000ef5
#ifndef __G_POLLABLE_INPUT_STREAM_H__
#define __G_POLLABLE_INPUT_STREAM_H__ 
#if !defined (__GIO_GIO_H_INSIDE__) && !defined (GIO_COMPILATION)
#error "Only <gio/gio.h> can be included directly."
#endif
#include <gio/gio.h>
#define G_TYPE_POLLABLE_INPUT_STREAM (g_pollable_input_stream_get_type ())
#define G_POLLABLE_INPUT_STREAM(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), G_TYPE_POLLABLE_INPUT_STREAM, GPollableInputStream))
#define G_IS_POLLABLE_INPUT_STREAM(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), G_TYPE_POLLABLE_INPUT_STREAM))
#define G_POLLABLE_INPUT_STREAM_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), G_TYPE_POLLABLE_INPUT_STREAM, GPollableInputStreamInterface))
#endif
