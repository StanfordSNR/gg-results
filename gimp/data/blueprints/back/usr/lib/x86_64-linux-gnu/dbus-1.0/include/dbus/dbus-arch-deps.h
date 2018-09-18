// GGHASH:VXlwXnVJjuLlBzniEcDFaIeZhzr9qDDqB_QysYQpulqw00000801
#if !defined (DBUS_INSIDE_DBUS_H) && !defined (DBUS_COMPILATION)
#error "Only <dbus/dbus.h> can be included directly, this file may disappear or change contents."
#endif
#ifndef DBUS_ARCH_DEPS_H
#define DBUS_ARCH_DEPS_H 
#include <dbus/dbus-macros.h>
#define DBUS_HAVE_INT64 1
#define DBUS_INT64_CONSTANT(val) (_DBUS_GNUC_EXTENSION (val ##L))
#define DBUS_UINT64_CONSTANT(val) (_DBUS_GNUC_EXTENSION (val ##UL))
#define DBUS_MAJOR_VERSION 1
#define DBUS_MINOR_VERSION 12
#define DBUS_MICRO_VERSION 2
#define DBUS_VERSION_STRING "1.12.2"
#define DBUS_VERSION ((1 << 16) | (12 << 8) | (2))
#endif
