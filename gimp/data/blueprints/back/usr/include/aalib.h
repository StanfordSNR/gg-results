// GGHASH:VaXqWJ672iklxtlzqz8BOEU4wFyxGrjGrAUtfWZpOSio00008525
#ifndef __AALIB_INCLUDED__
#define __AALIB_INCLUDED__ 
#include <stdio.h>
#ifdef __cplusplus
#endif
#define __AA_CONST const
#ifdef __GNUC__
#ifdef __i386__
#define __AA_ALIGN __attribute__ ((__aligned__ (4)))
#define __AA_NOALIGN __attribute__ ((__packed__))
#endif
#endif
#ifndef __AA_ALIGN
#define __AA_ALIGN 
#endif
#ifndef __AA_NOALIGN
#define __AA_NOALIGN 
#endif
#define AA_LIB_VERSION 1
#define AA_LIB_MINNOR 4
#define AA_LIB_VERSIONCODE 104000
#define AA_NATTRS 5
#define AA_NPARAMS 5
#define AA_RESIZE 258
#define AA_MOUSE 259
#define AA_UP 300
#define AA_DOWN 301
#define AA_LEFT 302
#define AA_RIGHT 303
#define AA_BACKSPACE 304
#define AA_ESC 305
#define AA_UNKNOWN 400
#define AA_RELEASE 65536
#define AA_NORMAL_MASK 1
#define AA_DIM_MASK 2
#define AA_BOLD_MASK 4
#define AA_BOLDFONT_MASK 8
#define AA_REVERSE_MASK 16
#define AA_ALL 128
#define AA_EIGHT 256
#define AA_EXTENDED (AA_ALL|AA_EIGHT)
#define AA_BUTTON1 1
#define AA_BUTTON2 2
#define AA_BUTTON3 4
#define AA_MOUSEMOVEMASK 1
#define AA_MOUSEPRESSMASK 2
#define AA_PRESSEDMOVEMASK 4
#define AA_MOUSEALLMASK 7
#define AA_HIDECURSOR 8
#define AA_SENDRELEASE 1
#define AA_KBDALLMASK 1
#define AA_USE_PAGES 1
#define AA_NORMAL_SPACES 8
#ifdef __GNUC__
#define aa_putpixel(c,x,y,color) ({aa_context *___aa_context=(c); ((___aa_context)->imagebuffer[(x)+(y)*(aa_imgwidth(___aa_context))]=(color)); 0;})
#endif
#define aa_setpalette(palette,index,r,g,b) ((palette)[index]=(((r)*30+(g)*59+(b)*11)>>8))
#define aa_recommendhikbd(t) aa_recommendhi(&aa_kbdrecommended,t);
#define aa_recommendhimouse(t) aa_recommendhi(&aa_mouserecommended,t);
#define aa_recommendhidisplay(t) aa_recommendhi(&aa_displayrecommended,t);
#define aa_recommendlowkbd(t) aa_recommendlow(&aa_kbdrecommended,t);
#define aa_recommendlowmouse(t) aa_recommendlow(&aa_mouserecommended,t);
#define aa_recommendlowdisplay(t) aa_recommendlow(&aa_displayrecommended,t);
#define aa_scrwidth(a) ((a)->params.width)
#define aa_scrheight(a) ((a)->params.height)
#define aa_mmwidth(a) ((a)->params.mmwidth)
#define aa_mmheight(a) ((a)->params.mmheight)
#define aa_imgwidth(a) ((a)->imgwidth)
#define aa_imgheight(a) ((a)->imgheight)
#define aa_image(c) ((c)->imagebuffer)
#define aa_text(c) ((c)->textbuffer)
#define aa_attrs(c) ((c)->attrbuffer)
#ifdef __cplusplus
#endif
#endif
