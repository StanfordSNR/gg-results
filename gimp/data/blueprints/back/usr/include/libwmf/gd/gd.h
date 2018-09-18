// GGHASH:VRZsORgihdfEe00jQbG6j40uyqwVl3sDQJ_1ZdFwBSzY00004c1e
#ifndef GD_H
#define GD_H 1
#ifdef __cplusplus
#endif
#define DEFAULT_FONTPATH "/usr/share/fonts/truetype"
#define PATHSEPARATOR ":"
#include <stdio.h>
#include <gd_io.h>
#include <gd_clip.h>
#define gdMaxColors 256
#define gdAlphaMax 127
#define gdAlphaOpaque 0
#define gdAlphaTransparent 127
#define gdRedMax 255
#define gdGreenMax 255
#define gdBlueMax 255
#define gdTrueColorGetAlpha(c) (((c) & 0x7F000000) >> 24)
#define gdTrueColorGetRed(c) (((c) & 0xFF0000) >> 16)
#define gdTrueColorGetGreen(c) (((c) & 0x00FF00) >> 8)
#define gdTrueColorGetBlue(c) ((c) & 0x0000FF)
#define gdDashSize 4
#define gdStyled (-2)
#define gdBrushed (-3)
#define gdStyledBrushed (-4)
#define gdTiled (-5)
#define gdTransparent (-6)
#define gdImageCreatePalette gdImageCreate
#define gdTrueColor(r,g,b) (((r) << 16) + ((g) << 8) + (b))
#define gdTrueColorAlpha(r,g,b,a) (((a) << 24) + ((r) << 16) + ((g) << 8) + (b))
#define gdArc 0
#define gdPie gdArc
#define gdChord 1
#define gdNoFill 2
#define gdEdged 4
#define gdImageTrueColor(im) ((im)->trueColor)
#define gdImageSX(im) ((im)->sx)
#define gdImageSY(im) ((im)->sy)
#define gdImageColorsTotal(im) ((im)->colorsTotal)
#define gdImageRed(im,c) ((im)->trueColor ? gdTrueColorGetRed(c) : (im)->red[(c)])
#define gdImageGreen(im,c) ((im)->trueColor ? gdTrueColorGetGreen(c) : (im)->green[(c)])
#define gdImageBlue(im,c) ((im)->trueColor ? gdTrueColorGetBlue(c) : (im)->blue[(c)])
#define gdImageAlpha(im,c) ((im)->trueColor ? gdTrueColorGetAlpha(c) : (im)->alpha[(c)])
#define gdImageGetTransparent(im) ((im)->transparent)
#define gdImageGetInterlaced(im) ((im)->interlace)
#define gdImagePalettePixel(im,x,y) (im)->pixels[(y)][(x)]
#define gdImageTrueColorPixel(im,x,y) (im)->tpixels[(y)][(x)]
#define GD2_CHUNKSIZE 128
#define GD2_CHUNKSIZE_MIN 64
#define GD2_CHUNKSIZE_MAX 4096
#define GD2_VERS 2
#define GD2_ID "gd2"
#define GD2_FMT_RAW 1
#define GD2_FMT_COMPRESSED 2
#define GD_CMP_IMAGE 1
#define GD_CMP_NUM_COLORS 2
#define GD_CMP_COLOR 4
#define GD_CMP_SIZE_X 8
#define GD_CMP_SIZE_Y 16
#define GD_CMP_TRANSPARENT 32
#define GD_CMP_BACKGROUND 64
#define GD_CMP_INTERLACE 128
#define GD_CMP_TRUECOLOR 256
#define GD_RESOLUTION 96
#ifdef __cplusplus
#endif
#endif
