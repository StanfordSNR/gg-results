// GGHASH:Vdn742nPj9YFa233vKt06m7XgHyoBO3uTcj5oUMl2NGY00001eb5
#ifndef _INDIRECT_ARRAY_H
#define _INDIRECT_ARRAY_H 1
#undef _DEFINE_VALARRAY_OPERATOR
#define _DEFINE_VALARRAY_OPERATOR(_Op,_Name) template<typename _Tp> inline void indirect_array<_Tp>::operator _Op ##=(const valarray<_Tp>& __v) const { _Array_augmented_ ##_Name(_M_array, _M_index, _Array<_Tp>(__v), _M_sz); } template<typename _Tp> template<class _Dom> inline void indirect_array<_Tp>::operator _Op ##=(const _Expr<_Dom,_Tp>& __e) const { _Array_augmented_ ##_Name(_M_array, _M_index, __e, _M_sz); }
#undef _DEFINE_VALARRAY_OPERATOR
#endif
