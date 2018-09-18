// GGHASH:VJOkPHDEnKAedGzXy50Pa_JK1GABXVeK.V1H2nLgHPzY000003b8
#ifndef _LINUX_ATMAPI_H
#define _LINUX_ATMAPI_H 
#if defined(__sparc__) || defined(__ia64__)
#define __ATM_API_ALIGN __attribute__((aligned(8)))
#else
#define __ATM_API_ALIGN 
#endif
#endif
