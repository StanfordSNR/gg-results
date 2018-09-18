// GGHASH:V_gM12aleEqMyzSV6ZdbTQ1qrpNxRu2mK6r7wa8fbC9k0000051a
#ifndef _ASM_X86_LDT_H
#define _ASM_X86_LDT_H 
#define LDT_ENTRIES 8192
#define LDT_ENTRY_SIZE 8
#ifndef __ASSEMBLY__
#ifdef __x86_64__
#endif
#define MODIFY_LDT_CONTENTS_DATA 0
#define MODIFY_LDT_CONTENTS_STACK 1
#define MODIFY_LDT_CONTENTS_CODE 2
#endif
#endif
