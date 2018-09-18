// GGHASH:VY3JCywZTCfNgEyarzg1eTjm4Ad_hWYMaNbAoTkiBfow00000e2e
#ifndef __ATK_IMAGE_H__
#define __ATK_IMAGE_H__ 
#if defined(ATK_DISABLE_SINGLE_INCLUDES) && !defined (__ATK_H_INSIDE__) && !defined (ATK_COMPILATION)
#error "Only <atk/atk.h> can be included directly."
#endif
#include <atk/atkobject.h>
#include <atk/atkutil.h>
#define ATK_TYPE_IMAGE (atk_image_get_type ())
#define ATK_IS_IMAGE(obj) G_TYPE_CHECK_INSTANCE_TYPE ((obj), ATK_TYPE_IMAGE)
#define ATK_IMAGE(obj) G_TYPE_CHECK_INSTANCE_CAST ((obj), ATK_TYPE_IMAGE, AtkImage)
#define ATK_IMAGE_GET_IFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), ATK_TYPE_IMAGE, AtkImageIface))
#ifndef _TYPEDEF_ATK_IMAGE_
#define _TYPEDEF_ATK_IMAGE_ 
#endif
#endif
