// GGHASH:V13zi9qPtTaBpZFepRHQBBqur0L4kADBLi6a7y9Nbdu0000024b9
#ifndef FONTSTR_H
#define FONTSTR_H 
#include <X11/Xproto.h>
#include "font.h"
#include <X11/Xfuncproto.h>
#include <X11/Xdefs.h>
#define GLYPHPADOPTIONS 4
#define FontGetPrivate(pFont,n) ((n) > (pFont)->maxPrivate ? (void *) 0 : (pFont)->devPrivates[n])
#define FontSetPrivate(pFont,n,ptr) ((n) > (pFont)->maxPrivate ? _FontSetNewPrivate (pFont, n, ptr) : ((((pFont)->devPrivates[n] = (ptr)) != 0) || TRUE))
#if FONT_PATH_ELEMENT_NAME_CONST
#endif
#define GLYPHWIDTHPIXELS(pci) ((pci)->metrics.rightSideBearing - (pci)->metrics.leftSideBearing)
#define GLYPHHEIGHTPIXELS(pci) ((pci)->metrics.ascent + (pci)->metrics.descent)
#define GLYPHWIDTHBYTES(pci) (((GLYPHWIDTHPIXELS(pci))+7) >> 3)
#define GLYPHWIDTHPADDED(bc) (((bc)+7) & ~0x7)
#define BYTES_PER_ROW(bits,nbytes) ((nbytes) == 1 ? (((bits)+7)>>3) :(nbytes) == 2 ? ((((bits)+15)>>3)&~1) :(nbytes) == 4 ? ((((bits)+31)>>3)&~3) :(nbytes) == 8 ? ((((bits)+63)>>3)&~7) : 0)
#define BYTES_FOR_GLYPH(ci,pad) (GLYPHHEIGHTPIXELS(ci) * BYTES_PER_ROW(GLYPHWIDTHPIXELS(ci),pad))
#define FONT_MAX_ASCENT(pi) ((pi)->fontAscent > (pi)->ink_maxbounds.ascent ? (pi)->fontAscent : (pi)->ink_maxbounds.ascent)
#define FONT_MAX_DESCENT(pi) ((pi)->fontDescent > (pi)->ink_maxbounds.descent ? (pi)->fontDescent : (pi)->ink_maxbounds.descent)
#define FONT_MAX_HEIGHT(pi) (FONT_MAX_ASCENT(pi) + FONT_MAX_DESCENT(pi))
#define FONT_MIN_LEFT(pi) ((pi)->ink_minbounds.leftSideBearing < 0 ? (pi)->ink_minbounds.leftSideBearing : 0)
#define FONT_MAX_RIGHT(pi) ((pi)->ink_maxbounds.rightSideBearing > (pi)->ink_maxbounds.characterWidth ? (pi)->ink_maxbounds.rightSideBearing : (pi)->ink_maxbounds.characterWidth)
#define FONT_MAX_WIDTH(pi) (FONT_MAX_RIGHT(pi) - FONT_MIN_LEFT(pi))
#include "fontproto.h"
#endif
