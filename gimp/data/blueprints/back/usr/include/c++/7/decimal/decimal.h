// GGHASH:VkmAdPTbjc7IS9u3G0d6p8JA_gvD6.1cDFu.yvCH4FKo0000426a
#ifndef _GLIBCXX_DECIMAL_IMPL
#define _GLIBCXX_DECIMAL_IMPL 1
#define _DEFINE_DECIMAL_COMPOUND_ASSIGNMENT_DEC(_Op1,_Op2,_T1,_T2) inline _T1& _T1::operator _Op1(_T2 __rhs) { __setval(__getval() _Op2 __rhs.__getval()); return *this; }
#define _DEFINE_DECIMAL_COMPOUND_ASSIGNMENT_INT(_Op1,_Op2,_T1,_T2) inline _T1& _T1::operator _Op1(_T2 __rhs) { __setval(__getval() _Op2 __rhs); return *this; }
#define _DEFINE_DECIMAL_COMPOUND_ASSIGNMENTS(_Op1,_Op2,_T1) _DEFINE_DECIMAL_COMPOUND_ASSIGNMENT_DEC(_Op1, _Op2, _T1, decimal32) _DEFINE_DECIMAL_COMPOUND_ASSIGNMENT_DEC(_Op1, _Op2, _T1, decimal64) _DEFINE_DECIMAL_COMPOUND_ASSIGNMENT_DEC(_Op1, _Op2, _T1, decimal128) _DEFINE_DECIMAL_COMPOUND_ASSIGNMENT_INT(_Op1, _Op2, _T1, int) _DEFINE_DECIMAL_COMPOUND_ASSIGNMENT_INT(_Op1, _Op2, _T1, unsigned int) _DEFINE_DECIMAL_COMPOUND_ASSIGNMENT_INT(_Op1, _Op2, _T1, long) _DEFINE_DECIMAL_COMPOUND_ASSIGNMENT_INT(_Op1, _Op2, _T1, unsigned long) _DEFINE_DECIMAL_COMPOUND_ASSIGNMENT_INT(_Op1, _Op2, _T1, long long) _DEFINE_DECIMAL_COMPOUND_ASSIGNMENT_INT(_Op1, _Op2, _T1, unsigned long long)
#undef _DEFINE_DECIMAL_COMPOUND_ASSIGNMENT_DEC
#undef _DEFINE_DECIMAL_COMPOUND_ASSIGNMENT_INT
#undef _DEFINE_DECIMAL_COMPOUND_ASSIGNMENTS
#define _DEFINE_DECIMAL_UNARY_OP(_Op,_Tp) inline _Tp operator _Op(_Tp __rhs) { _Tp __tmp; __tmp.__setval(_Op __rhs.__getval()); return __tmp; }
#undef _DEFINE_DECIMAL_UNARY_OP
#define _DEFINE_DECIMAL_BINARY_OP_WITH_DEC(_Op,_T1,_T2,_T3) inline _T1 operator _Op(_T2 __lhs, _T3 __rhs) { _T1 __retval; __retval.__setval(__lhs.__getval() _Op __rhs.__getval()); return __retval; }
#define _DEFINE_DECIMAL_BINARY_OP_BOTH(_Op,_T1,_T2,_T3) inline _T1 operator _Op(_T2 __lhs, _T3 __rhs) { _T1 __retval; __retval.__setval(__lhs.__getval() _Op __rhs.__getval()); return __retval; }
#define _DEFINE_DECIMAL_BINARY_OP_LHS(_Op,_T1,_T2) inline _T1 operator _Op(_T1 __lhs, _T2 __rhs) { _T1 __retval; __retval.__setval(__lhs.__getval() _Op __rhs); return __retval; }
#define _DEFINE_DECIMAL_BINARY_OP_RHS(_Op,_T1,_T2) inline _T1 operator _Op(_T2 __lhs, _T1 __rhs) { _T1 __retval; __retval.__setval(__lhs _Op __rhs.__getval()); return __retval; }
#define _DEFINE_DECIMAL_BINARY_OP_WITH_INT(_Op,_T1) _DEFINE_DECIMAL_BINARY_OP_LHS(_Op, _T1, int); _DEFINE_DECIMAL_BINARY_OP_LHS(_Op, _T1, unsigned int); _DEFINE_DECIMAL_BINARY_OP_LHS(_Op, _T1, long); _DEFINE_DECIMAL_BINARY_OP_LHS(_Op, _T1, unsigned long); _DEFINE_DECIMAL_BINARY_OP_LHS(_Op, _T1, long long); _DEFINE_DECIMAL_BINARY_OP_LHS(_Op, _T1, unsigned long long); _DEFINE_DECIMAL_BINARY_OP_RHS(_Op, _T1, int); _DEFINE_DECIMAL_BINARY_OP_RHS(_Op, _T1, unsigned int); _DEFINE_DECIMAL_BINARY_OP_RHS(_Op, _T1, long); _DEFINE_DECIMAL_BINARY_OP_RHS(_Op, _T1, unsigned long); _DEFINE_DECIMAL_BINARY_OP_RHS(_Op, _T1, long long); _DEFINE_DECIMAL_BINARY_OP_RHS(_Op, _T1, unsigned long long);
#undef _DEFINE_DECIMAL_BINARY_OP_WITH_DEC
#undef _DEFINE_DECIMAL_BINARY_OP_BOTH
#undef _DEFINE_DECIMAL_BINARY_OP_LHS
#undef _DEFINE_DECIMAL_BINARY_OP_RHS
#undef _DEFINE_DECIMAL_BINARY_OP_WITH_INT
#define _DEFINE_DECIMAL_COMPARISON_BOTH(_Op,_T1,_T2) inline bool operator _Op(_T1 __lhs, _T2 __rhs) { return __lhs.__getval() _Op __rhs.__getval(); }
#define _DEFINE_DECIMAL_COMPARISON_LHS(_Op,_T1,_T2) inline bool operator _Op(_T1 __lhs, _T2 __rhs) { return __lhs.__getval() _Op __rhs; }
#define _DEFINE_DECIMAL_COMPARISON_RHS(_Op,_T1,_T2) inline bool operator _Op(_T1 __lhs, _T2 __rhs) { return __lhs _Op __rhs.__getval(); }
#define _DEFINE_DECIMAL_COMPARISONS(_Op,_Tp) _DEFINE_DECIMAL_COMPARISON_BOTH(_Op, _Tp, decimal32) _DEFINE_DECIMAL_COMPARISON_BOTH(_Op, _Tp, decimal64) _DEFINE_DECIMAL_COMPARISON_BOTH(_Op, _Tp, decimal128) _DEFINE_DECIMAL_COMPARISON_LHS(_Op, _Tp, int) _DEFINE_DECIMAL_COMPARISON_LHS(_Op, _Tp, unsigned int) _DEFINE_DECIMAL_COMPARISON_LHS(_Op, _Tp, long) _DEFINE_DECIMAL_COMPARISON_LHS(_Op, _Tp, unsigned long) _DEFINE_DECIMAL_COMPARISON_LHS(_Op, _Tp, long long) _DEFINE_DECIMAL_COMPARISON_LHS(_Op, _Tp, unsigned long long) _DEFINE_DECIMAL_COMPARISON_RHS(_Op, int, _Tp) _DEFINE_DECIMAL_COMPARISON_RHS(_Op, unsigned int, _Tp) _DEFINE_DECIMAL_COMPARISON_RHS(_Op, long, _Tp) _DEFINE_DECIMAL_COMPARISON_RHS(_Op, unsigned long, _Tp) _DEFINE_DECIMAL_COMPARISON_RHS(_Op, long long, _Tp) _DEFINE_DECIMAL_COMPARISON_RHS(_Op, unsigned long long, _Tp)
#undef _DEFINE_DECIMAL_COMPARISON_BOTH
#undef _DEFINE_DECIMAL_COMPARISON_LHS
#undef _DEFINE_DECIMAL_COMPARISON_RHS
#undef _DEFINE_DECIMAL_COMPARISONS
#endif
