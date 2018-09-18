// GGHASH:VWGYrRSnOTAPuiXgGGbnphe_Ght5Z4p51RCxfSieO3eE0000633b
#ifndef __G_MESSAGES_H__
#define __G_MESSAGES_H__ 
#if !defined (__GLIB_H_INSIDE__) && !defined (GLIB_COMPILATION)
#error "Only <glib.h> can be included directly."
#endif
#include <stdarg.h>
#include <glib/gtypes.h>
#include <glib/gmacros.h>
#include <glib/gvariant.h>
#define G_LOG_LEVEL_USER_SHIFT (8)
#define G_LOG_FATAL_MASK (G_LOG_FLAG_RECURSION | G_LOG_LEVEL_ERROR)
#define G_DEBUG_HERE() g_log_structured (G_LOG_DOMAIN, G_LOG_LEVEL_DEBUG, "CODE_FILE", __FILE__, "CODE_LINE", G_STRINGIFY (__LINE__), "CODE_FUNC", G_STRFUNC, "MESSAGE", "%" G_GINT64_FORMAT ": %s", g_get_monotonic_time (), G_STRLOC)
#ifndef G_LOG_DOMAIN
#define G_LOG_DOMAIN ((gchar*) 0)
#endif
#if defined(G_HAVE_ISO_VARARGS) && !G_ANALYZER_ANALYZING
#ifdef G_LOG_USE_STRUCTURED
#define g_error(...) G_STMT_START { g_log_structured_standard (G_LOG_DOMAIN, G_LOG_LEVEL_ERROR, __FILE__, G_STRINGIFY (__LINE__), G_STRFUNC, __VA_ARGS__); for (;;) ; } G_STMT_END
#define g_message(...) g_log_structured_standard (G_LOG_DOMAIN, G_LOG_LEVEL_MESSAGE, __FILE__, G_STRINGIFY (__LINE__), G_STRFUNC, __VA_ARGS__)
#define g_critical(...) g_log_structured_standard (G_LOG_DOMAIN, G_LOG_LEVEL_CRITICAL, __FILE__, G_STRINGIFY (__LINE__), G_STRFUNC, __VA_ARGS__)
#define g_warning(...) g_log_structured_standard (G_LOG_DOMAIN, G_LOG_LEVEL_WARNING, __FILE__, G_STRINGIFY (__LINE__), G_STRFUNC, __VA_ARGS__)
#define g_info(...) g_log_structured_standard (G_LOG_DOMAIN, G_LOG_LEVEL_INFO, __FILE__, G_STRINGIFY (__LINE__), G_STRFUNC, __VA_ARGS__)
#define g_debug(...) g_log_structured_standard (G_LOG_DOMAIN, G_LOG_LEVEL_DEBUG, __FILE__, G_STRINGIFY (__LINE__), G_STRFUNC, __VA_ARGS__)
#else
#define g_error(...) G_STMT_START { g_log (G_LOG_DOMAIN, G_LOG_LEVEL_ERROR, __VA_ARGS__); for (;;) ; } G_STMT_END
#define g_message(...) g_log (G_LOG_DOMAIN, G_LOG_LEVEL_MESSAGE, __VA_ARGS__)
#define g_critical(...) g_log (G_LOG_DOMAIN, G_LOG_LEVEL_CRITICAL, __VA_ARGS__)
#define g_warning(...) g_log (G_LOG_DOMAIN, G_LOG_LEVEL_WARNING, __VA_ARGS__)
#define g_info(...) g_log (G_LOG_DOMAIN, G_LOG_LEVEL_INFO, __VA_ARGS__)
#define g_debug(...) g_log (G_LOG_DOMAIN, G_LOG_LEVEL_DEBUG, __VA_ARGS__)
#endif
#elif defined(G_HAVE_GNUC_VARARGS) && !G_ANALYZER_ANALYZING
#ifdef G_LOG_USE_STRUCTURED
#define g_error(format...) G_STMT_START { g_log_structured_standard (G_LOG_DOMAIN, G_LOG_LEVEL_ERROR, __FILE__, G_STRINGIFY (__LINE__), G_STRFUNC, format); for (;;) ; } G_STMT_END
#define g_message(format...) g_log_structured_standard (G_LOG_DOMAIN, G_LOG_LEVEL_MESSAGE, __FILE__, G_STRINGIFY (__LINE__), G_STRFUNC, format)
#define g_critical(format...) g_log_structured_standard (G_LOG_DOMAIN, G_LOG_LEVEL_CRITICAL, __FILE__, G_STRINGIFY (__LINE__), G_STRFUNC, format)
#define g_warning(format...) g_log_structured_standard (G_LOG_DOMAIN, G_LOG_LEVEL_WARNING, __FILE__, G_STRINGIFY (__LINE__), G_STRFUNC, format)
#define g_info(format...) g_log_structured_standard (G_LOG_DOMAIN, G_LOG_LEVEL_INFO, __FILE__, G_STRINGIFY (__LINE__), G_STRFUNC, format)
#define g_debug(format...) g_log_structured_standard (G_LOG_DOMAIN, G_LOG_LEVEL_DEBUG, __FILE__, G_STRINGIFY (__LINE__), G_STRFUNC, format)
#else
#define g_error(format...) G_STMT_START { g_log (G_LOG_DOMAIN, G_LOG_LEVEL_ERROR, format); for (;;) ; } G_STMT_END
#define g_message(format...) g_log (G_LOG_DOMAIN, G_LOG_LEVEL_MESSAGE, format)
#define g_critical(format...) g_log (G_LOG_DOMAIN, G_LOG_LEVEL_CRITICAL, format)
#define g_warning(format...) g_log (G_LOG_DOMAIN, G_LOG_LEVEL_WARNING, format)
#define g_info(format...) g_log (G_LOG_DOMAIN, G_LOG_LEVEL_INFO, format)
#define g_debug(format...) g_log (G_LOG_DOMAIN, G_LOG_LEVEL_DEBUG, format)
#endif
#else
#endif
#define g_warn_if_reached() do { g_warn_message (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, NULL); } while (0)
#define g_warn_if_fail(expr) do { if G_LIKELY (expr) ; else g_warn_message (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, #expr); } while (0)
#ifdef G_DISABLE_CHECKS
#define g_return_if_fail(expr) G_STMT_START{ (void)0; }G_STMT_END
#define g_return_val_if_fail(expr,val) G_STMT_START{ (void)0; }G_STMT_END
#define g_return_if_reached() G_STMT_START{ return; }G_STMT_END
#define g_return_val_if_reached(val) G_STMT_START{ return (val); }G_STMT_END
#else
#define g_return_if_fail(expr) G_STMT_START{ if G_LIKELY(expr) { } else { g_return_if_fail_warning (G_LOG_DOMAIN, G_STRFUNC, #expr); return; }; }G_STMT_END
#define g_return_val_if_fail(expr,val) G_STMT_START{ if G_LIKELY(expr) { } else { g_return_if_fail_warning (G_LOG_DOMAIN, G_STRFUNC, #expr); return (val); }; }G_STMT_END
#define g_return_if_reached() G_STMT_START{ g_log (G_LOG_DOMAIN, G_LOG_LEVEL_CRITICAL, "file %s: line %d (%s): should not be reached", __FILE__, __LINE__, G_STRFUNC); return; }G_STMT_END
#define g_return_val_if_reached(val) G_STMT_START{ g_log (G_LOG_DOMAIN, G_LOG_LEVEL_CRITICAL, "file %s: line %d (%s): should not be reached", __FILE__, __LINE__, G_STRFUNC); return (val); }G_STMT_END
#endif
#endif
