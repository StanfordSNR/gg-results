// GGHASH:VRdfeKDhb9Bp4rLHJLfaKCcPn3SaueIi9xbo9x184fFA0003c365
#ifndef NO_MATHOMS
#endif
#define PERL_ARGS_ASSERT_GV_AMUPDATE assert(stash)
#ifndef NO_MATHOMS
#endif
#define PERL_ARGS_ASSERT_SLAB_FREE assert(op)
#define PERL_ARGS_ASSERT__BYTE_DUMP_STRING assert(s)
#define PERL_ARGS_ASSERT__FORCE_OUT_MALFORMED_UTF8_MESSAGE assert(p); assert(e)
#define PERL_ARGS_ASSERT__IS_UTF8_FOO assert(p); assert(name); assert(alternative); assert(file)
#define PERL_ARGS_ASSERT__IS_UTF8_FOO_WITH_LEN assert(p); assert(e)
#define PERL_ARGS_ASSERT__IS_UTF8_CHAR_HELPER assert(s); assert(e)
#define PERL_ARGS_ASSERT__IS_UTF8_IDCONT assert(p)
#define PERL_ARGS_ASSERT__IS_UTF8_IDSTART assert(p)
#define PERL_ARGS_ASSERT__IS_UTF8_MARK assert(p)
#define PERL_ARGS_ASSERT__IS_UTF8_PERL_IDCONT_WITH_LEN assert(p); assert(e)
#define PERL_ARGS_ASSERT__IS_UTF8_PERL_IDSTART_WITH_LEN assert(p); assert(e)
#define PERL_ARGS_ASSERT__IS_UTF8_XIDCONT assert(p)
#define PERL_ARGS_ASSERT__IS_UTF8_XIDSTART assert(p)
#define PERL_ARGS_ASSERT__TO_UNI_FOLD_FLAGS assert(p); assert(lenp)
#define PERL_ARGS_ASSERT__TO_UTF8_FOLD_FLAGS assert(p); assert(ustrp); assert(file)
#define PERL_ARGS_ASSERT__TO_UTF8_LOWER_FLAGS assert(p); assert(ustrp); assert(file)
#define PERL_ARGS_ASSERT__TO_UTF8_TITLE_FLAGS assert(p); assert(ustrp); assert(file)
#define PERL_ARGS_ASSERT__TO_UTF8_UPPER_FLAGS assert(p); assert(ustrp); assert(file)
#define PERL_ARGS_ASSERT_ABORT_EXECUTION assert(msg); assert(name)
#define PERL_ARGS_ASSERT_ALLOCMY assert(name)
#define PERL_ARGS_ASSERT_AMAGIC_CALL assert(left); assert(right)
#define PERL_ARGS_ASSERT_AMAGIC_DEREF_CALL assert(ref)
#ifndef PERL_NO_INLINE_FUNCTIONS
#define PERL_ARGS_ASSERT_APPEND_UTF8_FROM_NATIVE_BYTE assert(dest)
#endif
#define PERL_ARGS_ASSERT_APPLY assert(mark); assert(sp)
#define PERL_ARGS_ASSERT_APPLY_ATTRS_STRING assert(stashpv); assert(cv); assert(attrstr)
#define PERL_ARGS_ASSERT_AV_ARYLEN_P assert(av)
#define PERL_ARGS_ASSERT_AV_CLEAR assert(av)
#define PERL_ARGS_ASSERT_AV_CREATE_AND_PUSH assert(avp); assert(val)
#define PERL_ARGS_ASSERT_AV_CREATE_AND_UNSHIFT_ONE assert(avp); assert(val)
#define PERL_ARGS_ASSERT_AV_DELETE assert(av)
#define PERL_ARGS_ASSERT_AV_EXISTS assert(av)
#define PERL_ARGS_ASSERT_AV_EXTEND assert(av)
#define PERL_ARGS_ASSERT_AV_EXTEND_GUTS assert(maxp); assert(allocp); assert(arrayp)
#define PERL_ARGS_ASSERT_AV_FETCH assert(av)
#define PERL_ARGS_ASSERT_AV_FILL assert(av)
#define PERL_ARGS_ASSERT_AV_ITER_P assert(av)
#define PERL_ARGS_ASSERT_AV_LEN assert(av)
#define PERL_ARGS_ASSERT_AV_MAKE assert(strp)
#define PERL_ARGS_ASSERT_AV_POP assert(av)
#define PERL_ARGS_ASSERT_AV_PUSH assert(av); assert(val)
#define PERL_ARGS_ASSERT_AV_REIFY assert(av)
#define PERL_ARGS_ASSERT_AV_SHIFT assert(av)
#define PERL_ARGS_ASSERT_AV_STORE assert(av)
#ifndef PERL_NO_INLINE_FUNCTIONS
#define PERL_ARGS_ASSERT_AV_TOP_INDEX assert(av)
#endif
#define PERL_ARGS_ASSERT_AV_UNDEF assert(av)
#define PERL_ARGS_ASSERT_AV_UNSHIFT assert(av)
#define PERL_ARGS_ASSERT_BIND_MATCH assert(left); assert(right)
#define PERL_ARGS_ASSERT_BLOCKHOOK_REGISTER assert(hk)
#define PERL_ARGS_ASSERT_BYTES_CMP_UTF8 assert(b); assert(u)
#define PERL_ARGS_ASSERT_BYTES_FROM_UTF8 assert(s); assert(len)
#define PERL_ARGS_ASSERT_BYTES_TO_UTF8 assert(s); assert(len)
#define PERL_ARGS_ASSERT_CALL_ARGV assert(sub_name); assert(argv)
#define PERL_ARGS_ASSERT_CALL_LIST assert(paramList)
#define PERL_ARGS_ASSERT_CALL_METHOD assert(methname)
#define PERL_ARGS_ASSERT_CALL_PV assert(sub_name)
#define PERL_ARGS_ASSERT_CALL_SV assert(sv)
#define PERL_ARGS_ASSERT_CANDO assert(statbufp)
#define PERL_ARGS_ASSERT_CHECK_UTF8_PRINT assert(s)
#define PERL_ARGS_ASSERT_CK_ANONCODE assert(o)
#define PERL_ARGS_ASSERT_CK_BACKTICK assert(o)
#define PERL_ARGS_ASSERT_CK_BITOP assert(o)
#define PERL_ARGS_ASSERT_CK_CMP assert(o)
#define PERL_ARGS_ASSERT_CK_CONCAT assert(o)
#define PERL_ARGS_ASSERT_CK_DEFINED assert(o)
#define PERL_ARGS_ASSERT_CK_DELETE assert(o)
#define PERL_ARGS_ASSERT_CK_EACH assert(o)
#define PERL_ARGS_ASSERT_CK_ENTERSUB_ARGS_CORE assert(entersubop); assert(namegv); assert(protosv)
#define PERL_ARGS_ASSERT_CK_ENTERSUB_ARGS_LIST assert(entersubop)
#define PERL_ARGS_ASSERT_CK_ENTERSUB_ARGS_PROTO assert(entersubop); assert(namegv); assert(protosv)
#define PERL_ARGS_ASSERT_CK_ENTERSUB_ARGS_PROTO_OR_LIST assert(entersubop); assert(namegv); assert(protosv)
#define PERL_ARGS_ASSERT_CK_EOF assert(o)
#define PERL_ARGS_ASSERT_CK_EVAL assert(o)
#define PERL_ARGS_ASSERT_CK_EXEC assert(o)
#define PERL_ARGS_ASSERT_CK_EXISTS assert(o)
#define PERL_ARGS_ASSERT_CK_FTST assert(o)
#define PERL_ARGS_ASSERT_CK_FUN assert(o)
#define PERL_ARGS_ASSERT_CK_GLOB assert(o)
#define PERL_ARGS_ASSERT_CK_GREP assert(o)
#define PERL_ARGS_ASSERT_CK_INDEX assert(o)
#define PERL_ARGS_ASSERT_CK_JOIN assert(o)
#define PERL_ARGS_ASSERT_CK_LENGTH assert(o)
#define PERL_ARGS_ASSERT_CK_LFUN assert(o)
#define PERL_ARGS_ASSERT_CK_LISTIOB assert(o)
#define PERL_ARGS_ASSERT_CK_MATCH assert(o)
#define PERL_ARGS_ASSERT_CK_METHOD assert(o)
#define PERL_ARGS_ASSERT_CK_NULL assert(o)
#define PERL_ARGS_ASSERT_CK_OPEN assert(o)
#define PERL_ARGS_ASSERT_CK_PROTOTYPE assert(o)
#define PERL_ARGS_ASSERT_CK_READLINE assert(o)
#define PERL_ARGS_ASSERT_CK_REFASSIGN assert(o)
#define PERL_ARGS_ASSERT_CK_REPEAT assert(o)
#define PERL_ARGS_ASSERT_CK_REQUIRE assert(o)
#define PERL_ARGS_ASSERT_CK_RETURN assert(o)
#define PERL_ARGS_ASSERT_CK_RFUN assert(o)
#define PERL_ARGS_ASSERT_CK_RVCONST assert(o)
#define PERL_ARGS_ASSERT_CK_SASSIGN assert(o)
#define PERL_ARGS_ASSERT_CK_SELECT assert(o)
#define PERL_ARGS_ASSERT_CK_SHIFT assert(o)
#define PERL_ARGS_ASSERT_CK_SMARTMATCH assert(o)
#define PERL_ARGS_ASSERT_CK_SORT assert(o)
#define PERL_ARGS_ASSERT_CK_SPAIR assert(o)
#define PERL_ARGS_ASSERT_CK_SPLIT assert(o)
#define PERL_ARGS_ASSERT_CK_STRINGIFY assert(o)
#define PERL_ARGS_ASSERT_CK_SUBR assert(o)
#define PERL_ARGS_ASSERT_CK_SUBSTR assert(o)
#define PERL_ARGS_ASSERT_CK_SVCONST assert(o)
#define PERL_ARGS_ASSERT_CK_TELL assert(o)
#define PERL_ARGS_ASSERT_CK_TRUNC assert(o)
#define PERL_ARGS_ASSERT_CK_WARNER assert(pat)
#define PERL_ARGS_ASSERT_CK_WARNER_D assert(pat)
#define PERL_ARGS_ASSERT_CLEAR_DEFARRAY assert(av)
#define PERL_ARGS_ASSERT_CLOSEST_COP assert(cop)
#define PERL_ARGS_ASSERT_COP_FETCH_LABEL assert(cop)
#define PERL_ARGS_ASSERT_COP_STORE_LABEL assert(cop); assert(label)
#define PERL_ARGS_ASSERT_CORE_PROTOTYPE assert(name)
#define PERL_ARGS_ASSERT_CORESUB_OP assert(coreargssv)
#define PERL_ARGS_ASSERT_CROAK_SV assert(baseex)
#define PERL_ARGS_ASSERT_CROAK_XS_USAGE assert(cv); assert(params)
#define PERL_ARGS_ASSERT_CUSTOM_OP_DESC assert(o)
#define PERL_ARGS_ASSERT_CUSTOM_OP_GET_FIELD assert(o)
#define PERL_ARGS_ASSERT_CUSTOM_OP_NAME assert(o)
#define PERL_ARGS_ASSERT_CUSTOM_OP_REGISTER assert(ppaddr); assert(xop)
#define PERL_ARGS_ASSERT_CV_CKPROTO_LEN_FLAGS assert(cv)
#define PERL_ARGS_ASSERT_CV_CLONE assert(proto)
#define PERL_ARGS_ASSERT_CV_CLONE_INTO assert(proto); assert(target)
#define PERL_ARGS_ASSERT_CV_GET_CALL_CHECKER assert(cv); assert(ckfun_p); assert(ckobj_p)
#define PERL_ARGS_ASSERT_CV_NAME assert(cv)
#define PERL_ARGS_ASSERT_CV_SET_CALL_CHECKER assert(cv); assert(ckfun); assert(ckobj)
#define PERL_ARGS_ASSERT_CV_SET_CALL_CHECKER_FLAGS assert(cv); assert(ckfun); assert(ckobj)
#define PERL_ARGS_ASSERT_CV_UNDEF assert(cv)
#define PERL_ARGS_ASSERT_CV_UNDEF_FLAGS assert(cv)
#define PERL_ARGS_ASSERT_CVGV_FROM_HEK assert(cv)
#define PERL_ARGS_ASSERT_CVGV_SET assert(cv)
#define PERL_ARGS_ASSERT_CVSTASH_SET assert(cv)
#define PERL_ARGS_ASSERT_CX_DUMP assert(cx)
#define PERL_ARGS_ASSERT_DEB assert(pat)
#define PERL_ARGS_ASSERT_DEBOP assert(o)
#define PERL_ARGS_ASSERT_DEFELEM_TARGET assert(sv)
#define PERL_ARGS_ASSERT_DELIMCPY assert(to); assert(toend); assert(from); assert(fromend); assert(retlen)
#define PERL_ARGS_ASSERT_DELIMCPY_NO_ESCAPE assert(to); assert(toend); assert(from); assert(fromend); assert(retlen)
#define PERL_ARGS_ASSERT_DIE_SV assert(baseex)
#define PERL_ARGS_ASSERT_DIE_UNWIND assert(msv)
#ifndef NO_MATHOMS
#define PERL_ARGS_ASSERT_DO_AEXEC assert(mark); assert(sp)
#endif
#define PERL_ARGS_ASSERT_DO_AEXEC5 assert(mark); assert(sp)
#define PERL_ARGS_ASSERT_DO_BINMODE assert(fp)
#define PERL_ARGS_ASSERT_DO_DUMP_PAD assert(file)
#define PERL_ARGS_ASSERT_DO_EOF assert(gv)
#define PERL_ARGS_ASSERT_DO_GV_DUMP assert(file); assert(name)
#define PERL_ARGS_ASSERT_DO_GVGV_DUMP assert(file); assert(name)
#define PERL_ARGS_ASSERT_DO_HV_DUMP assert(file); assert(name)
#define PERL_ARGS_ASSERT_DO_JOIN assert(sv); assert(delim); assert(mark); assert(sp)
#define PERL_ARGS_ASSERT_DO_MAGIC_DUMP assert(file)
#define PERL_ARGS_ASSERT_DO_NCMP assert(left); assert(right)
#define PERL_ARGS_ASSERT_DO_OP_DUMP assert(file)
#ifndef NO_MATHOMS
#define PERL_ARGS_ASSERT_DO_OPEN assert(gv); assert(name)
#endif
#define PERL_ARGS_ASSERT_DO_OPEN6 assert(gv); assert(oname)
#define PERL_ARGS_ASSERT_DO_OPEN9 assert(gv); assert(name); assert(svs)
#define PERL_ARGS_ASSERT_DO_OPEN_RAW assert(gv); assert(oname)
#define PERL_ARGS_ASSERT_DO_OPENN assert(gv); assert(oname)
#define PERL_ARGS_ASSERT_DO_PMOP_DUMP assert(file)
#define PERL_ARGS_ASSERT_DO_PRINT assert(fp)
#define PERL_ARGS_ASSERT_DO_SPRINTF assert(sv); assert(sarg)
#define PERL_ARGS_ASSERT_DO_SV_DUMP assert(file)
#define PERL_ARGS_ASSERT_DO_SYSSEEK assert(gv)
#define PERL_ARGS_ASSERT_DO_TELL assert(gv)
#define PERL_ARGS_ASSERT_DO_TRANS assert(sv)
#define PERL_ARGS_ASSERT_DO_VECGET assert(sv)
#define PERL_ARGS_ASSERT_DO_VECSET assert(sv)
#define PERL_ARGS_ASSERT_DO_VOP assert(sv); assert(left); assert(right)
#define PERL_ARGS_ASSERT_DOFILE assert(term)
#define PERL_ARGS_ASSERT_DOREF assert(o)
#define PERL_ARGS_ASSERT_DRAND48_INIT_R assert(random_state)
#define PERL_ARGS_ASSERT_DRAND48_R assert(random_state)
#define PERL_ARGS_ASSERT_DUMP_FORM assert(gv)
#define PERL_ARGS_ASSERT_DUMP_INDENT assert(file); assert(pat)
#define PERL_ARGS_ASSERT_DUMP_PACKSUBS assert(stash)
#define PERL_ARGS_ASSERT_DUMP_PACKSUBS_PERL assert(stash)
#define PERL_ARGS_ASSERT_DUMP_SUB assert(gv)
#define PERL_ARGS_ASSERT_DUMP_SUB_PERL assert(gv)
#define PERL_ARGS_ASSERT_DUMP_VINDENT assert(file); assert(pat)
#define PERL_ARGS_ASSERT_EMULATE_COP_IO assert(c); assert(sv)
#define PERL_ARGS_ASSERT_EVAL_PV assert(p)
#define PERL_ARGS_ASSERT_EVAL_SV assert(sv)
#define PERL_ARGS_ASSERT_FBM_COMPILE assert(sv)
#define PERL_ARGS_ASSERT_FBM_INSTR assert(big); assert(bigend); assert(littlestr)
#define PERL_ARGS_ASSERT_FEATURE_IS_ENABLED assert(name)
#define PERL_ARGS_ASSERT_FILTER_DEL assert(funcp)
#define PERL_ARGS_ASSERT_FILTER_READ assert(buf_sv)
#define PERL_ARGS_ASSERT_FINALIZE_OPTREE assert(o)
#define PERL_ARGS_ASSERT_FIND_SCRIPT assert(scriptname)
#ifndef PERL_NO_INLINE_FUNCTIONS
#define PERL_ARGS_ASSERT_FOLDEQ assert(a); assert(b)
#endif
#ifndef PERL_NO_INLINE_FUNCTIONS
#define PERL_ARGS_ASSERT_FOLDEQ_LATIN1 assert(a); assert(b)
#endif
#ifndef PERL_NO_INLINE_FUNCTIONS
#define PERL_ARGS_ASSERT_FOLDEQ_LOCALE assert(a); assert(b)
#endif
#define PERL_ARGS_ASSERT_FOLDEQ_UTF8_FLAGS assert(s1); assert(s2)
#define PERL_ARGS_ASSERT_FORM assert(pat)
#define PERL_ARGS_ASSERT_GET_AV assert(name)
#define PERL_ARGS_ASSERT_GET_CV assert(name)
#define PERL_ARGS_ASSERT_GET_CVN_FLAGS assert(name)
#define PERL_ARGS_ASSERT_GET_DB_SUB assert(cv)
#define PERL_ARGS_ASSERT_GET_HASH_SEED assert(seed_buffer)
#define PERL_ARGS_ASSERT_GET_HV assert(name)
#define PERL_ARGS_ASSERT_GET_SV assert(name)
#define PERL_ARGS_ASSERT_GETCWD_SV assert(sv)
#define PERL_ARGS_ASSERT_GROK_ATOUV assert(pv); assert(valptr)
#define PERL_ARGS_ASSERT_GROK_BIN assert(start); assert(len_p); assert(flags)
#define PERL_ARGS_ASSERT_GROK_HEX assert(start); assert(len_p); assert(flags)
#define PERL_ARGS_ASSERT_GROK_INFNAN assert(sp); assert(send)
#define PERL_ARGS_ASSERT_GROK_NUMBER assert(pv)
#define PERL_ARGS_ASSERT_GROK_NUMBER_FLAGS assert(pv)
#define PERL_ARGS_ASSERT_GROK_NUMERIC_RADIX assert(sp); assert(send)
#define PERL_ARGS_ASSERT_GROK_OCT assert(start); assert(len_p); assert(flags)
#ifndef NO_MATHOMS
#endif
#ifndef NO_MATHOMS
#endif
#ifndef NO_MATHOMS
#endif
#define PERL_ARGS_ASSERT_GV_AUTOLOAD_PV assert(namepv)
#define PERL_ARGS_ASSERT_GV_AUTOLOAD_PVN assert(name)
#define PERL_ARGS_ASSERT_GV_AUTOLOAD_SV assert(namesv)
#define PERL_ARGS_ASSERT_GV_CHECK assert(stash)
#define PERL_ARGS_ASSERT_GV_CONST_SV assert(gv)
#define PERL_ARGS_ASSERT_GV_EFULLNAME assert(sv); assert(gv)
#ifndef NO_MATHOMS
#define PERL_ARGS_ASSERT_GV_EFULLNAME3 assert(sv); assert(gv)
#endif
#define PERL_ARGS_ASSERT_GV_EFULLNAME4 assert(sv); assert(gv)
#define PERL_ARGS_ASSERT_GV_FETCHFILE assert(name)
#define PERL_ARGS_ASSERT_GV_FETCHFILE_FLAGS assert(name)
#define PERL_ARGS_ASSERT_GV_FETCHMETH_PV assert(name)
#define PERL_ARGS_ASSERT_GV_FETCHMETH_PV_AUTOLOAD assert(name)
#define PERL_ARGS_ASSERT_GV_FETCHMETH_PVN assert(name)
#define PERL_ARGS_ASSERT_GV_FETCHMETH_PVN_AUTOLOAD assert(name)
#define PERL_ARGS_ASSERT_GV_FETCHMETH_SV assert(namesv)
#define PERL_ARGS_ASSERT_GV_FETCHMETH_SV_AUTOLOAD assert(namesv)
#ifndef NO_MATHOMS
#define PERL_ARGS_ASSERT_GV_FETCHMETHOD assert(stash); assert(name)
#endif
#define PERL_ARGS_ASSERT_GV_FETCHMETHOD_AUTOLOAD assert(stash); assert(name)
#define PERL_ARGS_ASSERT_GV_FETCHMETHOD_PV_FLAGS assert(stash); assert(name)
#define PERL_ARGS_ASSERT_GV_FETCHMETHOD_PVN_FLAGS assert(stash); assert(name)
#define PERL_ARGS_ASSERT_GV_FETCHMETHOD_SV_FLAGS assert(stash); assert(namesv)
#define PERL_ARGS_ASSERT_GV_FETCHPV assert(nambeg)
#define PERL_ARGS_ASSERT_GV_FETCHPVN_FLAGS assert(name)
#define PERL_ARGS_ASSERT_GV_FETCHSV assert(name)
#define PERL_ARGS_ASSERT_GV_FULLNAME assert(sv); assert(gv)
#ifndef NO_MATHOMS
#define PERL_ARGS_ASSERT_GV_FULLNAME3 assert(sv); assert(gv)
#endif
#define PERL_ARGS_ASSERT_GV_FULLNAME4 assert(sv); assert(gv)
#define PERL_ARGS_ASSERT_GV_INIT_PV assert(gv); assert(name)
#define PERL_ARGS_ASSERT_GV_INIT_PVN assert(gv); assert(name)
#define PERL_ARGS_ASSERT_GV_INIT_SV assert(gv); assert(namesv)
#define PERL_ARGS_ASSERT_GV_NAME_SET assert(gv); assert(name)
#define PERL_ARGS_ASSERT_GV_OVERRIDE assert(name)
#define PERL_ARGS_ASSERT_GV_SETREF assert(dstr); assert(sstr)
#define PERL_ARGS_ASSERT_GV_STASHPV assert(name)
#define PERL_ARGS_ASSERT_GV_STASHPVN assert(name)
#define PERL_ARGS_ASSERT_GV_STASHSV assert(sv)
#define PERL_ARGS_ASSERT_GV_TRY_DOWNGRADE assert(gv)
#define PERL_ARGS_ASSERT_HV_BACKREFERENCES_P assert(hv)
#define PERL_ARGS_ASSERT_HV_BUCKET_RATIO assert(hv)
#define PERL_ARGS_ASSERT_HV_CLEAR_PLACEHOLDERS assert(hv)
#define PERL_ARGS_ASSERT_HV_COMMON_KEY_LEN assert(key)
#define PERL_ARGS_ASSERT_HV_DELAYFREE_ENT assert(hv)
#ifndef NO_MATHOMS
#define PERL_ARGS_ASSERT_HV_DELETE assert(key)
#endif
#ifndef NO_MATHOMS
#define PERL_ARGS_ASSERT_HV_DELETE_ENT assert(keysv)
#endif
#define PERL_ARGS_ASSERT_HV_EITER_P assert(hv)
#define PERL_ARGS_ASSERT_HV_EITER_SET assert(hv)
#define PERL_ARGS_ASSERT_HV_ENAME_ADD assert(hv); assert(name)
#define PERL_ARGS_ASSERT_HV_ENAME_DELETE assert(hv); assert(name)
#ifndef NO_MATHOMS
#define PERL_ARGS_ASSERT_HV_EXISTS assert(key)
#endif
#ifndef NO_MATHOMS
#define PERL_ARGS_ASSERT_HV_EXISTS_ENT assert(keysv)
#endif
#ifndef NO_MATHOMS
#define PERL_ARGS_ASSERT_HV_FETCH assert(key)
#endif
#ifndef NO_MATHOMS
#define PERL_ARGS_ASSERT_HV_FETCH_ENT assert(keysv)
#endif
#define PERL_ARGS_ASSERT_HV_FILL assert(hv)
#define PERL_ARGS_ASSERT_HV_FREE_ENT assert(hv)
#define PERL_ARGS_ASSERT_HV_ITERINIT assert(hv)
#define PERL_ARGS_ASSERT_HV_ITERKEY assert(entry); assert(retlen)
#define PERL_ARGS_ASSERT_HV_ITERKEYSV assert(entry)
#ifndef NO_MATHOMS
#define PERL_ARGS_ASSERT_HV_ITERNEXT assert(hv)
#endif
#define PERL_ARGS_ASSERT_HV_ITERNEXT_FLAGS assert(hv)
#define PERL_ARGS_ASSERT_HV_ITERNEXTSV assert(hv); assert(key); assert(retlen)
#define PERL_ARGS_ASSERT_HV_ITERVAL assert(hv); assert(entry)
#define PERL_ARGS_ASSERT_HV_KSPLIT assert(hv)
#ifndef NO_MATHOMS
#define PERL_ARGS_ASSERT_HV_MAGIC assert(hv)
#endif
#define PERL_ARGS_ASSERT_HV_NAME_SET assert(hv)
#define PERL_ARGS_ASSERT_HV_PLACEHOLDERS_GET assert(hv)
#define PERL_ARGS_ASSERT_HV_PLACEHOLDERS_P assert(hv)
#define PERL_ARGS_ASSERT_HV_PLACEHOLDERS_SET assert(hv)
#define PERL_ARGS_ASSERT_HV_RAND_SET assert(hv)
#define PERL_ARGS_ASSERT_HV_RITER_P assert(hv)
#define PERL_ARGS_ASSERT_HV_RITER_SET assert(hv)
#define PERL_ARGS_ASSERT_HV_SCALAR assert(hv)
#ifndef NO_MATHOMS
#endif
#ifndef NO_MATHOMS
#endif
#ifndef NO_MATHOMS
#endif
#define PERL_ARGS_ASSERT_INIT_ARGV_SYMBOLS assert(argv)
#define PERL_ARGS_ASSERT_INIT_TM assert(ptm)
#ifndef NO_MATHOMS
#define PERL_ARGS_ASSERT_INSTR assert(big); assert(little)
#endif
#define PERL_ARGS_ASSERT_IO_CLOSE assert(io)
#define PERL_ARGS_ASSERT_ISALNUM_LAZY assert(p)
#define PERL_ARGS_ASSERT_ISIDFIRST_LAZY assert(p)
#ifndef PERL_NO_INLINE_FUNCTIONS
#define PERL_ARGS_ASSERT_IS_C9STRICT_UTF8_STRING assert(s)
#endif
#ifndef PERL_NO_INLINE_FUNCTIONS
#define PERL_ARGS_ASSERT_IS_C9STRICT_UTF8_STRING_LOCLEN assert(s)
#endif
#ifndef PERL_NO_INLINE_FUNCTIONS
#define PERL_ARGS_ASSERT_IS_SAFE_SYSCALL assert(pv); assert(what); assert(op_name)
#endif
#ifndef PERL_NO_INLINE_FUNCTIONS
#define PERL_ARGS_ASSERT_IS_STRICT_UTF8_STRING assert(s)
#endif
#ifndef PERL_NO_INLINE_FUNCTIONS
#define PERL_ARGS_ASSERT_IS_STRICT_UTF8_STRING_LOCLEN assert(s)
#endif
#define PERL_ARGS_ASSERT_IS_UTF8_ALNUM assert(p)
#define PERL_ARGS_ASSERT_IS_UTF8_ALNUMC assert(p)
#define PERL_ARGS_ASSERT_IS_UTF8_ALPHA assert(p)
#define PERL_ARGS_ASSERT_IS_UTF8_ASCII assert(p)
#define PERL_ARGS_ASSERT_IS_UTF8_BLANK assert(p)
#define PERL_ARGS_ASSERT_IS_UTF8_CHAR assert(s)
#ifndef NO_MATHOMS
#define PERL_ARGS_ASSERT_IS_UTF8_CHAR_BUF assert(buf); assert(buf_end)
#endif
#define PERL_ARGS_ASSERT_IS_UTF8_CNTRL assert(p)
#define PERL_ARGS_ASSERT_IS_UTF8_DIGIT assert(p)
#ifndef PERL_NO_INLINE_FUNCTIONS
#define PERL_ARGS_ASSERT_IS_UTF8_FIXED_WIDTH_BUF_LOCLEN_FLAGS assert(s)
#endif
#define PERL_ARGS_ASSERT_IS_UTF8_GRAPH assert(p)
#define PERL_ARGS_ASSERT_IS_UTF8_IDCONT assert(p)
#define PERL_ARGS_ASSERT_IS_UTF8_IDFIRST assert(p)
#ifndef PERL_NO_INLINE_FUNCTIONS
#define PERL_ARGS_ASSERT_IS_UTF8_INVARIANT_STRING assert(s)
#endif
#define PERL_ARGS_ASSERT_IS_UTF8_LOWER assert(p)
#define PERL_ARGS_ASSERT_IS_UTF8_MARK assert(p)
#define PERL_ARGS_ASSERT_IS_UTF8_PERL_SPACE assert(p)
#define PERL_ARGS_ASSERT_IS_UTF8_PERL_WORD assert(p)
#define PERL_ARGS_ASSERT_IS_UTF8_POSIX_DIGIT assert(p)
#define PERL_ARGS_ASSERT_IS_UTF8_PRINT assert(p)
#define PERL_ARGS_ASSERT_IS_UTF8_PUNCT assert(p)
#define PERL_ARGS_ASSERT_IS_UTF8_SPACE assert(p)
#ifndef PERL_NO_INLINE_FUNCTIONS
#define PERL_ARGS_ASSERT_IS_UTF8_STRING assert(s)
#endif
#ifndef PERL_NO_INLINE_FUNCTIONS
#define PERL_ARGS_ASSERT_IS_UTF8_STRING_FLAGS assert(s)
#endif
#ifndef NO_MATHOMS
#define PERL_ARGS_ASSERT_IS_UTF8_STRING_LOC assert(s); assert(ep)
#endif
#ifndef PERL_NO_INLINE_FUNCTIONS
#define PERL_ARGS_ASSERT_IS_UTF8_STRING_LOCLEN assert(s)
#endif
#ifndef PERL_NO_INLINE_FUNCTIONS
#define PERL_ARGS_ASSERT_IS_UTF8_STRING_LOCLEN_FLAGS assert(s)
#endif
#define PERL_ARGS_ASSERT_IS_UTF8_UPPER assert(p)
#ifndef PERL_NO_INLINE_FUNCTIONS
#define PERL_ARGS_ASSERT_IS_UTF8_VALID_PARTIAL_CHAR_FLAGS assert(s); assert(e)
#endif
#define PERL_ARGS_ASSERT_IS_UTF8_XDIGIT assert(p)
#define PERL_ARGS_ASSERT_IS_UTF8_XIDCONT assert(p)
#define PERL_ARGS_ASSERT_IS_UTF8_XIDFIRST assert(p)
#define PERL_ARGS_ASSERT_ISINFNANSV assert(sv)
#define PERL_ARGS_ASSERT_JMAYBE assert(o)
#define PERL_ARGS_ASSERT_KEYWORD assert(name)
#define PERL_ARGS_ASSERT_KEYWORD_PLUGIN_STANDARD assert(keyword_ptr); assert(op_ptr)
#define PERL_ARGS_ASSERT_LEAVE_ADJUST_STACKS assert(from_sp); assert(to_sp)
#define PERL_ARGS_ASSERT_LEX_DISCARD_TO assert(ptr)
#define PERL_ARGS_ASSERT_LEX_READ_TO assert(ptr)
#define PERL_ARGS_ASSERT_LEX_STUFF_PV assert(pv)
#define PERL_ARGS_ASSERT_LEX_STUFF_PVN assert(pv)
#define PERL_ARGS_ASSERT_LEX_STUFF_SV assert(sv)
#define PERL_ARGS_ASSERT_LEX_UNSTUFF assert(ptr)
#define PERL_ARGS_ASSERT_LOAD_MODULE assert(name)
#define PERL_ARGS_ASSERT_LOCALIZE assert(o)
#define PERL_ARGS_ASSERT_LOOKS_LIKE_NUMBER assert(sv)
#define PERL_ARGS_ASSERT_MAGIC_CLEAR_ALL_ENV assert(sv); assert(mg)
#define PERL_ARGS_ASSERT_MAGIC_CLEARARYLEN_P assert(sv); assert(mg)
#define PERL_ARGS_ASSERT_MAGIC_CLEARENV assert(sv); assert(mg)
#define PERL_ARGS_ASSERT_MAGIC_CLEARHINT assert(sv); assert(mg)
#define PERL_ARGS_ASSERT_MAGIC_CLEARHINTS assert(sv); assert(mg)
#define PERL_ARGS_ASSERT_MAGIC_CLEARISA assert(mg)
#define PERL_ARGS_ASSERT_MAGIC_CLEARPACK assert(sv); assert(mg)
#define PERL_ARGS_ASSERT_MAGIC_CLEARSIG assert(sv); assert(mg)
#define PERL_ARGS_ASSERT_MAGIC_COPYCALLCHECKER assert(sv); assert(mg); assert(nsv)
#define PERL_ARGS_ASSERT_MAGIC_EXISTSPACK assert(sv); assert(mg)
#define PERL_ARGS_ASSERT_MAGIC_FREEARYLEN_P assert(sv); assert(mg)
#define PERL_ARGS_ASSERT_MAGIC_FREEOVRLD assert(sv); assert(mg)
#define PERL_ARGS_ASSERT_MAGIC_GET assert(sv); assert(mg)
#define PERL_ARGS_ASSERT_MAGIC_GETARYLEN assert(sv); assert(mg)
#define PERL_ARGS_ASSERT_MAGIC_GETDEBUGVAR assert(sv); assert(mg)
#define PERL_ARGS_ASSERT_MAGIC_GETDEFELEM assert(sv); assert(mg)
#define PERL_ARGS_ASSERT_MAGIC_GETNKEYS assert(sv); assert(mg)
#define PERL_ARGS_ASSERT_MAGIC_GETPACK assert(sv); assert(mg)
#define PERL_ARGS_ASSERT_MAGIC_GETPOS assert(sv); assert(mg)
#define PERL_ARGS_ASSERT_MAGIC_GETSIG assert(sv); assert(mg)
#define PERL_ARGS_ASSERT_MAGIC_GETSUBSTR assert(sv); assert(mg)
#define PERL_ARGS_ASSERT_MAGIC_GETTAINT assert(sv); assert(mg)
#define PERL_ARGS_ASSERT_MAGIC_GETUVAR assert(sv); assert(mg)
#define PERL_ARGS_ASSERT_MAGIC_GETVEC assert(sv); assert(mg)
#define PERL_ARGS_ASSERT_MAGIC_KILLBACKREFS assert(sv); assert(mg)
#define PERL_ARGS_ASSERT_MAGIC_METHCALL assert(sv); assert(mg); assert(meth)
#define PERL_ARGS_ASSERT_MAGIC_NEXTPACK assert(sv); assert(mg); assert(key)
#define PERL_ARGS_ASSERT_MAGIC_REGDATA_CNT assert(sv); assert(mg)
#define PERL_ARGS_ASSERT_MAGIC_REGDATUM_GET assert(sv); assert(mg)
#define PERL_ARGS_ASSERT_MAGIC_SCALARPACK assert(hv); assert(mg)
#define PERL_ARGS_ASSERT_MAGIC_SET assert(sv); assert(mg)
#define PERL_ARGS_ASSERT_MAGIC_SET_ALL_ENV assert(sv); assert(mg)
#define PERL_ARGS_ASSERT_MAGIC_SETARYLEN assert(sv); assert(mg)
#define PERL_ARGS_ASSERT_MAGIC_SETDBLINE assert(sv); assert(mg)
#define PERL_ARGS_ASSERT_MAGIC_SETDEBUGVAR assert(sv); assert(mg)
#define PERL_ARGS_ASSERT_MAGIC_SETDEFELEM assert(sv); assert(mg)
#define PERL_ARGS_ASSERT_MAGIC_SETENV assert(sv); assert(mg)
#define PERL_ARGS_ASSERT_MAGIC_SETHINT assert(sv); assert(mg)
#define PERL_ARGS_ASSERT_MAGIC_SETISA assert(sv); assert(mg)
#define PERL_ARGS_ASSERT_MAGIC_SETLVREF assert(sv); assert(mg)
#define PERL_ARGS_ASSERT_MAGIC_SETMGLOB assert(sv); assert(mg)
#define PERL_ARGS_ASSERT_MAGIC_SETNKEYS assert(sv); assert(mg)
#define PERL_ARGS_ASSERT_MAGIC_SETPACK assert(sv); assert(mg)
#define PERL_ARGS_ASSERT_MAGIC_SETPOS assert(sv); assert(mg)
#define PERL_ARGS_ASSERT_MAGIC_SETREGEXP assert(sv); assert(mg)
#define PERL_ARGS_ASSERT_MAGIC_SETSIG assert(mg)
#define PERL_ARGS_ASSERT_MAGIC_SETSUBSTR assert(sv); assert(mg)
#define PERL_ARGS_ASSERT_MAGIC_SETTAINT assert(sv); assert(mg)
#define PERL_ARGS_ASSERT_MAGIC_SETUTF8 assert(sv); assert(mg)
#define PERL_ARGS_ASSERT_MAGIC_SETUVAR assert(sv); assert(mg)
#define PERL_ARGS_ASSERT_MAGIC_SETVEC assert(sv); assert(mg)
#define PERL_ARGS_ASSERT_MAGIC_SIZEPACK assert(sv); assert(mg)
#define PERL_ARGS_ASSERT_MAGIC_WIPEPACK assert(sv); assert(mg)
#define PERL_ARGS_ASSERT_MESS assert(pat)
#define PERL_ARGS_ASSERT_MESS_SV assert(basemsg)
#define PERL_ARGS_ASSERT_MG_CLEAR assert(sv)
#define PERL_ARGS_ASSERT_MG_COPY assert(sv); assert(nsv)
#define PERL_ARGS_ASSERT_MG_FIND_MGLOB assert(sv)
#define PERL_ARGS_ASSERT_MG_FREE assert(sv)
#define PERL_ARGS_ASSERT_MG_FREE_TYPE assert(sv)
#define PERL_ARGS_ASSERT_MG_GET assert(sv)
#define PERL_ARGS_ASSERT_MG_LENGTH assert(sv)
#define PERL_ARGS_ASSERT_MG_LOCALIZE assert(sv); assert(nsv)
#define PERL_ARGS_ASSERT_MG_MAGICAL assert(sv)
#define PERL_ARGS_ASSERT_MG_SET assert(sv)
#define PERL_ARGS_ASSERT_MG_SIZE assert(sv)
#define PERL_ARGS_ASSERT_MINI_MKTIME assert(ptm)
#define PERL_ARGS_ASSERT_MORESWITCHES assert(s)
#define PERL_ARGS_ASSERT_MRO_GET_FROM_NAME assert(name)
#define PERL_ARGS_ASSERT_MRO_GET_LINEAR_ISA assert(stash)
#define PERL_ARGS_ASSERT_MRO_GET_PRIVATE_DATA assert(smeta); assert(which)
#define PERL_ARGS_ASSERT_MRO_ISA_CHANGED_IN assert(stash)
#define PERL_ARGS_ASSERT_MRO_META_INIT assert(stash)
#define PERL_ARGS_ASSERT_MRO_METHOD_CHANGED_IN assert(stash)
#define PERL_ARGS_ASSERT_MRO_PACKAGE_MOVED assert(gv)
#define PERL_ARGS_ASSERT_MRO_REGISTER assert(mro)
#define PERL_ARGS_ASSERT_MRO_SET_MRO assert(meta); assert(name)
#define PERL_ARGS_ASSERT_MRO_SET_PRIVATE_DATA assert(smeta); assert(which); assert(data)
#define PERL_ARGS_ASSERT_MULTIDEREF_STRINGIFY assert(o)
#define PERL_ARGS_ASSERT_MY_ATOF assert(s)
#define PERL_ARGS_ASSERT_MY_ATOF2 assert(s); assert(value)
#define PERL_ARGS_ASSERT_MY_ATTRS assert(o)
#ifndef NO_MATHOMS
#endif
#define PERL_ARGS_ASSERT_MY_POPEN_LIST assert(mode); assert(args)
#define PERL_ARGS_ASSERT_MY_SNPRINTF assert(buffer); assert(format)
#ifndef NO_MATHOMS
#endif
#define PERL_ARGS_ASSERT_MY_STRFTIME assert(fmt)
#define PERL_ARGS_ASSERT_MY_VSNPRINTF assert(buffer); assert(format)
#ifndef NO_MATHOMS
#endif
#define PERL_ARGS_ASSERT_NEWAVREF assert(o)
#define PERL_ARGS_ASSERT_NEWCONDOP assert(first)
#define PERL_ARGS_ASSERT_NEWFOROP assert(expr)
#define PERL_ARGS_ASSERT_NEWGIVENOP assert(cond); assert(block)
#define PERL_ARGS_ASSERT_NEWGP assert(gv)
#define PERL_ARGS_ASSERT_NEWGVOP assert(gv)
#define PERL_ARGS_ASSERT_NEWGVGEN_FLAGS assert(pack)
#ifndef NO_MATHOMS
#endif
#define PERL_ARGS_ASSERT_NEWHVREF assert(o)
#ifndef NO_MATHOMS
#endif
#define PERL_ARGS_ASSERT_NEWLOGOP assert(first); assert(other)
#define PERL_ARGS_ASSERT_NEWLOOPEX assert(label)
#define PERL_ARGS_ASSERT_NEWMETHOP assert(dynamic_meth)
#define PERL_ARGS_ASSERT_NEWMETHOP_NAMED assert(const_meth)
#define PERL_ARGS_ASSERT_NEWMYSUB assert(o)
#define PERL_ARGS_ASSERT_NEWPADNAMEOUTER assert(outer)
#define PERL_ARGS_ASSERT_NEWPADNAMEPVN assert(s)
#define PERL_ARGS_ASSERT_NEWPROG assert(o)
#define PERL_ARGS_ASSERT_NEWRANGE assert(left); assert(right)
#define PERL_ARGS_ASSERT_NEWRV assert(sv)
#define PERL_ARGS_ASSERT_NEWRV_NOINC assert(tmpRef)
#define PERL_ARGS_ASSERT_NEWSTUB assert(gv)
#ifndef NO_MATHOMS
#endif
#define PERL_ARGS_ASSERT_NEWSVOP assert(sv)
#define PERL_ARGS_ASSERT_NEWSVREF assert(o)
#define PERL_ARGS_ASSERT_NEWSVAVDEFELEM assert(av)
#define PERL_ARGS_ASSERT_NEWSVPVF assert(pat)
#define PERL_ARGS_ASSERT_NEWSVRV assert(rv)
#define PERL_ARGS_ASSERT_NEWWHENOP assert(block)
#define PERL_ARGS_ASSERT_NEWXS assert(subaddr); assert(filename)
#define PERL_ARGS_ASSERT_NEWXS_DEFFILE assert(name); assert(subaddr)
#define PERL_ARGS_ASSERT_NEWXS_FLAGS assert(subaddr); assert(filename)
#define PERL_ARGS_ASSERT_NEWXS_LEN_FLAGS assert(subaddr)
#define PERL_ARGS_ASSERT_NEW_CTYPE assert(newctype)
#define PERL_ARGS_ASSERT_NEW_VERSION assert(ver)
#define PERL_ARGS_ASSERT_NEW_WARNINGS_BITFIELD assert(bits)
#define PERL_ARGS_ASSERT_NEXTARGV assert(gv)
#define PERL_ARGS_ASSERT_NOPERL_DIE assert(pat)
#define PERL_ARGS_ASSERT_OOPSAV assert(o)
#define PERL_ARGS_ASSERT_OOPSHV assert(o)
#define PERL_ARGS_ASSERT_OP_CLEAR assert(o)
#define PERL_ARGS_ASSERT_OP_CONTEXTUALIZE assert(o)
#define PERL_ARGS_ASSERT_OP_DUMP assert(o)
#define PERL_ARGS_ASSERT_OP_LINKLIST assert(o)
#define PERL_ARGS_ASSERT_OP_NULL assert(o)
#define PERL_ARGS_ASSERT_PACK_CAT assert(cat); assert(pat); assert(patend); assert(beglist); assert(endlist); assert(next_in_list)
#define PERL_ARGS_ASSERT_PACKAGE assert(o)
#define PERL_ARGS_ASSERT_PACKAGE_VERSION assert(v)
#define PERL_ARGS_ASSERT_PACKLIST assert(cat); assert(pat); assert(patend); assert(beglist); assert(endlist)
#define PERL_ARGS_ASSERT_PAD_ADD_ANON assert(func)
#define PERL_ARGS_ASSERT_PAD_ADD_NAME_PV assert(name)
#define PERL_ARGS_ASSERT_PAD_ADD_NAME_PVN assert(namepv)
#define PERL_ARGS_ASSERT_PAD_ADD_NAME_SV assert(name)
#define PERL_ARGS_ASSERT_PAD_ADD_WEAKREF assert(func)
#ifndef NO_MATHOMS
#endif
#define PERL_ARGS_ASSERT_PAD_FINDMY_PV assert(name)
#define PERL_ARGS_ASSERT_PAD_FINDMY_PVN assert(namepv)
#define PERL_ARGS_ASSERT_PAD_FINDMY_SV assert(name)
#define PERL_ARGS_ASSERT_PAD_FIXUP_INNER_ANONS assert(padlist); assert(old_cv); assert(new_cv)
#define PERL_ARGS_ASSERT_PAD_PUSH assert(padlist)
#define PERL_ARGS_ASSERT_PADLIST_STORE assert(padlist)
#define PERL_ARGS_ASSERT_PADNAME_FREE assert(pn)
#define PERL_ARGS_ASSERT_PADNAMELIST_FETCH assert(pnl)
#define PERL_ARGS_ASSERT_PADNAMELIST_FREE assert(pnl)
#define PERL_ARGS_ASSERT_PADNAMELIST_STORE assert(pnl)
#define PERL_ARGS_ASSERT_PARSE_UNICODE_OPTS assert(popt)
#define PERL_ARGS_ASSERT_PARSER_FREE assert(parser)
#define PERL_ARGS_ASSERT_PERL_CONSTRUCT assert(my_perl)
#define PERL_ARGS_ASSERT_PERL_DESTRUCT assert(my_perl)
#define PERL_ARGS_ASSERT_PERL_FREE assert(my_perl)
#define PERL_ARGS_ASSERT_PERL_PARSE assert(my_perl)
#define PERL_ARGS_ASSERT_PERL_RUN assert(my_perl)
#define PERL_ARGS_ASSERT_PMRUNTIME assert(o); assert(expr)
#define PERL_ARGS_ASSERT_POPULATE_ISA assert(name)
#define PERL_ARGS_ASSERT_PREGCOMP assert(pattern)
#define PERL_ARGS_ASSERT_PREGEXEC assert(prog); assert(stringarg); assert(strend); assert(strbeg); assert(screamer)
#define PERL_ARGS_ASSERT_PREGFREE2 assert(rx)
#define PERL_ARGS_ASSERT_PRESCAN_VERSION assert(s)
#define PERL_ARGS_ASSERT_PTR_TABLE_FETCH assert(tbl)
#define PERL_ARGS_ASSERT_PTR_TABLE_SPLIT assert(tbl)
#define PERL_ARGS_ASSERT_PTR_TABLE_STORE assert(tbl); assert(newsv)
#define PERL_ARGS_ASSERT_PV_DISPLAY assert(dsv); assert(pv)
#define PERL_ARGS_ASSERT_PV_ESCAPE assert(str)
#define PERL_ARGS_ASSERT_PV_PRETTY assert(dsv); assert(str)
#define PERL_ARGS_ASSERT_PV_UNI_DISPLAY assert(dsv); assert(spv)
#define PERL_ARGS_ASSERT_QERROR assert(err)
#define PERL_ARGS_ASSERT_RE_COMPILE assert(pattern)
#define PERL_ARGS_ASSERT_RE_INTUIT_START assert(rx); assert(strbeg); assert(strpos); assert(strend)
#define PERL_ARGS_ASSERT_RE_INTUIT_STRING assert(r)
#define PERL_ARGS_ASSERT_RE_OP_COMPILE assert(eng)
#define PERL_ARGS_ASSERT_REENTRANT_RETRY assert(f)
#ifndef NO_MATHOMS
#endif
#define PERL_ARGS_ASSERT_REFCOUNTED_HE_FETCH_PV assert(key)
#define PERL_ARGS_ASSERT_REFCOUNTED_HE_FETCH_PVN assert(keypv)
#define PERL_ARGS_ASSERT_REFCOUNTED_HE_FETCH_SV assert(key)
#define PERL_ARGS_ASSERT_REFCOUNTED_HE_NEW_PV assert(key)
#define PERL_ARGS_ASSERT_REFCOUNTED_HE_NEW_PVN assert(keypv)
#define PERL_ARGS_ASSERT_REFCOUNTED_HE_NEW_SV assert(key)
#define PERL_ARGS_ASSERT_REG_NAMED_BUFF assert(rx)
#define PERL_ARGS_ASSERT_REG_NAMED_BUFF_ALL assert(rx)
#define PERL_ARGS_ASSERT_REG_NAMED_BUFF_EXISTS assert(rx); assert(key)
#define PERL_ARGS_ASSERT_REG_NAMED_BUFF_FETCH assert(rx); assert(namesv)
#define PERL_ARGS_ASSERT_REG_NAMED_BUFF_FIRSTKEY assert(rx)
#define PERL_ARGS_ASSERT_REG_NAMED_BUFF_ITER assert(rx)
#define PERL_ARGS_ASSERT_REG_NAMED_BUFF_NEXTKEY assert(rx)
#define PERL_ARGS_ASSERT_REG_NAMED_BUFF_SCALAR assert(rx)
#define PERL_ARGS_ASSERT_REG_NUMBERED_BUFF_FETCH assert(rx)
#define PERL_ARGS_ASSERT_REG_NUMBERED_BUFF_LENGTH assert(rx); assert(sv)
#define PERL_ARGS_ASSERT_REG_NUMBERED_BUFF_STORE assert(rx)
#define PERL_ARGS_ASSERT_REG_QR_PACKAGE assert(rx)
#define PERL_ARGS_ASSERT_REG_TEMP_COPY assert(rx)
#define PERL_ARGS_ASSERT_REGCLASS_SWASH assert(node)
#define PERL_ARGS_ASSERT_REGDUMP assert(r)
#define PERL_ARGS_ASSERT_REGEXEC_FLAGS assert(rx); assert(stringarg); assert(strend); assert(strbeg); assert(sv)
#define PERL_ARGS_ASSERT_REGFREE_INTERNAL assert(rx)
#define PERL_ARGS_ASSERT_REPEATCPY assert(to); assert(from)
#define PERL_ARGS_ASSERT_REQUIRE_PV assert(pv)
#define PERL_ARGS_ASSERT_RNINSTR assert(big); assert(bigend); assert(little); assert(lend)
#define PERL_ARGS_ASSERT_RSIGNAL_SAVE assert(save)
#define PERL_ARGS_ASSERT_RV2CV_OP_CV assert(cvop)
#define PERL_ARGS_ASSERT_RXRES_SAVE assert(rsp); assert(rx)
#define PERL_ARGS_ASSERT_SAVE_I16 assert(intp)
#define PERL_ARGS_ASSERT_SAVE_I32 assert(intp)
#define PERL_ARGS_ASSERT_SAVE_I8 assert(bytep)
#define PERL_ARGS_ASSERT_SAVE_ADELETE assert(av)
#define PERL_ARGS_ASSERT_SAVE_AELEM_FLAGS assert(av); assert(sptr)
#define PERL_ARGS_ASSERT_SAVE_APTR assert(aptr)
#define PERL_ARGS_ASSERT_SAVE_ARY assert(gv)
#define PERL_ARGS_ASSERT_SAVE_BOOL assert(boolp)
#define PERL_ARGS_ASSERT_SAVE_CLEARSV assert(svp)
#define PERL_ARGS_ASSERT_SAVE_DELETE assert(hv); assert(key)
#define PERL_ARGS_ASSERT_SAVE_DESTRUCTOR assert(p)
#ifndef NO_MATHOMS
#endif
#ifndef NO_MATHOMS
#endif
#ifndef NO_MATHOMS
#endif
#define PERL_ARGS_ASSERT_SAVE_GENERIC_PVREF assert(str)
#define PERL_ARGS_ASSERT_SAVE_GENERIC_SVREF assert(sptr)
#define PERL_ARGS_ASSERT_SAVE_GP assert(gv)
#define PERL_ARGS_ASSERT_SAVE_HASH assert(gv)
#define PERL_ARGS_ASSERT_SAVE_HDELETE assert(hv); assert(keysv)
#define PERL_ARGS_ASSERT_SAVE_HELEM_FLAGS assert(hv); assert(key); assert(sptr)
#define PERL_ARGS_ASSERT_SAVE_HPTR assert(hptr)
#define PERL_ARGS_ASSERT_SAVE_INT assert(intp)
#define PERL_ARGS_ASSERT_SAVE_ITEM assert(item)
#define PERL_ARGS_ASSERT_SAVE_IV assert(ivp)
#define PERL_ARGS_ASSERT_SAVE_LIST assert(sarg)
#define PERL_ARGS_ASSERT_SAVE_LONG assert(longp)
#ifndef NO_MATHOMS
#define PERL_ARGS_ASSERT_SAVE_MORTALIZESV assert(sv)
#endif
#define PERL_ARGS_ASSERT_SAVE_NOGV assert(gv)
#ifndef NO_MATHOMS
#endif
#define PERL_ARGS_ASSERT_SAVE_PPTR assert(pptr)
#define PERL_ARGS_ASSERT_SAVE_SCALAR assert(gv)
#define PERL_ARGS_ASSERT_SAVE_SET_SVFLAGS assert(sv)
#define PERL_ARGS_ASSERT_SAVE_SHARED_PVREF assert(str)
#define PERL_ARGS_ASSERT_SAVE_SPTR assert(sptr)
#define PERL_ARGS_ASSERT_SAVE_STRLEN assert(ptr)
#define PERL_ARGS_ASSERT_SAVE_SVREF assert(sptr)
#define PERL_ARGS_ASSERT_SAVE_VPTR assert(ptr)
#define PERL_ARGS_ASSERT_SAVESHAREDSVPV assert(sv)
#define PERL_ARGS_ASSERT_SAVESVPV assert(sv)
#define PERL_ARGS_ASSERT_SCALARVOID assert(o)
#define PERL_ARGS_ASSERT_SCAN_BIN assert(start); assert(retlen)
#define PERL_ARGS_ASSERT_SCAN_HEX assert(start); assert(retlen)
#define PERL_ARGS_ASSERT_SCAN_NUM assert(s); assert(lvalp)
#define PERL_ARGS_ASSERT_SCAN_OCT assert(start); assert(retlen)
#define PERL_ARGS_ASSERT_SCAN_VERSION assert(s); assert(rv)
#define PERL_ARGS_ASSERT_SCAN_VSTRING assert(s); assert(e); assert(sv)
#define PERL_ARGS_ASSERT_SET_CONTEXT assert(t)
#define PERL_ARGS_ASSERT_SETDEFOUT assert(gv)
#define PERL_ARGS_ASSERT_SHARE_HEK assert(str)
#define PERL_ARGS_ASSERT_SORTSV assert(cmp)
#define PERL_ARGS_ASSERT_SORTSV_FLAGS assert(cmp)
#define PERL_ARGS_ASSERT_STACK_GROW assert(sp); assert(p)
#define PERL_ARGS_ASSERT_START_GLOB assert(tmpglob); assert(io)
#define PERL_ARGS_ASSERT_STR_TO_VERSION assert(sv)
#define PERL_ARGS_ASSERT_SUB_CRUSH_DEPTH assert(cv)
#define PERL_ARGS_ASSERT_SV_2BOOL_FLAGS assert(sv)
#define PERL_ARGS_ASSERT_SV_2CV assert(st); assert(gvp)
#define PERL_ARGS_ASSERT_SV_2IO assert(sv)
#ifndef NO_MATHOMS
#define PERL_ARGS_ASSERT_SV_2IV assert(sv)
#endif
#define PERL_ARGS_ASSERT_SV_2IV_FLAGS assert(sv)
#define PERL_ARGS_ASSERT_SV_2NUM assert(sv)
#define PERL_ARGS_ASSERT_SV_2NV_FLAGS assert(sv)
#ifndef NO_MATHOMS
#define PERL_ARGS_ASSERT_SV_2PV assert(sv)
#endif
#define PERL_ARGS_ASSERT_SV_2PV_FLAGS assert(sv)
#ifndef NO_MATHOMS
#define PERL_ARGS_ASSERT_SV_2PV_NOLEN assert(sv)
#endif
#define PERL_ARGS_ASSERT_SV_2PVBYTE assert(sv)
#ifndef NO_MATHOMS
#define PERL_ARGS_ASSERT_SV_2PVBYTE_NOLEN assert(sv)
#endif
#define PERL_ARGS_ASSERT_SV_2PVUTF8 assert(sv)
#ifndef NO_MATHOMS
#define PERL_ARGS_ASSERT_SV_2PVUTF8_NOLEN assert(sv)
#endif
#ifndef NO_MATHOMS
#define PERL_ARGS_ASSERT_SV_2UV assert(sv)
#endif
#define PERL_ARGS_ASSERT_SV_2UV_FLAGS assert(sv)
#define PERL_ARGS_ASSERT_SV_BACKOFF assert(sv)
#define PERL_ARGS_ASSERT_SV_BLESS assert(sv); assert(stash)
#define PERL_ARGS_ASSERT_SV_CAT_DECODE assert(dsv); assert(encoding); assert(ssv); assert(offset); assert(tstr)
#define PERL_ARGS_ASSERT_SV_CATPV assert(sv)
#define PERL_ARGS_ASSERT_SV_CATPV_FLAGS assert(dstr); assert(sstr)
#define PERL_ARGS_ASSERT_SV_CATPV_MG assert(sv)
#define PERL_ARGS_ASSERT_SV_CATPVF assert(sv); assert(pat)
#define PERL_ARGS_ASSERT_SV_CATPVF_MG assert(sv); assert(pat)
#ifndef NO_MATHOMS
#define PERL_ARGS_ASSERT_SV_CATPVN assert(dsv); assert(sstr)
#endif
#define PERL_ARGS_ASSERT_SV_CATPVN_FLAGS assert(dstr); assert(sstr)
#ifndef NO_MATHOMS
#define PERL_ARGS_ASSERT_SV_CATPVN_MG assert(sv); assert(ptr)
#endif
#ifndef NO_MATHOMS
#define PERL_ARGS_ASSERT_SV_CATSV assert(dstr)
#endif
#define PERL_ARGS_ASSERT_SV_CATSV_FLAGS assert(dsv)
#ifndef NO_MATHOMS
#define PERL_ARGS_ASSERT_SV_CATSV_MG assert(dsv)
#endif
#define PERL_ARGS_ASSERT_SV_CHOP assert(sv)
#define PERL_ARGS_ASSERT_SV_CLEAR assert(orig_sv)
#ifndef NO_MATHOMS
#define PERL_ARGS_ASSERT_SV_COPYPV assert(dsv); assert(ssv)
#endif
#define PERL_ARGS_ASSERT_SV_COPYPV_FLAGS assert(dsv); assert(ssv)
#define PERL_ARGS_ASSERT_SV_DEL_BACKREF assert(tsv); assert(sv)
#define PERL_ARGS_ASSERT_SV_DERIVED_FROM assert(sv); assert(name)
#define PERL_ARGS_ASSERT_SV_DERIVED_FROM_PV assert(sv); assert(name)
#define PERL_ARGS_ASSERT_SV_DERIVED_FROM_PVN assert(sv); assert(name)
#define PERL_ARGS_ASSERT_SV_DERIVED_FROM_SV assert(sv); assert(namesv)
#define PERL_ARGS_ASSERT_SV_DOES assert(sv); assert(name)
#define PERL_ARGS_ASSERT_SV_DOES_PV assert(sv); assert(name)
#define PERL_ARGS_ASSERT_SV_DOES_PVN assert(sv); assert(name)
#define PERL_ARGS_ASSERT_SV_DOES_SV assert(sv); assert(namesv)
#ifndef NO_MATHOMS
#define PERL_ARGS_ASSERT_SV_FORCE_NORMAL assert(sv)
#endif
#define PERL_ARGS_ASSERT_SV_FORCE_NORMAL_FLAGS assert(sv)
#define PERL_ARGS_ASSERT_SV_FREE2 assert(sv)
#define PERL_ARGS_ASSERT_SV_GET_BACKREFS assert(sv)
#define PERL_ARGS_ASSERT_SV_GETS assert(sv); assert(fp)
#define PERL_ARGS_ASSERT_SV_GROW assert(sv)
#ifndef NO_MATHOMS
#define PERL_ARGS_ASSERT_SV_INSERT assert(bigstr); assert(little)
#endif
#define PERL_ARGS_ASSERT_SV_INSERT_FLAGS assert(bigstr); assert(little)
#define PERL_ARGS_ASSERT_SV_ISA assert(name)
#define PERL_ARGS_ASSERT_SV_IV assert(sv)
#define PERL_ARGS_ASSERT_SV_LEN_UTF8_NOMG assert(sv)
#define PERL_ARGS_ASSERT_SV_MAGIC assert(sv)
#define PERL_ARGS_ASSERT_SV_MAGICEXT assert(sv)
#define PERL_ARGS_ASSERT_SV_MAGICEXT_MGLOB assert(sv)
#ifndef NO_MATHOMS
#endif
#ifndef NO_MATHOMS
#endif
#ifndef NO_MATHOMS
#endif
#define PERL_ARGS_ASSERT_SV_NV assert(sv)
#ifndef PERL_NO_INLINE_FUNCTIONS
#define PERL_ARGS_ASSERT_SV_ONLY_TAINT_GMAGIC assert(sv)
#endif
#define PERL_ARGS_ASSERT_SV_POS_B2U assert(offsetp)
#define PERL_ARGS_ASSERT_SV_POS_B2U_FLAGS assert(sv)
#define PERL_ARGS_ASSERT_SV_POS_U2B assert(offsetp)
#define PERL_ARGS_ASSERT_SV_POS_U2B_FLAGS assert(sv)
#ifndef NO_MATHOMS
#define PERL_ARGS_ASSERT_SV_PV assert(sv)
#endif
#ifndef NO_MATHOMS
#define PERL_ARGS_ASSERT_SV_PVBYTE assert(sv)
#endif
#define PERL_ARGS_ASSERT_SV_PVBYTEN assert(sv); assert(lp)
#define PERL_ARGS_ASSERT_SV_PVBYTEN_FORCE assert(sv)
#define PERL_ARGS_ASSERT_SV_PVN assert(sv); assert(lp)
#ifndef NO_MATHOMS
#define PERL_ARGS_ASSERT_SV_PVN_FORCE assert(sv)
#endif
#define PERL_ARGS_ASSERT_SV_PVN_FORCE_FLAGS assert(sv)
#define PERL_ARGS_ASSERT_SV_PVN_NOMG assert(sv)
#ifndef NO_MATHOMS
#define PERL_ARGS_ASSERT_SV_PVUTF8 assert(sv)
#endif
#define PERL_ARGS_ASSERT_SV_PVUTF8N assert(sv); assert(lp)
#define PERL_ARGS_ASSERT_SV_PVUTF8N_FORCE assert(sv)
#define PERL_ARGS_ASSERT_SV_RECODE_TO_UTF8 assert(sv); assert(encoding)
#define PERL_ARGS_ASSERT_SV_REF assert(sv)
#define PERL_ARGS_ASSERT_SV_REFTYPE assert(sv)
#define PERL_ARGS_ASSERT_SV_REPLACE assert(sv); assert(nsv)
#define PERL_ARGS_ASSERT_SV_RESET assert(s)
#define PERL_ARGS_ASSERT_SV_RVWEAKEN assert(sv)
#define PERL_ARGS_ASSERT_SV_SET_UNDEF assert(sv)
#define PERL_ARGS_ASSERT_SV_SETHEK assert(sv)
#define PERL_ARGS_ASSERT_SV_SETIV assert(sv)
#define PERL_ARGS_ASSERT_SV_SETIV_MG assert(sv)
#define PERL_ARGS_ASSERT_SV_SETNV assert(sv)
#define PERL_ARGS_ASSERT_SV_SETNV_MG assert(sv)
#define PERL_ARGS_ASSERT_SV_SETPV assert(sv)
#define PERL_ARGS_ASSERT_SV_SETPV_BUFSIZE assert(sv)
#define PERL_ARGS_ASSERT_SV_SETPV_MG assert(sv)
#define PERL_ARGS_ASSERT_SV_SETPVF assert(sv); assert(pat)
#define PERL_ARGS_ASSERT_SV_SETPVF_MG assert(sv); assert(pat)
#ifndef NO_MATHOMS
#define PERL_ARGS_ASSERT_SV_SETPVIV assert(sv)
#endif
#ifndef NO_MATHOMS
#define PERL_ARGS_ASSERT_SV_SETPVIV_MG assert(sv)
#endif
#define PERL_ARGS_ASSERT_SV_SETPVN assert(sv)
#define PERL_ARGS_ASSERT_SV_SETPVN_MG assert(sv); assert(ptr)
#define PERL_ARGS_ASSERT_SV_SETREF_IV assert(rv)
#define PERL_ARGS_ASSERT_SV_SETREF_NV assert(rv)
#define PERL_ARGS_ASSERT_SV_SETREF_PV assert(rv)
#define PERL_ARGS_ASSERT_SV_SETREF_PVN assert(rv); assert(pv)
#define PERL_ARGS_ASSERT_SV_SETREF_UV assert(rv)
#ifndef NO_MATHOMS
#define PERL_ARGS_ASSERT_SV_SETSV assert(dstr)
#endif
#define PERL_ARGS_ASSERT_SV_SETSV_FLAGS assert(dstr)
#define PERL_ARGS_ASSERT_SV_SETSV_MG assert(dstr)
#define PERL_ARGS_ASSERT_SV_SETUV assert(sv)
#define PERL_ARGS_ASSERT_SV_SETUV_MG assert(sv)
#ifndef NO_MATHOMS
#define PERL_ARGS_ASSERT_SV_TAINT assert(sv)
#endif
#define PERL_ARGS_ASSERT_SV_TAINTED assert(sv)
#define PERL_ARGS_ASSERT_SV_UNI_DISPLAY assert(dsv); assert(ssv)
#define PERL_ARGS_ASSERT_SV_UNMAGIC assert(sv)
#define PERL_ARGS_ASSERT_SV_UNMAGICEXT assert(sv)
#ifndef NO_MATHOMS
#define PERL_ARGS_ASSERT_SV_UNREF assert(sv)
#endif
#define PERL_ARGS_ASSERT_SV_UNREF_FLAGS assert(ref)
#define PERL_ARGS_ASSERT_SV_UNTAINT assert(sv)
#define PERL_ARGS_ASSERT_SV_UPGRADE assert(sv)
#ifndef NO_MATHOMS
#define PERL_ARGS_ASSERT_SV_USEPVN assert(sv)
#endif
#define PERL_ARGS_ASSERT_SV_USEPVN_FLAGS assert(sv)
#ifndef NO_MATHOMS
#define PERL_ARGS_ASSERT_SV_USEPVN_MG assert(sv)
#endif
#define PERL_ARGS_ASSERT_SV_UTF8_DECODE assert(sv)
#define PERL_ARGS_ASSERT_SV_UTF8_DOWNGRADE assert(sv)
#define PERL_ARGS_ASSERT_SV_UTF8_ENCODE assert(sv)
#ifndef NO_MATHOMS
#define PERL_ARGS_ASSERT_SV_UTF8_UPGRADE assert(sv)
#endif
#define PERL_ARGS_ASSERT_SV_UTF8_UPGRADE_FLAGS_GROW assert(sv)
#define PERL_ARGS_ASSERT_SV_UV assert(sv)
#define PERL_ARGS_ASSERT_SV_VCATPVF assert(sv); assert(pat)
#define PERL_ARGS_ASSERT_SV_VCATPVF_MG assert(sv); assert(pat)
#define PERL_ARGS_ASSERT_SV_VCATPVFN assert(sv); assert(pat)
#define PERL_ARGS_ASSERT_SV_VCATPVFN_FLAGS assert(sv); assert(pat)
#define PERL_ARGS_ASSERT_SV_VSETPVF assert(sv); assert(pat)
#define PERL_ARGS_ASSERT_SV_VSETPVF_MG assert(sv); assert(pat)
#define PERL_ARGS_ASSERT_SV_VSETPVFN assert(sv); assert(pat)
#define PERL_ARGS_ASSERT_SWASH_FETCH assert(swash); assert(ptr)
#define PERL_ARGS_ASSERT_SWASH_INIT assert(pkg); assert(name); assert(listsv)
#define PERL_ARGS_ASSERT_SYS_INIT assert(argc); assert(argv)
#define PERL_ARGS_ASSERT_SYS_INIT3 assert(argc); assert(argv); assert(env)
#define PERL_ARGS_ASSERT_TAINT_PROPER assert(s)
#define PERL_ARGS_ASSERT_TIED_METHOD assert(methname); assert(sp); assert(sv); assert(mg)
#define PERL_ARGS_ASSERT_TO_UNI_LOWER assert(p); assert(lenp)
#define PERL_ARGS_ASSERT_TO_UNI_TITLE assert(p); assert(lenp)
#define PERL_ARGS_ASSERT_TO_UNI_UPPER assert(p); assert(lenp)
#define PERL_ARGS_ASSERT_TO_UTF8_CASE assert(p); assert(ustrp); assert(swashp); assert(normal)
#ifndef NO_MATHOMS
#define PERL_ARGS_ASSERT_TO_UTF8_FOLD assert(p); assert(ustrp)
#endif
#ifndef NO_MATHOMS
#define PERL_ARGS_ASSERT_TO_UTF8_LOWER assert(p); assert(ustrp)
#endif
#ifndef NO_MATHOMS
#define PERL_ARGS_ASSERT_TO_UTF8_TITLE assert(p); assert(ustrp)
#endif
#ifndef NO_MATHOMS
#define PERL_ARGS_ASSERT_TO_UTF8_UPPER assert(p); assert(ustrp)
#endif
#define PERL_ARGS_ASSERT_UNPACK_STR assert(pat); assert(patend); assert(s); assert(strend)
#define PERL_ARGS_ASSERT_UNPACKSTRING assert(pat); assert(patend); assert(s); assert(strend)
#define PERL_ARGS_ASSERT_UPG_VERSION assert(ver)
#define PERL_ARGS_ASSERT_UTF16_TO_UTF8 assert(p); assert(d); assert(newlen)
#define PERL_ARGS_ASSERT_UTF16_TO_UTF8_REVERSED assert(p); assert(d); assert(newlen)
#ifndef PERL_NO_INLINE_FUNCTIONS
#define PERL_ARGS_ASSERT_UTF8_DISTANCE assert(a); assert(b)
#endif
#ifndef PERL_NO_INLINE_FUNCTIONS
#define PERL_ARGS_ASSERT_UTF8_HOP assert(s)
#endif
#ifndef PERL_NO_INLINE_FUNCTIONS
#define PERL_ARGS_ASSERT_UTF8_HOP_BACK assert(s); assert(start)
#endif
#ifndef PERL_NO_INLINE_FUNCTIONS
#define PERL_ARGS_ASSERT_UTF8_HOP_FORWARD assert(s); assert(end)
#endif
#ifndef PERL_NO_INLINE_FUNCTIONS
#define PERL_ARGS_ASSERT_UTF8_HOP_SAFE assert(s); assert(start); assert(end)
#endif
#define PERL_ARGS_ASSERT_UTF8_LENGTH assert(s); assert(e)
#define PERL_ARGS_ASSERT_UTF8_TO_BYTES assert(s); assert(len)
#define PERL_ARGS_ASSERT_UTF8_TO_UVCHR assert(s)
#define PERL_ARGS_ASSERT_UTF8_TO_UVCHR_BUF assert(s); assert(send)
#define PERL_ARGS_ASSERT_UTF8_TO_UVUNI assert(s)
#define PERL_ARGS_ASSERT_UTF8_TO_UVUNI_BUF assert(s); assert(send)
#define PERL_ARGS_ASSERT_UTF8N_TO_UVCHR assert(s)
#define PERL_ARGS_ASSERT_UTF8N_TO_UVCHR_ERROR assert(s)
#define PERL_ARGS_ASSERT_UTF8N_TO_UVUNI assert(s)
#define PERL_ARGS_ASSERT_UTILIZE assert(idop)
#define PERL_ARGS_ASSERT_UVOFFUNI_TO_UTF8_FLAGS assert(d)
#define PERL_ARGS_ASSERT_UVUNI_TO_UTF8 assert(d)
#define PERL_ARGS_ASSERT_UVUNI_TO_UTF8_FLAGS assert(d)
#ifndef PERL_NO_INLINE_FUNCTIONS
#define PERL_ARGS_ASSERT_VALID_UTF8_TO_UVCHR assert(s)
#endif
#define PERL_ARGS_ASSERT_VALID_UTF8_TO_UVUNI assert(s)
#define PERL_ARGS_ASSERT_VALIDATE_PROTO assert(name)
#define PERL_ARGS_ASSERT_VCMP assert(lhv); assert(rhv)
#define PERL_ARGS_ASSERT_VDEB assert(pat)
#define PERL_ARGS_ASSERT_VFORM assert(pat)
#define PERL_ARGS_ASSERT_VIVIFY_DEFELEM assert(sv)
#define PERL_ARGS_ASSERT_VIVIFY_REF assert(sv)
#define PERL_ARGS_ASSERT_VLOAD_MODULE assert(name)
#define PERL_ARGS_ASSERT_VMESS assert(pat)
#define PERL_ARGS_ASSERT_VNEWSVPVF assert(pat)
#define PERL_ARGS_ASSERT_VNORMAL assert(vs)
#define PERL_ARGS_ASSERT_VNUMIFY assert(vs)
#define PERL_ARGS_ASSERT_VSTRINGIFY assert(vs)
#define PERL_ARGS_ASSERT_VVERIFY assert(vs)
#define PERL_ARGS_ASSERT_VWARN assert(pat)
#define PERL_ARGS_ASSERT_VWARNER assert(pat)
#define PERL_ARGS_ASSERT_WAIT4PID assert(statusp)
#define PERL_ARGS_ASSERT_WARN assert(pat)
#define PERL_ARGS_ASSERT_WARN_SV assert(baseex)
#define PERL_ARGS_ASSERT_WARNER assert(pat)
#define PERL_ARGS_ASSERT_WATCH assert(addr)
#define PERL_ARGS_ASSERT_WHICHSIG_PV assert(sig)
#define PERL_ARGS_ASSERT_WHICHSIG_PVN assert(sig)
#define PERL_ARGS_ASSERT_WHICHSIG_SV assert(sigsv)
#define PERL_ARGS_ASSERT_WRAP_OP_CHECKER assert(new_checker); assert(old_checker_p)
#define PERL_ARGS_ASSERT_WRITE_TO_STDERR assert(msv)
#define PERL_ARGS_ASSERT_XS_HANDSHAKE assert(v_my_perl); assert(file)
#define PERL_ARGS_ASSERT_YYERROR assert(s)
#define PERL_ARGS_ASSERT_YYERROR_PV assert(s)
#if !(defined(DEBUGGING))
# if !defined(NV_PRESERVES_UV)
# if defined(PERL_IN_SV_C)
#define PERL_ARGS_ASSERT_SV_2IUV_NON_PRESERVE assert(sv)
# endif
# endif
#endif
#if !(defined(HAS_MEMMEM))
#define PERL_ARGS_ASSERT_NINSTR assert(big); assert(bigend); assert(little); assert(lend)
#endif
#if !(defined(HAS_SIGACTION) && defined(SA_SIGINFO))
#endif
#if !(defined(PERL_DEFAULT_DO_EXEC3_IMPLEMENTATION))
#define PERL_ARGS_ASSERT_DO_EXEC assert(cmd)
#endif
#if !(defined(PERL_GLOBAL_STRUCT_PRIVATE))
# if defined(PERL_IMPLICIT_CONTEXT)
#define PERL_ARGS_ASSERT_MY_CXT_INIT assert(index)
# endif
#endif
#if !(defined(WIN32))
#endif
#if !(defined(_MSC_VER))
#define PERL_ARGS_ASSERT_MAGIC_REGDATUM_SET assert(sv); assert(mg)
#endif
#if !defined(HAS_BZERO) && !defined(HAS_MEMSET)
#define PERL_ARGS_ASSERT_MY_BZERO assert(vloc)
#endif
#if !defined(HAS_GETENV_LEN)
#define PERL_ARGS_ASSERT_GETENV_LEN assert(env_elem); assert(len)
#endif
#if !defined(HAS_MEMCMP) || !defined(HAS_SANE_MEMCMP)
#define PERL_ARGS_ASSERT_MY_MEMCMP assert(vs1); assert(vs2)
#endif
#if !defined(HAS_MEMCPY) || (!defined(HAS_MEMMOVE) && !defined(HAS_SAFE_MEMCPY))
#define PERL_ARGS_ASSERT_MY_BCOPY assert(vfrom); assert(vto)
#endif
#if !defined(HAS_MEMSET)
#define PERL_ARGS_ASSERT_MY_MEMSET assert(vloc)
#endif
#if !defined(HAS_MKDIR) || !defined(HAS_RMDIR)
# if defined(PERL_IN_PP_SYS_C)
#define PERL_ARGS_ASSERT_DOONELINER assert(cmd); assert(filename)
# endif
#endif
#if !defined(HAS_RENAME)
#define PERL_ARGS_ASSERT_SAME_DIRENT assert(a); assert(b)
#endif
#if !defined(HAS_SIGNBIT)
#endif
#if !defined(HAS_STRLCAT)
#endif
#if !defined(HAS_STRLCPY)
#endif
#if !defined(HAS_TRUNCATE) && !defined(HAS_CHSIZE) && defined(F_FREESP)
#endif
#if !defined(NV_PRESERVES_UV)
# if defined(DEBUGGING)
# if defined(PERL_IN_SV_C)
#define PERL_ARGS_ASSERT_SV_2IUV_NON_PRESERVE assert(sv)
# endif
# endif
#endif
#if !defined(PERL_DISABLE_PMC)
# if defined(PERL_IN_PP_CTL_C)
#define PERL_ARGS_ASSERT_DOOPEN_PM assert(name)
# endif
#endif
#if !defined(PERL_EXT_RE_BUILD)
# if defined(PERL_IN_REGCOMP_C)
#define PERL_ARGS_ASSERT__APPEND_RANGE_TO_INVLIST assert(invlist)
#ifndef PERL_NO_INLINE_FUNCTIONS
#define PERL_ARGS_ASSERT__INVLIST_ARRAY_INIT assert(invlist)
#endif
#ifndef PERL_NO_INLINE_FUNCTIONS
#define PERL_ARGS_ASSERT_GET_INVLIST_PREVIOUS_INDEX_ADDR assert(invlist)
#endif
#ifndef PERL_NO_INLINE_FUNCTIONS
#define PERL_ARGS_ASSERT_INVLIST_CLEAR assert(invlist)
#endif
#define PERL_ARGS_ASSERT_INVLIST_EXTEND assert(invlist)
#ifndef PERL_NO_INLINE_FUNCTIONS
#define PERL_ARGS_ASSERT_INVLIST_MAX assert(invlist)
#endif
#ifndef PERL_NO_INLINE_FUNCTIONS
#define PERL_ARGS_ASSERT_INVLIST_PREVIOUS_INDEX assert(invlist)
#endif
#define PERL_ARGS_ASSERT_INVLIST_REPLACE_LIST_DESTROYS_SRC assert(dest); assert(src)
#ifndef PERL_NO_INLINE_FUNCTIONS
#define PERL_ARGS_ASSERT_INVLIST_SET_PREVIOUS_INDEX assert(invlist)
#endif
#ifndef PERL_NO_INLINE_FUNCTIONS
#define PERL_ARGS_ASSERT_INVLIST_TRIM assert(invlist)
#endif
# endif
#endif
#if !defined(PERL_IMPLICIT_SYS)
#define PERL_ARGS_ASSERT_MY_POPEN assert(cmd); assert(mode)
#endif
#if !defined(PERL_IS_MINIPERL)
# if defined(PERL_IN_PERL_C)
#define PERL_ARGS_ASSERT_INCPUSH_IF_EXISTS assert(av); assert(dir); assert(stem)
# endif
#endif
#if !defined(PERL_NO_INLINE_FUNCTIONS)
#ifndef PERL_NO_INLINE_FUNCTIONS
#define PERL_ARGS_ASSERT_CX_POPBLOCK assert(cx)
#endif
#ifndef PERL_NO_INLINE_FUNCTIONS
#define PERL_ARGS_ASSERT_CX_POPEVAL assert(cx)
#endif
#ifndef PERL_NO_INLINE_FUNCTIONS
#define PERL_ARGS_ASSERT_CX_POPFORMAT assert(cx)
#endif
#ifndef PERL_NO_INLINE_FUNCTIONS
#define PERL_ARGS_ASSERT_CX_POPGIVEN assert(cx)
#endif
#ifndef PERL_NO_INLINE_FUNCTIONS
#define PERL_ARGS_ASSERT_CX_POPLOOP assert(cx)
#endif
#ifndef PERL_NO_INLINE_FUNCTIONS
#define PERL_ARGS_ASSERT_CX_POPSUB assert(cx)
#endif
#ifndef PERL_NO_INLINE_FUNCTIONS
#define PERL_ARGS_ASSERT_CX_POPSUB_ARGS assert(cx)
#endif
#ifndef PERL_NO_INLINE_FUNCTIONS
#define PERL_ARGS_ASSERT_CX_POPSUB_COMMON assert(cx)
#endif
#ifndef PERL_NO_INLINE_FUNCTIONS
#define PERL_ARGS_ASSERT_CX_POPWHEN assert(cx)
#endif
#ifndef PERL_NO_INLINE_FUNCTIONS
#define PERL_ARGS_ASSERT_CX_PUSHBLOCK assert(sp)
#endif
#ifndef PERL_NO_INLINE_FUNCTIONS
#define PERL_ARGS_ASSERT_CX_PUSHEVAL assert(cx)
#endif
#ifndef PERL_NO_INLINE_FUNCTIONS
#define PERL_ARGS_ASSERT_CX_PUSHFORMAT assert(cx); assert(cv)
#endif
#ifndef PERL_NO_INLINE_FUNCTIONS
#define PERL_ARGS_ASSERT_CX_PUSHGIVEN assert(cx)
#endif
#ifndef PERL_NO_INLINE_FUNCTIONS
#define PERL_ARGS_ASSERT_CX_PUSHLOOP_FOR assert(cx); assert(itervarp)
#endif
#ifndef PERL_NO_INLINE_FUNCTIONS
#define PERL_ARGS_ASSERT_CX_PUSHLOOP_PLAIN assert(cx)
#endif
#ifndef PERL_NO_INLINE_FUNCTIONS
#define PERL_ARGS_ASSERT_CX_PUSHSUB assert(cx); assert(cv)
#endif
#ifndef PERL_NO_INLINE_FUNCTIONS
#define PERL_ARGS_ASSERT_CX_PUSHWHEN assert(cx)
#endif
#ifndef PERL_NO_INLINE_FUNCTIONS
#define PERL_ARGS_ASSERT_CX_TOPBLOCK assert(cx)
#endif
#endif
#if !defined(PERL_NO_UTF16_FILTER)
# if defined(PERL_IN_TOKE_C)
#define PERL_ARGS_ASSERT_ADD_UTF16_TEXTFILTER assert(s)
#define PERL_ARGS_ASSERT_UTF16_TEXTFILTER assert(sv)
# endif
#endif
#if !defined(SETUID_SCRIPTS_ARE_SECURE_NOW)
# if defined(PERL_IN_PERL_C)
#define PERL_ARGS_ASSERT_VALIDATE_SUID assert(rsfp)
# endif
#endif
#if !defined(SPRINTF_RETURNS_STRLEN)
#define PERL_ARGS_ASSERT_MY_SPRINTF assert(buffer); assert(pat)
#endif
#if !defined(USE_QUADMATH)
# if defined(PERL_IN_NUMERIC_C)
# endif
#endif
#if !defined(WIN32)
#define PERL_ARGS_ASSERT_DO_EXEC3 assert(incmd)
#endif
#if defined(DEBUGGING)
#define PERL_ARGS_ASSERT_GET_DEBUG_OPTS assert(s)
#define PERL_ARGS_ASSERT_HV_ASSERT assert(hv)
#define PERL_ARGS_ASSERT_PAD_SETSV assert(sv)
#define PERL_ARGS_ASSERT_SET_PADLIST assert(cv)
# if defined(PERL_IN_PAD_C)
#define PERL_ARGS_ASSERT_CV_DUMP assert(cv); assert(title)
# endif
# if defined(PERL_IN_REGCOMP_C)
#define PERL_ARGS_ASSERT_DUMP_TRIE assert(trie); assert(revcharmap)
#define PERL_ARGS_ASSERT_DUMP_TRIE_INTERIM_LIST assert(trie); assert(revcharmap)
#define PERL_ARGS_ASSERT_DUMP_TRIE_INTERIM_TABLE assert(trie); assert(revcharmap)
#define PERL_ARGS_ASSERT_DUMPUNTIL assert(r); assert(start); assert(node); assert(sv)
#define PERL_ARGS_ASSERT_PUT_CHARCLASS_BITMAP_INNARDS assert(sv); assert(bitmap)
#define PERL_ARGS_ASSERT_PUT_CHARCLASS_BITMAP_INNARDS_COMMON assert(invlist)
#define PERL_ARGS_ASSERT_PUT_CHARCLASS_BITMAP_INNARDS_INVLIST assert(sv); assert(invlist)
#define PERL_ARGS_ASSERT_PUT_CODE_POINT assert(sv)
#define PERL_ARGS_ASSERT_PUT_RANGE assert(sv)
#define PERL_ARGS_ASSERT_RE_INDENTF assert(fmt)
#define PERL_ARGS_ASSERT_REGTAIL_STUDY assert(pRExC_state); assert(p); assert(val)
# endif
# if defined(PERL_IN_REGEXEC_C)
#define PERL_ARGS_ASSERT_DEBUG_START_MATCH assert(prog); assert(start); assert(end); assert(blurb)
#define PERL_ARGS_ASSERT_DUMP_EXEC_POS assert(locinput); assert(scan); assert(loc_regeol); assert(loc_bostr); assert(loc_reg_starttry)
#define PERL_ARGS_ASSERT_RE_EXEC_INDENTF assert(fmt)
# endif
# if defined(PERL_IN_SV_C)
#define PERL_ARGS_ASSERT_DEL_SV assert(p)
# endif
# if defined(PERL_IN_TOKE_C)
#define PERL_ARGS_ASSERT_PRINTBUF assert(fmt); assert(s)
#define PERL_ARGS_ASSERT_TOKEREPORT assert(lvalp)
# endif
# if defined(USE_LOCALE) && (defined(PERL_IN_LOCALE_C) || defined (PERL_EXT_POSIX))
# endif
# if defined(USE_LOCALE) && defined(PERL_IN_LOCALE_C)
#define PERL_ARGS_ASSERT_PRINT_COLLXFRM_INPUT_AND_RETURN assert(s); assert(e)
# endif
#endif
#if defined(DEBUGGING) && defined(ENABLE_REGEX_SETS_DEBUGGING)
# if defined(PERL_IN_REGCOMP_C)
#define PERL_ARGS_ASSERT_DUMP_REGEX_SETS_STRUCTURES assert(pRExC_state); assert(stack); assert(fence_stack)
# endif
#endif
#if defined(DEBUG_LEAKING_SCALARS_FORK_DUMP)
#define PERL_ARGS_ASSERT_DUMP_SV_CHILD assert(sv)
#endif
#if defined(HAS_MEMMEM)
#define PERL_ARGS_ASSERT_NINSTR assert(big); assert(bigend); assert(little); assert(lend)
#endif
#if defined(HAS_MSG) || defined(HAS_SEM) || defined(HAS_SHM)
#define PERL_ARGS_ASSERT_DO_IPCCTL assert(mark); assert(sp)
#define PERL_ARGS_ASSERT_DO_IPCGET assert(mark); assert(sp)
#define PERL_ARGS_ASSERT_DO_MSGRCV assert(mark); assert(sp)
#define PERL_ARGS_ASSERT_DO_MSGSND assert(mark); assert(sp)
#define PERL_ARGS_ASSERT_DO_SEMOP assert(mark); assert(sp)
#define PERL_ARGS_ASSERT_DO_SHMIO assert(mark); assert(sp)
#endif
#if defined(HAS_SIGACTION) && defined(SA_SIGINFO)
#endif
#if defined(HAVE_INTERP_INTERN)
# if defined(USE_ITHREADS)
#define PERL_ARGS_ASSERT_SYS_INTERN_DUP assert(src); assert(dst)
# endif
#endif
#if defined(MYMALLOC)
#define PERL_ARGS_ASSERT_DUMP_MSTATS assert(s)
#define PERL_ARGS_ASSERT_GET_MSTATS assert(buf)
#define PERL_ARGS_ASSERT_MALLOCED_SIZE assert(p)
#endif
#if defined(PERL_ANY_COW)
#define PERL_ARGS_ASSERT_SV_SETSV_COW assert(sstr)
#endif
#if defined(PERL_CORE)
#define PERL_ARGS_ASSERT_OPSLAB_FORCE_FREE assert(slab)
#define PERL_ARGS_ASSERT_OPSLAB_FREE assert(slab)
#define PERL_ARGS_ASSERT_OPSLAB_FREE_NOPAD assert(slab)
#define PERL_ARGS_ASSERT_PARSER_FREE_NEXTTOKE_OPS assert(parser); assert(slab)
#ifndef PERL_NO_INLINE_FUNCTIONS
#define PERL_ARGS_ASSERT_SHOULD_WARN_NL assert(pv)
#endif
# if defined(PERL_DEBUG_READONLY_OPS)
#define PERL_ARGS_ASSERT_SLAB_TO_RO assert(slab)
#define PERL_ARGS_ASSERT_SLAB_TO_RW assert(slab)
# endif
#endif
#if defined(PERL_CORE) || defined (PERL_EXT)
#ifndef PERL_NO_INLINE_FUNCTIONS
#define PERL_ARGS_ASSERT_SV_OR_PV_POS_U2B assert(sv); assert(pv)
#endif
#endif
#if defined(PERL_CR_FILTER)
# if defined(PERL_IN_TOKE_C)
#define PERL_ARGS_ASSERT_STRIP_RETURN assert(sv)
# endif
#endif
#if defined(PERL_DEBUG_READONLY_COW)
#define PERL_ARGS_ASSERT_SV_BUF_TO_RO assert(sv)
# if defined(PERL_IN_SV_C)
#define PERL_ARGS_ASSERT_SV_BUF_TO_RW assert(sv)
# endif
#endif
#if defined(PERL_DEBUG_READONLY_OPS)
#define PERL_ARGS_ASSERT_OP_REFCNT_DEC assert(o)
#endif
#if defined(PERL_DEFAULT_DO_EXEC3_IMPLEMENTATION)
#endif
#if defined(PERL_DONT_CREATE_GVSV)
#ifndef NO_MATHOMS
#endif
#endif
#if defined(PERL_GLOBAL_STRUCT)
#define PERL_ARGS_ASSERT_FREE_GLOBAL_STRUCT assert(plvarsp)
#endif
#if defined(PERL_GLOBAL_STRUCT_PRIVATE)
# if defined(PERL_IMPLICIT_CONTEXT)
#define PERL_ARGS_ASSERT_MY_CXT_INDEX assert(my_cxt_key)
#define PERL_ARGS_ASSERT_MY_CXT_INIT assert(my_cxt_key)
# endif
#endif
#if defined(PERL_IMPLICIT_CONTEXT)
#define PERL_ARGS_ASSERT_DEB_NOCONTEXT assert(pat)
#define PERL_ARGS_ASSERT_FORM_NOCONTEXT assert(pat)
#define PERL_ARGS_ASSERT_FPRINTF_NOCONTEXT assert(stream); assert(format)
#define PERL_ARGS_ASSERT_LOAD_MODULE_NOCONTEXT assert(name)
#define PERL_ARGS_ASSERT_MESS_NOCONTEXT assert(pat)
#define PERL_ARGS_ASSERT_NEWSVPVF_NOCONTEXT assert(pat)
#define PERL_ARGS_ASSERT_PRINTF_NOCONTEXT assert(format)
#define PERL_ARGS_ASSERT_SV_CATPVF_MG_NOCONTEXT assert(sv); assert(pat)
#define PERL_ARGS_ASSERT_SV_CATPVF_NOCONTEXT assert(sv); assert(pat)
#define PERL_ARGS_ASSERT_SV_SETPVF_MG_NOCONTEXT assert(sv); assert(pat)
#define PERL_ARGS_ASSERT_SV_SETPVF_NOCONTEXT assert(sv); assert(pat)
#define PERL_ARGS_ASSERT_WARN_NOCONTEXT assert(pat)
#define PERL_ARGS_ASSERT_WARNER_NOCONTEXT assert(pat)
#endif
#if defined(PERL_IMPLICIT_SYS)
#define PERL_ARGS_ASSERT_PERL_ALLOC_USING assert(ipM); assert(ipMS); assert(ipMP); assert(ipE); assert(ipStd); assert(ipLIO); assert(ipD); assert(ipS); assert(ipP)
# if defined(USE_ITHREADS)
#define PERL_ARGS_ASSERT_PERL_CLONE_USING assert(proto_perl); assert(ipM); assert(ipMS); assert(ipMP); assert(ipE); assert(ipStd); assert(ipLIO); assert(ipD); assert(ipS); assert(ipP)
# endif
#endif
#if defined(PERL_IN_AV_C)
#define PERL_ARGS_ASSERT_GET_AUX_MG assert(av)
#endif
#if defined(PERL_IN_DEB_C)
#define PERL_ARGS_ASSERT_DEB_STACK_N assert(stack_base)
#endif
#if defined(PERL_IN_DOIO_C)
#define PERL_ARGS_ASSERT_EXEC_FAILED assert(cmd)
#define PERL_ARGS_ASSERT_OPENN_CLEANUP assert(gv); assert(io); assert(mode); assert(oname)
#define PERL_ARGS_ASSERT_OPENN_SETUP assert(gv); assert(mode); assert(saveifp); assert(saveofp); assert(savefd); assert(savetype)
#endif
#if defined(PERL_IN_DOOP_C)
#define PERL_ARGS_ASSERT_DO_TRANS_COMPLEX assert(sv)
#define PERL_ARGS_ASSERT_DO_TRANS_COMPLEX_UTF8 assert(sv)
#define PERL_ARGS_ASSERT_DO_TRANS_COUNT assert(sv)
#define PERL_ARGS_ASSERT_DO_TRANS_COUNT_UTF8 assert(sv)
#define PERL_ARGS_ASSERT_DO_TRANS_SIMPLE assert(sv)
#define PERL_ARGS_ASSERT_DO_TRANS_SIMPLE_UTF8 assert(sv)
#endif
#if defined(PERL_IN_DUMP_C)
#define PERL_ARGS_ASSERT_DEBPROF assert(o)
#define PERL_ARGS_ASSERT_PM_DESCRIPTION assert(pm)
#endif
#if defined(PERL_IN_DUMP_C) || defined(PERL_IN_HV_C) || defined(PERL_IN_SV_C) || defined(PERL_IN_SCOPE_C)
#define PERL_ARGS_ASSERT_HV_KILL_BACKREFS assert(hv)
#endif
#if defined(PERL_IN_GV_C)
#define PERL_ARGS_ASSERT_FIND_DEFAULT_STASH assert(stash); assert(name)
#ifndef PERL_NO_INLINE_FUNCTIONS
#endif
#define PERL_ARGS_ASSERT_GV_INIT_SVTYPE assert(gv)
#define PERL_ARGS_ASSERT_GV_IS_IN_MAIN assert(name)
#define PERL_ARGS_ASSERT_GV_MAGICALIZE assert(gv); assert(stash); assert(name)
#define PERL_ARGS_ASSERT_GV_MAGICALIZE_ISA assert(gv)
#ifndef PERL_NO_INLINE_FUNCTIONS
#define PERL_ARGS_ASSERT_GV_STASHPVN_INTERNAL assert(name)
#endif
#ifndef PERL_NO_INLINE_FUNCTIONS
#endif
#define PERL_ARGS_ASSERT_MAYBE_MULTIMAGIC_GV assert(gv); assert(name)
#define PERL_ARGS_ASSERT_PARSE_GV_STASH_NAME assert(stash); assert(gv); assert(name); assert(len); assert(nambeg)
#define PERL_ARGS_ASSERT_REQUIRE_TIE_MOD assert(gv); assert(varname); assert(name)
#endif
#if defined(PERL_IN_GV_C) || defined(PERL_IN_SV_C) || defined(PERL_IN_PAD_C) || defined(PERL_IN_OP_C)
#define PERL_ARGS_ASSERT_SV_ADD_BACKREF assert(tsv); assert(sv)
#endif
#if defined(PERL_IN_HV_C)
#define PERL_ARGS_ASSERT_CLEAR_PLACEHOLDERS assert(hv)
#define PERL_ARGS_ASSERT_HFREEENTRIES assert(hv)
#define PERL_ARGS_ASSERT_HSPLIT assert(hv)
#define PERL_ARGS_ASSERT_HV_AUXINIT assert(hv)
#define PERL_ARGS_ASSERT_HV_AUXINIT_INTERNAL assert(iter)
#define PERL_ARGS_ASSERT_HV_FREE_ENT_RET assert(hv); assert(entry)
#define PERL_ARGS_ASSERT_HV_MAGIC_CHECK assert(hv); assert(needs_copy); assert(needs_store)
#define PERL_ARGS_ASSERT_HV_NOTALLOWED assert(key); assert(msg)
#ifndef PERL_NO_INLINE_FUNCTIONS
#endif
#define PERL_ARGS_ASSERT_REFCOUNTED_HE_VALUE assert(he)
#define PERL_ARGS_ASSERT_SAVE_HEK_FLAGS assert(str)
#define PERL_ARGS_ASSERT_SHARE_HEK_FLAGS assert(str)
#endif
#if defined(PERL_IN_HV_C) || defined(PERL_IN_MG_C) || defined(PERL_IN_SV_C)
#define PERL_ARGS_ASSERT_SV_KILL_BACKREFS assert(sv)
#endif
#if defined(PERL_IN_HV_C) || defined(PERL_IN_SV_C)
#define PERL_ARGS_ASSERT_HFREE_NEXT_ENTRY assert(hv); assert(indexp)
#endif
#if defined(PERL_IN_LOCALE_C) || defined(PERL_IN_SV_C) || defined(PERL_IN_MATHOMS_C)
# if defined(USE_LOCALE_COLLATE)
#define PERL_ARGS_ASSERT__MEM_COLLXFRM assert(input_string); assert(xlen)
# endif
#endif
#if defined(PERL_IN_MALLOC_C)
#define PERL_ARGS_ASSERT_ADJUST_SIZE_AND_FIND_BUCKET assert(nbytes_p)
#endif
#if defined(PERL_IN_MG_C)
#define PERL_ARGS_ASSERT_FIXUP_ERRNO_STRING assert(sv)
#define PERL_ARGS_ASSERT_MAGIC_METHCALL1 assert(sv); assert(mg); assert(meth)
#define PERL_ARGS_ASSERT_MAGIC_METHPACK assert(sv); assert(mg); assert(meth)
#define PERL_ARGS_ASSERT_SAVE_MAGIC_FLAGS assert(sv)
#endif
#if defined(PERL_IN_MG_C) || defined(PERL_IN_PP_C)
#define PERL_ARGS_ASSERT_TRANSLATE_SUBSTR_OFFSETS assert(posp); assert(lenp)
#endif
#if defined(PERL_IN_MRO_C)
#define PERL_ARGS_ASSERT_MRO_CLEAN_ISAREV assert(isa); assert(name)
#define PERL_ARGS_ASSERT_MRO_GATHER_AND_RENAME assert(stashes); assert(seen_stashes); assert(namesv)
#define PERL_ARGS_ASSERT_MRO_GET_LINEAR_ISA_DFS assert(stash)
#endif
#if defined(PERL_IN_OP_C)
#define PERL_ARGS_ASSERT_APPLY_ATTRS assert(stash); assert(target)
#define PERL_ARGS_ASSERT_APPLY_ATTRS_MY assert(stash); assert(target); assert(imopsp)
#define PERL_ARGS_ASSERT_BAD_TYPE_GV assert(gv); assert(kid); assert(t)
#define PERL_ARGS_ASSERT_BAD_TYPE_PV assert(t); assert(o); assert(kid)
#define PERL_ARGS_ASSERT_CLEAR_SPECIAL_BLOCKS assert(fullname); assert(gv); assert(cv)
#define PERL_ARGS_ASSERT_COP_FREE assert(cop)
#define PERL_ARGS_ASSERT_DUP_ATTRLIST assert(o)
#define PERL_ARGS_ASSERT_FINALIZE_OP assert(o)
#define PERL_ARGS_ASSERT_FIND_AND_FORGET_PMOPS assert(o)
#define PERL_ARGS_ASSERT_FOLD_CONSTANTS assert(o)
#define PERL_ARGS_ASSERT_FORGET_PMOP assert(o)
#define PERL_ARGS_ASSERT_INPLACE_AASSIGN assert(o)
#define PERL_ARGS_ASSERT_IS_HANDLE_CONSTRUCTOR assert(o)
#define PERL_ARGS_ASSERT_LOOKS_LIKE_BOOL assert(o)
#define PERL_ARGS_ASSERT_MOVE_PROTO_ATTR assert(proto); assert(attrs); assert(name)
#define PERL_ARGS_ASSERT_MY_KID assert(imopsp)
#define PERL_ARGS_ASSERT_NEWGIVWHENOP assert(block)
#ifndef PERL_NO_INLINE_FUNCTIONS
#endif
#define PERL_ARGS_ASSERT_NEW_LOGOP assert(firstp); assert(otherp)
#define PERL_ARGS_ASSERT_NO_BAREWORD_ALLOWED assert(o)
#define PERL_ARGS_ASSERT_NO_FH_ALLOWED assert(o)
#ifndef PERL_NO_INLINE_FUNCTIONS
#define PERL_ARGS_ASSERT_OP_INTEGERIZE assert(o)
#endif
#ifndef PERL_NO_INLINE_FUNCTIONS
#define PERL_ARGS_ASSERT_OP_STD_INIT assert(o)
#endif
#define PERL_ARGS_ASSERT_PMTRANS assert(o); assert(expr); assert(repl)
#define PERL_ARGS_ASSERT_PROCESS_SPECIAL_BLOCKS assert(fullname); assert(gv); assert(cv)
#define PERL_ARGS_ASSERT_SCALARBOOLEAN assert(o)
#define PERL_ARGS_ASSERT_SEARCH_CONST assert(o)
#define PERL_ARGS_ASSERT_SIMPLIFY_SORT assert(o)
#define PERL_ARGS_ASSERT_TOO_FEW_ARGUMENTS_PV assert(o); assert(name)
#define PERL_ARGS_ASSERT_TOO_MANY_ARGUMENTS_PV assert(o); assert(name)
# if defined(USE_ITHREADS)
#ifndef PERL_NO_INLINE_FUNCTIONS
#define PERL_ARGS_ASSERT_OP_RELOCATE_SV assert(svp); assert(targp)
#endif
# endif
#endif
#if defined(PERL_IN_OP_C) || defined(PERL_IN_SV_C)
#define PERL_ARGS_ASSERT_REPORT_REDEFINED_CV assert(name); assert(old_cv)
#endif
#if defined(PERL_IN_PAD_C)
#define PERL_ARGS_ASSERT_PAD_ALLOC_NAME assert(name)
#define PERL_ARGS_ASSERT_PAD_CHECK_DUP assert(name)
#define PERL_ARGS_ASSERT_PAD_FINDLEX assert(namepv); assert(cv); assert(out_name); assert(out_flags)
#endif
#if defined(PERL_IN_PERL_C)
#define PERL_ARGS_ASSERT_FIND_BEGINNING assert(linestr_sv); assert(rsfp)
#define PERL_ARGS_ASSERT_INCPUSH assert(dir)
#define PERL_ARGS_ASSERT_INCPUSH_USE_SEP assert(p)
#define PERL_ARGS_ASSERT_INIT_POSTDUMP_SYMBOLS assert(argv)
#define PERL_ARGS_ASSERT_MAYBERELOCATE assert(dir)
#define PERL_ARGS_ASSERT_OPEN_SCRIPT assert(scriptname); assert(suidscript)
#endif
#if defined(PERL_IN_PP_C)
#define PERL_ARGS_ASSERT_DO_CHOMP assert(retval); assert(sv)
#define PERL_ARGS_ASSERT_REFTO assert(sv)
#endif
#if defined(PERL_IN_PP_C) || defined(PERL_IN_PP_HOT_C)
#define PERL_ARGS_ASSERT_SOFTREF2XV assert(sv); assert(what); assert(spp)
#endif
#if defined(PERL_IN_PP_CTL_C)
#define PERL_ARGS_ASSERT_CHECK_TYPE_AND_OPEN assert(name)
#define PERL_ARGS_ASSERT_DESTROY_MATCHER assert(matcher)
#define PERL_ARGS_ASSERT_DOFINDLABEL assert(o); assert(label); assert(opstack); assert(oplimit)
#define PERL_ARGS_ASSERT_DOPARSEFORM assert(sv)
#define PERL_ARGS_ASSERT_DOPOPTOLABEL assert(label)
#define PERL_ARGS_ASSERT_DOPOPTOSUB_AT assert(cxstk)
#define PERL_ARGS_ASSERT_MAKE_MATCHER assert(re)
#define PERL_ARGS_ASSERT_MATCHER_MATCHES_SV assert(matcher); assert(sv)
#ifndef PERL_NO_INLINE_FUNCTIONS
#define PERL_ARGS_ASSERT_PATH_IS_SEARCHABLE assert(name)
#endif
#define PERL_ARGS_ASSERT_RUN_USER_FILTER assert(buf_sv)
#define PERL_ARGS_ASSERT_RXRES_FREE assert(rsp)
#define PERL_ARGS_ASSERT_RXRES_RESTORE assert(rsp); assert(rx)
#define PERL_ARGS_ASSERT_SAVE_LINES assert(sv)
#endif
#if defined(PERL_IN_PP_HOT_C)
#define PERL_ARGS_ASSERT_DO_ODDBALL assert(oddkey); assert(firstkey)
#ifndef PERL_NO_INLINE_FUNCTIONS
#define PERL_ARGS_ASSERT_OPMETHOD_STASH assert(meth)
#endif
#endif
#if defined(PERL_IN_PP_PACK_C)
#define PERL_ARGS_ASSERT_DIV128 assert(pnum); assert(done)
#define PERL_ARGS_ASSERT_FIRST_SYMBOL assert(pat); assert(patend)
#define PERL_ARGS_ASSERT_GET_NUM assert(patptr); assert(lenptr)
#define PERL_ARGS_ASSERT_GROUP_END assert(patptr); assert(patend)
#define PERL_ARGS_ASSERT_IS_AN_INT assert(s)
#define PERL_ARGS_ASSERT_MEASURE_STRUCT assert(symptr)
#define PERL_ARGS_ASSERT_MUL128 assert(sv)
#define PERL_ARGS_ASSERT_MY_BYTES_TO_UTF8 assert(start); assert(dest)
#define PERL_ARGS_ASSERT_NEED_UTF8 assert(pat); assert(patend)
#define PERL_ARGS_ASSERT_NEXT_SYMBOL assert(symptr)
#define PERL_ARGS_ASSERT_PACK_REC assert(cat); assert(symptr); assert(beglist); assert(endlist)
#define PERL_ARGS_ASSERT_SV_EXP_GROW assert(sv)
#define PERL_ARGS_ASSERT_UNPACK_REC assert(symptr); assert(s); assert(strbeg); assert(strend)
#endif
#if defined(PERL_IN_PP_SORT_C)
#define PERL_ARGS_ASSERT_AMAGIC_CMP assert(str1); assert(str2)
#define PERL_ARGS_ASSERT_AMAGIC_I_NCMP assert(a); assert(b)
#define PERL_ARGS_ASSERT_AMAGIC_NCMP assert(a); assert(b)
#define PERL_ARGS_ASSERT_QSORTSVU assert(compare)
#define PERL_ARGS_ASSERT_SORTCV assert(a); assert(b)
#define PERL_ARGS_ASSERT_SORTCV_STACKED assert(a); assert(b)
#define PERL_ARGS_ASSERT_SORTCV_XSUB assert(a); assert(b)
#define PERL_ARGS_ASSERT_SV_I_NCMP assert(a); assert(b)
#define PERL_ARGS_ASSERT_SV_NCMP assert(a); assert(b)
# if defined(USE_LOCALE_COLLATE)
#define PERL_ARGS_ASSERT_AMAGIC_CMP_LOCALE assert(str1); assert(str2)
# endif
#endif
#if defined(PERL_IN_PP_SYS_C)
#define PERL_ARGS_ASSERT_DOFORM assert(cv); assert(gv)
#endif
#if defined(PERL_IN_REGCOMP_C)
#define PERL_ARGS_ASSERT__MAKE_EXACTF_INVLIST assert(pRExC_state); assert(node)
#define PERL_ARGS_ASSERT_ADD_ABOVE_LATIN1_FOLDS assert(pRExC_state); assert(invlist)
#ifndef PERL_NO_INLINE_FUNCTIONS
#endif
#define PERL_ARGS_ASSERT_ADD_DATA assert(pRExC_state); assert(s)
#define PERL_ARGS_ASSERT_ADD_MULTI_MATCH assert(multi_string)
#ifndef PERL_NO_INLINE_FUNCTIONS
#define PERL_ARGS_ASSERT_ALLOC_MAYBE_POPULATE_EXACT assert(pRExC_state); assert(node); assert(flagp)
#endif
#ifndef PERL_NO_INLINE_FUNCTIONS
#define PERL_ARGS_ASSERT_COMPUTE_EXACTISH assert(pRExC_state)
#endif
#define PERL_ARGS_ASSERT_CONSTRUCT_AHOCORASICK_FROM_TRIE assert(pRExC_state); assert(source)
#define PERL_ARGS_ASSERT_EDIT_DISTANCE assert(src); assert(tgt)
#define PERL_ARGS_ASSERT_GET_ANYOF_CP_LIST_FOR_SSC assert(pRExC_state); assert(node)
#ifndef PERL_NO_INLINE_FUNCTIONS
#define PERL_ARGS_ASSERT_GET_INVLIST_ITER_ADDR assert(invlist)
#endif
#define PERL_ARGS_ASSERT_GROK_BSLASH_N assert(pRExC_state); assert(flagp)
#ifndef PERL_NO_INLINE_FUNCTIONS
#define PERL_ARGS_ASSERT_HANDLE_NAMED_BACKREF assert(pRExC_state); assert(flagp); assert(parse_start)
#endif
#define PERL_ARGS_ASSERT_HANDLE_POSSIBLE_POSIX assert(pRExC_state); assert(s)
#define PERL_ARGS_ASSERT_HANDLE_REGEX_SETS assert(pRExC_state); assert(flagp); assert(oregcomp_parse)
#ifndef PERL_NO_INLINE_FUNCTIONS
#define PERL_ARGS_ASSERT_INVLIST_CLONE assert(invlist)
#endif
#define PERL_ARGS_ASSERT_INVLIST_CONTENTS assert(invlist)
#ifndef PERL_NO_INLINE_FUNCTIONS
#define PERL_ARGS_ASSERT_INVLIST_HIGHEST assert(invlist)
#endif
#ifndef PERL_NO_INLINE_FUNCTIONS
#define PERL_ARGS_ASSERT_INVLIST_IS_ITERATING assert(invlist)
#endif
#ifndef PERL_NO_INLINE_FUNCTIONS
#define PERL_ARGS_ASSERT_INVLIST_ITERFINISH assert(invlist)
#endif
#ifndef PERL_NO_INLINE_FUNCTIONS
#define PERL_ARGS_ASSERT_INVLIST_ITERINIT assert(invlist)
#endif
#define PERL_ARGS_ASSERT_INVLIST_ITERNEXT assert(invlist); assert(start); assert(end)
#ifndef PERL_NO_INLINE_FUNCTIONS
#define PERL_ARGS_ASSERT_INVLIST_SET_LEN assert(invlist)
#endif
#define PERL_ARGS_ASSERT_IS_SSC_WORTH_IT assert(pRExC_state); assert(ssc)
#define PERL_ARGS_ASSERT_JOIN_EXACT assert(pRExC_state); assert(scan); assert(min_subtract); assert(unfolded_multi_char)
#define PERL_ARGS_ASSERT_MAKE_TRIE assert(pRExC_state); assert(startbranch); assert(first); assert(last); assert(tail)
#define PERL_ARGS_ASSERT_NEXTCHAR assert(pRExC_state)
#define PERL_ARGS_ASSERT_OUTPUT_OR_RETURN_POSIX_WARNINGS assert(pRExC_state); assert(posix_warnings)
#define PERL_ARGS_ASSERT_PARSE_LPAREN_QUESTION_FLAGS assert(pRExC_state)
#define PERL_ARGS_ASSERT_POPULATE_ANYOF_FROM_INVLIST assert(node); assert(invlist_ptr)
#define PERL_ARGS_ASSERT_RE_CROAK2 assert(pat1); assert(pat2)
#define PERL_ARGS_ASSERT_REG assert(pRExC_state); assert(flagp)
#define PERL_ARGS_ASSERT_REG2LANODE assert(pRExC_state)
#define PERL_ARGS_ASSERT_REG_NODE assert(pRExC_state)
#define PERL_ARGS_ASSERT_REG_SCAN_NAME assert(pRExC_state)
#ifndef PERL_NO_INLINE_FUNCTIONS
#define PERL_ARGS_ASSERT_REG_SKIPCOMMENT assert(pRExC_state); assert(p)
#endif
#define PERL_ARGS_ASSERT_REGANODE assert(pRExC_state)
#define PERL_ARGS_ASSERT_REGATOM assert(pRExC_state); assert(flagp)
#define PERL_ARGS_ASSERT_REGBRANCH assert(pRExC_state); assert(flagp)
#define PERL_ARGS_ASSERT_REGCLASS assert(pRExC_state); assert(flagp)
#define PERL_ARGS_ASSERT_REGINSERT assert(pRExC_state); assert(operand)
#define PERL_ARGS_ASSERT_REGNODE_GUTS assert(pRExC_state); assert(name)
#define PERL_ARGS_ASSERT_REGPIECE assert(pRExC_state); assert(flagp)
#define PERL_ARGS_ASSERT_REGTAIL assert(pRExC_state); assert(p); assert(val)
#define PERL_ARGS_ASSERT_SCAN_COMMIT assert(pRExC_state); assert(data); assert(minlenp)
#define PERL_ARGS_ASSERT_SET_ANYOF_ARG assert(pRExC_state); assert(node)
#define PERL_ARGS_ASSERT_SKIP_TO_BE_IGNORED_TEXT assert(pRExC_state); assert(p)
#ifndef PERL_NO_INLINE_FUNCTIONS
#define PERL_ARGS_ASSERT_SSC_ADD_RANGE assert(ssc)
#endif
#define PERL_ARGS_ASSERT_SSC_AND assert(pRExC_state); assert(ssc); assert(and_with)
#define PERL_ARGS_ASSERT_SSC_ANYTHING assert(ssc)
#ifndef PERL_NO_INLINE_FUNCTIONS
#define PERL_ARGS_ASSERT_SSC_CLEAR_LOCALE assert(ssc)
#endif
#ifndef PERL_NO_INLINE_FUNCTIONS
#define PERL_ARGS_ASSERT_SSC_CP_AND assert(ssc)
#endif
#define PERL_ARGS_ASSERT_SSC_FINALIZE assert(pRExC_state); assert(ssc)
#define PERL_ARGS_ASSERT_SSC_INIT assert(pRExC_state); assert(ssc)
#ifndef PERL_NO_INLINE_FUNCTIONS
#define PERL_ARGS_ASSERT_SSC_INTERSECTION assert(ssc); assert(invlist)
#endif
#define PERL_ARGS_ASSERT_SSC_IS_ANYTHING assert(ssc)
#define PERL_ARGS_ASSERT_SSC_IS_CP_POSIXL_INIT assert(pRExC_state); assert(ssc)
#define PERL_ARGS_ASSERT_SSC_OR assert(pRExC_state); assert(ssc); assert(or_with)
#ifndef PERL_NO_INLINE_FUNCTIONS
#define PERL_ARGS_ASSERT_SSC_UNION assert(ssc); assert(invlist)
#endif
#define PERL_ARGS_ASSERT_STUDY_CHUNK assert(pRExC_state); assert(scanp); assert(minlenp); assert(deltap); assert(last)
#endif
#if defined(PERL_IN_REGCOMP_C) || defined (PERL_IN_DUMP_C)
#define PERL_ARGS_ASSERT__INVLIST_DUMP assert(file); assert(indent); assert(invlist)
#endif
#if defined(PERL_IN_REGCOMP_C) || defined(PERL_IN_PERL_C) || defined(PERL_IN_UTF8_C)
#define PERL_ARGS_ASSERT__INVLISTEQ assert(a); assert(b)
#define PERL_ARGS_ASSERT__NEW_INVLIST_C_ARRAY assert(list)
#endif
#if defined(PERL_IN_REGCOMP_C) || defined(PERL_IN_REGEXEC_C)
#define PERL_ARGS_ASSERT__GET_REGCLASS_NONBITMAP_DATA assert(node)
#define PERL_ARGS_ASSERT_RE_PRINTF assert(fmt)
#define PERL_ARGS_ASSERT_REGPROP assert(sv); assert(o)
#endif
#if defined(PERL_IN_REGCOMP_C) || defined(PERL_IN_REGEXEC_C) || defined(PERL_IN_UTF8_C)
#define PERL_ARGS_ASSERT__GET_SWASH_INVLIST assert(swash)
#ifndef PERL_NO_INLINE_FUNCTIONS
#define PERL_ARGS_ASSERT__INVLIST_CONTAINS_CP assert(invlist)
#endif
#ifndef PERL_NO_INLINE_FUNCTIONS
#define PERL_ARGS_ASSERT__INVLIST_LEN assert(invlist)
#endif
#define PERL_ARGS_ASSERT__INVLIST_SEARCH assert(invlist)
#define PERL_ARGS_ASSERT__SWASH_INVERSION_HASH assert(swash)
#ifndef PERL_NO_INLINE_FUNCTIONS
#define PERL_ARGS_ASSERT_GET_INVLIST_OFFSET_ADDR assert(invlist)
#endif
#ifndef PERL_NO_INLINE_FUNCTIONS
#define PERL_ARGS_ASSERT_INVLIST_ARRAY assert(invlist)
#endif
#endif
#if defined(PERL_IN_REGCOMP_C) || defined(PERL_IN_REGEXEC_C) || defined(PERL_IN_UTF8_C) || defined(PERL_IN_TOKE_C)
#define PERL_ARGS_ASSERT__CORE_SWASH_INIT assert(pkg); assert(name); assert(listsv)
#endif
#if defined(PERL_IN_REGCOMP_C) || defined(PERL_IN_TOKE_C) || defined(PERL_IN_DQUOTE_C)
#ifndef PERL_NO_INLINE_FUNCTIONS
#define PERL_ARGS_ASSERT_FORM_SHORT_OCTAL_WARNING assert(s)
#endif
#define PERL_ARGS_ASSERT_GROK_BSLASH_O assert(s); assert(uv); assert(error_msg)
#define PERL_ARGS_ASSERT_GROK_BSLASH_X assert(s); assert(uv); assert(error_msg)
#ifndef PERL_NO_INLINE_FUNCTIONS
#define PERL_ARGS_ASSERT_REGCURLY assert(s)
#endif
#endif
#if defined(PERL_IN_REGCOMP_C) || defined(PERL_IN_UTF8_C)
#define PERL_ARGS_ASSERT__INVLIST_INTERSECTION_MAYBE_COMPLEMENT_2ND assert(b); assert(i)
#define PERL_ARGS_ASSERT__INVLIST_INVERT assert(invlist)
#define PERL_ARGS_ASSERT__INVLIST_POPULATE_SWATCH assert(invlist); assert(swatch)
#define PERL_ARGS_ASSERT__INVLIST_UNION_MAYBE_COMPLEMENT_2ND assert(b); assert(output)
#define PERL_ARGS_ASSERT__SETUP_CANNED_INVLIST assert(other_elements_ptr)
#define PERL_ARGS_ASSERT__SWASH_TO_INVLIST assert(swash)
#endif
#if defined(PERL_IN_REGEXEC_C)
#define PERL_ARGS_ASSERT_ADVANCE_ONE_LB assert(curpos); assert(strend)
#define PERL_ARGS_ASSERT_ADVANCE_ONE_SB assert(curpos); assert(strend)
#define PERL_ARGS_ASSERT_ADVANCE_ONE_WB assert(curpos); assert(strend)
#define PERL_ARGS_ASSERT_BACKUP_ONE_GCB assert(strbeg); assert(curpos)
#define PERL_ARGS_ASSERT_BACKUP_ONE_LB assert(strbeg); assert(curpos)
#define PERL_ARGS_ASSERT_BACKUP_ONE_SB assert(strbeg); assert(curpos)
#define PERL_ARGS_ASSERT_BACKUP_ONE_WB assert(previous); assert(strbeg); assert(curpos)
#define PERL_ARGS_ASSERT_FIND_BYCLASS assert(prog); assert(c); assert(s); assert(strend)
#define PERL_ARGS_ASSERT_ISFOO_UTF8_LC assert(character)
#define PERL_ARGS_ASSERT_ISGCB assert(strbeg); assert(curpos)
#define PERL_ARGS_ASSERT_ISLB assert(strbeg); assert(curpos); assert(strend)
#define PERL_ARGS_ASSERT_ISSB assert(strbeg); assert(curpos); assert(strend)
#define PERL_ARGS_ASSERT_ISWB assert(strbeg); assert(curpos); assert(strend)
#define PERL_ARGS_ASSERT_REG_CHECK_NAMED_BUFF_MATCHED assert(rex); assert(scan)
#define PERL_ARGS_ASSERT_REGCP_RESTORE assert(rex); assert(maxopenparen_p)
#define PERL_ARGS_ASSERT_REGCPPOP assert(rex); assert(maxopenparen_p)
#define PERL_ARGS_ASSERT_REGCPPUSH assert(rex)
#define PERL_ARGS_ASSERT_REGHOP3 assert(s); assert(lim)
#define PERL_ARGS_ASSERT_REGHOP4 assert(s); assert(llim); assert(rlim)
#define PERL_ARGS_ASSERT_REGHOPMAYBE3 assert(s); assert(lim)
#define PERL_ARGS_ASSERT_REGINCLASS assert(n); assert(p); assert(p_end)
#define PERL_ARGS_ASSERT_REGMATCH assert(reginfo); assert(startpos); assert(prog)
#define PERL_ARGS_ASSERT_REGREPEAT assert(prog); assert(startposp); assert(p); assert(reginfo)
#define PERL_ARGS_ASSERT_REGTRY assert(reginfo); assert(startposp)
#define PERL_ARGS_ASSERT_TO_BYTE_SUBSTR assert(prog)
#define PERL_ARGS_ASSERT_TO_UTF8_SUBSTR assert(prog)
#endif
#if defined(PERL_IN_REGEXEC_C) || defined(PERL_IN_TOKE_C)
#define PERL_ARGS_ASSERT__IS_GRAPHEME assert(strbeg); assert(s); assert(strend)
#endif
#if defined(PERL_IN_REGEXEC_C) || defined(PERL_IN_UTF8_C)
#endif
#if defined(PERL_IN_SCOPE_C)
#define PERL_ARGS_ASSERT_SAVE_SCALAR_AT assert(sptr)
#endif
#if defined(PERL_IN_SV_C)
#define PERL_ARGS_ASSERT_F0CONVERT assert(endbuf); assert(len)
#define PERL_ARGS_ASSERT_ANONYMISE_CV_MAYBE assert(gv); assert(cv)
#define PERL_ARGS_ASSERT_ASSERT_UFT8_CACHE_COHERENT assert(func); assert(sv)
#define PERL_ARGS_ASSERT_CURSE assert(sv)
#define PERL_ARGS_ASSERT_EXPECT_NUMBER assert(pattern)
#define PERL_ARGS_ASSERT_FIND_ARRAY_SUBSCRIPT assert(val)
#define PERL_ARGS_ASSERT_FIND_HASH_SUBSCRIPT assert(val)
#define PERL_ARGS_ASSERT_FIND_UNINIT_VAR assert(desc_p)
#define PERL_ARGS_ASSERT_GLOB_2NUMBER assert(gv)
#define PERL_ARGS_ASSERT_GLOB_ASSIGN_GLOB assert(dstr); assert(sstr)
#define PERL_ARGS_ASSERT_NOT_A_NUMBER assert(sv)
#define PERL_ARGS_ASSERT_NOT_INCREMENTABLE assert(sv)
#define PERL_ARGS_ASSERT_PTR_TABLE_FIND assert(tbl)
#define PERL_ARGS_ASSERT_SV_2IUV_COMMON assert(sv)
#define PERL_ARGS_ASSERT_SV_ADD_ARENA assert(ptr)
#define PERL_ARGS_ASSERT_SV_DISPLAY assert(sv); assert(tmpbuf)
#define PERL_ARGS_ASSERT_SV_POS_B2U_MIDWAY assert(s); assert(target); assert(end)
#define PERL_ARGS_ASSERT_SV_POS_U2B_CACHED assert(sv); assert(mgp); assert(start); assert(send)
#define PERL_ARGS_ASSERT_SV_POS_U2B_FORWARDS assert(start); assert(send); assert(uoffset); assert(at_end)
#define PERL_ARGS_ASSERT_SV_POS_U2B_MIDWAY assert(start); assert(send)
#ifndef PERL_NO_INLINE_FUNCTIONS
#define PERL_ARGS_ASSERT_SV_UNGLOB assert(sv)
#endif
#define PERL_ARGS_ASSERT_UIV_2BUF assert(buf); assert(peob)
#define PERL_ARGS_ASSERT_UTF8_MG_LEN_CACHE_UPDATE assert(sv); assert(mgp)
#define PERL_ARGS_ASSERT_UTF8_MG_POS_CACHE_UPDATE assert(sv); assert(mgp)
#define PERL_ARGS_ASSERT_VISIT assert(f)
# if defined(USE_ITHREADS)
#define PERL_ARGS_ASSERT_SV_DUP_COMMON assert(sstr); assert(param)
#define PERL_ARGS_ASSERT_SV_DUP_INC_MULTIPLE assert(source); assert(dest); assert(param)
#define PERL_ARGS_ASSERT_UNREFERENCED_TO_TMP_STACK assert(unreferenced)
# endif
#endif
#if defined(PERL_IN_SV_C) || defined (PERL_IN_OP_C)
#endif
#if defined(PERL_IN_TOKE_C)
#define PERL_ARGS_ASSERT_CHECKCOMMA assert(s); assert(name); assert(what)
#define PERL_ARGS_ASSERT_FILTER_GETS assert(sv)
#define PERL_ARGS_ASSERT_FIND_IN_MY_STASH assert(pkgname)
#define PERL_ARGS_ASSERT_FORCE_IDENT assert(s)
#define PERL_ARGS_ASSERT_FORCE_STRICT_VERSION assert(s)
#define PERL_ARGS_ASSERT_FORCE_VERSION assert(s)
#define PERL_ARGS_ASSERT_FORCE_WORD assert(start)
#define PERL_ARGS_ASSERT_GET_AND_CHECK_BACKSLASH_N_NAME assert(s); assert(e)
#define PERL_ARGS_ASSERT_INCLINE assert(s)
#define PERL_ARGS_ASSERT_INTUIT_METHOD assert(s)
#define PERL_ARGS_ASSERT_INTUIT_MORE assert(s)
#define PERL_ARGS_ASSERT_LOP assert(s)
#define PERL_ARGS_ASSERT_NEW_CONSTANT assert(key); assert(sv)
#define PERL_ARGS_ASSERT_NO_OP assert(what)
#define PERL_ARGS_ASSERT_PARSE_IDENT assert(s); assert(d); assert(e)
#define PERL_ARGS_ASSERT_SCAN_CONST assert(start)
#define PERL_ARGS_ASSERT_SCAN_FORMLINE assert(s)
#define PERL_ARGS_ASSERT_SCAN_HEREDOC assert(s)
#define PERL_ARGS_ASSERT_SCAN_IDENT assert(s); assert(dest)
#define PERL_ARGS_ASSERT_SCAN_INPUTSYMBOL assert(start)
#define PERL_ARGS_ASSERT_SCAN_PAT assert(start)
#define PERL_ARGS_ASSERT_SCAN_STR assert(start)
#define PERL_ARGS_ASSERT_SCAN_SUBST assert(start)
#define PERL_ARGS_ASSERT_SCAN_TRANS assert(start)
#define PERL_ARGS_ASSERT_SCAN_WORD assert(s); assert(dest); assert(slp)
#define PERL_ARGS_ASSERT_SKIPSPACE_FLAGS assert(s)
#define PERL_ARGS_ASSERT_SWALLOW_BOM assert(s)
#define PERL_ARGS_ASSERT_TOKENIZE_USE assert(s)
#define PERL_ARGS_ASSERT_TOKEQ assert(sv)
#define PERL_ARGS_ASSERT_YYWARN assert(s)
#endif
#if defined(PERL_IN_UNIVERSAL_C)
#define PERL_ARGS_ASSERT_ISA_LOOKUP assert(stash); assert(name)
#endif
#if defined(PERL_IN_UTF8_C)
#define PERL_ARGS_ASSERT__TO_UTF8_CASE assert(p); assert(ustrp); assert(swashp); assert(normal)
#define PERL_ARGS_ASSERT_CHECK_AND_DEPRECATE assert(p); assert(e); assert(file)
#define PERL_ARGS_ASSERT_CHECK_LOCALE_BOUNDARY_CROSSING assert(p); assert(ustrp); assert(lenp)
#ifndef PERL_NO_INLINE_FUNCTIONS
#define PERL_ARGS_ASSERT_DOES_UTF8_OVERFLOW assert(s); assert(e)
#endif
#ifndef PERL_NO_INLINE_FUNCTIONS
#define PERL_ARGS_ASSERT_ISFF_OVERLONG assert(s)
#endif
#ifndef PERL_NO_INLINE_FUNCTIONS
#define PERL_ARGS_ASSERT_IS_UTF8_COMMON assert(p); assert(swash); assert(swashname)
#endif
#ifndef PERL_NO_INLINE_FUNCTIONS
#define PERL_ARGS_ASSERT_IS_UTF8_COMMON_WITH_LEN assert(p); assert(e); assert(swash); assert(swashname)
#endif
#ifndef PERL_NO_INLINE_FUNCTIONS
#define PERL_ARGS_ASSERT_IS_UTF8_CP_ABOVE_31_BITS assert(s); assert(e)
#endif
#ifndef PERL_NO_INLINE_FUNCTIONS
#define PERL_ARGS_ASSERT_IS_UTF8_OVERLONG_GIVEN_START_BYTE_OK assert(s)
#endif
#define PERL_ARGS_ASSERT_SWASH_SCAN_LIST_LINE assert(l); assert(lend); assert(min); assert(max); assert(val); assert(typestr)
#define PERL_ARGS_ASSERT_SWATCH_GET assert(swash)
#define PERL_ARGS_ASSERT_UNEXPECTED_NON_CONTINUATION_TEXT assert(s)
#define PERL_ARGS_ASSERT_WARN_ON_FIRST_DEPRECATED_USE assert(name); assert(alternative); assert(file)
#endif
#if defined(PERL_IN_UTF8_C) || defined(PERL_IN_PP_C)
#define PERL_ARGS_ASSERT__TO_UPPER_TITLE_LATIN1 assert(p); assert(lenp)
#endif
#if defined(PERL_IN_UTF8_C) || defined(PERL_IN_REGCOMP_C) || defined(PERL_IN_REGEXEC_C)
#define PERL_ARGS_ASSERT__TO_FOLD_LATIN1 assert(p); assert(lenp)
#endif
#if defined(PERL_IN_UTIL_C)
#define PERL_ARGS_ASSERT_WITH_QUEUED_ERRORS assert(ex)
#define PERL_ARGS_ASSERT_XS_VERSION_BOOTCHECK assert(xs_p)
# if defined(PERL_MEM_LOG) && !defined(PERL_MEM_LOG_NOIMPL)
#define PERL_ARGS_ASSERT_MEM_LOG_COMMON assert(type_name); assert(filename); assert(funcname)
# endif
#endif
#if defined(PERL_MEM_LOG)
#define PERL_ARGS_ASSERT_MEM_LOG_ALLOC assert(type_name); assert(filename); assert(funcname)
#define PERL_ARGS_ASSERT_MEM_LOG_FREE assert(filename); assert(funcname)
#define PERL_ARGS_ASSERT_MEM_LOG_REALLOC assert(type_name); assert(filename); assert(funcname)
#endif
#if defined(PERL_OP_PARENT)
#define PERL_ARGS_ASSERT_OP_PARENT assert(o)
#endif
#if defined(PERL_USES_PL_PIDSTATUS) && defined(PERL_IN_UTIL_C)
#endif
#if defined(UNLINK_ALL_VERSIONS)
#define PERL_ARGS_ASSERT_UNLNK assert(f)
#endif
#if defined(USE_C_BACKTRACE)
#define PERL_ARGS_ASSERT_DUMP_C_BACKTRACE assert(fp)
#endif
#if defined(USE_DTRACE)
#define PERL_ARGS_ASSERT_DTRACE_PROBE_CALL assert(cv)
#define PERL_ARGS_ASSERT_DTRACE_PROBE_LOAD assert(name)
#define PERL_ARGS_ASSERT_DTRACE_PROBE_OP assert(op)
#endif
#if defined(USE_ITHREADS)
#define PERL_ARGS_ASSERT_ALLOCCOPSTASH assert(hv)
#define PERL_ARGS_ASSERT_ANY_DUP assert(proto_perl)
#define PERL_ARGS_ASSERT_CLONE_PARAMS_DEL assert(param)
#define PERL_ARGS_ASSERT_CLONE_PARAMS_NEW assert(from); assert(to)
#define PERL_ARGS_ASSERT_CX_DUP assert(param)
#define PERL_ARGS_ASSERT_DIRP_DUP assert(param)
#define PERL_ARGS_ASSERT_FP_DUP assert(param)
#define PERL_ARGS_ASSERT_GP_DUP assert(param)
#define PERL_ARGS_ASSERT_HE_DUP assert(param)
#define PERL_ARGS_ASSERT_HEK_DUP assert(param)
#define PERL_ARGS_ASSERT_MG_DUP assert(param)
#define PERL_ARGS_ASSERT_MRO_META_DUP assert(smeta); assert(param)
#define PERL_ARGS_ASSERT_NEWPADOP assert(sv)
#define PERL_ARGS_ASSERT_PADLIST_DUP assert(srcpad); assert(param)
#define PERL_ARGS_ASSERT_PADNAME_DUP assert(src); assert(param)
#define PERL_ARGS_ASSERT_PADNAMELIST_DUP assert(srcpad); assert(param)
#define PERL_ARGS_ASSERT_PARSER_DUP assert(param)
#define PERL_ARGS_ASSERT_PERL_CLONE assert(proto_perl)
#define PERL_ARGS_ASSERT_RE_DUP_GUTS assert(sstr); assert(dstr); assert(param)
#define PERL_ARGS_ASSERT_REGDUPE_INTERNAL assert(r); assert(param)
#define PERL_ARGS_ASSERT_RVPV_DUP assert(dstr); assert(sstr); assert(param)
#define PERL_ARGS_ASSERT_SI_DUP assert(param)
#define PERL_ARGS_ASSERT_SS_DUP assert(proto_perl); assert(param)
#define PERL_ARGS_ASSERT_SV_DUP assert(param)
#define PERL_ARGS_ASSERT_SV_DUP_INC assert(param)
#endif
#if defined(USE_LOCALE) && (defined(PERL_IN_LOCALE_C) || defined (PERL_EXT_POSIX))
#endif
#if defined(USE_LOCALE) && defined(PERL_IN_LOCALE_C)
#define PERL_ARGS_ASSERT_STDIZE_LOCALE assert(locs)
#endif
#if defined(USE_LOCALE_COLLATE)
#define PERL_ARGS_ASSERT_MAGIC_SETCOLLXFRM assert(sv); assert(mg)
#ifndef NO_MATHOMS
#define PERL_ARGS_ASSERT_MEM_COLLXFRM assert(input_string); assert(xlen)
#endif
#define PERL_ARGS_ASSERT_SV_COLLXFRM_FLAGS assert(sv); assert(nxp)
#endif
#if defined(USE_PERLIO)
#define PERL_ARGS_ASSERT_PERLIO_READ assert(vbuf)
#define PERL_ARGS_ASSERT_PERLIO_UNREAD assert(vbuf)
#define PERL_ARGS_ASSERT_PERLIO_WRITE assert(vbuf)
#endif
#if defined(USE_QUADMATH)
#define PERL_ARGS_ASSERT_QUADMATH_FORMAT_NEEDED assert(format)
#define PERL_ARGS_ASSERT_QUADMATH_FORMAT_SINGLE assert(format)
#endif
#if defined(WIN32)
#define PERL_ARGS_ASSERT_WIN32_CROAK_NOT_IMPLEMENTED assert(fname)
#endif
#if defined(WIN32) || defined(__SYMBIAN32__) || defined(VMS)
#define PERL_ARGS_ASSERT_DO_ASPAWN assert(mark); assert(sp)
#define PERL_ARGS_ASSERT_DO_SPAWN assert(cmd)
#define PERL_ARGS_ASSERT_DO_SPAWN_NOWAIT assert(cmd)
#endif
#if defined(_MSC_VER)
#define PERL_ARGS_ASSERT_MAGIC_REGDATUM_SET assert(sv); assert(mg)
#endif
#ifdef PERL_CORE
# include "pp_proto.h"
#endif
