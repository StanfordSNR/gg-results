// GGHASH:V8Nrvft7XDe1cBggPfExvu0JOqTByWPn82j1Ef.dZf_c00002478
#define PERL_MAGIC_sv '\0'
#define PERL_MAGIC_arylen '#'
#define PERL_MAGIC_rhash '%'
#define PERL_MAGIC_debugvar '*'
#define PERL_MAGIC_pos '.'
#define PERL_MAGIC_symtab ':'
#define PERL_MAGIC_backref '<'
#define PERL_MAGIC_arylen_p '@'
#define PERL_MAGIC_bm 'B'
#define PERL_MAGIC_overload_table 'c'
#define PERL_MAGIC_regdata 'D'
#define PERL_MAGIC_regdatum 'd'
#define PERL_MAGIC_env 'E'
#define PERL_MAGIC_envelem 'e'
#define PERL_MAGIC_fm 'f'
#define PERL_MAGIC_regex_global 'g'
#define PERL_MAGIC_hints 'H'
#define PERL_MAGIC_hintselem 'h'
#define PERL_MAGIC_isa 'I'
#define PERL_MAGIC_isaelem 'i'
#define PERL_MAGIC_nkeys 'k'
#define PERL_MAGIC_dbfile 'L'
#define PERL_MAGIC_dbline 'l'
#define PERL_MAGIC_shared 'N'
#define PERL_MAGIC_shared_scalar 'n'
#define PERL_MAGIC_collxfrm 'o'
#define PERL_MAGIC_tied 'P'
#define PERL_MAGIC_tiedelem 'p'
#define PERL_MAGIC_tiedscalar 'q'
#define PERL_MAGIC_qr 'r'
#define PERL_MAGIC_sig 'S'
#define PERL_MAGIC_sigelem 's'
#define PERL_MAGIC_taint 't'
#define PERL_MAGIC_uvar 'U'
#define PERL_MAGIC_uvar_elem 'u'
#define PERL_MAGIC_vstring 'V'
#define PERL_MAGIC_vec 'v'
#define PERL_MAGIC_utf8 'w'
#define PERL_MAGIC_substr 'x'
#define PERL_MAGIC_defelem 'y'
#define PERL_MAGIC_lvref '\\'
#define PERL_MAGIC_checkcall ']'
#define PERL_MAGIC_ext '~'
#ifdef DOINIT
#else
#endif
#ifdef DOINIT
#ifdef USE_LOCALE_COLLATE
#else
#endif
#ifndef PERL_MICRO
#else
#endif
#else
#endif
#define want_vtbl_bm want_vtbl_regexp
#define want_vtbl_fm want_vtbl_regexp
#define PL_vtbl_arylen PL_magic_vtables[want_vtbl_arylen]
#define PL_vtbl_arylen_p PL_magic_vtables[want_vtbl_arylen_p]
#define PL_vtbl_backref PL_magic_vtables[want_vtbl_backref]
#define PL_vtbl_bm PL_magic_vtables[want_vtbl_bm]
#define PL_vtbl_checkcall PL_magic_vtables[want_vtbl_checkcall]
#define PL_vtbl_collxfrm PL_magic_vtables[want_vtbl_collxfrm]
#define PL_vtbl_dbline PL_magic_vtables[want_vtbl_dbline]
#define PL_vtbl_debugvar PL_magic_vtables[want_vtbl_debugvar]
#define PL_vtbl_defelem PL_magic_vtables[want_vtbl_defelem]
#define PL_vtbl_env PL_magic_vtables[want_vtbl_env]
#define PL_vtbl_envelem PL_magic_vtables[want_vtbl_envelem]
#define PL_vtbl_fm PL_magic_vtables[want_vtbl_fm]
#define PL_vtbl_hints PL_magic_vtables[want_vtbl_hints]
#define PL_vtbl_hintselem PL_magic_vtables[want_vtbl_hintselem]
#define PL_vtbl_isa PL_magic_vtables[want_vtbl_isa]
#define PL_vtbl_isaelem PL_magic_vtables[want_vtbl_isaelem]
#define PL_vtbl_lvref PL_magic_vtables[want_vtbl_lvref]
#define PL_vtbl_mglob PL_magic_vtables[want_vtbl_mglob]
#define PL_vtbl_nkeys PL_magic_vtables[want_vtbl_nkeys]
#define PL_vtbl_ovrld PL_magic_vtables[want_vtbl_ovrld]
#define PL_vtbl_pack PL_magic_vtables[want_vtbl_pack]
#define PL_vtbl_packelem PL_magic_vtables[want_vtbl_packelem]
#define PL_vtbl_pos PL_magic_vtables[want_vtbl_pos]
#define PL_vtbl_regdata PL_magic_vtables[want_vtbl_regdata]
#define PL_vtbl_regdatum PL_magic_vtables[want_vtbl_regdatum]
#define PL_vtbl_regexp PL_magic_vtables[want_vtbl_regexp]
#define PL_vtbl_sigelem PL_magic_vtables[want_vtbl_sigelem]
#define PL_vtbl_substr PL_magic_vtables[want_vtbl_substr]
#define PL_vtbl_sv PL_magic_vtables[want_vtbl_sv]
#define PL_vtbl_taint PL_magic_vtables[want_vtbl_taint]
#define PL_vtbl_utf8 PL_magic_vtables[want_vtbl_utf8]
#define PL_vtbl_uvar PL_magic_vtables[want_vtbl_uvar]
#define PL_vtbl_vec PL_magic_vtables[want_vtbl_vec]
