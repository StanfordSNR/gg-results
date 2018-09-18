// GGHASH:Ve2IITrK9rwJCjUCxE3CP.jeBqJeDLbv0d1iV7e4w8_E00001988
#ifndef _XtintrinsicI_h
#define _XtintrinsicI_h 
#include "Xtos.h"
#include "IntrinsicP.h"
#ifdef WIN32
#define _WILLWINSOCK_ 
#endif
#include <X11/Xos.h>
#include "Object.h"
#include "RectObj.h"
#include "ObjectP.h"
#include "RectObjP.h"
#include "ConvertI.h"
#include "TranslateI.h"
#define RectObjClassFlag 0x02
#define WidgetClassFlag 0x04
#define CompositeClassFlag 0x08
#define ConstraintClassFlag 0x10
#define ShellClassFlag 0x20
#define WMShellClassFlag 0x40
#define TopLevelClassFlag 0x80
#define XtDisplayOfObject(object) (XtIsWidget(object) ? (object)->core.screen->display : _XtIsHookObject(object) ? ((HookObject)(object))->hooks.screen->display : _XtWindowedAncestor(object)->core.screen->display)
#define XtScreenOfObject(object) (XtIsWidget(object) ? (object)->core.screen : _XtIsHookObject(object) ? ((HookObject)(object))->hooks.screen : _XtWindowedAncestor(object)->core.screen)
#define XtWindowOfObject(object) ((XtIsWidget(object) ? (object) : _XtWindowedAncestor(object)) ->core.window)
#define XtIsManaged(object) (XtIsRectObj(object) ? (object)->core.managed : False)
#define XtIsSensitive(object) (XtIsRectObj(object) ? ((object)->core.sensitive && (object)->core.ancestor_sensitive) : False)
#define _XBCOPYFUNC _XtBcopy
#include <X11/Xfuncs.h>
#define XtMemmove(dst,src,size) if ((char *)(dst) != (char *)(src)) { (void) memcpy((char *) (dst), (char *) (src), (int) (size)); }
#define XtBZero(dst,size) bzero((char *) (dst), (int) (size))
#define XtMemcmp(b1,b2,size) memcmp((char *) (b1), (char *) (b2), (int) (size))
#define XtStackAlloc(size,stack_cache_array) ((size) <= sizeof(stack_cache_array) ? (XtPointer)(stack_cache_array) : XtMalloc((unsigned)(size)))
#define XtStackFree(pointer,stack_cache_array) { if ((pointer) != ((XtPointer)(stack_cache_array))) XtFree(pointer); }
#ifndef XFILESEARCHPATHDEFAULT
#define XFILESEARCHPATHDEFAULT "/usr/lib/X11/%L/%T/%N%S:/usr/lib/X11/%l/%T/%N%S:/usr/lib/X11/%T/%N%S"
#endif
#ifndef XTERROR_PREFIX
#define XTERROR_PREFIX ""
#endif
#ifndef XTWARNING_PREFIX
#define XTWARNING_PREFIX ""
#endif
#ifndef ERRORDB
#define ERRORDB "/usr/lib/X11/XtErrorDB"
#endif
#ifdef XT_GEO_TATTLER
#define CALLGEOTAT(f) f
#else
#define CALLGEOTAT(f) 
#endif
#ifndef XTTRACEMEMORY
#else
#define __XtMalloc XtMalloc
#define __XtCalloc XtCalloc
#endif
#endif
