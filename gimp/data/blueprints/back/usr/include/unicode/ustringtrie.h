// GGHASH:VXJyqza0qdKcokOJAcfprGpbNDrt3RFKvunnh0f96pOs00000c98
#ifndef __USTRINGTRIE_H__
#define __USTRINGTRIE_H__ 
#include "unicode/utypes.h"
#define USTRINGTRIE_MATCHES(result) ((result)!=USTRINGTRIE_NO_MATCH)
#define USTRINGTRIE_HAS_VALUE(result) ((result)>=USTRINGTRIE_FINAL_VALUE)
#define USTRINGTRIE_HAS_NEXT(result) ((result)&1)
#endif
