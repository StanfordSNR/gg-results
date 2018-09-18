// GGHASH:VyRYh6NjF06qAzyHwa_0Wfz7ba3G_bJGURhxS1K55qik000018a8
#ifndef _PCRE_STRINGPIECE_H
#define _PCRE_STRINGPIECE_H 
#include <cstring>
#include <string>
#include <iosfwd>
#if 0
#define HAVE_TYPE_TRAITS 
#include <type_traits.h>
#elif 0
#define HAVE_TYPE_TRAITS 
#include <bits/type_traits.h>
#endif
#include <pcre.h>
#define STRINGPIECE_BINARY_PREDICATE(cmp,auxcmp) bool operator cmp (const StringPiece& x) const { int r = memcmp(ptr_, x.ptr_, length_ < x.length_ ? length_ : x.length_); return ((r auxcmp 0) || ((r == 0) && (length_ cmp x.length_))); }
#undef STRINGPIECE_BINARY_PREDICATE
#ifdef HAVE_TYPE_TRAITS
#endif
#endif
