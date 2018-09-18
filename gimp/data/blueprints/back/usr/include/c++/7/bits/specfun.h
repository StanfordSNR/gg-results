// GGHASH:VVtO1nTT5xVtf63nSChm_amMVx9NWPAcWJQnCA_DSI4A0000b01e
#ifndef _GLIBCXX_BITS_SPECFUN_H
#define _GLIBCXX_BITS_SPECFUN_H 1
#pragma GCC visibility push(default)
#include <bits/c++config.h>
#define __STDCPP_MATH_SPEC_FUNCS__ 201003L
#define __cpp_lib_math_special_functions 201603L
#if __cplusplus <= 201403L && __STDCPP_WANT_MATH_SPEC_FUNCS__ == 0
# error include <cmath> and define __STDCPP_WANT_MATH_SPEC_FUNCS__
#endif
#include <bits/stl_algobase.h>
#include <limits>
#include <type_traits>
#include <tr1/gamma.tcc>
#include <tr1/bessel_function.tcc>
#include <tr1/beta_function.tcc>
#include <tr1/ell_integral.tcc>
#include <tr1/exp_integral.tcc>
#include <tr1/hypergeometric.tcc>
#include <tr1/legendre_function.tcc>
#include <tr1/modified_bessel_func.tcc>
#include <tr1/poly_hermite.tcc>
#include <tr1/poly_laguerre.tcc>
#include <tr1/riemann_zeta.tcc>
#pragma GCC visibility pop
#endif
