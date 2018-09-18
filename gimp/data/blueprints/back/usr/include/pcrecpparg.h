// GGHASH:ViZEvA_jahPccRkU4XUXn1q9uKGYBKF5DIknaO1QguYs00001a7f
#ifndef _PCRECPPARG_H
#define _PCRECPPARG_H 
#include <stdlib.h>
#include <string>
#include <pcre.h>
#define PCRE_MAKE_PARSER(type,name) Arg(type* p) : arg_(p), parser_(name) { } Arg(type* p, Parser parser) : arg_(p), parser_(parser) { }
#if 1
#endif
#if 1
#endif
#undef PCRE_MAKE_PARSER
#define PCRE_DECLARE_INTEGER_PARSER(name) private: static bool parse_ ## name(const char* str, int n, void* dest); static bool parse_ ## name ## _radix( const char* str, int n, void* dest, int radix); public: static bool parse_ ## name ## _hex(const char* str, int n, void* dest); static bool parse_ ## name ## _octal(const char* str, int n, void* dest); static bool parse_ ## name ## _cradix(const char* str, int n, void* dest)
#undef PCRE_DECLARE_INTEGER_PARSER
#define MAKE_INTEGER_PARSER(type,name) inline Arg Hex(type* ptr) { return Arg(ptr, Arg::parse_ ## name ## _hex); } inline Arg Octal(type* ptr) { return Arg(ptr, Arg::parse_ ## name ## _octal); } inline Arg CRadix(type* ptr) { return Arg(ptr, Arg::parse_ ## name ## _cradix); }
#if 1
#endif
#if 1
#endif
#undef PCRE_IS_SET
#undef PCRE_SET_OR_CLEAR
#undef MAKE_INTEGER_PARSER
#endif
