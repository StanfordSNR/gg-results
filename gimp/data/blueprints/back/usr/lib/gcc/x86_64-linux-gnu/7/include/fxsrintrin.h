// GGHASH:VP2xCLZYqFCvkb2DDqMvz9lD9qsvBnrn4uh8B1PIRFnY0000083c
#ifndef _FXSRINTRIN_H_INCLUDED
#define _FXSRINTRIN_H_INCLUDED 
#ifndef __FXSR__
#pragma GCC push_options
#pragma GCC target("fxsr")
#define __DISABLE_FXSR__ 
#endif
#ifdef __x86_64__
#endif
#ifdef __DISABLE_FXSR__
#undef __DISABLE_FXSR__
#pragma GCC pop_options
#endif
#endif
