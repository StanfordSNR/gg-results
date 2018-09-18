// GGHASH:V9VAlWUFMEMVNCe5KicSAVZxNy0BMIksh7GTi9wgT1dg0000069d
#if defined(USE_DTRACE) && defined(PERL_CORE)
# include "perldtrace.h"
#define PERL_DTRACE_PROBE_ENTRY(cv) if (PERL_SUB_ENTRY_ENABLED()) Perl_dtrace_probe_call(aTHX_ cv, TRUE);
#define PERL_DTRACE_PROBE_RETURN(cv) if (PERL_SUB_ENTRY_ENABLED()) Perl_dtrace_probe_call(aTHX_ cv, FALSE);
#define PERL_DTRACE_PROBE_FILE_LOADING(name) if (PERL_SUB_ENTRY_ENABLED()) Perl_dtrace_probe_load(aTHX_ name, TRUE);
#define PERL_DTRACE_PROBE_FILE_LOADED(name) if (PERL_SUB_ENTRY_ENABLED()) Perl_dtrace_probe_load(aTHX_ name, FALSE);
#define PERL_DTRACE_PROBE_OP(op) if (PERL_OP_ENTRY_ENABLED()) Perl_dtrace_probe_op(aTHX_ op);
#define PERL_DTRACE_PROBE_PHASE(phase) if (PERL_OP_ENTRY_ENABLED()) Perl_dtrace_probe_phase(aTHX_ phase);
#else
#define PERL_DTRACE_PROBE_ENTRY(cv) 
#define PERL_DTRACE_PROBE_RETURN(cv) 
#define PERL_DTRACE_PROBE_FILE_LOADING(cv) 
#define PERL_DTRACE_PROBE_FILE_LOADED(cv) 
#define PERL_DTRACE_PROBE_OP(op) 
#define PERL_DTRACE_PROBE_PHASE(phase) 
#endif
