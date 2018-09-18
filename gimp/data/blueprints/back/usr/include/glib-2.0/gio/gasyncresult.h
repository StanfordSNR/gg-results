// GGHASH:VPQH35OHjXfUblLC0fBe0P8yrGeYf4W8ijJoNINXA.zQ00000b01
#ifndef __G_ASYNC_RESULT_H__
#define __G_ASYNC_RESULT_H__ 
#if !defined (__GIO_GIO_H_INSIDE__) && !defined (GIO_COMPILATION)
#error "Only <gio/gio.h> can be included directly."
#endif
#include <gio/giotypes.h>
#define G_TYPE_ASYNC_RESULT (g_async_result_get_type ())
#define G_ASYNC_RESULT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), G_TYPE_ASYNC_RESULT, GAsyncResult))
#define G_IS_ASYNC_RESULT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), G_TYPE_ASYNC_RESULT))
#define G_ASYNC_RESULT_GET_IFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), G_TYPE_ASYNC_RESULT, GAsyncResultIface))
#endif
