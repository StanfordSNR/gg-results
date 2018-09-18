// GGHASH:Vk40J99bvei.NGit7aS2WpGe.cO3trRYxlJTG0pRYqJc00005926
#if !defined (GTK_DISABLE_DEPRECATED) || defined (__GTK_CLIST_C__) || defined (__GTK_CTREE_C__)
#ifndef __GTK_CLIST_H__
#define __GTK_CLIST_H__ 
#include <gtk/gtksignal.h>
#include <gtk/gtkalignment.h>
#include <gtk/gtklabel.h>
#include <gtk/gtkbutton.h>
#include <gtk/gtkhscrollbar.h>
#include <gtk/gtkvscrollbar.h>
#define GTK_TYPE_CLIST (gtk_clist_get_type ())
#define GTK_CLIST(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_CLIST, GtkCList))
#define GTK_CLIST_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_CLIST, GtkCListClass))
#define GTK_IS_CLIST(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_CLIST))
#define GTK_IS_CLIST_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_CLIST))
#define GTK_CLIST_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_CLIST, GtkCListClass))
#define GTK_CLIST_FLAGS(clist) (GTK_CLIST (clist)->flags)
#define GTK_CLIST_SET_FLAG(clist,flag) (GTK_CLIST_FLAGS (clist) |= (GTK_ ## flag))
#define GTK_CLIST_UNSET_FLAG(clist,flag) (GTK_CLIST_FLAGS (clist) &= ~(GTK_ ## flag))
#define GTK_CLIST_IN_DRAG(clist) (GTK_CLIST_FLAGS (clist) & GTK_CLIST_IN_DRAG)
#define GTK_CLIST_ROW_HEIGHT_SET(clist) (GTK_CLIST_FLAGS (clist) & GTK_CLIST_ROW_HEIGHT_SET)
#define GTK_CLIST_SHOW_TITLES(clist) (GTK_CLIST_FLAGS (clist) & GTK_CLIST_SHOW_TITLES)
#define GTK_CLIST_ADD_MODE(clist) (GTK_CLIST_FLAGS (clist) & GTK_CLIST_ADD_MODE)
#define GTK_CLIST_AUTO_SORT(clist) (GTK_CLIST_FLAGS (clist) & GTK_CLIST_AUTO_SORT)
#define GTK_CLIST_AUTO_RESIZE_BLOCKED(clist) (GTK_CLIST_FLAGS (clist) & GTK_CLIST_AUTO_RESIZE_BLOCKED)
#define GTK_CLIST_REORDERABLE(clist) (GTK_CLIST_FLAGS (clist) & GTK_CLIST_REORDERABLE)
#define GTK_CLIST_USE_DRAG_ICONS(clist) (GTK_CLIST_FLAGS (clist) & GTK_CLIST_USE_DRAG_ICONS)
#define GTK_CLIST_DRAW_DRAG_LINE(clist) (GTK_CLIST_FLAGS (clist) & GTK_CLIST_DRAW_DRAG_LINE)
#define GTK_CLIST_DRAW_DRAG_RECT(clist) (GTK_CLIST_FLAGS (clist) & GTK_CLIST_DRAW_DRAG_RECT)
#define GTK_CLIST_ROW(_glist_) ((GtkCListRow *)((_glist_)->data))
#define GTK_CELL_TEXT(cell) (((GtkCellText *) &(cell)))
#define GTK_CELL_PIXMAP(cell) (((GtkCellPixmap *) &(cell)))
#define GTK_CELL_PIXTEXT(cell) (((GtkCellPixText *) &(cell)))
#define GTK_CELL_WIDGET(cell) (((GtkCellWidget *) &(cell)))
#endif
#endif
