// GGHASH:VAx5tA6atOt2aa018uX4lVaeEjvL15aszJYCLzvmRKKA00001c59
#ifndef __GTK_PRIVATE_H__
#define __GTK_PRIVATE_H__ 
#include <gtk/gtkwidget.h>
#define GTK_PRIVATE_FLAGS(wid) (GTK_WIDGET (wid)->private_flags)
#define GTK_WIDGET_USER_STYLE(obj) ((GTK_PRIVATE_FLAGS (obj) & PRIVATE_GTK_USER_STYLE) != 0)
#define GTK_CONTAINER_RESIZE_PENDING(obj) ((GTK_PRIVATE_FLAGS (obj) & PRIVATE_GTK_RESIZE_PENDING) != 0)
#define GTK_WIDGET_HAS_POINTER(obj) ((GTK_PRIVATE_FLAGS (obj) & PRIVATE_GTK_HAS_POINTER) != 0)
#define GTK_WIDGET_SHADOWED(obj) ((GTK_PRIVATE_FLAGS (obj) & PRIVATE_GTK_SHADOWED) != 0)
#define GTK_WIDGET_HAS_SHAPE_MASK(obj) ((GTK_PRIVATE_FLAGS (obj) & PRIVATE_GTK_HAS_SHAPE_MASK) != 0)
#define GTK_WIDGET_IN_REPARENT(obj) ((GTK_PRIVATE_FLAGS (obj) & PRIVATE_GTK_IN_REPARENT) != 0)
#define GTK_WIDGET_DIRECTION_SET(obj) ((GTK_PRIVATE_FLAGS (obj) & PRIVATE_GTK_DIRECTION_SET) != 0)
#define GTK_WIDGET_DIRECTION_LTR(obj) ((GTK_PRIVATE_FLAGS (obj) & PRIVATE_GTK_DIRECTION_LTR) != 0)
#define GTK_WIDGET_ANCHORED(obj) ((GTK_PRIVATE_FLAGS (obj) & PRIVATE_GTK_ANCHORED) != 0)
#define GTK_WIDGET_CHILD_VISIBLE(obj) ((GTK_PRIVATE_FLAGS (obj) & PRIVATE_GTK_CHILD_VISIBLE) != 0)
#define GTK_WIDGET_REDRAW_ON_ALLOC(obj) ((GTK_PRIVATE_FLAGS (obj) & PRIVATE_GTK_REDRAW_ON_ALLOC) != 0)
#define GTK_WIDGET_ALLOC_NEEDED(obj) ((GTK_PRIVATE_FLAGS (obj) & PRIVATE_GTK_ALLOC_NEEDED) != 0)
#define GTK_WIDGET_REQUEST_NEEDED(obj) ((GTK_PRIVATE_FLAGS (obj) & PRIVATE_GTK_REQUEST_NEEDED) != 0)
#define GTK_PRIVATE_SET_FLAG(wid,flag) G_STMT_START{ (GTK_PRIVATE_FLAGS (wid) |= (PRIVATE_ ## flag)); }G_STMT_END
#define GTK_PRIVATE_UNSET_FLAG(wid,flag) G_STMT_START{ (GTK_PRIVATE_FLAGS (wid) &= ~(PRIVATE_ ## flag)); }G_STMT_END
#if defined G_OS_WIN32 || (defined GDK_WINDOWING_QUARTZ && defined QUARTZ_RELOCATION)
#undef GTK_DATADIR
#define GTK_DATADIR _gtk_get_datadir ()
#undef GTK_LIBDIR
#define GTK_LIBDIR _gtk_get_libdir ()
#undef GTK_LOCALEDIR
#define GTK_LOCALEDIR _gtk_get_localedir ()
#undef GTK_SYSCONFDIR
#define GTK_SYSCONFDIR _gtk_get_sysconfdir ()
#undef GTK_DATA_PREFIX
#define GTK_DATA_PREFIX _gtk_get_data_prefix ()
#endif
#define GTK_PARAM_READABLE G_PARAM_READABLE|G_PARAM_STATIC_NAME|G_PARAM_STATIC_NICK|G_PARAM_STATIC_BLURB
#define GTK_PARAM_WRITABLE G_PARAM_WRITABLE|G_PARAM_STATIC_NAME|G_PARAM_STATIC_NICK|G_PARAM_STATIC_BLURB
#define GTK_PARAM_READWRITE G_PARAM_READWRITE|G_PARAM_STATIC_NAME|G_PARAM_STATIC_NICK|G_PARAM_STATIC_BLURB
#ifndef GDK_WINDOWING_QUARTZ
#define GTK_DEFAULT_ACCEL_MOD_MASK GDK_CONTROL_MASK
#define GTK_DEFAULT_ACCEL_MOD_MASK_VIRTUAL GDK_CONTROL_MASK
#else
#define GTK_DEFAULT_ACCEL_MOD_MASK GDK_MOD2_MASK
#define GTK_DEFAULT_ACCEL_MOD_MASK_VIRTUAL GDK_META_MASK
#endif
#ifndef GDK_WINDOWING_QUARTZ
#define GTK_NO_TEXT_INPUT_MOD_MASK (GDK_MOD1_MASK | GDK_CONTROL_MASK)
#else
#define GTK_NO_TEXT_INPUT_MOD_MASK (GDK_MOD2_MASK | GDK_CONTROL_MASK)
#endif
#ifndef GDK_WINDOWING_QUARTZ
#define GTK_EXTEND_SELECTION_MOD_MASK GDK_SHIFT_MASK
#define GTK_MODIFY_SELECTION_MOD_MASK GDK_CONTROL_MASK
#else
#define GTK_EXTEND_SELECTION_MOD_MASK GDK_SHIFT_MASK
#define GTK_MODIFY_SELECTION_MOD_MASK GDK_MOD2_MASK
#endif
#ifndef GDK_WINDOWING_QUARTZ
#define GTK_TOGGLE_GROUP_MOD_MASK 0
#else
#define GTK_TOGGLE_GROUP_MOD_MASK GDK_MOD1_MASK
#endif
#endif
