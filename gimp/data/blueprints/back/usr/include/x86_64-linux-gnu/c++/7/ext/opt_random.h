// GGHASH:VN7vb9RvqEpgupqI5bSL8DUfyymSYX_R01azXFuIzv9U00001294
#ifndef _EXT_OPT_RANDOM_H
#define _EXT_OPT_RANDOM_H 1
#if __BYTE_ORDER__ == __ORDER_LITTLE_ENDIAN__
#ifdef __SSE2__
#define _GLIBCXX_OPT_HAVE_RANDOM_SFMT_GEN_READ 1
#define _GLIBCXX_OPT_HAVE_RANDOM_SFMT_OPERATOREQUAL 1
#endif
#endif
#endif