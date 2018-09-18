// GGHASH:VkVc8t_F_ZxZ4J17oLqe4grFZbTELJJNTTsqtuyP7kVM00005e8d
#ifndef __G_TEST_UTILS_H__
#define __G_TEST_UTILS_H__ 
#if !defined (__GLIB_H_INSIDE__) && !defined (GLIB_COMPILATION)
#error "Only <glib.h> can be included directly."
#endif
#include <glib/gmessages.h>
#include <glib/gstring.h>
#include <glib/gerror.h>
#include <glib/gslist.h>
#include <string.h>
#define g_assert_cmpstr(s1,cmp,s2) G_STMT_START { const char *__s1 = (s1), *__s2 = (s2); if (g_strcmp0 (__s1, __s2) cmp 0) ; else g_assertion_message_cmpstr (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, #s1 " " #cmp " " #s2, __s1, #cmp, __s2); } G_STMT_END
#define g_assert_cmpint(n1,cmp,n2) G_STMT_START { gint64 __n1 = (n1), __n2 = (n2); if (__n1 cmp __n2) ; else g_assertion_message_cmpnum (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, #n1 " " #cmp " " #n2, (long double) __n1, #cmp, (long double) __n2, 'i'); } G_STMT_END
#define g_assert_cmpuint(n1,cmp,n2) G_STMT_START { guint64 __n1 = (n1), __n2 = (n2); if (__n1 cmp __n2) ; else g_assertion_message_cmpnum (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, #n1 " " #cmp " " #n2, (long double) __n1, #cmp, (long double) __n2, 'i'); } G_STMT_END
#define g_assert_cmphex(n1,cmp,n2) G_STMT_START { guint64 __n1 = (n1), __n2 = (n2); if (__n1 cmp __n2) ; else g_assertion_message_cmpnum (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, #n1 " " #cmp " " #n2, (long double) __n1, #cmp, (long double) __n2, 'x'); } G_STMT_END
#define g_assert_cmpfloat(n1,cmp,n2) G_STMT_START { long double __n1 = (n1), __n2 = (n2); if (__n1 cmp __n2) ; else g_assertion_message_cmpnum (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, #n1 " " #cmp " " #n2, (long double) __n1, #cmp, (long double) __n2, 'f'); } G_STMT_END
#define g_assert_cmpmem(m1,l1,m2,l2) G_STMT_START { gconstpointer __m1 = m1, __m2 = m2; int __l1 = l1, __l2 = l2; if (__l1 != __l2) g_assertion_message_cmpnum (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, #l1 " (len(" #m1 ")) == " #l2 " (len(" #m2 "))", (long double) __l1, "==", (long double) __l2, 'i'); else if (__l1 != 0 && memcmp (__m1, __m2, __l1) != 0) g_assertion_message (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, "assertion failed (" #m1 " == " #m2 ")"); } G_STMT_END
#define g_assert_no_error(err) G_STMT_START { if (err) g_assertion_message_error (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, #err, err, 0, 0); } G_STMT_END
#define g_assert_error(err,dom,c) G_STMT_START { if (!err || (err)->domain != dom || (err)->code != c) g_assertion_message_error (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, #err, err, dom, c); } G_STMT_END
#define g_assert_true(expr) G_STMT_START { if G_LIKELY (expr) ; else g_assertion_message (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, "'" #expr "' should be TRUE"); } G_STMT_END
#define g_assert_false(expr) G_STMT_START { if G_LIKELY (!(expr)) ; else g_assertion_message (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, "'" #expr "' should be FALSE"); } G_STMT_END
#define g_assert_null(expr) G_STMT_START { if G_LIKELY ((expr) == NULL) ; else g_assertion_message (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, "'" #expr "' should be NULL"); } G_STMT_END
#define g_assert_nonnull(expr) G_STMT_START { if G_LIKELY ((expr) != NULL) ; else g_assertion_message (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, "'" #expr "' should not be NULL"); } G_STMT_END
#ifdef G_DISABLE_ASSERT
#define g_assert_not_reached() G_STMT_START { (void) 0; } G_STMT_END
#define g_assert(expr) G_STMT_START { (void) 0; } G_STMT_END
#else
#define g_assert_not_reached() G_STMT_START { g_assertion_message_expr (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, NULL); } G_STMT_END
#define g_assert(expr) G_STMT_START { if G_LIKELY (expr) ; else g_assertion_message_expr (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, #expr); } G_STMT_END
#endif
#define g_test_initialized() (g_test_config_vars->test_initialized)
#define g_test_quick() (g_test_config_vars->test_quick)
#define g_test_slow() (!g_test_config_vars->test_quick)
#define g_test_thorough() (!g_test_config_vars->test_quick)
#define g_test_perf() (g_test_config_vars->test_perf)
#define g_test_verbose() (g_test_config_vars->test_verbose)
#define g_test_quiet() (g_test_config_vars->test_quiet)
#define g_test_undefined() (g_test_config_vars->test_undefined)
#define g_test_add(testpath,Fixture,tdata,fsetup,ftest,fteardown) G_STMT_START { void (*add_vtable) (const char*, gsize, gconstpointer, void (*) (Fixture*, gconstpointer), void (*) (Fixture*, gconstpointer), void (*) (Fixture*, gconstpointer)) = (void (*) (const gchar *, gsize, gconstpointer, void (*) (Fixture*, gconstpointer), void (*) (Fixture*, gconstpointer), void (*) (Fixture*, gconstpointer))) g_test_add_vtable; add_vtable (testpath, sizeof (Fixture), tdata, fsetup, ftest, fteardown); } G_STMT_END
#define g_test_queue_unref(gobject) g_test_queue_destroy (g_object_unref, gobject)
#define g_test_trap_assert_passed() g_test_trap_assertions (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, 0, 0)
#define g_test_trap_assert_failed() g_test_trap_assertions (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, 1, 0)
#define g_test_trap_assert_stdout(soutpattern) g_test_trap_assertions (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, 2, soutpattern)
#define g_test_trap_assert_stdout_unmatched(soutpattern) g_test_trap_assertions (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, 3, soutpattern)
#define g_test_trap_assert_stderr(serrpattern) g_test_trap_assertions (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, 4, serrpattern)
#define g_test_trap_assert_stderr_unmatched(serrpattern) g_test_trap_assertions (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, 5, serrpattern)
#define g_test_rand_bit() (0 != (g_test_rand_int() & (1 << 15)))
#define g_test_assert_expected_messages() g_test_assert_expected_messages_internal (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC)
#endif
