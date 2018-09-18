// GGHASH:VKsbGzsLlfxBj.Jsgz4hU5il3HZ67EduUGqXEqvHMbFA0000f768
#ifndef _XtIntrinsic_h
#define _XtIntrinsic_h 
#include <X11/Xlib.h>
#include <X11/Xutil.h>
#include <X11/Xresource.h>
#include <X11/Xfuncproto.h>
#ifdef XT_BC
#include <X11/Xos.h>
#else
#include <X11/Xosdefs.h>
#include <string.h>
#endif
#define XtSpecificationRelease 6
#define _XtString char*
#if NeedWidePrototypes
#define _XtBoolean int
#define _XtDimension unsigned int
#define _XtKeyCode unsigned int
#define _XtPosition int
#define _XtXtEnum unsigned int
#else
#define _XtBoolean Boolean
#define _XtDimension Dimension
#define _XtKeyCode KeyCode
#define _XtPosition Position
#define _XtXtEnum XtEnum
#endif
#include <stddef.h>
#ifdef VMS
#define externalref globalref
#define externaldef(psect) globaldef {"psect"} noshare
#else
#define externalref extern
#define externaldef(psect) 
#endif
#ifndef FALSE
#define FALSE 0
#define TRUE 1
#endif
#define XtNumber(arr) ((Cardinal) (sizeof(arr) / sizeof(arr[0])))
#define XtCacheNone 0x001
#define XtCacheAll 0x002
#define XtCacheByDisplay 0x003
#define XtCacheRefCount 0x100
#include <X11/Core.h>
#include <X11/Composite.h>
#include <X11/Constraint.h>
#include <X11/Object.h>
#include <X11/RectObj.h>
#define XtCWQueryOnly (1 << 7)
#define XtSMDontChange 5
#define XtInputNoneMask 0L
#define XtInputReadMask (1L<<0)
#define XtInputWriteMask (1L<<1)
#define XtInputExceptMask (1L<<2)
#define XtAllEvents ((EventMask) -1L)
#define XtIMXEvent 1
#define XtIMTimer 2
#define XtIMAlternateInput 4
#define XtIMSignal 8
#define XtIMAll (XtIMXEvent | XtIMTimer | XtIMAlternateInput | XtIMSignal)
#define XtIsRectObj(object) (_XtCheckSubclassFlag(object, (XtEnum)0x02))
#define XtIsWidget(object) (_XtCheckSubclassFlag(object, (XtEnum)0x04))
#define XtIsComposite(widget) (_XtCheckSubclassFlag(widget, (XtEnum)0x08))
#define XtIsConstraint(widget) (_XtCheckSubclassFlag(widget, (XtEnum)0x10))
#define XtIsShell(widget) (_XtCheckSubclassFlag(widget, (XtEnum)0x20))
#undef XtIsOverrideShell
#define XtIsOverrideShell(widget) (_XtIsSubclassOf(widget, (WidgetClass)overrideShellWidgetClass, (WidgetClass)shellWidgetClass, (XtEnum)0x20))
#define XtIsWMShell(widget) (_XtCheckSubclassFlag(widget, (XtEnum)0x40))
#undef XtIsVendorShell
#define XtIsVendorShell(widget) (_XtIsSubclassOf(widget, (WidgetClass)vendorShellWidgetClass, (WidgetClass)wmShellWidgetClass, (XtEnum)0x40))
#undef XtIsTransientShell
#define XtIsTransientShell(widget) (_XtIsSubclassOf(widget, (WidgetClass)transientShellWidgetClass, (WidgetClass)wmShellWidgetClass, (XtEnum)0x40))
#define XtIsTopLevelShell(widget) (_XtCheckSubclassFlag(widget, (XtEnum)0x80))
#undef XtIsApplicationShell
#define XtIsApplicationShell(widget) (_XtIsSubclassOf(widget, (WidgetClass)applicationShellWidgetClass, (WidgetClass)topLevelShellWidgetClass, (XtEnum)0x80))
#undef XtIsSessionShell
#define XtIsSessionShell(widget) (_XtIsSubclassOf(widget, (WidgetClass)sessionShellWidgetClass, (WidgetClass)topLevelShellWidgetClass, (XtEnum)0x80))
#define XtSetArg(arg,n,d) ((void)( (arg).name = (n), (arg).value = (XtArgVal)(d) ))
#define XtVaNestedList "XtVaNestedList"
#define XtVaTypedArg "XtVaTypedArg"
#ifndef _XtIntrinsicP_h
#endif
#undef XtMapWidget
#define XtMapWidget(widget) XMapWindow(XtDisplay(widget), XtWindow(widget))
#undef XtUnmapWidget
#define XtUnmapWidget(widget) XUnmapWindow(XtDisplay(widget), XtWindow(widget))
#define XtUnspecifiedPixmap ((Pixmap)2)
#define XtUnspecifiedShellInt (-1)
#define XtUnspecifiedWindow ((Window)2)
#define XtUnspecifiedWindowGroup ((Window)3)
#define XtCurrentDirectory "XtCurrentDirectory"
#define XtDefaultForeground "XtDefaultForeground"
#define XtDefaultBackground "XtDefaultBackground"
#define XtDefaultFont "XtDefaultFont"
#define XtDefaultFontSet "XtDefaultFontSet"
#define XtOffset(p_type,field) ((Cardinal) (((char *) (&(((p_type)NULL)->field))) - ((char *) NULL)))
#ifdef offsetof
#define XtOffsetOf(s_type,field) offsetof(s_type,field)
#else
#define XtOffsetOf(s_type,field) XtOffset(s_type*,field)
#endif
#ifndef _X_RESTRICT_KYWD
#define _X_RESTRICT_KYWD 
#endif
#ifdef XTTRACEMEMORY
#define XtMalloc(size) _XtMalloc(size, __FILE__, __LINE__)
#define XtRealloc(ptr,size) _XtRealloc(ptr, size, __FILE__, __LINE__)
#define XtCalloc(num,size) _XtCalloc(num, size, __FILE__, __LINE__)
#define XtFree(ptr) _XtFree(ptr)
#endif
#define XtNew(type) ((type *) XtMalloc((unsigned) sizeof(type)))
#undef XtNewString
#define XtNewString(str) ((str) != NULL ? (strcpy(XtMalloc((unsigned)strlen(str) + 1), str)) : NULL)
#define XT_CONVERT_FAIL (Atom)0x80000001
#define XtCvtStringToPosition XtCvtStringToShort
#define XtCvtIntToDimension XtCvtIntToShort
#define XtCvtIntToPosition XtCvtIntToShort
#define XtCvtPixelToColor XtCvtIntToColor
#endif
