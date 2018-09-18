// GGHASH:Vh7A1BylmVL_YP2qe.RhSHpOUQWQsCyVoD8Yf42wAOHY000007b7
#if !defined (DBUS_INSIDE_DBUS_H) && !defined (DBUS_COMPILATION)
#error "Only <dbus/dbus.h> can be included directly, this file may disappear or change contents."
#endif
#ifndef DBUS_MEMORY_H
#define DBUS_MEMORY_H 
#include <dbus/dbus-macros.h>
#include <stddef.h>
#define dbus_new(type,count) ((type*)dbus_malloc (sizeof (type) * (count)))
#define dbus_new0(type,count) ((type*)dbus_malloc0 (sizeof (type) * (count)))
#endif
