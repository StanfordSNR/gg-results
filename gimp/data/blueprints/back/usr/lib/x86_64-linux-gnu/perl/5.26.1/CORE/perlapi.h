// GGHASH:VGkJivIuL7EmBlyRe6_v3iGnWB53v5JHPtKIDvToVpAw000016e7
#ifndef __perlapi_h__
#define __perlapi_h__ 
#if defined (MULTIPLICITY) && defined (PERL_GLOBAL_STRUCT)
#undef PERLVAR
#undef PERLVARA
#undef PERLVARI
#undef PERLVARIC
#define PERLVAR(p,v,t) EXTERN_C t* Perl_ ##p ##v ##_ptr(pTHX);
#define PERLVARA(p,v,n,t) typedef t PL_ ##v ##_t[n]; EXTERN_C PL_ ##v ##_t* Perl_ ##p ##v ##_ptr(pTHX);
#define PERLVARI(p,v,t,i) PERLVAR(p,v,t)
#define PERLVARIC(p,v,t,i) PERLVAR(p,v, const t)
#include "perlvars.h"
#undef PERLVAR
#undef PERLVARA
#undef PERLVARI
#undef PERLVARIC
#if defined(PERL_CORE)
#ifndef PERL_NO_FORCE_LINK
#ifndef DOINIT
#else
#undef PERLVAR
#undef PERLVARA
#undef PERLVARI
#undef PERLVARIC
#define PERLVAR(p,v,t) (void*)Perl_ ##p ##v ##_ptr,
#define PERLVARA(p,v,n,t) PERLVAR(p,v,t)
#define PERLVARI(p,v,t,i) PERLVAR(p,v,t)
#define PERLVARIC(p,v,t,i) PERLVAR(p,v,t)
#if defined(__DECC) && defined(__osf__)
#pragma message save
#pragma message disable (nonstandcast)
#endif
#include "perlvars.h"
#if defined(__DECC) && defined(__osf__)
#pragma message restore
#endif
#undef PERLVAR
#undef PERLVARA
#undef PERLVARI
#undef PERLVARIC
#endif
#endif
#else
#undef PL_C_locale_obj
#define PL_C_locale_obj (*Perl_GC_locale_obj_ptr(NULL))
#undef PL_appctx
#define PL_appctx (*Perl_Gappctx_ptr(NULL))
#undef PL_check
#define PL_check (*Perl_Gcheck_ptr(NULL))
#undef PL_check_mutex
#define PL_check_mutex (*Perl_Gcheck_mutex_ptr(NULL))
#undef PL_csighandlerp
#define PL_csighandlerp (*Perl_Gcsighandlerp_ptr(NULL))
#undef PL_curinterp
#define PL_curinterp (*Perl_Gcurinterp_ptr(NULL))
#undef PL_do_undump
#define PL_do_undump (*Perl_Gdo_undump_ptr(NULL))
#undef PL_dollarzero_mutex
#define PL_dollarzero_mutex (*Perl_Gdollarzero_mutex_ptr(NULL))
#undef PL_fold_locale
#define PL_fold_locale (*Perl_Gfold_locale_ptr(NULL))
#undef PL_hash_seed
#define PL_hash_seed (*Perl_Ghash_seed_ptr(NULL))
#undef PL_hash_seed_set
#define PL_hash_seed_set (*Perl_Ghash_seed_set_ptr(NULL))
#undef PL_hints_mutex
#define PL_hints_mutex (*Perl_Ghints_mutex_ptr(NULL))
#undef PL_keyword_plugin
#define PL_keyword_plugin (*Perl_Gkeyword_plugin_ptr(NULL))
#undef PL_locale_mutex
#define PL_locale_mutex (*Perl_Glocale_mutex_ptr(NULL))
#undef PL_malloc_mutex
#define PL_malloc_mutex (*Perl_Gmalloc_mutex_ptr(NULL))
#undef PL_mmap_page_size
#define PL_mmap_page_size (*Perl_Gmmap_page_size_ptr(NULL))
#undef PL_my_ctx_mutex
#define PL_my_ctx_mutex (*Perl_Gmy_ctx_mutex_ptr(NULL))
#undef PL_my_cxt_index
#define PL_my_cxt_index (*Perl_Gmy_cxt_index_ptr(NULL))
#undef PL_op_mutex
#define PL_op_mutex (*Perl_Gop_mutex_ptr(NULL))
#undef PL_op_seq
#define PL_op_seq (*Perl_Gop_seq_ptr(NULL))
#undef PL_op_sequence
#define PL_op_sequence (*Perl_Gop_sequence_ptr(NULL))
#undef PL_perlio_debug_fd
#define PL_perlio_debug_fd (*Perl_Gperlio_debug_fd_ptr(NULL))
#undef PL_perlio_fd_refcnt
#define PL_perlio_fd_refcnt (*Perl_Gperlio_fd_refcnt_ptr(NULL))
#undef PL_perlio_fd_refcnt_size
#define PL_perlio_fd_refcnt_size (*Perl_Gperlio_fd_refcnt_size_ptr(NULL))
#undef PL_perlio_mutex
#define PL_perlio_mutex (*Perl_Gperlio_mutex_ptr(NULL))
#undef PL_perllib_sep
#define PL_perllib_sep (*Perl_Gperllib_sep_ptr(NULL))
#undef PL_ppaddr
#define PL_ppaddr (*Perl_Gppaddr_ptr(NULL))
#undef PL_sh_path
#define PL_sh_path (*Perl_Gsh_path_ptr(NULL))
#undef PL_sig_defaulting
#define PL_sig_defaulting (*Perl_Gsig_defaulting_ptr(NULL))
#undef PL_sig_handlers_initted
#define PL_sig_handlers_initted (*Perl_Gsig_handlers_initted_ptr(NULL))
#undef PL_sig_ignoring
#define PL_sig_ignoring (*Perl_Gsig_ignoring_ptr(NULL))
#undef PL_sig_trapped
#define PL_sig_trapped (*Perl_Gsig_trapped_ptr(NULL))
#undef PL_sigfpe_saved
#define PL_sigfpe_saved (*Perl_Gsigfpe_saved_ptr(NULL))
#undef PL_sv_placeholder
#define PL_sv_placeholder (*Perl_Gsv_placeholder_ptr(NULL))
#undef PL_thr_key
#define PL_thr_key (*Perl_Gthr_key_ptr(NULL))
#undef PL_timesbase
#define PL_timesbase (*Perl_Gtimesbase_ptr(NULL))
#undef PL_use_safe_putenv
#define PL_use_safe_putenv (*Perl_Guse_safe_putenv_ptr(NULL))
#undef PL_veto_cleanup
#define PL_veto_cleanup (*Perl_Gveto_cleanup_ptr(NULL))
#undef PL_watch_pvx
#define PL_watch_pvx (*Perl_Gwatch_pvx_ptr(NULL))
#endif
#endif
#endif
