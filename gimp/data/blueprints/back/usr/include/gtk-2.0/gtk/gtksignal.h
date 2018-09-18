// GGHASH:V8ZxsM8R9yLbA0CDthUUi9UsGXFutSWnavcbsQpEz_AQ00001bda
#ifndef GTK_DISABLE_DEPRECATED
#ifndef __GTK_SIGNAL_H__
#define __GTK_SIGNAL_H__ 
#include <gtk/gtkenums.h>
#include <gtk/gtktypeutils.h>
#include <gtk/gtkobject.h>
#include <gtk/gtkmarshal.h>
#define gtk_signal_default_marshaller g_cclosure_marshal_VOID__VOID
#define GTK_SIGNAL_OFFSET G_STRUCT_OFFSET
#define gtk_signal_lookup(name,object_type) g_signal_lookup ((name), (object_type))
#define gtk_signal_name(signal_id) g_signal_name (signal_id)
#define gtk_signal_emit_stop(object,signal_id) g_signal_stop_emission ((object), (signal_id), 0)
#define gtk_signal_connect(object,name,func,func_data) gtk_signal_connect_full ((object), (name), (func), NULL, (func_data), NULL, 0, 0)
#define gtk_signal_connect_after(object,name,func,func_data) gtk_signal_connect_full ((object), (name), (func), NULL, (func_data), NULL, 0, 1)
#define gtk_signal_connect_object(object,name,func,slot_object) gtk_signal_connect_full ((object), (name), (func), NULL, (slot_object), NULL, 1, 0)
#define gtk_signal_connect_object_after(object,name,func,slot_object) gtk_signal_connect_full ((object), (name), (func), NULL, (slot_object), NULL, 1, 1)
#define gtk_signal_disconnect(object,handler_id) g_signal_handler_disconnect ((object), (handler_id))
#define gtk_signal_handler_block(object,handler_id) g_signal_handler_block ((object), (handler_id))
#define gtk_signal_handler_unblock(object,handler_id) g_signal_handler_unblock ((object), (handler_id))
#define gtk_signal_disconnect_by_func(object,func,data) gtk_signal_compat_matched ((object), (func), (data), (GSignalMatchType)(G_SIGNAL_MATCH_FUNC | G_SIGNAL_MATCH_DATA), 0)
#define gtk_signal_disconnect_by_data(object,data) gtk_signal_compat_matched ((object), 0, (data), G_SIGNAL_MATCH_DATA, 0)
#define gtk_signal_handler_block_by_func(object,func,data) gtk_signal_compat_matched ((object), (func), (data), (GSignalMatchType)(G_SIGNAL_MATCH_FUNC | G_SIGNAL_MATCH_DATA), 1)
#define gtk_signal_handler_block_by_data(object,data) gtk_signal_compat_matched ((object), 0, (data), G_SIGNAL_MATCH_DATA, 1)
#define gtk_signal_handler_unblock_by_func(object,func,data) gtk_signal_compat_matched ((object), (func), (data), (GSignalMatchType)(G_SIGNAL_MATCH_FUNC | G_SIGNAL_MATCH_DATA), 2)
#define gtk_signal_handler_unblock_by_data(object,data) gtk_signal_compat_matched ((object), 0, (data), G_SIGNAL_MATCH_DATA, 2)
#define gtk_signal_handler_pending(object,signal_id,may_be_blocked) g_signal_has_handler_pending ((object), (signal_id), 0, (may_be_blocked))
#define gtk_signal_handler_pending_by_func(object,signal_id,may_be_blocked,func,data) (g_signal_handler_find ((object), (GSignalMatchType)(G_SIGNAL_MATCH_ID | G_SIGNAL_MATCH_FUNC | G_SIGNAL_MATCH_DATA | ((may_be_blocked) ? 0 : G_SIGNAL_MATCH_UNBLOCKED)), (signal_id), 0, 0, (func), (data)) != 0)
#endif
#endif
