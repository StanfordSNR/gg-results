// GGHASH:VCjrTiQtnaiTcoCVgtu9puGkNw0mQOBzcf784fVrpNUo00001dba
#ifndef __G_TASK_H__
#define __G_TASK_H__ 
#if !defined (__GIO_GIO_H_INSIDE__) && !defined (GIO_COMPILATION)
#error "Only <gio/gio.h> can be included directly."
#endif
#include <gio/giotypes.h>
#define G_TYPE_TASK (g_task_get_type ())
#define G_TASK(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_TASK, GTask))
#define G_TASK_CLASS(k) (G_TYPE_CHECK_CLASS_CAST((k), G_TYPE_TASK, GTaskClass))
#define G_IS_TASK(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_TASK))
#define G_IS_TASK_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), G_TYPE_TASK))
#define G_TASK_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), G_TYPE_TASK, GTaskClass))
#endif
