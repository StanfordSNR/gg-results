// GGHASH:Vm1KtBpZskW6NKnd.PaA53IjHr0YhBvO0ZF_YSMk8S1c00002117
#ifndef Py_PYFPE_H
#define Py_PYFPE_H 
#ifdef __cplusplus
#endif
#ifdef WANT_SIGFPE_HANDLER
#include <signal.h>
#include <setjmp.h>
#include <math.h>
#define PyFPE_START_PROTECT(err_string,leave_stmt) if (!PyFPE_counter++ && setjmp(PyFPE_jbuf)) { PyErr_SetString(PyExc_FloatingPointError, err_string); PyFPE_counter = 0; leave_stmt; }
#define PyFPE_END_PROTECT(v) PyFPE_counter -= (int)PyFPE_dummy(&(v));
#else
#define PyFPE_START_PROTECT(err_string,leave_stmt) 
#define PyFPE_END_PROTECT(v) 
#endif
#ifdef __cplusplus
#endif
#endif
