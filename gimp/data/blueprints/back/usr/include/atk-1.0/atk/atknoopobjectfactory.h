// GGHASH:VtMYsIZrXkYa4FAItHdt1UUYk2L0fvE3hYU..JQuzoTg00000948
#ifndef __ATK_NO_OP_OBJECT_FACTORY_H__
#define __ATK_NO_OP_OBJECT_FACTORY_H__ 
#if defined(ATK_DISABLE_SINGLE_INCLUDES) && !defined (__ATK_H_INSIDE__) && !defined (ATK_COMPILATION)
#error "Only <atk/atk.h> can be included directly."
#endif
#include <atk/atkobjectfactory.h>
#define ATK_TYPE_NO_OP_OBJECT_FACTORY (atk_no_op_object_factory_get_type ())
#define ATK_NO_OP_OBJECT_FACTORY(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), ATK_TYPE_NO_OP_OBJECT_FACTORY, AtkNoOpObjectFactory))
#define ATK_NO_OP_OBJECT_FACTORY_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), ATK_TYPE_NO_OP_OBJECT_FACTORY, AtkNoOpObjectFactoryClass))
#define ATK_IS_NO_OP_OBJECT_FACTORY(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), ATK_TYPE_NO_OP_OBJECT_FACTORY))
#define ATK_IS_NO_OP_OBJECT_FACTORY_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), ATK_TYPE_NO_OP_OBJECT_FACTORY))
#define ATK_NO_OP_OBJECT_FACTORY_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ( (obj), ATK_TYPE_NO_OP_OBJECT_FACTORY, AtkNoOpObjectFactoryClass))
#endif
