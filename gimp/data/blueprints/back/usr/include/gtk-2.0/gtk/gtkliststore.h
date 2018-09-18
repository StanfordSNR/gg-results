// GGHASH:Vd928m34JTf8QCqDvx_VVcz7ojHH4z.DtpwY_iE8A8Ks000016f2
#ifndef __GTK_LIST_STORE_H__
#define __GTK_LIST_STORE_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gdkconfig.h>
#include <gtk/gtktreemodel.h>
#include <gtk/gtktreesortable.h>
#define GTK_TYPE_LIST_STORE (gtk_list_store_get_type ())
#define GTK_LIST_STORE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_LIST_STORE, GtkListStore))
#define GTK_LIST_STORE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_LIST_STORE, GtkListStoreClass))
#define GTK_IS_LIST_STORE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_LIST_STORE))
#define GTK_IS_LIST_STORE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_LIST_STORE))
#define GTK_LIST_STORE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_LIST_STORE, GtkListStoreClass))
#endif
