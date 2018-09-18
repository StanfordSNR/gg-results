// GGHASH:V0OlsgyqpHFQ8tSiJyQfkvQpKN8lPUE_.dDivVkPWn2U000004b3
#ifndef _ALLOCA_H
#define _ALLOCA_H 1
#include <features.h>
#define __need_size_t 
#include <stddef.h>
#undef alloca
#ifdef __GNUC__
#define alloca(size) __builtin_alloca (size)
#endif
#endif
