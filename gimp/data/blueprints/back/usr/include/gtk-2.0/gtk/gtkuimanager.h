// GGHASH:VZvgSOS7onxBfQxResWJ_LiT0nXQ9VIrl1_IWpsNnMFM00001882
#ifndef __GTK_UI_MANAGER_H__
#define __GTK_UI_MANAGER_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtkaccelgroup.h>
#include <gtk/gtkwidget.h>
#include <gtk/gtkaction.h>
#include <gtk/gtkactiongroup.h>
#define GTK_TYPE_UI_MANAGER (gtk_ui_manager_get_type ())
#define GTK_UI_MANAGER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_UI_MANAGER, GtkUIManager))
#define GTK_UI_MANAGER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_UI_MANAGER, GtkUIManagerClass))
#define GTK_IS_UI_MANAGER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_UI_MANAGER))
#define GTK_IS_UI_MANAGER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_UI_MANAGER))
#define GTK_UI_MANAGER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS((obj), GTK_TYPE_UI_MANAGER, GtkUIManagerClass))
#ifdef G_OS_WIN32
#define gtk_ui_manager_add_ui_from_file gtk_ui_manager_add_ui_from_file_utf8
#endif
#endif
