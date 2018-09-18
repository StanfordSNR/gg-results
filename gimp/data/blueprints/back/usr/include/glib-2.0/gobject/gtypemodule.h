// GGHASH:VyNNPUzSdoIuW01EnJ6DC2BWuqp6gyZcKod.6dKI0VeM00002a15
#ifndef __G_TYPE_MODULE_H__
#define __G_TYPE_MODULE_H__ 
#if !defined (__GLIB_GOBJECT_H_INSIDE__) && !defined (GOBJECT_COMPILATION)
#error "Only <glib-object.h> can be included directly."
#endif
#include <gobject/gobject.h>
#include <gobject/genums.h>
#define G_TYPE_TYPE_MODULE (g_type_module_get_type ())
#define G_TYPE_MODULE(module) (G_TYPE_CHECK_INSTANCE_CAST ((module), G_TYPE_TYPE_MODULE, GTypeModule))
#define G_TYPE_MODULE_CLASS(class) (G_TYPE_CHECK_CLASS_CAST ((class), G_TYPE_TYPE_MODULE, GTypeModuleClass))
#define G_IS_TYPE_MODULE(module) (G_TYPE_CHECK_INSTANCE_TYPE ((module), G_TYPE_TYPE_MODULE))
#define G_IS_TYPE_MODULE_CLASS(class) (G_TYPE_CHECK_CLASS_TYPE ((class), G_TYPE_TYPE_MODULE))
#define G_TYPE_MODULE_GET_CLASS(module) (G_TYPE_INSTANCE_GET_CLASS ((module), G_TYPE_TYPE_MODULE, GTypeModuleClass))
#define G_DEFINE_DYNAMIC_TYPE(TN,t_n,T_P) G_DEFINE_DYNAMIC_TYPE_EXTENDED (TN, t_n, T_P, 0, {})
#define G_DEFINE_DYNAMIC_TYPE_EXTENDED(TypeName,type_name,TYPE_PARENT,flags,CODE) static void type_name ##_init (TypeName *self); static void type_name ##_class_init (TypeName ##Class *klass); static void type_name ##_class_finalize (TypeName ##Class *klass); static gpointer type_name ##_parent_class = NULL; static GType type_name ##_type_id = 0; static gint TypeName ##_private_offset; _G_DEFINE_TYPE_EXTENDED_CLASS_INIT(TypeName, type_name) G_GNUC_UNUSED static inline gpointer type_name ##_get_instance_private (TypeName *self) { return (G_STRUCT_MEMBER_P (self, TypeName ##_private_offset)); } GType type_name ##_get_type (void) { return type_name ##_type_id; } static void type_name ##_register_type (GTypeModule *type_module) { GType g_define_type_id G_GNUC_UNUSED; const GTypeInfo g_define_type_info = { sizeof (TypeName ##Class), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) type_name ##_class_intern_init, (GClassFinalizeFunc) type_name ##_class_finalize, NULL, sizeof (TypeName), 0, (GInstanceInitFunc) type_name ##_init, NULL }; type_name ##_type_id = g_type_module_register_type (type_module, TYPE_PARENT, #TypeName, &g_define_type_info, (GTypeFlags) flags); g_define_type_id = type_name ##_type_id; { CODE ; } }
#define G_IMPLEMENT_INTERFACE_DYNAMIC(TYPE_IFACE,iface_init) { const GInterfaceInfo g_implement_interface_info = { (GInterfaceInitFunc) iface_init, NULL, NULL }; g_type_module_add_interface (type_module, g_define_type_id, TYPE_IFACE, &g_implement_interface_info); }
#define G_ADD_PRIVATE_DYNAMIC(TypeName) { TypeName ##_private_offset = sizeof (TypeName ##Private); }
#endif
