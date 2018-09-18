// GGHASH:Vh8.unf20enIXWYaAP8oXO7t1tPKXYx9AGEUYRweQ4LQ00015e88
#ifndef __G_TYPE_H__
#define __G_TYPE_H__ 
#if !defined (__GLIB_GOBJECT_H_INSIDE__) && !defined (GOBJECT_COMPILATION)
#error "Only <glib-object.h> can be included directly."
#endif
#include <glib.h>
#define G_TYPE_FUNDAMENTAL(type) (g_type_fundamental (type))
#define G_TYPE_FUNDAMENTAL_MAX (255 << G_TYPE_FUNDAMENTAL_SHIFT)
#define G_TYPE_INVALID G_TYPE_MAKE_FUNDAMENTAL (0)
#define G_TYPE_NONE G_TYPE_MAKE_FUNDAMENTAL (1)
#define G_TYPE_INTERFACE G_TYPE_MAKE_FUNDAMENTAL (2)
#define G_TYPE_CHAR G_TYPE_MAKE_FUNDAMENTAL (3)
#define G_TYPE_UCHAR G_TYPE_MAKE_FUNDAMENTAL (4)
#define G_TYPE_BOOLEAN G_TYPE_MAKE_FUNDAMENTAL (5)
#define G_TYPE_INT G_TYPE_MAKE_FUNDAMENTAL (6)
#define G_TYPE_UINT G_TYPE_MAKE_FUNDAMENTAL (7)
#define G_TYPE_LONG G_TYPE_MAKE_FUNDAMENTAL (8)
#define G_TYPE_ULONG G_TYPE_MAKE_FUNDAMENTAL (9)
#define G_TYPE_INT64 G_TYPE_MAKE_FUNDAMENTAL (10)
#define G_TYPE_UINT64 G_TYPE_MAKE_FUNDAMENTAL (11)
#define G_TYPE_ENUM G_TYPE_MAKE_FUNDAMENTAL (12)
#define G_TYPE_FLAGS G_TYPE_MAKE_FUNDAMENTAL (13)
#define G_TYPE_FLOAT G_TYPE_MAKE_FUNDAMENTAL (14)
#define G_TYPE_DOUBLE G_TYPE_MAKE_FUNDAMENTAL (15)
#define G_TYPE_STRING G_TYPE_MAKE_FUNDAMENTAL (16)
#define G_TYPE_POINTER G_TYPE_MAKE_FUNDAMENTAL (17)
#define G_TYPE_BOXED G_TYPE_MAKE_FUNDAMENTAL (18)
#define G_TYPE_PARAM G_TYPE_MAKE_FUNDAMENTAL (19)
#define G_TYPE_OBJECT G_TYPE_MAKE_FUNDAMENTAL (20)
#define G_TYPE_VARIANT G_TYPE_MAKE_FUNDAMENTAL (21)
#define G_TYPE_FUNDAMENTAL_SHIFT (2)
#define G_TYPE_MAKE_FUNDAMENTAL(x) ((GType) ((x) << G_TYPE_FUNDAMENTAL_SHIFT))
#define G_TYPE_RESERVED_GLIB_FIRST (22)
#define G_TYPE_RESERVED_GLIB_LAST (31)
#define G_TYPE_RESERVED_BSE_FIRST (32)
#define G_TYPE_RESERVED_BSE_LAST (48)
#define G_TYPE_RESERVED_USER_FIRST (49)
#define G_TYPE_IS_FUNDAMENTAL(type) ((type) <= G_TYPE_FUNDAMENTAL_MAX)
#define G_TYPE_IS_DERIVED(type) ((type) > G_TYPE_FUNDAMENTAL_MAX)
#define G_TYPE_IS_INTERFACE(type) (G_TYPE_FUNDAMENTAL (type) == G_TYPE_INTERFACE)
#define G_TYPE_IS_CLASSED(type) (g_type_test_flags ((type), G_TYPE_FLAG_CLASSED))
#define G_TYPE_IS_INSTANTIATABLE(type) (g_type_test_flags ((type), G_TYPE_FLAG_INSTANTIATABLE))
#define G_TYPE_IS_DERIVABLE(type) (g_type_test_flags ((type), G_TYPE_FLAG_DERIVABLE))
#define G_TYPE_IS_DEEP_DERIVABLE(type) (g_type_test_flags ((type), G_TYPE_FLAG_DEEP_DERIVABLE))
#define G_TYPE_IS_ABSTRACT(type) (g_type_test_flags ((type), G_TYPE_FLAG_ABSTRACT))
#define G_TYPE_IS_VALUE_ABSTRACT(type) (g_type_test_flags ((type), G_TYPE_FLAG_VALUE_ABSTRACT))
#define G_TYPE_IS_VALUE_TYPE(type) (g_type_check_is_value_type (type))
#define G_TYPE_HAS_VALUE_TABLE(type) (g_type_value_table_peek (type) != NULL)
#if GLIB_SIZEOF_SIZE_T != GLIB_SIZEOF_LONG || !defined __cplusplus
#else
#endif
#define G_TYPE_CHECK_INSTANCE(instance) (_G_TYPE_CHI ((GTypeInstance*) (instance)))
#define G_TYPE_CHECK_INSTANCE_CAST(instance,g_type,c_type) (_G_TYPE_CIC ((instance), (g_type), c_type))
#define G_TYPE_CHECK_INSTANCE_TYPE(instance,g_type) (_G_TYPE_CIT ((instance), (g_type)))
#define G_TYPE_CHECK_INSTANCE_FUNDAMENTAL_TYPE(instance,g_type) (_G_TYPE_CIFT ((instance), (g_type)))
#define G_TYPE_INSTANCE_GET_CLASS(instance,g_type,c_type) (_G_TYPE_IGC ((instance), (g_type), c_type))
#define G_TYPE_INSTANCE_GET_INTERFACE(instance,g_type,c_type) (_G_TYPE_IGI ((instance), (g_type), c_type))
#define G_TYPE_CHECK_CLASS_CAST(g_class,g_type,c_type) (_G_TYPE_CCC ((g_class), (g_type), c_type))
#define G_TYPE_CHECK_CLASS_TYPE(g_class,g_type) (_G_TYPE_CCT ((g_class), (g_type)))
#define G_TYPE_CHECK_VALUE(value) (_G_TYPE_CHV ((value)))
#define G_TYPE_CHECK_VALUE_TYPE(value,g_type) (_G_TYPE_CVH ((value), (g_type)))
#define G_TYPE_FROM_INSTANCE(instance) (G_TYPE_FROM_CLASS (((GTypeInstance*) (instance))->g_class))
#define G_TYPE_FROM_CLASS(g_class) (((GTypeClass*) (g_class))->g_type)
#define G_TYPE_FROM_INTERFACE(g_iface) (((GTypeInterface*) (g_iface))->g_type)
#define G_TYPE_INSTANCE_GET_PRIVATE(instance,g_type,c_type) ((c_type*) g_type_instance_get_private ((GTypeInstance*) (instance), (g_type)))
#define G_TYPE_CLASS_GET_PRIVATE(klass,g_type,c_type) ((c_type*) g_type_class_get_private ((GTypeClass*) (klass), (g_type)))
#define G_DECLARE_FINAL_TYPE(ModuleObjName,module_obj_name,MODULE,OBJ_NAME,ParentName) GType module_obj_name ##_get_type (void); G_GNUC_BEGIN_IGNORE_DEPRECATIONS typedef struct _ ##ModuleObjName ModuleObjName; typedef struct { ParentName ##Class parent_class; } ModuleObjName ##Class; _GLIB_DEFINE_AUTOPTR_CHAINUP (ModuleObjName, ParentName) static inline ModuleObjName * MODULE ##_ ##OBJ_NAME (gpointer ptr) { return G_TYPE_CHECK_INSTANCE_CAST (ptr, module_obj_name ##_get_type (), ModuleObjName); } static inline gboolean MODULE ##_IS_ ##OBJ_NAME (gpointer ptr) { return G_TYPE_CHECK_INSTANCE_TYPE (ptr, module_obj_name ##_get_type ()); } G_GNUC_END_IGNORE_DEPRECATIONS
#define G_DECLARE_DERIVABLE_TYPE(ModuleObjName,module_obj_name,MODULE,OBJ_NAME,ParentName) GType module_obj_name ##_get_type (void); G_GNUC_BEGIN_IGNORE_DEPRECATIONS typedef struct _ ##ModuleObjName ModuleObjName; typedef struct _ ##ModuleObjName ##Class ModuleObjName ##Class; struct _ ##ModuleObjName { ParentName parent_instance; }; _GLIB_DEFINE_AUTOPTR_CHAINUP (ModuleObjName, ParentName) static inline ModuleObjName * MODULE ##_ ##OBJ_NAME (gpointer ptr) { return G_TYPE_CHECK_INSTANCE_CAST (ptr, module_obj_name ##_get_type (), ModuleObjName); } static inline ModuleObjName ##Class * MODULE ##_ ##OBJ_NAME ##_CLASS (gpointer ptr) { return G_TYPE_CHECK_CLASS_CAST (ptr, module_obj_name ##_get_type (), ModuleObjName ##Class); } static inline gboolean MODULE ##_IS_ ##OBJ_NAME (gpointer ptr) { return G_TYPE_CHECK_INSTANCE_TYPE (ptr, module_obj_name ##_get_type ()); } static inline gboolean MODULE ##_IS_ ##OBJ_NAME ##_CLASS (gpointer ptr) { return G_TYPE_CHECK_CLASS_TYPE (ptr, module_obj_name ##_get_type ()); } static inline ModuleObjName ##Class * MODULE ##_ ##OBJ_NAME ##_GET_CLASS (gpointer ptr) { return G_TYPE_INSTANCE_GET_CLASS (ptr, module_obj_name ##_get_type (), ModuleObjName ##Class); } G_GNUC_END_IGNORE_DEPRECATIONS
#define G_DECLARE_INTERFACE(ModuleObjName,module_obj_name,MODULE,OBJ_NAME,PrerequisiteName) GType module_obj_name ##_get_type (void); G_GNUC_BEGIN_IGNORE_DEPRECATIONS typedef struct _ ##ModuleObjName ModuleObjName; typedef struct _ ##ModuleObjName ##Interface ModuleObjName ##Interface; _GLIB_DEFINE_AUTOPTR_CHAINUP (ModuleObjName, PrerequisiteName) static inline ModuleObjName * MODULE ##_ ##OBJ_NAME (gpointer ptr) { return G_TYPE_CHECK_INSTANCE_CAST (ptr, module_obj_name ##_get_type (), ModuleObjName); } static inline gboolean MODULE ##_IS_ ##OBJ_NAME (gpointer ptr) { return G_TYPE_CHECK_INSTANCE_TYPE (ptr, module_obj_name ##_get_type ()); } static inline ModuleObjName ##Interface * MODULE ##_ ##OBJ_NAME ##_GET_IFACE (gpointer ptr) { return G_TYPE_INSTANCE_GET_INTERFACE (ptr, module_obj_name ##_get_type (), ModuleObjName ##Interface); } G_GNUC_END_IGNORE_DEPRECATIONS
#define G_DEFINE_TYPE(TN,t_n,T_P) G_DEFINE_TYPE_EXTENDED (TN, t_n, T_P, 0, {})
#define G_DEFINE_TYPE_WITH_CODE(TN,t_n,T_P,_C_) _G_DEFINE_TYPE_EXTENDED_BEGIN (TN, t_n, T_P, 0) {_C_;} _G_DEFINE_TYPE_EXTENDED_END()
#define G_DEFINE_TYPE_WITH_PRIVATE(TN,t_n,T_P) G_DEFINE_TYPE_EXTENDED (TN, t_n, T_P, 0, G_ADD_PRIVATE (TN))
#define G_DEFINE_ABSTRACT_TYPE(TN,t_n,T_P) G_DEFINE_TYPE_EXTENDED (TN, t_n, T_P, G_TYPE_FLAG_ABSTRACT, {})
#define G_DEFINE_ABSTRACT_TYPE_WITH_CODE(TN,t_n,T_P,_C_) _G_DEFINE_TYPE_EXTENDED_BEGIN (TN, t_n, T_P, G_TYPE_FLAG_ABSTRACT) {_C_;} _G_DEFINE_TYPE_EXTENDED_END()
#define G_DEFINE_ABSTRACT_TYPE_WITH_PRIVATE(TN,t_n,T_P) G_DEFINE_TYPE_EXTENDED (TN, t_n, T_P, G_TYPE_FLAG_ABSTRACT, G_ADD_PRIVATE (TN))
#define G_DEFINE_TYPE_EXTENDED(TN,t_n,T_P,_f_,_C_) _G_DEFINE_TYPE_EXTENDED_BEGIN (TN, t_n, T_P, _f_) {_C_;} _G_DEFINE_TYPE_EXTENDED_END()
#define G_DEFINE_INTERFACE(TN,t_n,T_P) G_DEFINE_INTERFACE_WITH_CODE(TN, t_n, T_P, ;)
#define G_DEFINE_INTERFACE_WITH_CODE(TN,t_n,T_P,_C_) _G_DEFINE_INTERFACE_EXTENDED_BEGIN(TN, t_n, T_P) {_C_;} _G_DEFINE_INTERFACE_EXTENDED_END()
#define G_IMPLEMENT_INTERFACE(TYPE_IFACE,iface_init) { const GInterfaceInfo g_implement_interface_info = { (GInterfaceInitFunc)(void (*)(void)) iface_init, NULL, NULL }; g_type_add_interface_static (g_define_type_id, TYPE_IFACE, &g_implement_interface_info); }
#define G_ADD_PRIVATE(TypeName) { TypeName ##_private_offset = g_type_add_instance_private (g_define_type_id, sizeof (TypeName ##Private)); }
#define G_PRIVATE_OFFSET(TypeName,field) (TypeName ##_private_offset + (G_STRUCT_OFFSET (TypeName ##Private, field)))
#define G_PRIVATE_FIELD_P(TypeName,inst,field_name) G_STRUCT_MEMBER_P (inst, G_PRIVATE_OFFSET (TypeName, field_name))
#define G_PRIVATE_FIELD(TypeName,inst,field_type,field_name) G_STRUCT_MEMBER (field_type, inst, G_PRIVATE_OFFSET (TypeName, field_name))
#if GLIB_VERSION_MAX_ALLOWED >= GLIB_VERSION_2_38
#define _G_DEFINE_TYPE_EXTENDED_CLASS_INIT(TypeName,type_name) static void type_name ##_class_intern_init (gpointer klass) { type_name ##_parent_class = g_type_class_peek_parent (klass); if (TypeName ##_private_offset != 0) g_type_class_adjust_private_offset (klass, &TypeName ##_private_offset); type_name ##_class_init ((TypeName ##Class*) klass); }
#else
#define _G_DEFINE_TYPE_EXTENDED_CLASS_INIT(TypeName,type_name) static void type_name ##_class_intern_init (gpointer klass) { type_name ##_parent_class = g_type_class_peek_parent (klass); type_name ##_class_init ((TypeName ##Class*) klass); }
#endif
#define _G_DEFINE_TYPE_EXTENDED_BEGIN_PRE(TypeName,type_name,TYPE_PARENT) static void type_name ##_init (TypeName *self); static void type_name ##_class_init (TypeName ##Class *klass); static gpointer type_name ##_parent_class = NULL; static gint TypeName ##_private_offset; _G_DEFINE_TYPE_EXTENDED_CLASS_INIT(TypeName, type_name) G_GNUC_UNUSED static inline gpointer type_name ##_get_instance_private (TypeName *self) { return (G_STRUCT_MEMBER_P (self, TypeName ##_private_offset)); } GType type_name ##_get_type (void) { static volatile gsize g_define_type_id__volatile = 0;
#define _G_DEFINE_TYPE_EXTENDED_BEGIN_REGISTER(TypeName,type_name,TYPE_PARENT,flags) if (g_once_init_enter (&g_define_type_id__volatile)) { GType g_define_type_id = g_type_register_static_simple (TYPE_PARENT, g_intern_static_string (#TypeName), sizeof (TypeName ##Class), (GClassInitFunc)(void (*)(void)) type_name ##_class_intern_init, sizeof (TypeName), (GInstanceInitFunc)(void (*)(void)) type_name ##_init, (GTypeFlags) flags); {
#define _G_DEFINE_TYPE_EXTENDED_END() } g_once_init_leave (&g_define_type_id__volatile, g_define_type_id); } return g_define_type_id__volatile; }
#define _G_DEFINE_TYPE_EXTENDED_BEGIN(TypeName,type_name,TYPE_PARENT,flags) _G_DEFINE_TYPE_EXTENDED_BEGIN_PRE(TypeName, type_name, TYPE_PARENT) _G_DEFINE_TYPE_EXTENDED_BEGIN_REGISTER(TypeName, type_name, TYPE_PARENT, flags)
#define _G_DEFINE_INTERFACE_EXTENDED_BEGIN(TypeName,type_name,TYPE_PREREQ) static void type_name ##_default_init (TypeName ##Interface *klass); GType type_name ##_get_type (void) { static volatile gsize g_define_type_id__volatile = 0; if (g_once_init_enter (&g_define_type_id__volatile)) { GType g_define_type_id = g_type_register_static_simple (G_TYPE_INTERFACE, g_intern_static_string (#TypeName), sizeof (TypeName ##Interface), (GClassInitFunc)(void (*)(void)) type_name ##_default_init, 0, (GInstanceInitFunc)NULL, (GTypeFlags) 0); if (TYPE_PREREQ) g_type_interface_add_prerequisite (g_define_type_id, TYPE_PREREQ); {
#define _G_DEFINE_INTERFACE_EXTENDED_END() } g_once_init_leave (&g_define_type_id__volatile, g_define_type_id); } return g_define_type_id__volatile; }
#define G_DEFINE_BOXED_TYPE(TypeName,type_name,copy_func,free_func) G_DEFINE_BOXED_TYPE_WITH_CODE (TypeName, type_name, copy_func, free_func, {})
#define G_DEFINE_BOXED_TYPE_WITH_CODE(TypeName,type_name,copy_func,free_func,_C_) _G_DEFINE_BOXED_TYPE_BEGIN (TypeName, type_name, copy_func, free_func) {_C_;} _G_DEFINE_TYPE_EXTENDED_END()
#if !defined (__cplusplus) && (__GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 7)) && !(defined (__APPLE__) && defined (__ppc64__))
#define _G_DEFINE_BOXED_TYPE_BEGIN(TypeName,type_name,copy_func,free_func) GType type_name ##_get_type (void) { static volatile gsize g_define_type_id__volatile = 0; if (g_once_init_enter (&g_define_type_id__volatile)) { GType (* _g_register_boxed) (const gchar *, union { TypeName * (*do_copy_type) (TypeName *); TypeName * (*do_const_copy_type) (const TypeName *); GBoxedCopyFunc do_copy_boxed; } __attribute__((__transparent_union__)), union { void (* do_free_type) (TypeName *); GBoxedFreeFunc do_free_boxed; } __attribute__((__transparent_union__)) ) = g_boxed_type_register_static; GType g_define_type_id = _g_register_boxed (g_intern_static_string (#TypeName), copy_func, free_func); {
#else
#define _G_DEFINE_BOXED_TYPE_BEGIN(TypeName,type_name,copy_func,free_func) GType type_name ##_get_type (void) { static volatile gsize g_define_type_id__volatile = 0; if (g_once_init_enter (&g_define_type_id__volatile)) { GType g_define_type_id = g_boxed_type_register_static (g_intern_static_string (#TypeName), (GBoxedCopyFunc) copy_func, (GBoxedFreeFunc) free_func); {
#endif
#define G_DEFINE_POINTER_TYPE(TypeName,type_name) G_DEFINE_POINTER_TYPE_WITH_CODE (TypeName, type_name, {})
#define G_DEFINE_POINTER_TYPE_WITH_CODE(TypeName,type_name,_C_) _G_DEFINE_POINTER_TYPE_BEGIN (TypeName, type_name) {_C_;} _G_DEFINE_TYPE_EXTENDED_END()
#define _G_DEFINE_POINTER_TYPE_BEGIN(TypeName,type_name) GType type_name ##_get_type (void) { static volatile gsize g_define_type_id__volatile = 0; if (g_once_init_enter (&g_define_type_id__volatile)) { GType g_define_type_id = g_pointer_type_register_static (g_intern_static_string (#TypeName)); {
#ifndef G_DISABLE_CAST_CHECKS
#define _G_TYPE_CIC(ip,gt,ct) ((ct*) g_type_check_instance_cast ((GTypeInstance*) ip, gt))
#define _G_TYPE_CCC(cp,gt,ct) ((ct*) g_type_check_class_cast ((GTypeClass*) cp, gt))
#else
#define _G_TYPE_CIC(ip,gt,ct) ((ct*) ip)
#define _G_TYPE_CCC(cp,gt,ct) ((ct*) cp)
#endif
#define _G_TYPE_CHI(ip) (g_type_check_instance ((GTypeInstance*) ip))
#define _G_TYPE_CHV(vl) (g_type_check_value ((GValue*) vl))
#define _G_TYPE_IGC(ip,gt,ct) ((ct*) (((GTypeInstance*) ip)->g_class))
#define _G_TYPE_IGI(ip,gt,ct) ((ct*) g_type_interface_peek (((GTypeInstance*) ip)->g_class, gt))
#define _G_TYPE_CIFT(ip,ft) (g_type_check_instance_is_fundamentally_a ((GTypeInstance*) ip, ft))
#ifdef __GNUC__
#define _G_TYPE_CIT(ip,gt) (G_GNUC_EXTENSION ({ GTypeInstance *__inst = (GTypeInstance*) ip; GType __t = gt; gboolean __r; if (!__inst) __r = FALSE; else if (__inst->g_class && __inst->g_class->g_type == __t) __r = TRUE; else __r = g_type_check_instance_is_a (__inst, __t); __r; }))
#define _G_TYPE_CCT(cp,gt) (G_GNUC_EXTENSION ({ GTypeClass *__class = (GTypeClass*) cp; GType __t = gt; gboolean __r; if (!__class) __r = FALSE; else if (__class->g_type == __t) __r = TRUE; else __r = g_type_check_class_is_a (__class, __t); __r; }))
#define _G_TYPE_CVH(vl,gt) (G_GNUC_EXTENSION ({ const GValue *__val = (const GValue*) vl; GType __t = gt; gboolean __r; if (!__val) __r = FALSE; else if (__val->g_type == __t) __r = TRUE; else __r = g_type_check_value_holds (__val, __t); __r; }))
#else
#define _G_TYPE_CIT(ip,gt) (g_type_check_instance_is_a ((GTypeInstance*) ip, gt))
#define _G_TYPE_CCT(cp,gt) (g_type_check_class_is_a ((GTypeClass*) cp, gt))
#define _G_TYPE_CVH(vl,gt) (g_type_check_value_holds ((const GValue*) vl, gt))
#endif
#define G_TYPE_FLAG_RESERVED_ID_BIT ((GType) (1 << 0))
#endif
