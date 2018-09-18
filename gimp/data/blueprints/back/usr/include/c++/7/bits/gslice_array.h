// GGHASH:VJxsEIk9S6zVNXxWNOWG7K63NCMolzi80CKjDJH.HcH000001e59
#ifndef _GSLICE_ARRAY_H
#define _GSLICE_ARRAY_H 1
#undef _DEFINE_VALARRAY_OPERATOR
#define _DEFINE_VALARRAY_OPERATOR(_Op,_Name) template<typename _Tp> inline void gslice_array<_Tp>::operator _Op ##=(const valarray<_Tp>& __v) const { _Array_augmented_ ##_Name(_M_array, _Array<size_t>(_M_index), _Array<_Tp>(__v), __v.size()); } template<typename _Tp> template<class _Dom> inline void gslice_array<_Tp>::operator _Op ##= (const _Expr<_Dom, _Tp>& __e) const { _Array_augmented_ ##_Name(_M_array, _Array<size_t>(_M_index), __e, _M_index.size()); }
#undef _DEFINE_VALARRAY_OPERATOR
#endif
