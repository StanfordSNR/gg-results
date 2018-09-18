// GGHASH:Visj2CW501SpoIKjM8gofAs.fSaIYKcKfCxfOP5IcspA0000ca60
#ifndef __GTK_WIDGET_H__
#define __GTK_WIDGET_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gdk/gdk.h>
#include <gtk/gtkaccelgroup.h>
#include <gtk/gtkobject.h>
#include <gtk/gtkadjustment.h>
#include <gtk/gtkstyle.h>
#include <gtk/gtksettings.h>
#include <atk/atk.h>
#ifndef GTK_DISABLE_DEPRECATED
#endif
#define GTK_TYPE_WIDGET (gtk_widget_get_type ())
#define GTK_WIDGET(widget) (G_TYPE_CHECK_INSTANCE_CAST ((widget), GTK_TYPE_WIDGET, GtkWidget))
#define GTK_WIDGET_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_WIDGET, GtkWidgetClass))
#define GTK_IS_WIDGET(widget) (G_TYPE_CHECK_INSTANCE_TYPE ((widget), GTK_TYPE_WIDGET))
#define GTK_IS_WIDGET_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_WIDGET))
#define GTK_WIDGET_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_WIDGET, GtkWidgetClass))
#ifndef GTK_DISABLE_DEPRECATED
#define GTK_WIDGET_TYPE(wid) (GTK_OBJECT_TYPE (wid))
#endif
#ifndef GTK_DISABLE_DEPRECATED
#define GTK_WIDGET_STATE(wid) (GTK_WIDGET (wid)->state)
#endif
#ifndef GTK_DISABLE_DEPRECATED
#define GTK_WIDGET_SAVED_STATE(wid) (GTK_WIDGET (wid)->saved_state)
#endif
#define GTK_WIDGET_FLAGS(wid) (GTK_OBJECT_FLAGS (wid))
#ifndef GTK_DISABLE_DEPRECATED
#define GTK_WIDGET_TOPLEVEL(wid) ((GTK_WIDGET_FLAGS (wid) & GTK_TOPLEVEL) != 0)
#endif
#ifndef GTK_DISABLE_DEPRECATED
#define GTK_WIDGET_NO_WINDOW(wid) ((GTK_WIDGET_FLAGS (wid) & GTK_NO_WINDOW) != 0)
#endif
#ifndef GTK_DISABLE_DEPRECATED
#define GTK_WIDGET_REALIZED(wid) ((GTK_WIDGET_FLAGS (wid) & GTK_REALIZED) != 0)
#endif
#ifndef GTK_DISABLE_DEPRECATED
#define GTK_WIDGET_MAPPED(wid) ((GTK_WIDGET_FLAGS (wid) & GTK_MAPPED) != 0)
#endif
#ifndef GTK_DISABLE_DEPRECATED
#define GTK_WIDGET_VISIBLE(wid) ((GTK_WIDGET_FLAGS (wid) & GTK_VISIBLE) != 0)
#endif
#ifndef GTK_DISABLE_DEPRECATED
#define GTK_WIDGET_DRAWABLE(wid) (GTK_WIDGET_VISIBLE (wid) && GTK_WIDGET_MAPPED (wid))
#endif
#ifndef GTK_DISABLE_DEPRECATED
#define GTK_WIDGET_SENSITIVE(wid) ((GTK_WIDGET_FLAGS (wid) & GTK_SENSITIVE) != 0)
#endif
#ifndef GTK_DISABLE_DEPRECATED
#define GTK_WIDGET_PARENT_SENSITIVE(wid) ((GTK_WIDGET_FLAGS (wid) & GTK_PARENT_SENSITIVE) != 0)
#endif
#ifndef GTK_DISABLE_DEPRECATED
#define GTK_WIDGET_IS_SENSITIVE(wid) (GTK_WIDGET_SENSITIVE (wid) && GTK_WIDGET_PARENT_SENSITIVE (wid))
#endif
#ifndef GTK_DISABLE_DEPRECATED
#define GTK_WIDGET_CAN_FOCUS(wid) ((GTK_WIDGET_FLAGS (wid) & GTK_CAN_FOCUS) != 0)
#endif
#ifndef GTK_DISABLE_DEPRECATED
#define GTK_WIDGET_HAS_FOCUS(wid) ((GTK_WIDGET_FLAGS (wid) & GTK_HAS_FOCUS) != 0)
#endif
#ifndef GTK_DISABLE_DEPRECATED
#define GTK_WIDGET_CAN_DEFAULT(wid) ((GTK_WIDGET_FLAGS (wid) & GTK_CAN_DEFAULT) != 0)
#endif
#ifndef GTK_DISABLE_DEPRECATED
#define GTK_WIDGET_HAS_DEFAULT(wid) ((GTK_WIDGET_FLAGS (wid) & GTK_HAS_DEFAULT) != 0)
#endif
#ifndef GTK_DISABLE_DEPRECATED
#define GTK_WIDGET_HAS_GRAB(wid) ((GTK_WIDGET_FLAGS (wid) & GTK_HAS_GRAB) != 0)
#endif
#ifndef GTK_DISABLE_DEPRECATED
#define GTK_WIDGET_RC_STYLE(wid) ((GTK_WIDGET_FLAGS (wid) & GTK_RC_STYLE) != 0)
#endif
#ifndef GTK_DISABLE_DEPRECATED
#define GTK_WIDGET_COMPOSITE_CHILD(wid) ((GTK_WIDGET_FLAGS (wid) & GTK_COMPOSITE_CHILD) != 0)
#endif
#ifndef GTK_DISABLE_DEPRECATED
#define GTK_WIDGET_APP_PAINTABLE(wid) ((GTK_WIDGET_FLAGS (wid) & GTK_APP_PAINTABLE) != 0)
#endif
#ifndef GTK_DISABLE_DEPRECATED
#define GTK_WIDGET_RECEIVES_DEFAULT(wid) ((GTK_WIDGET_FLAGS (wid) & GTK_RECEIVES_DEFAULT) != 0)
#endif
#ifndef GTK_DISABLE_DEPRECATED
#define GTK_WIDGET_DOUBLE_BUFFERED(wid) ((GTK_WIDGET_FLAGS (wid) & GTK_DOUBLE_BUFFERED) != 0)
#endif
#define GTK_WIDGET_SET_FLAGS(wid,flag) G_STMT_START{ (GTK_WIDGET_FLAGS (wid) |= (flag)); }G_STMT_END
#define GTK_WIDGET_UNSET_FLAGS(wid,flag) G_STMT_START{ (GTK_WIDGET_FLAGS (wid) &= ~(flag)); }G_STMT_END
#define GTK_TYPE_REQUISITION (gtk_requisition_get_type ())
#ifndef GTK_DISABLE_DEPRECATED
#endif
#if !defined(GTK_DISABLE_DEPRECATED) || defined (GTK_COMPILATION)
#endif
#ifndef GTK_DISABLE_DEPRECATED
#endif
#ifndef GTK_DISABLE_DEPRECATED
#endif
#ifndef GTK_DISABLE_DEPRECATED
#endif
#ifndef GTK_DISABLE_DEPRECATED
#define gtk_widget_set_visual(widget,visual) ((void) 0)
#define gtk_widget_push_visual(visual) ((void) 0)
#define gtk_widget_pop_visual() ((void) 0)
#define gtk_widget_set_default_visual(visual) ((void) 0)
#endif
#ifndef GTK_DISABLE_DEPRECATED
#define gtk_widget_set_rc_style(widget) (gtk_widget_set_style (widget, NULL))
#define gtk_widget_restore_default_style(widget) (gtk_widget_set_style (widget, NULL))
#endif
#ifndef GDK_MULTIHEAD_SAFE
#endif
#if !defined(GTK_DISABLE_DEPRECATED) || defined (GTK_COMPILATION)
#endif
#if defined (GTK_TRACE_OBJECTS) && defined (__GNUC__)
#define gtk_widget_ref g_object_ref
#define gtk_widget_unref g_object_unref
#endif
#endif
