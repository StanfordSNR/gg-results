// GGHASH:V6jwjnQ_ElbOswlXt2DiL3QJo2QT7fFF5iRXJPs6XHX800005d75
#ifndef __G_SIGNAL_H__
#define __G_SIGNAL_H__ 
#if !defined (__GLIB_GOBJECT_H_INSIDE__) && !defined (GOBJECT_COMPILATION)
#error "Only <glib-object.h> can be included directly."
#endif
#include <gobject/gclosure.h>
#include <gobject/gvalue.h>
#include <gobject/gparam.h>
#include <gobject/gmarshal.h>
#define G_SIGNAL_FLAGS_MASK 0x1ff
#define G_SIGNAL_MATCH_MASK 0x3f
#define G_SIGNAL_TYPE_STATIC_SCOPE (G_TYPE_FLAG_RESERVED_ID_BIT)
#define g_signal_connect(instance,detailed_signal,c_handler,data) g_signal_connect_data ((instance), (detailed_signal), (c_handler), (data), NULL, (GConnectFlags) 0)
#define g_signal_connect_after(instance,detailed_signal,c_handler,data) g_signal_connect_data ((instance), (detailed_signal), (c_handler), (data), NULL, G_CONNECT_AFTER)
#define g_signal_connect_swapped(instance,detailed_signal,c_handler,data) g_signal_connect_data ((instance), (detailed_signal), (c_handler), (data), NULL, G_CONNECT_SWAPPED)
#define g_signal_handlers_disconnect_by_func(instance,func,data) g_signal_handlers_disconnect_matched ((instance), (GSignalMatchType) (G_SIGNAL_MATCH_FUNC | G_SIGNAL_MATCH_DATA), 0, 0, NULL, (func), (data))
#define g_signal_handlers_disconnect_by_data(instance,data) g_signal_handlers_disconnect_matched ((instance), G_SIGNAL_MATCH_DATA, 0, 0, NULL, NULL, (data))
#define g_signal_handlers_block_by_func(instance,func,data) g_signal_handlers_block_matched ((instance), (GSignalMatchType) (G_SIGNAL_MATCH_FUNC | G_SIGNAL_MATCH_DATA), 0, 0, NULL, (func), (data))
#define g_signal_handlers_unblock_by_func(instance,func,data) g_signal_handlers_unblock_matched ((instance), (GSignalMatchType) (G_SIGNAL_MATCH_FUNC | G_SIGNAL_MATCH_DATA), 0, 0, NULL, (func), (data))
#endif
