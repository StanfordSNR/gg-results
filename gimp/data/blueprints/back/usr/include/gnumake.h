// GGHASH:VeENdU5G88x4JmbSMfugAW8P_JU4FK73R65tacBmIcik00000b60
#ifndef _GNUMAKE_H_
#define _GNUMAKE_H_ 
#ifdef _WIN32
# ifdef GMK_BUILDING_MAKE
#define GMK_EXPORT __declspec(dllexport)
# else
#define GMK_EXPORT __declspec(dllimport)
# endif
#else
#define GMK_EXPORT 
#endif
#define GMK_FUNC_DEFAULT 0x00
#define GMK_FUNC_NOEXPAND 0x01
#endif
