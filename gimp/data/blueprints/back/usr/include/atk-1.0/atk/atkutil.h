// GGHASH:Vfy7tt891.Suom5p46rOjoYuqhaJayiEALU_hR6yb9cE000038de
#ifndef __ATK_UTIL_H__
#define __ATK_UTIL_H__ 
#if defined(ATK_DISABLE_SINGLE_INCLUDES) && !defined (__ATK_H_INSIDE__) && !defined (ATK_COMPILATION)
#error "Only <atk/atk.h> can be included directly."
#endif
#include <atk/atkobject.h>
#define ATK_TYPE_UTIL (atk_util_get_type ())
#define ATK_IS_UTIL(obj) G_TYPE_CHECK_INSTANCE_TYPE ((obj), ATK_TYPE_UTIL)
#define ATK_UTIL(obj) G_TYPE_CHECK_INSTANCE_CAST ((obj), ATK_TYPE_UTIL, AtkUtil)
#define ATK_UTIL_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), ATK_TYPE_UTIL, AtkUtilClass))
#define ATK_IS_UTIL_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), ATK_TYPE_UTIL))
#define ATK_UTIL_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), ATK_TYPE_UTIL, AtkUtilClass))
#ifndef _TYPEDEF_ATK_UTIL_
#define _TYPEDEF_ATK_UTIL_ 
#endif
#define ATK_DEFINE_TYPE(TN,t_n,T_P) ATK_DEFINE_TYPE_EXTENDED (TN, t_n, T_P, 0, {})
#define ATK_DEFINE_TYPE_WITH_CODE(TN,t_n,T_P,_C_) _ATK_DEFINE_TYPE_EXTENDED_BEGIN (TN, t_n, T_P, 0) {_C_;} _ATK_DEFINE_TYPE_EXTENDED_END()
#define ATK_DEFINE_ABSTRACT_TYPE(TN,t_n,T_P) ATK_DEFINE_TYPE_EXTENDED (TN, t_n, T_P, G_TYPE_FLAG_ABSTRACT, {})
#define ATK_DEFINE_ABSTRACT_TYPE_WITH_CODE(TN,t_n,T_P,_C_) _ATK_DEFINE_TYPE_EXTENDED_BEGIN (TN, t_n, T_P, G_TYPE_FLAG_ABSTRACT) {_C_;} _ATK_DEFINE_TYPE_EXTENDED_END()
#define ATK_DEFINE_TYPE_EXTENDED(TN,t_n,T_P,_f_,_C_) _ATK_DEFINE_TYPE_EXTENDED_BEGIN (TN, t_n, T_P, _f_) {_C_;} _ATK_DEFINE_TYPE_EXTENDED_END()
#define _ATK_DEFINE_TYPE_EXTENDED_BEGIN(TypeName,type_name,TYPE,flags) static void type_name ##_init (TypeName *self); static void type_name ##_class_init (TypeName ##Class *klass); static gpointer type_name ##_parent_class = NULL; static void type_name ##_class_intern_init (gpointer klass) { type_name ##_parent_class = g_type_class_peek_parent (klass); type_name ##_class_init ((TypeName ##Class*) klass); } ATK_AVAILABLE_IN_ALL GType type_name ##_get_type (void) { static volatile gsize g_define_type_id__volatile = 0; if (g_once_init_enter (&g_define_type_id__volatile)) { AtkObjectFactory *factory; GType derived_type; GTypeQuery query; GType derived_atk_type; GType g_define_type_id; derived_type = g_type_parent (TYPE); factory = atk_registry_get_factory (atk_get_default_registry (), derived_type); derived_atk_type = atk_object_factory_get_accessible_type (factory); g_type_query (derived_atk_type, &query); g_define_type_id = g_type_register_static_simple (derived_atk_type, g_intern_static_string (#TypeName), query.class_size, (GClassInitFunc) type_name ##_class_intern_init, query.instance_size, (GInstanceInitFunc) type_name ##_init, (GTypeFlags) flags); {
#define _ATK_DEFINE_TYPE_EXTENDED_END() } g_once_init_leave (&g_define_type_id__volatile, g_define_type_id); } return g_define_type_id__volatile; }
#endif
