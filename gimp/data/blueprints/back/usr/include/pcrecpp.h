// GGHASH:VuJsfVaA0N1VrhixIuuFl8B7DvlNhbNFbB1AxBfxNit400006810
#ifndef _PCRECPP_H
#define _PCRECPP_H 
#include <string>
#include <pcre.h>
#include <pcrecpparg.h>
#include <pcre_stringpiece.h>
#define PCRE_SET_OR_CLEAR(b,o) if (b) all_options_ |= (o); else all_options_ &= ~(o); return *this
#define PCRE_IS_SET(o) (all_options_ & o) == o
#endif
