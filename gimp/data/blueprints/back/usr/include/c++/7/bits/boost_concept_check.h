// GGHASH:VL.ZIXe3WKtm.YvgIUPdi4bla7Mfsor95tSZKhKqmPVk000069a8
#ifndef _BOOST_CONCEPT_CHECK_H
#define _BOOST_CONCEPT_CHECK_H 1
#include <bits/c++config.h>
#include <bits/stl_iterator_base_types.h>
#define _IsUnused __attribute__ ((__unused__))
#define _GLIBCXX_CLASS_REQUIRES(_type_var,_ns,_concept) typedef void (_ns::_concept <_type_var>::* _func ##_type_var ##_concept)(); template <_func ##_type_var ##_concept _Tp1> struct _concept_checking ##_type_var ##_concept { }; typedef _concept_checking ##_type_var ##_concept< &_ns::_concept <_type_var>::__constraints> _concept_checking_typedef ##_type_var ##_concept
#define _GLIBCXX_CLASS_REQUIRES2(_type_var1,_type_var2,_ns,_concept) typedef void (_ns::_concept <_type_var1,_type_var2>::* _func ##_type_var1 ##_type_var2 ##_concept)(); template <_func ##_type_var1 ##_type_var2 ##_concept _Tp1> struct _concept_checking ##_type_var1 ##_type_var2 ##_concept { }; typedef _concept_checking ##_type_var1 ##_type_var2 ##_concept< &_ns::_concept <_type_var1,_type_var2>::__constraints> _concept_checking_typedef ##_type_var1 ##_type_var2 ##_concept
#define _GLIBCXX_CLASS_REQUIRES3(_type_var1,_type_var2,_type_var3,_ns,_concept) typedef void (_ns::_concept <_type_var1,_type_var2,_type_var3>::* _func ##_type_var1 ##_type_var2 ##_type_var3 ##_concept)(); template <_func ##_type_var1 ##_type_var2 ##_type_var3 ##_concept _Tp1> struct _concept_checking ##_type_var1 ##_type_var2 ##_type_var3 ##_concept { }; typedef _concept_checking ##_type_var1 ##_type_var2 ##_type_var3 ##_concept< &_ns::_concept <_type_var1,_type_var2,_type_var3>::__constraints> _concept_checking_typedef ##_type_var1 ##_type_var2 ##_type_var3 ##_concept
#define _GLIBCXX_CLASS_REQUIRES4(_type_var1,_type_var2,_type_var3,_type_var4,_ns,_concept) typedef void (_ns::_concept <_type_var1,_type_var2,_type_var3,_type_var4>::* _func ##_type_var1 ##_type_var2 ##_type_var3 ##_type_var4 ##_concept)(); template <_func ##_type_var1 ##_type_var2 ##_type_var3 ##_type_var4 ##_concept _Tp1> struct _concept_checking ##_type_var1 ##_type_var2 ##_type_var3 ##_type_var4 ##_concept { }; typedef _concept_checking ##_type_var1 ##_type_var2 ##_type_var3 ##_type_var4 ##_concept< &_ns::_concept <_type_var1,_type_var2,_type_var3,_type_var4>::__constraints> _concept_checking_typedef ##_type_var1 ##_type_var2 ##_type_var3 ##_type_var4 ##_concept
#define _GLIBCXX_DEFINE_BINARY_PREDICATE_OP_CONSTRAINT(_OP,_NAME) template <class _First, class _Second> struct _NAME { void __constraints() { (void)__constraints_(); } bool __constraints_() { return __a _OP __b; } _First __a; _Second __b; }
#define _GLIBCXX_DEFINE_BINARY_OPERATOR_CONSTRAINT(_OP,_NAME) template <class _Ret, class _First, class _Second> struct _NAME { void __constraints() { (void)__constraints_(); } _Ret __constraints_() { return __a _OP __b; } _First __a; _Second __b; }
#undef _GLIBCXX_DEFINE_BINARY_PREDICATE_OP_CONSTRAINT
#undef _GLIBCXX_DEFINE_BINARY_OPERATOR_CONSTRAINT
#undef _IsUnused
#endif
