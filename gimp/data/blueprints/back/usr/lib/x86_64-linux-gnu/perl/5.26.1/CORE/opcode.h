// GGHASH:VM3FSTeK.bin_Q4n_zUFc.GeQXlss9uRIO2L7q4bTMx0000166ef
#ifndef PERL_GLOBAL_STRUCT_INIT
#define Perl_pp_scalar Perl_pp_null
#define Perl_pp_padany Perl_unimplemented_op
#define Perl_pp_regcmaybe Perl_pp_null
#define Perl_pp_transr Perl_pp_trans
#define Perl_pp_chomp Perl_pp_chop
#define Perl_pp_schomp Perl_pp_schop
#define Perl_pp_i_preinc Perl_pp_preinc
#define Perl_pp_i_predec Perl_pp_predec
#define Perl_pp_i_postinc Perl_pp_postinc
#define Perl_pp_i_postdec Perl_pp_postdec
#define Perl_pp_slt Perl_pp_sle
#define Perl_pp_sgt Perl_pp_sle
#define Perl_pp_sge Perl_pp_sle
#define Perl_pp_bit_xor Perl_pp_bit_or
#define Perl_pp_nbit_xor Perl_pp_nbit_or
#define Perl_pp_sbit_xor Perl_pp_sbit_or
#define Perl_pp_cos Perl_pp_sin
#define Perl_pp_exp Perl_pp_sin
#define Perl_pp_log Perl_pp_sin
#define Perl_pp_sqrt Perl_pp_sin
#define Perl_pp_hex Perl_pp_oct
#define Perl_pp_rindex Perl_pp_index
#define Perl_pp_lcfirst Perl_pp_ucfirst
#define Perl_pp_aelemfast_lex Perl_pp_aelemfast
#define Perl_pp_avalues Perl_pp_akeys
#define Perl_pp_values Perl_do_kv
#define Perl_pp_keys Perl_do_kv
#define Perl_pp_rv2hv Perl_pp_rv2av
#define Perl_pp_pop Perl_pp_shift
#define Perl_pp_mapstart Perl_pp_grepstart
#define Perl_pp_dor Perl_pp_defined
#define Perl_pp_andassign Perl_pp_and
#define Perl_pp_orassign Perl_pp_or
#define Perl_pp_dorassign Perl_pp_defined
#define Perl_pp_lineseq Perl_pp_null
#define Perl_pp_scope Perl_pp_null
#define Perl_pp_dump Perl_pp_goto
#define Perl_pp_dbmclose Perl_pp_untie
#define Perl_pp_read Perl_pp_sysread
#define Perl_pp_say Perl_pp_print
#define Perl_pp_seek Perl_pp_sysseek
#define Perl_pp_fcntl Perl_pp_ioctl
#ifdef HAS_SOCKET
#define Perl_pp_send Perl_pp_syswrite
#define Perl_pp_recv Perl_pp_sysread
#else
#define Perl_pp_send Perl_unimplemented_op
#define Perl_pp_recv Perl_unimplemented_op
#define Perl_pp_socket Perl_unimplemented_op
#endif
#ifdef HAS_SOCKET
#define Perl_pp_connect Perl_pp_bind
#define Perl_pp_gsockopt Perl_pp_ssockopt
#define Perl_pp_getsockname Perl_pp_getpeername
#else
#define Perl_pp_bind Perl_unimplemented_op
#define Perl_pp_connect Perl_unimplemented_op
#define Perl_pp_listen Perl_unimplemented_op
#define Perl_pp_accept Perl_unimplemented_op
#define Perl_pp_shutdown Perl_unimplemented_op
#define Perl_pp_gsockopt Perl_unimplemented_op
#define Perl_pp_ssockopt Perl_unimplemented_op
#define Perl_pp_getsockname Perl_unimplemented_op
#define Perl_pp_getpeername Perl_unimplemented_op
#endif
#define Perl_pp_lstat Perl_pp_stat
#define Perl_pp_ftrwrite Perl_pp_ftrread
#define Perl_pp_ftrexec Perl_pp_ftrread
#define Perl_pp_fteread Perl_pp_ftrread
#define Perl_pp_ftewrite Perl_pp_ftrread
#define Perl_pp_fteexec Perl_pp_ftrread
#define Perl_pp_ftsize Perl_pp_ftis
#define Perl_pp_ftmtime Perl_pp_ftis
#define Perl_pp_ftatime Perl_pp_ftis
#define Perl_pp_ftctime Perl_pp_ftis
#define Perl_pp_fteowned Perl_pp_ftrowned
#define Perl_pp_ftzero Perl_pp_ftrowned
#define Perl_pp_ftsock Perl_pp_ftrowned
#define Perl_pp_ftchr Perl_pp_ftrowned
#define Perl_pp_ftblk Perl_pp_ftrowned
#define Perl_pp_ftfile Perl_pp_ftrowned
#define Perl_pp_ftdir Perl_pp_ftrowned
#define Perl_pp_ftpipe Perl_pp_ftrowned
#define Perl_pp_ftsuid Perl_pp_ftrowned
#define Perl_pp_ftsgid Perl_pp_ftrowned
#define Perl_pp_ftsvtx Perl_pp_ftrowned
#define Perl_pp_ftbinary Perl_pp_fttext
#define Perl_pp_unlink Perl_pp_chown
#define Perl_pp_chmod Perl_pp_chown
#define Perl_pp_utime Perl_pp_chown
#define Perl_pp_symlink Perl_pp_link
#define Perl_pp_kill Perl_pp_chown
#define Perl_pp_localtime Perl_pp_gmtime
#define Perl_pp_shmget Perl_pp_semget
#define Perl_pp_shmctl Perl_pp_semctl
#define Perl_pp_shmread Perl_pp_shmwrite
#define Perl_pp_msgget Perl_pp_semget
#define Perl_pp_msgctl Perl_pp_semctl
#define Perl_pp_msgsnd Perl_pp_shmwrite
#define Perl_pp_msgrcv Perl_pp_shmwrite
#define Perl_pp_semop Perl_pp_shmwrite
#define Perl_pp_dofile Perl_pp_require
#define Perl_pp_ghbyname Perl_pp_ghostent
#define Perl_pp_ghbyaddr Perl_pp_ghostent
#define Perl_pp_gnbyname Perl_pp_gnetent
#define Perl_pp_gnbyaddr Perl_pp_gnetent
#define Perl_pp_gpbyname Perl_pp_gprotoent
#define Perl_pp_gpbynumber Perl_pp_gprotoent
#define Perl_pp_gsbyname Perl_pp_gservent
#define Perl_pp_gsbyport Perl_pp_gservent
#define Perl_pp_snetent Perl_pp_shostent
#define Perl_pp_sprotoent Perl_pp_shostent
#define Perl_pp_sservent Perl_pp_shostent
#define Perl_pp_enetent Perl_pp_ehostent
#define Perl_pp_eprotoent Perl_pp_ehostent
#define Perl_pp_eservent Perl_pp_ehostent
#define Perl_pp_gpwnam Perl_pp_gpwent
#define Perl_pp_gpwuid Perl_pp_gpwent
#define Perl_pp_spwent Perl_pp_ehostent
#define Perl_pp_epwent Perl_pp_ehostent
#define Perl_pp_ggrnam Perl_pp_ggrent
#define Perl_pp_ggrgid Perl_pp_ggrent
#define Perl_pp_sgrent Perl_pp_ehostent
#define Perl_pp_egrent Perl_pp_ehostent
#define Perl_pp_custom Perl_unimplemented_op
#ifndef DOINIT
#else
#endif
#ifndef DOINIT
#else
#endif
#endif
#ifdef PERL_GLOBAL_STRUCT_INIT
#define PERL_PPADDR_INITED 
#else
# ifndef PERL_GLOBAL_STRUCT
#define PERL_PPADDR_INITED 
# endif
#endif
#if (defined(DOINIT) && !defined(PERL_GLOBAL_STRUCT)) || defined(PERL_GLOBAL_STRUCT_INIT)
#define PERL_PPADDR_INITED 
#endif
#ifdef PERL_PPADDR_INITED
#endif
#ifdef PERL_GLOBAL_STRUCT_INIT
#define PERL_CHECK_INITED 
#else
# ifndef PERL_GLOBAL_STRUCT
#define PERL_CHECK_INITED 
# endif
#endif
#if (defined(DOINIT) && !defined(PERL_GLOBAL_STRUCT)) || defined(PERL_GLOBAL_STRUCT_INIT)
#define PERL_CHECK_INITED 
#endif
#ifdef PERL_CHECK_INITED
#endif
#ifndef PERL_GLOBAL_STRUCT_INIT
#ifndef DOINIT
#else
#endif
#endif
#define OPpARGELEM_SV 0x00
#define OPpLVREF_SV 0x00
#define OPpARG1_MASK 0x01
#define OPpCOREARGS_DEREF1 0x01
#define OPpENTERSUB_INARGS 0x01
#define OPpSORT_NUMERIC 0x01
#define OPpTRANS_FROM_UTF 0x01
#define OPpARGELEM_AV 0x02
#define OPpCONST_NOVER 0x02
#define OPpCOREARGS_DEREF2 0x02
#define OPpEVAL_HAS_HH 0x02
#define OPpFT_ACCESS 0x02
#define OPpHINT_STRICT_REFS 0x02
#define OPpITER_REVERSED 0x02
#define OPpSORT_INTEGER 0x02
#define OPpTRANS_TO_UTF 0x02
#define OPpARG2_MASK 0x03
#define OPpAVHVSWITCH_MASK 0x03
#define OPpARGELEM_HV 0x04
#define OPpCONST_SHORTCIRCUIT 0x04
#define OPpDONT_INIT_GV 0x04
#define OPpENTERSUB_HASTARG 0x04
#define OPpEVAL_UNICODE 0x04
#define OPpFT_STACKED 0x04
#define OPpLVREF_ELEM 0x04
#define OPpSLICEWARNING 0x04
#define OPpSORT_REVERSE 0x04
#define OPpSPLIT_IMPLIM 0x04
#define OPpTRANS_IDENTICAL 0x04
#define OPpARGELEM_MASK 0x06
#define OPpARG3_MASK 0x07
#define OPpPADRANGE_COUNTSHIFT 0x07
#define OPpCONST_STRICT 0x08
#define OPpENTERSUB_AMPER 0x08
#define OPpEVAL_BYTES 0x08
#define OPpFT_STACKING 0x08
#define OPpITER_DEF 0x08
#define OPpLVREF_ITER 0x08
#define OPpMAYBE_LVSUB 0x08
#define OPpREVERSE_INPLACE 0x08
#define OPpSORT_INPLACE 0x08
#define OPpSPLIT_LEX 0x08
#define OPpTRANS_SQUASH 0x08
#define OPpARG4_MASK 0x0f
#define OPpASSIGN_COMMON_AGG 0x10
#define OPpCONST_ENTERED 0x10
#define OPpDEREF_AV 0x10
#define OPpEVAL_COPHH 0x10
#define OPpFT_AFTER_t 0x10
#define OPpLVREF_AV 0x10
#define OPpMAYBE_TRUEBOOL 0x10
#define OPpMULTIDEREF_EXISTS 0x10
#define OPpOPEN_IN_RAW 0x10
#define OPpSORT_DESCEND 0x10
#define OPpSPLIT_ASSIGN 0x10
#define OPpSUBSTR_REPL_FIRST 0x10
#define OPpTARGET_MY 0x10
#define OPpASSIGN_COMMON_RC1 0x20
#define OPpDEREF_HV 0x20
#define OPpEARLY_CV 0x20
#define OPpEVAL_RE_REPARSING 0x20
#define OPpHUSH_VMSISH 0x20
#define OPpLVREF_HV 0x20
#define OPpMAY_RETURN_CONSTANT 0x20
#define OPpMULTIDEREF_DELETE 0x20
#define OPpOPEN_IN_CRLF 0x20
#define OPpSORT_QSORT 0x20
#define OPpTRANS_COMPLEMENT 0x20
#define OPpTRUEBOOL 0x20
#define OPpDEREF 0x30
#define OPpDEREF_SV 0x30
#define OPpLVREF_CV 0x30
#define OPpLVREF_TYPE 0x30
#define OPpALLOW_FAKE 0x40
#define OPpASSIGN_BACKWARDS 0x40
#define OPpASSIGN_COMMON_SCALAR 0x40
#define OPpCONST_BARE 0x40
#define OPpCOREARGS_SCALARMOD 0x40
#define OPpENTERSUB_DB 0x40
#define OPpEXISTS_SUB 0x40
#define OPpFLIP_LINENUM 0x40
#define OPpLIST_GUESSED 0x40
#define OPpLVAL_DEFER 0x40
#define OPpOPEN_OUT_RAW 0x40
#define OPpOUR_INTRO 0x40
#define OPpPAD_STATE 0x40
#define OPpREFCOUNTED 0x40
#define OPpREPEAT_DOLIST 0x40
#define OPpSLICE 0x40
#define OPpSORT_STABLE 0x40
#define OPpTRANS_GROWS 0x40
#define OPpPADRANGE_COUNTMASK 0x7f
#define OPpASSIGN_CV_TO_GV 0x80
#define OPpCOREARGS_PUSHMARK 0x80
#define OPpENTERSUB_NOPAREN 0x80
#define OPpLVALUE 0x80
#define OPpLVAL_INTRO 0x80
#define OPpOFFBYONE 0x80
#define OPpOPEN_OUT_CRLF 0x80
#define OPpPV_IS_UTF8 0x80
#define OPpTRANS_DELETE 0x80
#ifndef PERL_GLOBAL_STRUCT_INIT
# ifndef DOINIT
# else
# endif
#endif
