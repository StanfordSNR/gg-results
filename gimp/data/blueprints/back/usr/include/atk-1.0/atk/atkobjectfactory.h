// GGHASH:VL1y7oj7MEmb4K3Q7IxHgj0MeFZfztsatEMmPaxHeQ8o00000aa0
#ifndef __ATK_OBJECT_FACTORY_H__
#define __ATK_OBJECT_FACTORY_H__ 
#if defined(ATK_DISABLE_SINGLE_INCLUDES) && !defined (__ATK_H_INSIDE__) && !defined (ATK_COMPILATION)
#error "Only <atk/atk.h> can be included directly."
#endif
#include <glib-object.h>
#include <atk/atkobject.h>
#define ATK_TYPE_OBJECT_FACTORY (atk_object_factory_get_type ())
#define ATK_OBJECT_FACTORY(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), ATK_TYPE_OBJECT_FACTORY, AtkObjectFactory))
#define ATK_OBJECT_FACTORY_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), ATK_TYPE_OBJECT_FACTORY, AtkObjectFactoryClass))
#define ATK_IS_OBJECT_FACTORY(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), ATK_TYPE_OBJECT_FACTORY))
#define ATK_IS_OBJECT_FACTORY_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), ATK_TYPE_OBJECT_FACTORY))
#define ATK_OBJECT_FACTORY_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), ATK_TYPE_OBJECT_FACTORY, AtkObjectFactoryClass))
#endif
