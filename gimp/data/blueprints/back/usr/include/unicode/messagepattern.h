// GGHASH:VcbURiQn85TZSOILFYhXgzx3kdYf0PqzJ43dWWuxFnzg00008691
#ifndef __MESSAGEPATTERN_H__
#define __MESSAGEPATTERN_H__ 
#include "unicode/utypes.h"
#if !UCONFIG_NO_FORMATTING
#include "unicode/parseerr.h"
#include "unicode/unistr.h"
#define UMSGPAT_ARG_TYPE_HAS_PLURAL_STYLE(argType) ((argType)==UMSGPAT_ARG_TYPE_PLURAL || (argType)==UMSGPAT_ARG_TYPE_SELECTORDINAL)
#define UMSGPAT_NO_NUMERIC_VALUE ((double)(-123456789))
#endif
#endif
