// GGHASH:VfxdIj3CNp24P17_uUJgjM868V4DQ1zBAmH5nggFV5MM00002c0b
#ifndef __G_UTILS_H__
#define __G_UTILS_H__ 
#if !defined (__GLIB_H_INSIDE__) && !defined (GLIB_COMPILATION)
#error "Only <glib.h> can be included directly."
#endif
#include <glib/gtypes.h>
#include <stdarg.h>
#if !defined (G_VA_COPY)
# if defined (__GNUC__) && defined (__PPC__) && (defined (_CALL_SYSV) || defined (_WIN32))
#define G_VA_COPY(ap1,ap2) (*(ap1) = *(ap2))
# elif defined (G_VA_COPY_AS_ARRAY)
#define G_VA_COPY(ap1,ap2) memmove ((ap1), (ap2), sizeof (va_list))
# else
#define G_VA_COPY(ap1,ap2) ((ap1) = (ap2))
# endif
#endif
#ifdef G_OS_WIN32
#endif
#if defined (G_OS_WIN32) && defined (G_CAN_INLINE)
#define g_get_system_data_dirs _g_win32_get_system_data_dirs
#endif
#ifndef G_DISABLE_DEPRECATED
#define ATEXIT(proc) g_ATEXIT(proc)
#ifdef G_OS_WIN32
#if (defined(__MINGW_H) && !defined(_STDLIB_H_)) || (defined(_MSC_VER) && !defined(_INC_STDLIB))
#endif
#define g_atexit(func) atexit(func)
#endif
#endif
#define g_bit_nth_lsf(mask,nth_bit) g_bit_nth_lsf_impl(mask, nth_bit)
#define g_bit_nth_msf(mask,nth_bit) g_bit_nth_msf_impl(mask, nth_bit)
#define g_bit_storage(number) g_bit_storage_impl(number)
#if defined(__GNUC__) && (__GNUC__ >= 4) && defined(__OPTIMIZE__)
#else
#endif
#if GLIB_VERSION_MAX_ALLOWED >= GLIB_VERSION_2_50
#ifndef G_OS_WIN32
# include <stdlib.h>
#define g_abort() abort ()
#else
#endif
#endif
#ifndef G_DISABLE_DEPRECATED
#ifndef G_PLATFORM_WIN32
#define G_WIN32_DLLMAIN_FOR_DLL_NAME(static,dll_name) 
#else
#define G_WIN32_DLLMAIN_FOR_DLL_NAME(static,dll_name) static char *dll_name; BOOL WINAPI DllMain (HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved) { wchar_t wcbfr[1000]; char *tem; switch (fdwReason) { case DLL_PROCESS_ATTACH: GetModuleFileNameW ((HMODULE) hinstDLL, wcbfr, G_N_ELEMENTS (wcbfr)); tem = g_utf16_to_utf8 (wcbfr, -1, NULL, NULL, NULL); dll_name = g_path_get_basename (tem); g_free (tem); break; } return TRUE; }
#endif
#endif
#endif
