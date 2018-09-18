// GGHASH:V9XQwmdv9zs.ZEvsxkfAcLvMK0DnKP1KDKP96jRf.mMc000025be
#ifndef _XtintrinsicP_h
#define _XtintrinsicP_h 
#include <X11/Intrinsic.h>
#define XT_VERSION 11
#ifndef XT_REVISION
#define XT_REVISION 6
#endif
#define XtVersion (XT_VERSION * 1000 + XT_REVISION)
#define XtVersionDontCheck 0
#define XtExposeNoCompress ((XtEnum)False)
#define XtExposeCompressSeries ((XtEnum)True)
#define XtExposeCompressMultiple 2
#define XtExposeCompressMaximal 3
#define XtExposeGraphicsExpose 0x10
#define XtExposeGraphicsExposeMerged 0x20
#define XtExposeNoExpose 0x40
#define XtExposeNoRegion 0x80
#include <X11/CoreP.h>
#include <X11/CompositeP.h>
#include <X11/ConstrainP.h>
#include <X11/ObjectP.h>
#include <X11/RectObjP.h>
#define XtDisplay(widget) DisplayOfScreen((widget)->core.screen)
#define XtScreen(widget) ((widget)->core.screen)
#define XtWindow(widget) ((widget)->core.window)
#define XtClass(widget) ((widget)->core.widget_class)
#define XtSuperclass(widget) (XtClass(widget)->core_class.superclass)
#define XtIsRealized(object) (XtWindowOfObject(object) != None)
#define XtParent(widget) ((widget)->core.parent)
#undef XtIsRectObj
#define XtIsRectObj(obj) (((Object)(obj))->object.widget_class->core_class.class_inited & 0x02)
#undef XtIsWidget
#define XtIsWidget(obj) (((Object)(obj))->object.widget_class->core_class.class_inited & 0x04)
#undef XtIsComposite
#define XtIsComposite(obj) (((Object)(obj))->object.widget_class->core_class.class_inited & 0x08)
#undef XtIsConstraint
#define XtIsConstraint(obj) (((Object)(obj))->object.widget_class->core_class.class_inited & 0x10)
#undef XtIsShell
#define XtIsShell(obj) (((Object)(obj))->object.widget_class->core_class.class_inited & 0x20)
#undef XtIsWMShell
#define XtIsWMShell(obj) (((Object)(obj))->object.widget_class->core_class.class_inited & 0x40)
#undef XtIsTopLevelShell
#define XtIsTopLevelShell(obj) (((Object)(obj))->object.widget_class->core_class.class_inited & 0x80)
#ifdef DEBUG
#define XtCheckSubclass(w,widget_class_ptr,message) if (!XtIsSubclass(((Widget)(w)), (widget_class_ptr))) { String params[3]; Cardinal num_params = 3; params[0] = ((Widget)(w))->core.widget_class->core_class.class_name; params[1] = (widget_class_ptr)->core_class.class_name; params[2] = (message); XtAppErrorMsg(XtWidgetToApplicationContext((Widget)(w)), "subclassMismatch", "xtCheckSubclass", "XtToolkitError", "Widget class %s found when subclass of %s expected: %s", params, &num_params); }
#else
#define XtCheckSubclass(w,widget_class,message) 
#endif
#if (defined(_WIN32) || defined(__CYGWIN__)) && !defined(LIBXT_COMPILATION)
#else
#endif
#endif
