// GGHASH:V1gzU7j0rs_Z9dIhYmb7m2h8o3y87vPv_HpmvZINgbOA00003af0
#ifndef JMESSAGE
#ifndef JERROR_H
#define JMAKE_ENUM_LIST 
#else
#define JMESSAGE(code,string) 
#endif
#endif
#ifdef JMAKE_ENUM_LIST
#define JMESSAGE(code,string) code ,
#endif
#if JPEG_LIB_VERSION < 70
#endif
#if JPEG_LIB_VERSION >= 70
#endif
#if JPEG_LIB_VERSION >= 70
#endif
#if JPEG_LIB_VERSION >= 70
#endif
#if JPEG_LIB_VERSION >= 70
#endif
#if JPEG_LIB_VERSION < 70
#if defined(C_ARITH_CODING_SUPPORTED) || defined(D_ARITH_CODING_SUPPORTED)
#endif
#endif
#ifdef JMAKE_ENUM_LIST
#undef JMAKE_ENUM_LIST
#endif
#undef JMESSAGE
#ifndef JERROR_H
#define JERROR_H 
#define ERREXIT(cinfo,code) ((cinfo)->err->msg_code = (code), (*(cinfo)->err->error_exit) ((j_common_ptr) (cinfo)))
#define ERREXIT1(cinfo,code,p1) ((cinfo)->err->msg_code = (code), (cinfo)->err->msg_parm.i[0] = (p1), (*(cinfo)->err->error_exit) ((j_common_ptr) (cinfo)))
#define ERREXIT2(cinfo,code,p1,p2) ((cinfo)->err->msg_code = (code), (cinfo)->err->msg_parm.i[0] = (p1), (cinfo)->err->msg_parm.i[1] = (p2), (*(cinfo)->err->error_exit) ((j_common_ptr) (cinfo)))
#define ERREXIT3(cinfo,code,p1,p2,p3) ((cinfo)->err->msg_code = (code), (cinfo)->err->msg_parm.i[0] = (p1), (cinfo)->err->msg_parm.i[1] = (p2), (cinfo)->err->msg_parm.i[2] = (p3), (*(cinfo)->err->error_exit) ((j_common_ptr) (cinfo)))
#define ERREXIT4(cinfo,code,p1,p2,p3,p4) ((cinfo)->err->msg_code = (code), (cinfo)->err->msg_parm.i[0] = (p1), (cinfo)->err->msg_parm.i[1] = (p2), (cinfo)->err->msg_parm.i[2] = (p3), (cinfo)->err->msg_parm.i[3] = (p4), (*(cinfo)->err->error_exit) ((j_common_ptr) (cinfo)))
#define ERREXITS(cinfo,code,str) ((cinfo)->err->msg_code = (code), strncpy((cinfo)->err->msg_parm.s, (str), JMSG_STR_PARM_MAX), (*(cinfo)->err->error_exit) ((j_common_ptr) (cinfo)))
#define MAKESTMT(stuff) do { stuff } while (0)
#define WARNMS(cinfo,code) ((cinfo)->err->msg_code = (code), (*(cinfo)->err->emit_message) ((j_common_ptr) (cinfo), -1))
#define WARNMS1(cinfo,code,p1) ((cinfo)->err->msg_code = (code), (cinfo)->err->msg_parm.i[0] = (p1), (*(cinfo)->err->emit_message) ((j_common_ptr) (cinfo), -1))
#define WARNMS2(cinfo,code,p1,p2) ((cinfo)->err->msg_code = (code), (cinfo)->err->msg_parm.i[0] = (p1), (cinfo)->err->msg_parm.i[1] = (p2), (*(cinfo)->err->emit_message) ((j_common_ptr) (cinfo), -1))
#define TRACEMS(cinfo,lvl,code) ((cinfo)->err->msg_code = (code), (*(cinfo)->err->emit_message) ((j_common_ptr) (cinfo), (lvl)))
#define TRACEMS1(cinfo,lvl,code,p1) ((cinfo)->err->msg_code = (code), (cinfo)->err->msg_parm.i[0] = (p1), (*(cinfo)->err->emit_message) ((j_common_ptr) (cinfo), (lvl)))
#define TRACEMS2(cinfo,lvl,code,p1,p2) ((cinfo)->err->msg_code = (code), (cinfo)->err->msg_parm.i[0] = (p1), (cinfo)->err->msg_parm.i[1] = (p2), (*(cinfo)->err->emit_message) ((j_common_ptr) (cinfo), (lvl)))
#define TRACEMS3(cinfo,lvl,code,p1,p2,p3) MAKESTMT(int * _mp = (cinfo)->err->msg_parm.i; _mp[0] = (p1); _mp[1] = (p2); _mp[2] = (p3); (cinfo)->err->msg_code = (code); (*(cinfo)->err->emit_message) ((j_common_ptr) (cinfo), (lvl)); )
#define TRACEMS4(cinfo,lvl,code,p1,p2,p3,p4) MAKESTMT(int * _mp = (cinfo)->err->msg_parm.i; _mp[0] = (p1); _mp[1] = (p2); _mp[2] = (p3); _mp[3] = (p4); (cinfo)->err->msg_code = (code); (*(cinfo)->err->emit_message) ((j_common_ptr) (cinfo), (lvl)); )
#define TRACEMS5(cinfo,lvl,code,p1,p2,p3,p4,p5) MAKESTMT(int * _mp = (cinfo)->err->msg_parm.i; _mp[0] = (p1); _mp[1] = (p2); _mp[2] = (p3); _mp[3] = (p4); _mp[4] = (p5); (cinfo)->err->msg_code = (code); (*(cinfo)->err->emit_message) ((j_common_ptr) (cinfo), (lvl)); )
#define TRACEMS8(cinfo,lvl,code,p1,p2,p3,p4,p5,p6,p7,p8) MAKESTMT(int * _mp = (cinfo)->err->msg_parm.i; _mp[0] = (p1); _mp[1] = (p2); _mp[2] = (p3); _mp[3] = (p4); _mp[4] = (p5); _mp[5] = (p6); _mp[6] = (p7); _mp[7] = (p8); (cinfo)->err->msg_code = (code); (*(cinfo)->err->emit_message) ((j_common_ptr) (cinfo), (lvl)); )
#define TRACEMSS(cinfo,lvl,code,str) ((cinfo)->err->msg_code = (code), strncpy((cinfo)->err->msg_parm.s, (str), JMSG_STR_PARM_MAX), (*(cinfo)->err->emit_message) ((j_common_ptr) (cinfo), (lvl)))
#endif
