// GGHASH:Vu_bm91gk0shEj5aAard3WFaHo1h3kTwA7Ane94wRLUw00000645
#if !defined (__RSVG_RSVG_H_INSIDE__) && !defined (RSVG_COMPILATION)
#warning "Including <librsvg/librsvg-features.h> directly is deprecated."
#endif
#ifndef LIBRSVG_FEATURES_H
#define LIBRSVG_FEATURES_H 
#define LIBRSVG_MAJOR_VERSION (2)
#define LIBRSVG_MINOR_VERSION (40)
#define LIBRSVG_MICRO_VERSION (20)
#define LIBRSVG_VERSION "2.40.20"
#define LIBRSVG_CHECK_VERSION(major,minor,micro) (LIBRSVG_MAJOR_VERSION > (major) || (LIBRSVG_MAJOR_VERSION == (major) && LIBRSVG_MINOR_VERSION > (minor)) || (LIBRSVG_MAJOR_VERSION == (major) && LIBRSVG_MINOR_VERSION == (minor) && LIBRSVG_MICRO_VERSION >= (micro)))
#ifndef __GI_SCANNER__
#define LIBRSVG_HAVE_SVGZ (TRUE)
#define LIBRSVG_HAVE_CSS (TRUE)
#define LIBRSVG_CHECK_FEATURE(FEATURE) (defined(LIBRSVG_HAVE_ ##FEATURE) && LIBRSVG_HAVE_ ##FEATURE)
#endif
#ifndef RSVG_VAR
# ifdef G_PLATFORM_WIN32
# ifndef RSVG_STATIC
# ifdef RSVG_COMPILATION
#define RSVG_VAR extern __declspec (dllexport)
# else
#define RSVG_VAR extern __declspec (dllimport)
# endif
# else
#define RSVG_VAR extern
# endif
# else
#define RSVG_VAR extern
# endif
#endif
#endif
