// GGHASH:VQE9Oc1XN1ys6vCGDD_sF_VlA8JZlOerdmALl1aqdNTo000007e4
#ifndef _GLIBCXX_FENV_H
#define _GLIBCXX_FENV_H 1
#include <bits/c++config.h>
#if _GLIBCXX_HAVE_FENV_H
# include_next <fenv.h>
#endif
#if __cplusplus >= 201103L
#if _GLIBCXX_USE_C99_FENV_TR1
#undef feclearexcept
#undef fegetexceptflag
#undef feraiseexcept
#undef fesetexceptflag
#undef fetestexcept
#undef fegetround
#undef fesetround
#undef fegetenv
#undef feholdexcept
#undef fesetenv
#undef feupdateenv
#endif
#endif
#endif
