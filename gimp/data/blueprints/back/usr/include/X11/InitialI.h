// GGHASH:V0WhKajRu29_lirdWMansgvtDBHf0c66NHYt1YavaXg40000313c
#ifndef _XtinitialI_h
#define _XtinitialI_h 
#ifndef X_NOT_POSIX
#ifdef _POSIX_SOURCE
#include <limits.h>
#else
#define _POSIX_SOURCE 
#include <limits.h>
#undef _POSIX_SOURCE
#endif
#endif
#ifndef PATH_MAX
#ifdef WIN32
#define PATH_MAX 512
#else
#include <sys/param.h>
#endif
#ifndef PATH_MAX
#ifdef MAXPATHLEN
#define PATH_MAX MAXPATHLEN
#else
#define PATH_MAX 1024
#endif
#endif
#endif
#include <X11/Xos.h>
#include <X11/Xpoll.h>
#ifndef USE_POLL
#endif
#ifndef NO_IDENTIFY_WINDOWS
#endif
#ifdef XTHREADS
#endif
#ifdef XTTRACEMEMORY
#define _XtHeapAlloc(heap,bytes) _XtHeapMalloc(heap, bytes, __FILE__, __LINE__)
#else
#endif
#ifdef XTHREADS
#endif
#ifndef X_NO_RESOURCE_CONFIGURATION_MANAGEMENT
#endif
#if 0
#ifdef DEBUG
#define _XtGetPerDisplay(display) ((_XtperDisplayList != NULL && (_XtperDisplayList->dpy == (display))) ? &_XtperDisplayList->perDpy : _XtSortPerDisplayList(display))
#define _XtGetPerDisplayInput(display) ((_XtperDisplayList != NULL && (_XtperDisplayList->dpy == (display))) ? &_XtperDisplayList->perDpy.pdi : &_XtSortPerDisplayList(display)->pdi)
#else
#define _XtGetPerDisplay(display) ((_XtperDisplayList->dpy == (display)) ? &_XtperDisplayList->perDpy : _XtSortPerDisplayList(display))
#define _XtGetPerDisplayInput(display) ((_XtperDisplayList->dpy == (display)) ? &_XtperDisplayList->perDpy.pdi : &_XtSortPerDisplayList(display)->pdi)
#endif
#endif
#define _XtSafeToDestroy(app) ((app)->dispatch_level == 0)
#endif
