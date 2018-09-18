// GGHASH:VW.tP.uORfWfZKkXk9y2K6X0j.ncf3u2zlLRFCZ3FKWs000030cb
#ifndef _XFT_H_
#define _XFT_H_ 
#define XFT_MAJOR 2
#define XFT_MINOR 3
#define XFT_REVISION 2
#define XFT_VERSION ((XFT_MAJOR * 10000) + (XFT_MINOR * 100) + (XFT_REVISION))
#define XftVersion XFT_VERSION
#include <stdarg.h>
#include <ft2build.h>
#include FT_FREETYPE_H
#include <fontconfig/fontconfig.h>
#include <X11/extensions/Xrender.h>
#include <X11/Xfuncproto.h>
#ifndef _X_SENTINEL
#define _X_SENTINEL(x) 
#endif
#ifndef _XFT_NO_COMPAT_
#include <X11/Xft/XftCompat.h>
#endif
#define XFT_CORE "core"
#define XFT_RENDER "render"
#define XFT_XLFD "xlfd"
#define XFT_MAX_GLYPH_MEMORY "maxglyphmemory"
#define XFT_MAX_UNREF_FONTS "maxunreffonts"
#define XFT_NMISSING 256
#endif
