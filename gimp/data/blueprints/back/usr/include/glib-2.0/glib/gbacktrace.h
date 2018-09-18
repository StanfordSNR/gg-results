// GGHASH:VYRKOQ2in_L3CtEPPNqSZzolULmQ3ZBGAy5VRZAoeLoc00000a07
#ifndef __G_BACKTRACE_H__
#define __G_BACKTRACE_H__ 
#if !defined (__GLIB_H_INSIDE__) && !defined (GLIB_COMPILATION)
#error "Only <glib.h> can be included directly."
#endif
#include <glib/gtypes.h>
#ifdef __sun__
#include <sys/select.h>
#endif
#include <signal.h>
#if (defined (__i386__) || defined (__x86_64__)) && defined (__GNUC__) && __GNUC__ >= 2
#define G_BREAKPOINT() G_STMT_START{ __asm__ __volatile__ ("int $03"); }G_STMT_END
#elif (defined (_MSC_VER) || defined (__DMC__)) && defined (_M_IX86)
#define G_BREAKPOINT() G_STMT_START{ __asm int 3h }G_STMT_END
#elif defined (_MSC_VER)
#define G_BREAKPOINT() G_STMT_START{ __debugbreak(); }G_STMT_END
#elif defined (__alpha__) && !defined(__osf__) && defined (__GNUC__) && __GNUC__ >= 2
#define G_BREAKPOINT() G_STMT_START{ __asm__ __volatile__ ("bpt"); }G_STMT_END
#elif defined (__APPLE__)
#define G_BREAKPOINT() G_STMT_START{ __builtin_trap(); }G_STMT_END
#else
#define G_BREAKPOINT() G_STMT_START{ raise (SIGTRAP); }G_STMT_END
#endif
#endif
