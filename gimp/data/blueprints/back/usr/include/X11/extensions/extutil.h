// GGHASH:V2SeEh9XrlpEU6BtMqo5JExUzMhbm0HqCtKkWKNqu6R4000017d0
#ifndef _EXTUTIL_H_
#define _EXTUTIL_H_ 
#include <X11/extensions/Xext.h>
#define XextHasExtension(i) ((i) && ((i)->codes))
#define XextCheckExtension(dpy,i,name,val) if (!XextHasExtension(i)) { XMissingExtension (dpy, name); return val; }
#define XextSimpleCheckExtension(dpy,i,name) if (!XextHasExtension(i)) { XMissingExtension (dpy, name); return; }
#define XEXT_GENERATE_FIND_DISPLAY(proc,extinfo,extname,hooks,nev,data) XExtDisplayInfo *proc (Display *dpy) { XExtDisplayInfo *dpyinfo; if (!extinfo) { if (!(extinfo = XextCreateExtension())) return NULL; } if (!(dpyinfo = XextFindDisplay (extinfo, dpy))) dpyinfo = XextAddDisplay (extinfo,dpy,extname,hooks,nev,data); return dpyinfo; }
#define XEXT_FIND_DISPLAY_PROTO(proc) XExtDisplayInfo *proc(Display *dpy)
#define XEXT_GENERATE_CLOSE_DISPLAY(proc,extinfo) int proc (Display *dpy, XExtCodes *codes) { return XextRemoveDisplay (extinfo, dpy); }
#define XEXT_CLOSE_DISPLAY_PROTO(proc) int proc(Display *dpy, XExtCodes *codes)
#define XEXT_GENERATE_ERROR_STRING(proc,extname,nerr,errl) char *proc (Display *dpy, int code, XExtCodes *codes, char *buf, int n) { code -= codes->first_error; if (code >= 0 && code < nerr) { char tmp[256]; snprintf (tmp, sizeof(tmp), "%s.%d", extname, code); XGetErrorDatabaseText (dpy, "XProtoError", tmp, errl[code], buf, n); return buf; } return (char *)0; }
#define XEXT_ERROR_STRING_PROTO(proc) char *proc(Display *dpy, int code, XExtCodes *codes, char *buf, int n)
#endif
