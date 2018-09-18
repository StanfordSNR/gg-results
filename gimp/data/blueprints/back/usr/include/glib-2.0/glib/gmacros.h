// GGHASH:Vvf4HwvLoLedC68LBSeE4OSRKtmv6dDlrDA6Kkt_zei4000048d7
#ifndef __G_MACROS_H__
#define __G_MACROS_H__ 
#if !defined (__GLIB_H_INSIDE__) && !defined (GLIB_COMPILATION)
#error "Only <glib.h> can be included directly."
#endif
#include <stddef.h>
#ifdef __GNUC__
#define G_GNUC_CHECK_VERSION(major,minor) ((__GNUC__ > (major)) || ((__GNUC__ == (major)) && (__GNUC_MINOR__ >= (minor))))
#else
#define G_GNUC_CHECK_VERSION(major,minor) 0
#endif
#if __GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 8)
#define G_GNUC_EXTENSION __extension__
#else
#define G_GNUC_EXTENSION 
#endif
#define G_CAN_INLINE 
#ifndef __cplusplus
# ifdef _MSC_VER
# if (_MSC_VER < 1900)
#define G_INLINE_DEFINE_NEEDED 
# endif
# elif !defined(__STDC_VERSION__) || (__STDC_VERSION__ < 199900)
#define G_INLINE_DEFINE_NEEDED 
# endif
#endif
#ifdef G_INLINE_DEFINE_NEEDED
#undef inline
#define inline __inline
#endif
#undef G_INLINE_DEFINE_NEEDED
#ifdef G_IMPLEMENT_INLINES
#define G_INLINE_FUNC extern
#undef G_CAN_INLINE
#else
#define G_INLINE_FUNC static inline
#endif
#if __GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 96)
#define G_GNUC_PURE __attribute__((__pure__))
#define G_GNUC_MALLOC __attribute__((__malloc__))
#else
#define G_GNUC_PURE 
#define G_GNUC_MALLOC 
#endif
#if __GNUC__ >= 4
#define G_GNUC_NULL_TERMINATED __attribute__((__sentinel__))
#else
#define G_GNUC_NULL_TERMINATED 
#endif
#ifndef __has_attribute
#define __has_attribute(x) 0
#endif
#ifndef __has_feature
#define __has_feature(x) 0
#endif
#ifndef __has_builtin
#define __has_builtin(x) 0
#endif
#if (!defined(__clang__) && ((__GNUC__ > 4) || (__GNUC__ == 4 && __GNUC_MINOR__ >= 3))) || (defined(__clang__) && __has_attribute(__alloc_size__))
#define G_GNUC_ALLOC_SIZE(x) __attribute__((__alloc_size__(x)))
#define G_GNUC_ALLOC_SIZE2(x,y) __attribute__((__alloc_size__(x,y)))
#else
#define G_GNUC_ALLOC_SIZE(x) 
#define G_GNUC_ALLOC_SIZE2(x,y) 
#endif
#if __GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ > 4)
#define G_GNUC_PRINTF(format_idx,arg_idx) __attribute__((__format__ (__printf__, format_idx, arg_idx)))
#define G_GNUC_SCANF(format_idx,arg_idx) __attribute__((__format__ (__scanf__, format_idx, arg_idx)))
#define G_GNUC_FORMAT(arg_idx) __attribute__((__format_arg__ (arg_idx)))
#define G_GNUC_NORETURN __attribute__((__noreturn__))
#define G_GNUC_CONST __attribute__((__const__))
#define G_GNUC_UNUSED __attribute__((__unused__))
#define G_GNUC_NO_INSTRUMENT __attribute__((__no_instrument_function__))
#else
#define G_GNUC_PRINTF(format_idx,arg_idx) 
#define G_GNUC_SCANF(format_idx,arg_idx) 
#define G_GNUC_FORMAT(arg_idx) 
#define G_GNUC_NORETURN 
#define G_GNUC_CONST 
#define G_GNUC_UNUSED 
#define G_GNUC_NO_INSTRUMENT 
#endif
#if __GNUC__ > 3 || (__GNUC__ == 3 && __GNUC_MINOR__ >= 1)
#define G_GNUC_DEPRECATED __attribute__((__deprecated__))
#else
#define G_GNUC_DEPRECATED 
#endif
#if __GNUC__ > 4 || (__GNUC__ == 4 && __GNUC_MINOR__ >= 5)
#define G_GNUC_DEPRECATED_FOR(f) __attribute__((deprecated("Use " #f " instead")))
#else
#define G_GNUC_DEPRECATED_FOR(f) G_GNUC_DEPRECATED
#endif
#ifdef __ICC
#define G_GNUC_BEGIN_IGNORE_DEPRECATIONS _Pragma ("warning (push)") _Pragma ("warning (disable:1478)")
#define G_GNUC_END_IGNORE_DEPRECATIONS _Pragma ("warning (pop)")
#elif __GNUC__ > 4 || (__GNUC__ == 4 && __GNUC_MINOR__ >= 6)
#define G_GNUC_BEGIN_IGNORE_DEPRECATIONS _Pragma ("GCC diagnostic push") _Pragma ("GCC diagnostic ignored \"-Wdeprecated-declarations\"")
#define G_GNUC_END_IGNORE_DEPRECATIONS _Pragma ("GCC diagnostic pop")
#elif defined (_MSC_VER) && (_MSC_VER >= 1500)
#define G_GNUC_BEGIN_IGNORE_DEPRECATIONS __pragma (warning (push)) __pragma (warning (disable : 4996))
#define G_GNUC_END_IGNORE_DEPRECATIONS __pragma (warning (pop))
#elif defined (__clang__)
#define G_GNUC_BEGIN_IGNORE_DEPRECATIONS _Pragma("clang diagnostic push") _Pragma("clang diagnostic ignored \"-Wdeprecated-declarations\"")
#define G_GNUC_END_IGNORE_DEPRECATIONS _Pragma("clang diagnostic pop")
#else
#define G_GNUC_BEGIN_IGNORE_DEPRECATIONS 
#define G_GNUC_END_IGNORE_DEPRECATIONS 
#endif
#if __GNUC__ > 3 || (__GNUC__ == 3 && __GNUC_MINOR__ >= 3)
#define G_GNUC_MAY_ALIAS __attribute__((may_alias))
#else
#define G_GNUC_MAY_ALIAS 
#endif
#if __GNUC__ > 3 || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4)
#define G_GNUC_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
#define G_GNUC_WARN_UNUSED_RESULT 
#endif
#ifndef G_DISABLE_DEPRECATED
#if defined (__GNUC__) && (__GNUC__ < 3)
#define G_GNUC_FUNCTION __FUNCTION__
#define G_GNUC_PRETTY_FUNCTION __PRETTY_FUNCTION__
#else
#define G_GNUC_FUNCTION ""
#define G_GNUC_PRETTY_FUNCTION ""
#endif
#endif
#if __has_feature(attribute_analyzer_noreturn) && defined(__clang_analyzer__)
#define G_ANALYZER_ANALYZING 1
#define G_ANALYZER_NORETURN __attribute__((analyzer_noreturn))
#else
#define G_ANALYZER_ANALYZING 0
#define G_ANALYZER_NORETURN 
#endif
#define G_STRINGIFY(macro_or_string) G_STRINGIFY_ARG (macro_or_string)
#define G_STRINGIFY_ARG(contents) #contents
#ifndef __GI_SCANNER__
#define G_PASTE_ARGS(identifier1,identifier2) identifier1 ## identifier2
#define G_PASTE(identifier1,identifier2) G_PASTE_ARGS (identifier1, identifier2)
#ifdef __COUNTER__
#define G_STATIC_ASSERT(expr) typedef char G_PASTE (_GStaticAssertCompileTimeAssertion_, __COUNTER__)[(expr) ? 1 : -1] G_GNUC_UNUSED
#else
#define G_STATIC_ASSERT(expr) typedef char G_PASTE (_GStaticAssertCompileTimeAssertion_, __LINE__)[(expr) ? 1 : -1] G_GNUC_UNUSED
#endif
#define G_STATIC_ASSERT_EXPR(expr) ((void) sizeof (char[(expr) ? 1 : -1]))
#endif
#if defined(__GNUC__) && (__GNUC__ < 3) && !defined(__cplusplus)
#define G_STRLOC __FILE__ ":" G_STRINGIFY (__LINE__) ":" __PRETTY_FUNCTION__ "()"
#else
#define G_STRLOC __FILE__ ":" G_STRINGIFY (__LINE__)
#endif
#if defined (__GNUC__) && defined (__cplusplus)
#define G_STRFUNC ((const char*) (__PRETTY_FUNCTION__))
#elif defined (__STDC_VERSION__) && __STDC_VERSION__ >= 199901L
#define G_STRFUNC ((const char*) (__func__))
#elif defined (__GNUC__) || (defined(_MSC_VER) && (_MSC_VER > 1300))
#define G_STRFUNC ((const char*) (__FUNCTION__))
#else
#define G_STRFUNC ((const char*) ("???"))
#endif
#ifdef __cplusplus
#define G_BEGIN_DECLS extern "C" {
#define G_END_DECLS }
#else
#define G_BEGIN_DECLS 
#define G_END_DECLS 
#endif
#ifndef NULL
# ifdef __cplusplus
#define NULL (0L)
# else
#define NULL ((void*) 0)
# endif
#endif
#ifndef FALSE
#define FALSE (0)
#endif
#ifndef TRUE
#define TRUE (!FALSE)
#endif
#undef MAX
#define MAX(a,b) (((a) > (b)) ? (a) : (b))
#undef MIN
#define MIN(a,b) (((a) < (b)) ? (a) : (b))
#undef ABS
#define ABS(a) (((a) < 0) ? -(a) : (a))
#undef CLAMP
#define CLAMP(x,low,high) (((x) > (high)) ? (high) : (((x) < (low)) ? (low) : (x)))
#define G_N_ELEMENTS(arr) (sizeof (arr) / sizeof ((arr)[0]))
#define GPOINTER_TO_SIZE(p) ((gsize) (p))
#define GSIZE_TO_POINTER(s) ((gpointer) (gsize) (s))
#if (defined(__GNUC__) && __GNUC__ >= 4) || defined (_MSC_VER)
#define G_STRUCT_OFFSET(struct_type,member) ((glong) offsetof (struct_type, member))
#else
#define G_STRUCT_OFFSET(struct_type,member) ((glong) ((guint8*) &((struct_type*) 0)->member))
#endif
#define G_STRUCT_MEMBER_P(struct_p,struct_offset) ((gpointer) ((guint8*) (struct_p) + (glong) (struct_offset)))
#define G_STRUCT_MEMBER(member_type,struct_p,struct_offset) (*(member_type*) G_STRUCT_MEMBER_P ((struct_p), (struct_offset)))
#if !(defined (G_STMT_START) && defined (G_STMT_END))
#define G_STMT_START do
#if defined (_MSC_VER) && (_MSC_VER >= 1500)
#define G_STMT_END __pragma(warning(push)) __pragma(warning(disable:4127)) while(0) __pragma(warning(pop))
#else
#define G_STMT_END while (0)
#endif
#endif
#ifndef G_DISABLE_DEPRECATED
#ifdef G_DISABLE_CONST_RETURNS
#define G_CONST_RETURN 
#else
#define G_CONST_RETURN const
#endif
#endif
#if defined(__GNUC__) && (__GNUC__ > 2) && defined(__OPTIMIZE__)
#define _G_BOOLEAN_EXPR(expr) G_GNUC_EXTENSION ({ int _g_boolean_var_; if (expr) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; })
#define G_LIKELY(expr) (__builtin_expect (_G_BOOLEAN_EXPR((expr)), 1))
#define G_UNLIKELY(expr) (__builtin_expect (_G_BOOLEAN_EXPR((expr)), 0))
#else
#define G_LIKELY(expr) (expr)
#define G_UNLIKELY(expr) (expr)
#endif
#if __GNUC__ > 3 || (__GNUC__ == 3 && __GNUC_MINOR__ >= 1)
#define G_DEPRECATED __attribute__((__deprecated__))
#elif defined(_MSC_VER) && (_MSC_VER >= 1300)
#define G_DEPRECATED __declspec(deprecated)
#else
#define G_DEPRECATED 
#endif
#if __GNUC__ > 4 || (__GNUC__ == 4 && __GNUC_MINOR__ >= 5)
#define G_DEPRECATED_FOR(f) __attribute__((__deprecated__("Use '" #f "' instead")))
#elif defined(_MSC_FULL_VER) && (_MSC_FULL_VER > 140050320)
#define G_DEPRECATED_FOR(f) __declspec(deprecated("is deprecated. Use '" #f "' instead"))
#else
#define G_DEPRECATED_FOR(f) G_DEPRECATED
#endif
#if __GNUC__ > 4 || (__GNUC__ == 4 && __GNUC_MINOR__ >= 5)
#define G_UNAVAILABLE(maj,min) __attribute__((deprecated("Not available before " #maj "." #min)))
#elif defined(_MSC_FULL_VER) && (_MSC_FULL_VER > 140050320)
#define G_UNAVAILABLE(maj,min) __declspec(deprecated("is not available before " #maj "." #min))
#else
#define G_UNAVAILABLE(maj,min) G_DEPRECATED
#endif
#ifndef _GLIB_EXTERN
#define _GLIB_EXTERN extern
#endif
#ifdef GLIB_DISABLE_DEPRECATION_WARNINGS
#define GLIB_DEPRECATED _GLIB_EXTERN
#define GLIB_DEPRECATED_FOR(f) _GLIB_EXTERN
#define GLIB_UNAVAILABLE(maj,min) _GLIB_EXTERN
#else
#define GLIB_DEPRECATED G_DEPRECATED _GLIB_EXTERN
#define GLIB_DEPRECATED_FOR(f) G_DEPRECATED_FOR(f) _GLIB_EXTERN
#define GLIB_UNAVAILABLE(maj,min) G_UNAVAILABLE(maj,min) _GLIB_EXTERN
#endif
#ifndef __GI_SCANNER__
#ifdef __GNUC__
#define _GLIB_AUTOPTR_FUNC_NAME(TypeName) glib_autoptr_cleanup_ ##TypeName
#define _GLIB_AUTOPTR_TYPENAME(TypeName) TypeName ##_autoptr
#define _GLIB_AUTOPTR_LIST_FUNC_NAME(TypeName) glib_listautoptr_cleanup_ ##TypeName
#define _GLIB_AUTOPTR_LIST_TYPENAME(TypeName) TypeName ##_listautoptr
#define _GLIB_AUTOPTR_SLIST_FUNC_NAME(TypeName) glib_slistautoptr_cleanup_ ##TypeName
#define _GLIB_AUTOPTR_SLIST_TYPENAME(TypeName) TypeName ##_slistautoptr
#define _GLIB_AUTO_FUNC_NAME(TypeName) glib_auto_cleanup_ ##TypeName
#define _GLIB_CLEANUP(func) __attribute__((cleanup(func)))
#define _GLIB_DEFINE_AUTOPTR_CHAINUP(ModuleObjName,ParentName) typedef ModuleObjName *_GLIB_AUTOPTR_TYPENAME(ModuleObjName); static inline void _GLIB_AUTOPTR_FUNC_NAME(ModuleObjName) (ModuleObjName **_ptr) { _GLIB_AUTOPTR_FUNC_NAME(ParentName) ((ParentName **) _ptr); }
#define G_DEFINE_AUTOPTR_CLEANUP_FUNC(TypeName,func) typedef TypeName *_GLIB_AUTOPTR_TYPENAME(TypeName); typedef GList *_GLIB_AUTOPTR_LIST_TYPENAME(TypeName); typedef GSList *_GLIB_AUTOPTR_SLIST_TYPENAME(TypeName); G_GNUC_BEGIN_IGNORE_DEPRECATIONS static inline void _GLIB_AUTOPTR_FUNC_NAME(TypeName) (TypeName **_ptr) { if (*_ptr) (func) (*_ptr); } static inline void _GLIB_AUTOPTR_LIST_FUNC_NAME(TypeName) (GList **_l) { g_list_free_full (*_l, (GDestroyNotify) func); } static inline void _GLIB_AUTOPTR_SLIST_FUNC_NAME(TypeName) (GSList **_l) { g_slist_free_full (*_l, (GDestroyNotify) func); } G_GNUC_END_IGNORE_DEPRECATIONS
#define G_DEFINE_AUTO_CLEANUP_CLEAR_FUNC(TypeName,func) G_GNUC_BEGIN_IGNORE_DEPRECATIONS static inline void _GLIB_AUTO_FUNC_NAME(TypeName) (TypeName *_ptr) { (func) (_ptr); } G_GNUC_END_IGNORE_DEPRECATIONS
#define G_DEFINE_AUTO_CLEANUP_FREE_FUNC(TypeName,func,none) G_GNUC_BEGIN_IGNORE_DEPRECATIONS static inline void _GLIB_AUTO_FUNC_NAME(TypeName) (TypeName *_ptr) { if (*_ptr != none) (func) (*_ptr); } G_GNUC_END_IGNORE_DEPRECATIONS
#define g_autoptr(TypeName) _GLIB_CLEANUP(_GLIB_AUTOPTR_FUNC_NAME(TypeName)) _GLIB_AUTOPTR_TYPENAME(TypeName)
#define g_autolist(TypeName) _GLIB_CLEANUP(_GLIB_AUTOPTR_LIST_FUNC_NAME(TypeName)) _GLIB_AUTOPTR_LIST_TYPENAME(TypeName)
#define g_autoslist(TypeName) _GLIB_CLEANUP(_GLIB_AUTOPTR_SLIST_FUNC_NAME(TypeName)) _GLIB_AUTOPTR_SLIST_TYPENAME(TypeName)
#define g_auto(TypeName) _GLIB_CLEANUP(_GLIB_AUTO_FUNC_NAME(TypeName)) TypeName
#define g_autofree _GLIB_CLEANUP(g_autoptr_cleanup_generic_gfree)
#else
#define _GLIB_DEFINE_AUTOPTR_CHAINUP(ModuleObjName,ParentName) 
#define G_DEFINE_AUTOPTR_CLEANUP_FUNC(TypeName,func) 
#define G_DEFINE_AUTO_CLEANUP_CLEAR_FUNC(TypeName,func) 
#define G_DEFINE_AUTO_CLEANUP_FREE_FUNC(TypeName,func,none) 
#endif
#else
#define _GLIB_DEFINE_AUTOPTR_CHAINUP(ModuleObjName,ParentName) 
#define G_DEFINE_AUTOPTR_CLEANUP_FUNC(TypeName,func) 
#define G_DEFINE_AUTO_CLEANUP_CLEAR_FUNC(TypeName,func) 
#define G_DEFINE_AUTO_CLEANUP_FREE_FUNC(TypeName,func,none) 
#endif
#endif
