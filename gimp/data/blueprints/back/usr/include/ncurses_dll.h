// GGHASH:VzVnH4kuHQB0Da.lFaG0rTSMAOaAu_jFb4f1ZZLdJwzs000010b5
#ifndef NCURSES_DLL_H_incl
#define NCURSES_DLL_H_incl 1
#if defined(__MINGW64__)
#elif defined(__MINGW32__)
#if (__GNUC__ == 4) && (__GNUC_MINOR__ == 8)
#ifdef trace
#undef trace
#define TRACE 
#endif
#endif
#endif
#define NCURSES_PUBLIC_VAR(name) _nc_ ##name
#define NCURSES_WRAPPED_VAR(type,name) extern type NCURSES_PUBLIC_VAR(name)(void)
#undef NCURSES_DLL
#define NCURSES_STATIC 
#if defined(__CYGWIN__) || defined(__MINGW32__)
# if defined(NCURSES_DLL)
# if defined(NCURSES_STATIC)
#undef NCURSES_STATIC
# endif
# endif
#undef NCURSES_IMPEXP
#undef NCURSES_API
#undef NCURSES_EXPORT
#undef NCURSES_EXPORT_VAR
# if defined(NCURSES_DLL)
#define NCURSES_IMPEXP __declspec(dllexport)
# elif defined(NCURSES_STATIC)
#define NCURSES_IMPEXP 
# else
#define NCURSES_IMPEXP __declspec(dllimport)
# endif
#define NCURSES_API __cdecl
#define NCURSES_EXPORT(type) NCURSES_IMPEXP type NCURSES_API
#define NCURSES_EXPORT_VAR(type) NCURSES_IMPEXP type
#endif
#if !defined(NCURSES_IMPEXP)
#define NCURSES_IMPEXP 
#endif
#if !defined(NCURSES_API)
#define NCURSES_API 
#endif
#if !defined(NCURSES_EXPORT)
#define NCURSES_EXPORT(type) NCURSES_IMPEXP type NCURSES_API
#endif
#if !defined(NCURSES_EXPORT_VAR)
#define NCURSES_EXPORT_VAR(type) NCURSES_IMPEXP type
#endif
#endif
