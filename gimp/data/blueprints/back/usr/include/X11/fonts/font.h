// GGHASH:VQrIWatmgPXu_KcDl5hk82_g9V4_1.hs2.gkJLSQuNbg0000109d
#ifndef FONT_H
#define FONT_H 
#include <X11/Xfuncproto.h>
#ifndef BitmapFormatByteOrderMask
#include "fsmasks.h"
#endif
#ifndef _XTYPEDEF_FONTPTR
#define _XTYPEDEF_FONTPTR 
#endif
#ifndef _XTYPEDEF_CHARINFOPTR
#define _XTYPEDEF_CHARINFOPTR 
#endif
#define NullCharInfo ((CharInfoPtr) 0)
#define NullFont ((FontPtr) 0)
#define NullFontInfo ((FontInfoPtr) 0)
#define LeftToRight 0
#define RightToLeft 1
#define BottomToTop 2
#define TopToBottom 3
#define NO_SUCH_CHAR -1
#define FontAliasType 0x1000
#define AllocError 80
#define StillWorking 81
#define FontNameAlias 82
#define BadFontName 83
#define Suspended 84
#define Successful 85
#define BadFontPath 86
#define BadCharRange 87
#define BadFontFormat 88
#define FPEResetFailed 89
#define FontLoadInfo 0x0001
#define FontLoadProps 0x0002
#define FontLoadMetrics 0x0004
#define FontLoadBitmaps 0x0008
#define FontLoadAll 0x000f
#define FontOpenSync 0x0010
#define FontReopen 0x0020
#define LoadAll 0x1
#define FinishRamge 0x2
#define EightBitFont 0x4
#define SixteenBitFont 0x8
#define CACHING_OFF 0
#define CACHE_16_BIT_GLYPHS 1
#define CACHE_ALL_GLYPHS 2
#define DEFAULT_GLYPH_CACHING_MODE CACHE_16_BIT_GLYPHS
#if 0
#endif
#endif
