// GGHASH:VjvzMF18dGJedbgiIyk0JG4B4IsREYZpzy6BMvqkcjeE0000144e
#ifndef _XtselectionI_h
#define _XtselectionI_h 
#include "Intrinsic.h"
#define IndirectPairWordSize 2
#define MAX_SELECTION_INCR(dpy) (((65536 < XMaxRequestSize(dpy)) ? (65536 << 2) : (XMaxRequestSize(dpy) << 2))-100)
#define MATCH_SELECT(event,info) ((event->time == info->time) && (event->requestor == XtWindow(info->widget)) && (event->selection == info->ctx->selection) && (event->target == *info->target))
#endif
