// GGHASH:Vi8SREgemAGxxeHKMNCGz43sbbp5F8dMJuHQOwnXErco00002337
#ifndef __GTK_ICON_THEME_H__
#define __GTK_ICON_THEME_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gdk-pixbuf/gdk-pixbuf.h>
#include <gdk/gdk.h>
#define GTK_TYPE_ICON_INFO (gtk_icon_info_get_type ())
#define GTK_TYPE_ICON_THEME (gtk_icon_theme_get_type ())
#define GTK_ICON_THEME(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_ICON_THEME, GtkIconTheme))
#define GTK_ICON_THEME_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_ICON_THEME, GtkIconThemeClass))
#define GTK_IS_ICON_THEME(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_ICON_THEME))
#define GTK_IS_ICON_THEME_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_ICON_THEME))
#define GTK_ICON_THEME_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_ICON_THEME, GtkIconThemeClass))
#define GTK_ICON_THEME_ERROR gtk_icon_theme_error_quark ()
#ifdef G_OS_WIN32
#define gtk_icon_theme_set_search_path gtk_icon_theme_set_search_path_utf8
#define gtk_icon_theme_get_search_path gtk_icon_theme_get_search_path_utf8
#define gtk_icon_theme_append_search_path gtk_icon_theme_append_search_path_utf8
#define gtk_icon_theme_prepend_search_path gtk_icon_theme_prepend_search_path_utf8
#define gtk_icon_info_get_filename gtk_icon_info_get_filename_utf8
#endif
#endif
