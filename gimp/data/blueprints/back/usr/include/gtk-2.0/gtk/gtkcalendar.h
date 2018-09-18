// GGHASH:V6QaOUa30qMQdmQXh6N3UMM7GDoIFrnmg9J.g.rahX_g00001daf
#ifndef __GTK_CALENDAR_H__
#define __GTK_CALENDAR_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtkwidget.h>
#include <gtk/gtksignal.h>
#define GTK_TYPE_CALENDAR (gtk_calendar_get_type ())
#define GTK_CALENDAR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_CALENDAR, GtkCalendar))
#define GTK_CALENDAR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_CALENDAR, GtkCalendarClass))
#define GTK_IS_CALENDAR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_CALENDAR))
#define GTK_IS_CALENDAR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_CALENDAR))
#define GTK_CALENDAR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_CALENDAR, GtkCalendarClass))
#ifndef GTK_DISABLE_DEPRECATED
#endif
#ifndef GTK_DISABLE_DEPRECATED
#endif
#endif
