// GGHASH:VCDivZ393raU6pRENaPxjgbFWOdi.PXA7lsx60di5QQE00002484
#ifndef _SLICE_ARRAY_H
#define _SLICE_ARRAY_H 1
#undef _DEFINE_VALARRAY_OPERATOR
#define _DEFINE_VALARRAY_OPERATOR(_Op,_Name) template<typename _Tp> inline void slice_array<_Tp>::operator _Op ##=(const valarray<_Tp>& __v) const { _Array_augmented_ ##_Name(_M_array, _M_sz, _M_stride, _Array<_Tp>(__v)); } template<typename _Tp> template<class _Dom> inline void slice_array<_Tp>::operator _Op ##=(const _Expr<_Dom,_Tp>& __e) const { _Array_augmented_ ##_Name(_M_array, _M_stride, __e, _M_sz); }
#undef _DEFINE_VALARRAY_OPERATOR
#endif
