// GGHASH:V9gmkskQZ782718YgtbMsreLF1ThVXr4mmezBn1GJbJY00003f55
#ifndef XPM_h
#define XPM_h 
#define XpmFormat 3
#define XpmVersion 4
#define XpmRevision 11
#define XpmIncludeVersion ((XpmFormat * 100 + XpmVersion) * 100 + XpmRevision)
#ifndef XPM_NUMBERS
#ifdef FOR_MSW
#define SYSV 
# include <malloc.h>
# include "simx.h"
#define NEED_STRCASECMP 
#else
# ifdef AMIGA
# include "amigax.h"
# else
# include <X11/Xlib.h>
# include <X11/Xutil.h>
# endif
#endif
#if ! defined(_XtIntrinsic_h) && ! defined(PIXEL_ALREADY_TYPEDEFED)
#define PIXEL_ALREADY_TYPEDEFED 
#endif
#define XpmColorError 1
#define XpmSuccess 0
#define XpmOpenFailed -1
#define XpmFileInvalid -2
#define XpmNoMemory -3
#define XpmColorFailed -4
#define XpmVisual (1L<<0)
#define XpmColormap (1L<<1)
#define XpmDepth (1L<<2)
#define XpmSize (1L<<3)
#define XpmHotspot (1L<<4)
#define XpmCharsPerPixel (1L<<5)
#define XpmColorSymbols (1L<<6)
#define XpmRgbFilename (1L<<7)
#define XpmInfos (1L<<8)
#define XpmReturnInfos XpmInfos
#define XpmReturnPixels (1L<<9)
#define XpmExtensions (1L<<10)
#define XpmReturnExtensions XpmExtensions
#define XpmExactColors (1L<<11)
#define XpmCloseness (1L<<12)
#define XpmRGBCloseness (1L<<13)
#define XpmColorKey (1L<<14)
#define XpmColorTable (1L<<15)
#define XpmReturnColorTable XpmColorTable
#define XpmReturnAllocPixels (1L<<16)
#define XpmAllocCloseColors (1L<<17)
#define XpmBitmapFormat (1L<<18)
#define XpmAllocColor (1L<<19)
#define XpmFreeColors (1L<<20)
#define XpmColorClosure (1L<<21)
#define XpmComments XpmInfos
#define XpmReturnComments XpmComments
#ifndef FOR_MSW
#define XpmUndefPixel 0x80000000
#else
#define XpmUndefPixel 0x8000
#endif
#define XPM_MONO 2
#define XPM_GREY4 3
#define XPM_GRAY4 3
#define XPM_GREY 4
#define XPM_GRAY 4
#define XPM_COLOR 5
#define FUNC(f,t,p) extern t f p
#define LFUNC(f,t,p) static t f p
#if !defined(FOR_MSW) && !defined(AMIGA)
#endif
#if !defined(FOR_MSW) && !defined(AMIGA)
#endif
#if !defined(FOR_MSW) && !defined(AMIGA)
#endif
#if !defined(FOR_MSW) && !defined(AMIGA)
#endif
#define XpmPixmapColorError XpmColorError
#define XpmPixmapSuccess XpmSuccess
#define XpmPixmapOpenFailed XpmOpenFailed
#define XpmPixmapFileInvalid XpmFileInvalid
#define XpmPixmapNoMemory XpmNoMemory
#define XpmPixmapColorFailed XpmColorFailed
#define XpmReadPixmapFile(dpy,d,file,pix,mask,att) XpmReadFileToPixmap(dpy, d, file, pix, mask, att)
#define XpmWritePixmapFile(dpy,file,pix,mask,att) XpmWriteFileFromPixmap(dpy, file, pix, mask, att)
#define PixmapColorError XpmColorError
#define PixmapSuccess XpmSuccess
#define PixmapOpenFailed XpmOpenFailed
#define PixmapFileInvalid XpmFileInvalid
#define PixmapNoMemory XpmNoMemory
#define PixmapColorFailed XpmColorFailed
#define ColorSymbol XpmColorSymbol
#define XReadPixmapFile(dpy,d,file,pix,mask,att) XpmReadFileToPixmap(dpy, d, file, pix, mask, att)
#define XWritePixmapFile(dpy,file,pix,mask,att) XpmWriteFileFromPixmap(dpy, file, pix, mask, att)
#define XCreatePixmapFromData(dpy,d,data,pix,mask,att) XpmCreatePixmapFromData(dpy, d, data, pix, mask, att)
#define XCreateDataFromPixmap(dpy,data,pix,mask,att) XpmCreateDataFromPixmap(dpy, data, pix, mask, att)
#endif
#endif
