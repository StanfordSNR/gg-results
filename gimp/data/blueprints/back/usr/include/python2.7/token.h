// GGHASH:VtwEZ.KE8EIaQKvkhF25TwT5q6XI0L8rly4MvCeCHlhk00000707
#ifndef Py_TOKEN_H
#define Py_TOKEN_H 
#ifdef __cplusplus
#endif
#undef TILDE
#define ENDMARKER 0
#define NAME 1
#define NUMBER 2
#define STRING 3
#define NEWLINE 4
#define INDENT 5
#define DEDENT 6
#define LPAR 7
#define RPAR 8
#define LSQB 9
#define RSQB 10
#define COLON 11
#define COMMA 12
#define SEMI 13
#define PLUS 14
#define MINUS 15
#define STAR 16
#define SLASH 17
#define VBAR 18
#define AMPER 19
#define LESS 20
#define GREATER 21
#define EQUAL 22
#define DOT 23
#define PERCENT 24
#define BACKQUOTE 25
#define LBRACE 26
#define RBRACE 27
#define EQEQUAL 28
#define NOTEQUAL 29
#define LESSEQUAL 30
#define GREATEREQUAL 31
#define TILDE 32
#define CIRCUMFLEX 33
#define LEFTSHIFT 34
#define RIGHTSHIFT 35
#define DOUBLESTAR 36
#define PLUSEQUAL 37
#define MINEQUAL 38
#define STAREQUAL 39
#define SLASHEQUAL 40
#define PERCENTEQUAL 41
#define AMPEREQUAL 42
#define VBAREQUAL 43
#define CIRCUMFLEXEQUAL 44
#define LEFTSHIFTEQUAL 45
#define RIGHTSHIFTEQUAL 46
#define DOUBLESTAREQUAL 47
#define DOUBLESLASH 48
#define DOUBLESLASHEQUAL 49
#define AT 50
#define OP 51
#define ERRORTOKEN 52
#define N_TOKENS 53
#define NT_OFFSET 256
#define ISTERMINAL(x) ((x) < NT_OFFSET)
#define ISNONTERMINAL(x) ((x) >= NT_OFFSET)
#define ISEOF(x) ((x) == ENDMARKER)
#ifdef __cplusplus
#endif
#endif
