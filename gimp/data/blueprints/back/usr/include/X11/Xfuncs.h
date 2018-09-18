// GGHASH:V3inblK_hieD.6hKob5UfFYGDNWW4oFBdnnmtgT86WPA000008d1
#ifndef _XFUNCS_H_
#define _XFUNCS_H_ 
# include <X11/Xosdefs.h>
# if !(defined(XFree86LOADER) && defined(IN_MODULE))
# ifdef X_USEBFUNCS
# else
# if defined(SYSV) && !defined(__SCO__) && !defined(__sun) && !defined(__UNIXWARE__) && !defined(_AIX)
# include <memory.h>
#define bzero(b,len) memset(b, 0, len)
#define bcmp(b1,b2,len) memcmp(b1, b2, len)
# else
# include <string.h>
# if defined(__SCO__) || defined(__sun) || defined(__UNIXWARE__) || defined(__CYGWIN__) || defined(_AIX) || defined(__APPLE__)
# include <strings.h>
# endif
#define _XFUNCS_H_INCLUDED_STRING_H 
# endif
# endif
# ifndef _XFUNCS_H_INCLUDED_STRING_H
# include <string.h>
# endif
#undef bzero
#define bzero(b,len) memset(b,0,len)
# if defined WIN32 && defined __MINGW32__
#define bcopy(b1,b2,len) memmove(b2, b1, (size_t)(len))
# endif
# endif
#endif
