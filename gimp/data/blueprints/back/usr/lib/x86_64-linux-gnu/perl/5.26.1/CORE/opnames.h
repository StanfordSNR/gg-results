// GGHASH:VoI_7EOIDjpCqMTuDJfYA60TfnTtC2ji5jsz.IFqxFEc00002284
#define MAXO 396
#define OP_FREED MAXO
#define OP_IS_SOCKET(op) ((op) >= OP_SEND && (op) <= OP_GETPEERNAME)
#define OP_IS_FILETEST(op) ((op) >= OP_FTRREAD && (op) <= OP_FTBINARY)
#define OP_IS_FILETEST_ACCESS(op) ((op) >= OP_FTRREAD && (op) <= OP_FTEEXEC)
#define OP_IS_NUMCOMPARE(op) ((op) >= OP_LT && (op) <= OP_I_NCMP)
#define OP_IS_DIRHOP(op) ((op) >= OP_READDIR && (op) <= OP_CLOSEDIR)
#define OP_IS_INFIX_BIT(op) ((op) >= OP_BIT_AND && (op) <= OP_SBIT_OR)
