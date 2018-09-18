// GGHASH:VeNrXB5FLXdMo_B4NApi4al3Ga1dKOuIgiHGFTqr5Em400007ec3
#ifndef __G_OBJECT_H__
#define __G_OBJECT_H__ 
#if !defined (__GLIB_GOBJECT_H_INSIDE__) && !defined (GOBJECT_COMPILATION)
#error "Only <glib-object.h> can be included directly."
#endif
#include <gobject/gtype.h>
#include <gobject/gvalue.h>
#include <gobject/gparam.h>
#include <gobject/gclosure.h>
#include <gobject/gsignal.h>
#include <gobject/gboxed.h>
#define G_TYPE_IS_OBJECT(type) (G_TYPE_FUNDAMENTAL (type) == G_TYPE_OBJECT)
#define G_OBJECT(object) (G_TYPE_CHECK_INSTANCE_CAST ((object), G_TYPE_OBJECT, GObject))
#define G_OBJECT_CLASS(class) (G_TYPE_CHECK_CLASS_CAST ((class), G_TYPE_OBJECT, GObjectClass))
#if GLIB_VERSION_MAX_ALLOWED >= GLIB_VERSION_2_42
#define G_IS_OBJECT(object) (G_TYPE_CHECK_INSTANCE_FUNDAMENTAL_TYPE ((object), G_TYPE_OBJECT))
#else
#define G_IS_OBJECT(object) (G_TYPE_CHECK_INSTANCE_TYPE ((object), G_TYPE_OBJECT))
#endif
#define G_IS_OBJECT_CLASS(class) (G_TYPE_CHECK_CLASS_TYPE ((class), G_TYPE_OBJECT))
#define G_OBJECT_GET_CLASS(object) (G_TYPE_INSTANCE_GET_CLASS ((object), G_TYPE_OBJECT, GObjectClass))
#define G_OBJECT_TYPE(object) (G_TYPE_FROM_INSTANCE (object))
#define G_OBJECT_TYPE_NAME(object) (g_type_name (G_OBJECT_TYPE (object)))
#define G_OBJECT_CLASS_TYPE(class) (G_TYPE_FROM_CLASS (class))
#define G_OBJECT_CLASS_NAME(class) (g_type_name (G_OBJECT_CLASS_TYPE (class)))
#define G_VALUE_HOLDS_OBJECT(value) (G_TYPE_CHECK_VALUE_TYPE ((value), G_TYPE_OBJECT))
#define G_TYPE_INITIALLY_UNOWNED (g_initially_unowned_get_type())
#define G_INITIALLY_UNOWNED(object) (G_TYPE_CHECK_INSTANCE_CAST ((object), G_TYPE_INITIALLY_UNOWNED, GInitiallyUnowned))
#define G_INITIALLY_UNOWNED_CLASS(class) (G_TYPE_CHECK_CLASS_CAST ((class), G_TYPE_INITIALLY_UNOWNED, GInitiallyUnownedClass))
#define G_IS_INITIALLY_UNOWNED(object) (G_TYPE_CHECK_INSTANCE_TYPE ((object), G_TYPE_INITIALLY_UNOWNED))
#define G_IS_INITIALLY_UNOWNED_CLASS(class) (G_TYPE_CHECK_CLASS_TYPE ((class), G_TYPE_INITIALLY_UNOWNED))
#define G_INITIALLY_UNOWNED_GET_CLASS(object) (G_TYPE_INSTANCE_GET_CLASS ((object), G_TYPE_INITIALLY_UNOWNED, GInitiallyUnownedClass))
#if (__GNUC__ > 4 || (__GNUC__ == 4 && __GNUC_MINOR__ >= 8)) && !defined(__cplusplus) && GLIB_VERSION_MAX_ALLOWED >= GLIB_VERSION_2_56
#define g_object_ref(Obj) ((__typeof__(Obj)) (g_object_ref) (Obj))
#define g_object_ref_sink(Obj) ((__typeof__(Obj)) (g_object_ref_sink) (Obj))
#endif
#define G_OBJECT_WARN_INVALID_PSPEC(object,pname,property_id,pspec) G_STMT_START { GObject *_glib__object = (GObject*) (object); GParamSpec *_glib__pspec = (GParamSpec*) (pspec); guint _glib__property_id = (property_id); g_warning ("%s:%d: invalid %s id %u for \"%s\" of type '%s' in '%s'", __FILE__, __LINE__, (pname), _glib__property_id, _glib__pspec->name, g_type_name (G_PARAM_SPEC_TYPE (_glib__pspec)), G_OBJECT_TYPE_NAME (_glib__object)); } G_STMT_END
#define G_OBJECT_WARN_INVALID_PROPERTY_ID(object,property_id,pspec) G_OBJECT_WARN_INVALID_PSPEC ((object), "property", (property_id), (pspec))
#define g_clear_object(object_ptr) g_clear_pointer ((object_ptr), g_object_unref)
#define g_set_object(object_ptr,new_object) ( 0 ? *(object_ptr) = (new_object), FALSE : (g_set_object) ((GObject **) (object_ptr), (GObject *) (new_object)) )
#define g_clear_weak_pointer(weak_pointer_location) ( (g_clear_weak_pointer) ((gpointer *) (weak_pointer_location)) )
#define g_set_weak_pointer(weak_pointer_location,new_object) ( 0 ? *(weak_pointer_location) = (new_object), FALSE : (g_set_weak_pointer) ((gpointer *) (weak_pointer_location), (GObject *) (new_object)) )
#endif
