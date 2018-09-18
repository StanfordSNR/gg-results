// GGHASH:V4VB1FzuqfTsDjGzRCKC3stG3BIjiKcN7Kta7XVkbncM00001dab
#ifndef _MASK_ARRAY_H
#define _MASK_ARRAY_H 1
#undef _DEFINE_VALARRAY_OPERATOR
#define _DEFINE_VALARRAY_OPERATOR(_Op,_Name) template<typename _Tp> inline void mask_array<_Tp>::operator _Op ##=(const valarray<_Tp>& __v) const { _Array_augmented_ ##_Name(_M_array, _M_mask, _Array<_Tp>(__v), __v.size()); } template<typename _Tp> template<class _Dom> inline void mask_array<_Tp>::operator _Op ##=(const _Expr<_Dom, _Tp>& __e) const { _Array_augmented_ ##_Name(_M_array, _M_mask, __e, __e.size()); }
#undef _DEFINE_VALARRAY_OPERATOR
#endif
