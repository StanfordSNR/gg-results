// GGHASH:VxifEMGPHOoimzjpP0ReKwtJMbvEE0.GZ5n0hreosGwk0000132e
#if !defined (_GUDEV_COMPILATION) && !defined(_GUDEV_INSIDE_GUDEV_H)
#error "Only <gudev/gudev.h> can be included directly, this file may disappear or change contents."
#endif
#ifndef __G_UDEV_ENUMERATOR_H__
#define __G_UDEV_ENUMERATOR_H__ 
#include <gudev/gudevtypes.h>
#define G_UDEV_TYPE_ENUMERATOR (g_udev_enumerator_get_type ())
#define G_UDEV_ENUMERATOR(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), G_UDEV_TYPE_ENUMERATOR, GUdevEnumerator))
#define G_UDEV_ENUMERATOR_CLASS(k) (G_TYPE_CHECK_CLASS_CAST((k), G_UDEV_TYPE_ENUMERATOR, GUdevEnumeratorClass))
#define G_UDEV_IS_ENUMERATOR(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), G_UDEV_TYPE_ENUMERATOR))
#define G_UDEV_IS_ENUMERATOR_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), G_UDEV_TYPE_ENUMERATOR))
#define G_UDEV_ENUMERATOR_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), G_UDEV_TYPE_ENUMERATOR, GUdevEnumeratorClass))
#ifdef G_DEFINE_AUTOPTR_CLEANUP_FUNC
#endif
#endif
