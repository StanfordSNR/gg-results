// GGHASH:VOk_uZKuKlgIOTHkep35JMuE9dimKpXKhP0toiRNJQBo00001c42
#ifndef Py_PYTHONRUN_H
#define Py_PYTHONRUN_H 
#ifdef __cplusplus
#endif
#define PyCF_MASK (CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_WITH_STATEMENT | CO_FUTURE_PRINT_FUNCTION | CO_FUTURE_UNICODE_LITERALS)
#define PyCF_MASK_OBSOLETE (CO_NESTED)
#define PyCF_SOURCE_IS_UTF8 0x0100
#define PyCF_DONT_IMPLY_DEDENT 0x0200
#define PyCF_ONLY_AST 0x0400
#define PyParser_SimpleParseString(S,B) PyParser_SimpleParseStringFlags(S, B, 0)
#define PyParser_SimpleParseFile(FP,S,B) PyParser_SimpleParseFileFlags(FP, S, B, 0)
#define Py_CompileString(str,p,s) Py_CompileStringFlags(str, p, s, NULL)
#define PyRun_String(str,s,g,l) PyRun_StringFlags(str, s, g, l, NULL)
#define PyRun_AnyFile(fp,name) PyRun_AnyFileExFlags(fp, name, 0, NULL)
#define PyRun_AnyFileEx(fp,name,closeit) PyRun_AnyFileExFlags(fp, name, closeit, NULL)
#define PyRun_AnyFileFlags(fp,name,flags) PyRun_AnyFileExFlags(fp, name, 0, flags)
#define PyRun_SimpleString(s) PyRun_SimpleStringFlags(s, NULL)
#define PyRun_SimpleFile(f,p) PyRun_SimpleFileExFlags(f, p, 0, NULL)
#define PyRun_SimpleFileEx(f,p,c) PyRun_SimpleFileExFlags(f, p, c, NULL)
#define PyRun_InteractiveOne(f,p) PyRun_InteractiveOneFlags(f, p, NULL)
#define PyRun_InteractiveLoop(f,p) PyRun_InteractiveLoopFlags(f, p, NULL)
#define PyRun_File(fp,p,s,g,l) PyRun_FileExFlags(fp, p, s, g, l, 0, NULL)
#define PyRun_FileEx(fp,p,s,g,l,c) PyRun_FileExFlags(fp, p, s, g, l, c, NULL)
#define PyRun_FileFlags(fp,p,s,g,l,flags) PyRun_FileExFlags(fp, p, s, g, l, 0, flags)
#define PYOS_STACK_MARGIN 2048
#if defined(WIN32) && !defined(MS_WIN64) && defined(_MSC_VER) && _MSC_VER >= 1300
#define USE_STACKCHECK 
#endif
#ifdef USE_STACKCHECK
#endif
#ifdef __cplusplus
#endif
#endif
