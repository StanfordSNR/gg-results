// GGHASH:V.gGNOw8hpHAHCc..Iwl51Zj2Zc1UJt5J_fHM7SWTFLE00000bd6
#ifndef _XmuWidgetNode_h
#define _XmuWidgetNode_h 
#include <X11/Intrinsic.h>
#include <X11/Xfuncproto.h>
#define XmuWnClass(wn) ((wn)->widget_class_ptr[0])
#define XmuWnClassname(wn) (XmuWnClass(wn)->core_class.class_name)
#define XmuWnSuperclass(wn) ((XmuWnClass(wn))->core_class.superclass)
#endif
