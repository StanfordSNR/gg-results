// GGHASH:ViU1k3emPUgV6EwUcNc80grMJNE3EBG7iZSOL_DnXgiA000021bf
#ifndef __GTK_RC_H__
#define __GTK_RC_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtkstyle.h>
#define GTK_TYPE_RC_STYLE (gtk_rc_style_get_type ())
#define GTK_RC_STYLE(object) (G_TYPE_CHECK_INSTANCE_CAST ((object), GTK_TYPE_RC_STYLE, GtkRcStyle))
#define GTK_RC_STYLE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_RC_STYLE, GtkRcStyleClass))
#define GTK_IS_RC_STYLE(object) (G_TYPE_CHECK_INSTANCE_TYPE ((object), GTK_TYPE_RC_STYLE))
#define GTK_IS_RC_STYLE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_RC_STYLE))
#define GTK_RC_STYLE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_RC_STYLE, GtkRcStyleClass))
#ifdef G_OS_WIN32
#define gtk_rc_add_default_file gtk_rc_add_default_file_utf8
#define gtk_rc_set_default_files gtk_rc_set_default_files_utf8
#define gtk_rc_parse gtk_rc_parse_utf8
#endif
#ifndef GTK_DISABLE_DEPRECATED
#endif
#ifndef GTK_DISABLE_DEPRECATED
#endif
#endif
