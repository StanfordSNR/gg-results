// GGHASH:VDAURr7VuUH_5pgHKbRwbFr8ofoyYEAQA6O_KDCkOPBA00000895
#ifndef ierrors_INCLUDED
#define ierrors_INCLUDED 
#include "gserrors.h"
#define LEVEL1_ERROR_NAMES "unknownerror", "dictfull", "dictstackoverflow", "dictstackunderflow", "execstackoverflow", "interrupt", "invalidaccess", "invalidexit", "invalidfileaccess", "invalidfont", "invalidrestore", "ioerror", "limitcheck", "nocurrentpoint", "rangecheck", "stackoverflow", "stackunderflow", "syntaxerror", "timeout", "typecheck", "undefined", "undefinedfilename", "undefinedresult", "unmatchedmark", "VMerror"
#define LEVEL2_ERROR_NAMES "configurationerror", "undefinedresource", "unregistered"
#define DPS_ERROR_NAMES "invalidcontext", "invalidid"
#define ERROR_NAMES LEVEL1_ERROR_NAMES, LEVEL2_ERROR_NAMES, DPS_ERROR_NAMES
#define GS_ERROR_IS_INTERRUPT(ecode) ((ecode) == gs_error_interrupt || (ecode) == gs_error_timeout)
#endif
