// GGHASH:V5_xAHtE_DmHQGTPa3n2MFfRn3sBkYO2BTZrBNEWdgLw000063e3
#if defined(PERL_PERTURB_KEYS_DISABLED)
#define PL_HASH_RAND_BITS_ENABLED 0
#define PERL_HASH_ITER_BUCKET(iter) ((iter)->xhv_riter)
#else
#define PERL_HASH_RANDOMIZE_KEYS 1
# if defined(PERL_PERTURB_KEYS_RANDOM)
#define PL_HASH_RAND_BITS_ENABLED 1
# elif defined(PERL_PERTURB_KEYS_DETERMINISTIC)
#define PL_HASH_RAND_BITS_ENABLED 2
# else
#define USE_PERL_PERTURB_KEYS 1
#define PL_HASH_RAND_BITS_ENABLED PL_hash_rand_bits_enabled
# endif
#define PERL_HASH_ITER_BUCKET(iter) (((iter)->xhv_riter) ^ ((iter)->xhv_rand))
#endif
#define MRO_GET_PRIVATE_DATA(smeta,which) (((smeta)->mro_which && (which) == (smeta)->mro_which) ? (smeta)->mro_linear_current : Perl_mro_get_private_data(aTHX_ (smeta), (which)))
#ifdef PERL_HASH_RANDOMIZE_KEYS
#endif
#define HvAUXf_SCAN_STASH 0x1
#define HvAUXf_NO_DEREF 0x2
#define PERL_HASH_DEFAULT_HvMAX 7
#define PERL_HV_ALLOC_AUX_SIZE (1 << 9)
#define HEf_SVKEY -2
#ifndef PERL_CORE
#define Nullhv Null(HV*)
#endif
#define HvARRAY(hv) ((hv)->sv_u.svu_hash)
#define HvFILL(hv) Perl_hv_fill(aTHX_ MUTABLE_HV(hv))
#define HvMAX(hv) ((XPVHV*) SvANY(hv))->xhv_max
#define HvAUX(hv) ((struct xpvhv_aux*)&(HvARRAY(hv)[HvMAX(hv)+1]))
#define HvRITER(hv) (*Perl_hv_riter_p(aTHX_ MUTABLE_HV(hv)))
#define HvEITER(hv) (*Perl_hv_eiter_p(aTHX_ MUTABLE_HV(hv)))
#define HvRITER_set(hv,r) Perl_hv_riter_set(aTHX_ MUTABLE_HV(hv), r)
#define HvEITER_set(hv,e) Perl_hv_eiter_set(aTHX_ MUTABLE_HV(hv), e)
#define HvRITER_get(hv) (SvOOK(hv) ? HvAUX(hv)->xhv_riter : -1)
#define HvEITER_get(hv) (SvOOK(hv) ? HvAUX(hv)->xhv_eiter : NULL)
#define HvRAND_get(hv) (SvOOK(hv) ? HvAUX(hv)->xhv_rand : 0)
#define HvLASTRAND_get(hv) (SvOOK(hv) ? HvAUX(hv)->xhv_last_rand : 0)
#define HvNAME(hv) HvNAME_get(hv)
#define HvNAMELEN(hv) HvNAMELEN_get(hv)
#define HvENAME(hv) HvENAME_get(hv)
#define HvENAMELEN(hv) HvENAMELEN_get(hv)
#define HvMROMETA(hv) (HvAUX(hv)->xhv_mro_meta ? HvAUX(hv)->xhv_mro_meta : Perl_mro_meta_init(aTHX_ hv))
#define HvNAME_HEK_NN(hv) ( HvAUX(hv)->xhv_name_count ? *HvAUX(hv)->xhv_name_u.xhvnameu_names : HvAUX(hv)->xhv_name_u.xhvnameu_name )
#define HvNAME_HEK(hv) (SvOOK(hv) && HvAUX(hv)->xhv_name_u.xhvnameu_name ? HvNAME_HEK_NN(hv) : NULL)
#define HvNAME_get(hv) ((SvOOK(hv) && HvAUX(hv)->xhv_name_u.xhvnameu_name && HvNAME_HEK_NN(hv)) ? HEK_KEY(HvNAME_HEK_NN(hv)) : NULL)
#define HvNAMELEN_get(hv) ((SvOOK(hv) && HvAUX(hv)->xhv_name_u.xhvnameu_name && HvNAME_HEK_NN(hv)) ? HEK_LEN(HvNAME_HEK_NN(hv)) : 0)
#define HvNAMEUTF8(hv) ((SvOOK(hv) && HvAUX(hv)->xhv_name_u.xhvnameu_name && HvNAME_HEK_NN(hv)) ? HEK_UTF8(HvNAME_HEK_NN(hv)) : 0)
#define HvENAME_HEK_NN(hv) ( HvAUX(hv)->xhv_name_count > 0 ? HvAUX(hv)->xhv_name_u.xhvnameu_names[0] : HvAUX(hv)->xhv_name_count < -1 ? HvAUX(hv)->xhv_name_u.xhvnameu_names[1] : HvAUX(hv)->xhv_name_count == -1 ? NULL : HvAUX(hv)->xhv_name_u.xhvnameu_name )
#define HvENAME_HEK(hv) (SvOOK(hv) && HvAUX(hv)->xhv_name_u.xhvnameu_name ? HvENAME_HEK_NN(hv) : NULL)
#define HvENAME_get(hv) ((SvOOK(hv) && HvAUX(hv)->xhv_name_u.xhvnameu_name && HvAUX(hv)->xhv_name_count != -1) ? HEK_KEY(HvENAME_HEK_NN(hv)) : NULL)
#define HvENAMELEN_get(hv) ((SvOOK(hv) && HvAUX(hv)->xhv_name_u.xhvnameu_name && HvAUX(hv)->xhv_name_count != -1) ? HEK_LEN(HvENAME_HEK_NN(hv)) : 0)
#define HvENAMEUTF8(hv) ((SvOOK(hv) && HvAUX(hv)->xhv_name_u.xhvnameu_name && HvAUX(hv)->xhv_name_count != -1) ? HEK_UTF8(HvENAME_HEK_NN(hv)) : 0)
#define XHvTOTALKEYS(xhv) ((xhv)->xhv_keys)
#define HvKEYS(hv) HvUSEDKEYS(hv)
#define HvUSEDKEYS(hv) (HvTOTALKEYS(hv) - HvPLACEHOLDERS_get(hv))
#define HvTOTALKEYS(hv) XHvTOTALKEYS((XPVHV*) SvANY(hv))
#define HvPLACEHOLDERS(hv) (*Perl_hv_placeholders_p(aTHX_ MUTABLE_HV(hv)))
#define HvPLACEHOLDERS_get(hv) (SvMAGIC(hv) ? Perl_hv_placeholders_get(aTHX_ (const HV *)hv) : 0)
#define HvPLACEHOLDERS_set(hv,p) Perl_hv_placeholders_set(aTHX_ MUTABLE_HV(hv), p)
#define HvSHAREKEYS(hv) (SvFLAGS(hv) & SVphv_SHAREKEYS)
#define HvSHAREKEYS_on(hv) (SvFLAGS(hv) |= SVphv_SHAREKEYS)
#define HvSHAREKEYS_off(hv) (SvFLAGS(hv) &= ~SVphv_SHAREKEYS)
#define HvHASKFLAGS(hv) (SvFLAGS(hv) & SVphv_HASKFLAGS)
#define HvHASKFLAGS_on(hv) (SvFLAGS(hv) |= SVphv_HASKFLAGS)
#define HvHASKFLAGS_off(hv) (SvFLAGS(hv) &= ~SVphv_HASKFLAGS)
#define HvLAZYDEL(hv) (SvFLAGS(hv) & SVphv_LAZYDEL)
#define HvLAZYDEL_on(hv) (SvFLAGS(hv) |= SVphv_LAZYDEL)
#define HvLAZYDEL_off(hv) (SvFLAGS(hv) &= ~SVphv_LAZYDEL)
#ifndef PERL_CORE
#define Nullhe Null(HE*)
#endif
#define HeNEXT(he) (he)->hent_next
#define HeKEY_hek(he) (he)->hent_hek
#define HeKEY(he) HEK_KEY(HeKEY_hek(he))
#define HeKEY_sv(he) (*(SV**)HeKEY(he))
#define HeKLEN(he) HEK_LEN(HeKEY_hek(he))
#define HeKUTF8(he) HEK_UTF8(HeKEY_hek(he))
#define HeKWASUTF8(he) HEK_WASUTF8(HeKEY_hek(he))
#define HeKLEN_UTF8(he) (HeKUTF8(he) ? -HeKLEN(he) : HeKLEN(he))
#define HeKFLAGS(he) HEK_FLAGS(HeKEY_hek(he))
#define HeVAL(he) (he)->he_valu.hent_val
#define HeHASH(he) HEK_HASH(HeKEY_hek(he))
#define HePV(he,lp) ((HeKLEN(he) == HEf_SVKEY) ? SvPV(HeKEY_sv(he),lp) : ((lp = HeKLEN(he)), HeKEY(he)))
#define HeUTF8(he) ((HeKLEN(he) == HEf_SVKEY) ? SvUTF8(HeKEY_sv(he)) : (U32)HeKUTF8(he))
#define HeSVKEY(he) ((HeKEY(he) && HeKLEN(he) == HEf_SVKEY) ? HeKEY_sv(he) : NULL)
#define HeSVKEY_force(he) (HeKEY(he) ? ((HeKLEN(he) == HEf_SVKEY) ? HeKEY_sv(he) : newSVpvn_flags(HeKEY(he), HeKLEN(he), SVs_TEMP | ( HeKUTF8(he) ? SVf_UTF8 : 0 ))) : &PL_sv_undef)
#define HeSVKEY_set(he,sv) ((HeKLEN(he) = HEf_SVKEY), (HeKEY_sv(he) = sv))
#ifndef PERL_CORE
#define Nullhek Null(HEK*)
#endif
#define HEK_BASESIZE STRUCT_OFFSET(HEK, hek_key[0])
#define HEK_HASH(hek) (hek)->hek_hash
#define HEK_LEN(hek) (hek)->hek_len
#define HEK_KEY(hek) (hek)->hek_key
#define HEK_FLAGS(hek) (*((unsigned char *)(HEK_KEY(hek))+HEK_LEN(hek)+1))
#define HVhek_UTF8 0x01
#define HVhek_WASUTF8 0x02
#define HVhek_UNSHARED 0x08
#define HVhek_FREEKEY 0x100
#define HVhek_PLACEHOLD 0x200
#define HVhek_KEYCANONICAL 0x400
#define HVhek_MASK 0xFF
#define HVhek_ENABLEHVKFLAGS (HVhek_MASK & ~(HVhek_UNSHARED))
#define HEK_UTF8(hek) (HEK_FLAGS(hek) & HVhek_UTF8)
#define HEK_UTF8_on(hek) (HEK_FLAGS(hek) |= HVhek_UTF8)
#define HEK_UTF8_off(hek) (HEK_FLAGS(hek) &= ~HVhek_UTF8)
#define HEK_WASUTF8(hek) (HEK_FLAGS(hek) & HVhek_WASUTF8)
#define HEK_WASUTF8_on(hek) (HEK_FLAGS(hek) |= HVhek_WASUTF8)
#define HEK_WASUTF8_off(hek) (HEK_FLAGS(hek) &= ~HVhek_WASUTF8)
#ifndef PERL_USE_LARGE_HV_ALLOC
#define PERL_HV_ARRAY_ALLOC_BYTES(size) ((size) * sizeof(HE*))
#else
#define MALLOC_OVERHEAD 16
#define PERL_HV_ARRAY_ALLOC_BYTES(size) (((size) < 64) ? (size) * sizeof(HE*) : (size) * sizeof(HE*) * 2 - MALLOC_OVERHEAD)
#endif
#define HV_ITERNEXT_WANTPLACEHOLDERS 0x01
#define hv_iternext(hv) hv_iternext_flags(hv, 0)
#define hv_magic(hv,gv,how) sv_magic(MUTABLE_SV(hv), MUTABLE_SV(gv), how, NULL, 0)
#define hv_undef(hv) Perl_hv_undef_flags(aTHX_ hv, 0)
#define Perl_sharepvn(pv,len,hash) HEK_KEY(share_hek(pv, len, hash))
#define sharepvn(pv,len,hash) Perl_sharepvn(pv, len, hash)
#define share_hek_hek(hek) (++(((struct shared_he *)(((char *)hek) - STRUCT_OFFSET(struct shared_he, shared_he_hek))) ->shared_he_he.he_valu.hent_refcount), hek)
#define hv_store_ent(hv,keysv,val,hash) ((HE *) hv_common((hv), (keysv), NULL, 0, 0, HV_FETCH_ISSTORE, (val), (hash)))
#define hv_exists_ent(hv,keysv,hash) cBOOL(hv_common((hv), (keysv), NULL, 0, 0, HV_FETCH_ISEXISTS, 0, (hash)))
#define hv_fetch_ent(hv,keysv,lval,hash) ((HE *) hv_common((hv), (keysv), NULL, 0, 0, ((lval) ? HV_FETCH_LVALUE : 0), NULL, (hash)))
#define hv_delete_ent(hv,key,flags,hash) (MUTABLE_SV(hv_common((hv), (key), NULL, 0, 0, (flags) | HV_DELETE, NULL, (hash))))
#define hv_store_flags(hv,key,klen,val,hash,flags) ((SV**) hv_common((hv), NULL, (key), (klen), (flags), (HV_FETCH_ISSTORE|HV_FETCH_JUST_SV), (val), (hash)))
#define hv_store(hv,key,klen,val,hash) ((SV**) hv_common_key_len((hv), (key), (klen), (HV_FETCH_ISSTORE|HV_FETCH_JUST_SV), (val), (hash)))
#define hv_exists(hv,key,klen) cBOOL(hv_common_key_len((hv), (key), (klen), HV_FETCH_ISEXISTS, NULL, 0))
#define hv_fetch(hv,key,klen,lval) ((SV**) hv_common_key_len((hv), (key), (klen), (lval) ? (HV_FETCH_JUST_SV | HV_FETCH_LVALUE) : HV_FETCH_JUST_SV, NULL, 0))
#define hv_delete(hv,key,klen,flags) (MUTABLE_SV(hv_common_key_len((hv), (key), (klen), (flags) | HV_DELETE, NULL, 0)))
#define hv_existss(hv,key) hv_exists((hv), ("" key ""), (sizeof(key)-1))
#define hv_fetchs(hv,key,lval) hv_fetch((hv), ("" key ""), (sizeof(key)-1), (lval))
#define hv_deletes(hv,key,flags) hv_delete((hv), ("" key ""), (sizeof(key)-1), (flags))
#define hv_name_sets(hv,name,flags) hv_name_set((hv),("" name ""),(sizeof(name)-1), flags)
#define hv_stores(hv,key,val) hv_store((hv), ("" key ""), (sizeof(key)-1), (val), 0)
#ifdef PERL_CORE
#define hv_storehek(hv,hek,val) hv_common((hv), NULL, HEK_KEY(hek), HEK_LEN(hek), HEK_UTF8(hek), HV_FETCH_ISSTORE|HV_FETCH_JUST_SV, (val), HEK_HASH(hek))
#define hv_fetchhek(hv,hek,lval) ((SV **) hv_common((hv), NULL, HEK_KEY(hek), HEK_LEN(hek), HEK_UTF8(hek), (lval) ? (HV_FETCH_JUST_SV | HV_FETCH_LVALUE) : HV_FETCH_JUST_SV, NULL, HEK_HASH(hek)))
#define hv_deletehek(hv,hek,flags) hv_common((hv), NULL, HEK_KEY(hek), HEK_LEN(hek), HEK_UTF8(hek), (flags)|HV_DELETE, NULL, HEK_HASH(hek))
#endif
#define REFCOUNTED_HE_KEY_UTF8 0x00000001
#ifdef PERL_CORE
#define REFCOUNTED_HE_EXISTS 0x00000002
#endif
#ifdef PERL_CORE
#ifdef USE_ITHREADS
#else
#endif
#define refcounted_he_fetch_pvs(chain,key,flags) Perl_refcounted_he_fetch_pvn(aTHX_ chain, STR_WITH_LEN(key), 0, flags)
#define refcounted_he_new_pvs(parent,key,value,flags) Perl_refcounted_he_new_pvn(aTHX_ parent, STR_WITH_LEN(key), 0, value, flags)
#define HVrhek_undef 0x00
#define HVrhek_delete 0x10
#define HVrhek_IV 0x20
#define HVrhek_UV 0x30
#define HVrhek_PV 0x40
#define HVrhek_PV_UTF8 0x50
#define HVrhek_typemask 0x70
#ifdef USE_ITHREADS
#define REF_HE_KEY(chain) ((((chain->refcounted_he_data[0] & 0x60) == 0x40) ? chain->refcounted_he_val.refcounted_he_u_len + 1 : 0) + 1 + chain->refcounted_he_data)
#endif
# ifdef USE_ITHREADS
#define HINTS_REFCNT_LOCK MUTEX_LOCK(&PL_hints_mutex)
#define HINTS_REFCNT_UNLOCK MUTEX_UNLOCK(&PL_hints_mutex)
# else
#define HINTS_REFCNT_LOCK NOOP
#define HINTS_REFCNT_UNLOCK NOOP
# endif
#endif
#ifdef USE_ITHREADS
#define HINTS_REFCNT_INIT MUTEX_INIT(&PL_hints_mutex)
#define HINTS_REFCNT_TERM MUTEX_DESTROY(&PL_hints_mutex)
#else
#define HINTS_REFCNT_INIT NOOP
#define HINTS_REFCNT_TERM NOOP
#endif
#define HV_DISABLE_UVAR_XKEY 0x01
#define HV_FETCH_ISSTORE 0x04
#define HV_FETCH_ISEXISTS 0x08
#define HV_FETCH_LVALUE 0x10
#define HV_FETCH_JUST_SV 0x20
#define HV_DELETE 0x40
#define HV_FETCH_EMPTY_HE 0x80
#define HV_NAME_SETALL 0x02
#define newHV() MUTABLE_HV(newSV_type(SVt_PVHV))
#include "hv_func.h"
