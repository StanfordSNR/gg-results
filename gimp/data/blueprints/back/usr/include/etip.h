// GGHASH:VcUOFLNsTjuVxFGJ9qxjyKoRuVPnf9mJ068X.RK3hk8I000025e6
#ifndef NCURSES_ETIP_H_incl
#define NCURSES_ETIP_H_incl 1
#ifndef HAVE_BUILTIN_H
#define HAVE_BUILTIN_H 0
#endif
#ifndef HAVE_GXX_BUILTIN_H
#define HAVE_GXX_BUILTIN_H 0
#endif
#ifndef HAVE_GPP_BUILTIN_H
#define HAVE_GPP_BUILTIN_H 0
#endif
#ifndef HAVE_IOSTREAM
#define HAVE_IOSTREAM 1
#endif
#ifndef HAVE_TYPEINFO
#define HAVE_TYPEINFO 1
#endif
#ifndef HAVE_VALUES_H
#define HAVE_VALUES_H 0
#endif
#ifndef ETIP_NEEDS_MATH_H
#define ETIP_NEEDS_MATH_H 0
#endif
#ifndef ETIP_NEEDS_MATH_EXCEPTION
#define ETIP_NEEDS_MATH_EXCEPTION 0
#endif
#ifndef CPP_HAS_PARAM_INIT
#define CPP_HAS_PARAM_INIT 0
#endif
#ifndef CPP_HAS_STATIC_CAST
#define CPP_HAS_STATIC_CAST 1
#endif
#ifndef IOSTREAM_NAMESPACE
#define IOSTREAM_NAMESPACE 1
#endif
#ifdef __GNUG__
# if ((__GNUG__ <= 2) && (__GNUC_MINOR__ < 8))
# if HAVE_TYPEINFO
# include <typeinfo>
# endif
# endif
#endif
#if defined(__GNUG__)
# if HAVE_BUILTIN_H || HAVE_GXX_BUILTIN_H || HAVE_GPP_BUILTIN_H
# if ETIP_NEEDS_MATH_H
# if ETIP_NEEDS_MATH_EXCEPTION
#undef exception
#define exception math_exception
# endif
# include <math.h>
# endif
#undef exception
#define exception builtin_exception
# if HAVE_GPP_BUILTIN_H
# include <gpp/builtin.h>
# elif HAVE_GXX_BUILTIN_H
# include <g++/builtin.h>
# else
# include <builtin.h>
# endif
#undef exception
# endif
#elif defined (__SUNPRO_CC)
# include <generic.h>
#endif
#include <ncurses_dll.h>
#if HAVE_VALUES_H
# include <values.h>
#endif
#include <assert.h>
#include <eti.h>
#include <errno.h>
#if CPP_HAS_PARAM_INIT
#define NCURSES_PARAM_INIT(value) = value
#else
#define NCURSES_PARAM_INIT(value) 
#endif
#if CPP_HAS_STATIC_CAST
#define STATIC_CAST(s) static_cast<s>
#else
#define STATIC_CAST(s) (s)
#endif
#if !((defined(__GNUG__) && defined(__EXCEPTIONS) && (__GNUG__ < 7)) || defined(__SUNPRO_CC))
# if HAVE_IOSTREAM
# include <iostream>
# if IOSTREAM_NAMESPACE
# endif
# else
# include <iostream.h>
# endif
#endif
#if defined(__GNUG__) && defined(__EXCEPTIONS)
# if ((__GNUG__ <= 2) && (__GNUC_MINOR__ < 8))
# elif (__GNUG__ >= 7)
# else
#define CPP_HAS_TRY_CATCH 1
# endif
#elif defined(__SUNPRO_CC)
# if !defined(__SUNPRO_CC_COMPAT) || (__SUNPRO_CC_COMPAT < 5)
# else
#define CPP_HAS_TRY_CATCH 1
# endif
#else
#endif
#ifndef CPP_HAS_TRY_CATCH
#define CPP_HAS_TRY_CATCH 0
#define NCURSES_CPP_TRY 
#define NCURSES_CPP_CATCH(e) if (false)
#define THROWS(s) 
#define THROW2(s,t) 
#elif CPP_HAS_TRY_CATCH
#define NCURSES_CPP_TRY try
#define NCURSES_CPP_CATCH(e) catch(e)
#if defined(__cpp_noexcept_function_type) && (__cpp_noexcept_function_type >= 201510)
#define THROWS(s) 
#define THROW2(s,t) 
#else
#define THROWS(s) throw(s)
#define THROW2(s,t) throw(s,t)
#endif
#endif
#endif
