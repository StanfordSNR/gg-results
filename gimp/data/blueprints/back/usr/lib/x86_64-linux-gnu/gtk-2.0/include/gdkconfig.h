// GGHASH:VTP0hvsihuj_V5kbzg3EDYQZamtj5G_XBPhoryUsfMk800000247
#ifndef GDKCONFIG_H
#define GDKCONFIG_H 
#ifdef __cplusplus
#endif
#ifndef GSEAL
# ifdef GSEAL_ENABLE
#define GSEAL(ident) _g_sealed__ ## ident
# else
#define GSEAL(ident) ident
# endif
#endif
#define GDK_WINDOWING_X11 
#define GDK_HAVE_WCHAR_H 1
#define GDK_HAVE_WCTYPE_H 1
#ifdef __cplusplus
#endif
#endif
