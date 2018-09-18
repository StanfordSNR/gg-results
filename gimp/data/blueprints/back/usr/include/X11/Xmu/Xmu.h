// GGHASH:VRDW5gGwHBs2183rwiwwYloaRtQhsic_eOXfm0i7ba0o00000fed
#ifndef _XMU_H_
#define _XMU_H_ 
#include <X11/Xfuncproto.h>
#include <X11/Intrinsic.h>
#include <X11/Xmu/Atoms.h>
#include <X11/Xmu/CharSet.h>
#include <X11/Xmu/Converters.h>
#include <X11/Xmu/Drawing.h>
#include <X11/Xmu/Error.h>
#include <X11/Xmu/StdSel.h>
#define XmuCreateArea() XmuNewArea(0, 0, 0, 0)
#define XmuAreaOr(dst,src) XmuAreaOrXor((dst), (src), True)
#define XmuAreaXor(dst,src) XmuAreaOrXor((dst), (src), False)
#define XmuDestroyArea(a) do { XmuDestroyScanlineList((a)->scanline); XtFree((char *)(a)); } while (0)
#define FreeArea(a) do { XmuDestroyScanlineList((a)->scanline); a->scanline = (Scanline *)0; } while (0)
#define XmuValidSegment(s) ((s)->x1 < (s)->x2)
#define XmuSegmentEqu(s1,s2) ((s1)->x1 == (s2)->x1 && (s1)->x2 == (s2)->x2)
#define XmuDestroySegment(s) XtFree((char *)(s))
#define XmuDestroyScanline(s) do { XmuDestroySegmentList((s)->segment); XtFree((char*)(s)); } while (0)
#ifndef notdef
#endif
#ifndef _SYSUTIL_H_
#endif
#endif
