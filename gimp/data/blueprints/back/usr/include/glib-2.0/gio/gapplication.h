// GGHASH:VsBp2OH7Njjddh44FEeJ_Yjz1cGQNkqbLzB8i09hqv0U00003879
#ifndef __G_APPLICATION_H__
#define __G_APPLICATION_H__ 
#if !defined (__GIO_GIO_H_INSIDE__) && !defined (GIO_COMPILATION)
#error "Only <gio/gio.h> can be included directly."
#endif
#include <gio/giotypes.h>
#define G_TYPE_APPLICATION (g_application_get_type ())
#define G_APPLICATION(inst) (G_TYPE_CHECK_INSTANCE_CAST ((inst), G_TYPE_APPLICATION, GApplication))
#define G_APPLICATION_CLASS(class) (G_TYPE_CHECK_CLASS_CAST ((class), G_TYPE_APPLICATION, GApplicationClass))
#define G_IS_APPLICATION(inst) (G_TYPE_CHECK_INSTANCE_TYPE ((inst), G_TYPE_APPLICATION))
#define G_IS_APPLICATION_CLASS(class) (G_TYPE_CHECK_CLASS_TYPE ((class), G_TYPE_APPLICATION))
#define G_APPLICATION_GET_CLASS(inst) (G_TYPE_INSTANCE_GET_CLASS ((inst), G_TYPE_APPLICATION, GApplicationClass))
#endif
