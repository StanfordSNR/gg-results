// GGHASH:VyNA9kLhtl7PskD7P88aFH995rYpTz9HnU1x1W7ZOMq800008bfa
#define REGNODE_MAX 92
#define REGMATCH_STATE_MAX 134
#define END 0
#define SUCCEED 1
#define SBOL 2
#define BOL 2
#define MBOL 3
#define SEOL 4
#define EOL 4
#define MEOL 5
#define EOS 6
#define GPOS 7
#define BOUND 8
#define BOUNDL 9
#define BOUNDU 10
#define BOUNDA 11
#define NBOUND 12
#define NBOUNDL 13
#define NBOUNDU 14
#define NBOUNDA 15
#define REG_ANY 16
#define SANY 17
#define ANYOF 18
#define ANYOFD 19
#define ANYOFL 20
#define POSIXD 21
#define POSIXL 22
#define POSIXU 23
#define POSIXA 24
#define NPOSIXD 25
#define NPOSIXL 26
#define NPOSIXU 27
#define NPOSIXA 28
#define CLUMP 29
#define BRANCH 30
#define EXACT 31
#define EXACTL 32
#define EXACTF 33
#define EXACTFL 34
#define EXACTFU 35
#define EXACTFA 36
#define EXACTFU_SS 37
#define EXACTFLU8 38
#define EXACTFA_NO_TRIE 39
#define NOTHING 40
#define TAIL 41
#define STAR 42
#define PLUS 43
#define CURLY 44
#define CURLYN 45
#define CURLYM 46
#define CURLYX 47
#define WHILEM 48
#define OPEN 49
#define CLOSE 50
#define REF 51
#define REFF 52
#define REFFL 53
#define REFFU 54
#define REFFA 55
#define NREF 56
#define NREFF 57
#define NREFFL 58
#define NREFFU 59
#define NREFFA 60
#define LONGJMP 61
#define BRANCHJ 62
#define IFMATCH 63
#define UNLESSM 64
#define SUSPEND 65
#define IFTHEN 66
#define GROUPP 67
#define EVAL 68
#define MINMOD 69
#define LOGICAL 70
#define RENUM 71
#define TRIE 72
#define TRIEC 73
#define AHOCORASICK 74
#define AHOCORASICKC 75
#define GOSUB 76
#define NGROUPP 77
#define INSUBP 78
#define DEFINEP 79
#define ENDLIKE 80
#define OPFAIL 81
#define ACCEPT 82
#define VERB 83
#define PRUNE 84
#define MARKPOINT 85
#define SKIP 86
#define COMMIT 87
#define CUTGROUP 88
#define KEEPS 89
#define LNBREAK 90
#define OPTIMIZED 91
#define PSEUDO 92
#define TRIE_next (REGNODE_MAX + 1)
#define TRIE_next_fail (REGNODE_MAX + 2)
#define EVAL_B (REGNODE_MAX + 3)
#define EVAL_B_fail (REGNODE_MAX + 4)
#define EVAL_postponed_AB (REGNODE_MAX + 5)
#define EVAL_postponed_AB_fail (REGNODE_MAX + 6)
#define CURLYX_end (REGNODE_MAX + 7)
#define CURLYX_end_fail (REGNODE_MAX + 8)
#define WHILEM_A_pre (REGNODE_MAX + 9)
#define WHILEM_A_pre_fail (REGNODE_MAX + 10)
#define WHILEM_A_min (REGNODE_MAX + 11)
#define WHILEM_A_min_fail (REGNODE_MAX + 12)
#define WHILEM_A_max (REGNODE_MAX + 13)
#define WHILEM_A_max_fail (REGNODE_MAX + 14)
#define WHILEM_B_min (REGNODE_MAX + 15)
#define WHILEM_B_min_fail (REGNODE_MAX + 16)
#define WHILEM_B_max (REGNODE_MAX + 17)
#define WHILEM_B_max_fail (REGNODE_MAX + 18)
#define BRANCH_next (REGNODE_MAX + 19)
#define BRANCH_next_fail (REGNODE_MAX + 20)
#define CURLYM_A (REGNODE_MAX + 21)
#define CURLYM_A_fail (REGNODE_MAX + 22)
#define CURLYM_B (REGNODE_MAX + 23)
#define CURLYM_B_fail (REGNODE_MAX + 24)
#define IFMATCH_A (REGNODE_MAX + 25)
#define IFMATCH_A_fail (REGNODE_MAX + 26)
#define CURLY_B_min_known (REGNODE_MAX + 27)
#define CURLY_B_min_known_fail (REGNODE_MAX + 28)
#define CURLY_B_min (REGNODE_MAX + 29)
#define CURLY_B_min_fail (REGNODE_MAX + 30)
#define CURLY_B_max (REGNODE_MAX + 31)
#define CURLY_B_max_fail (REGNODE_MAX + 32)
#define COMMIT_next (REGNODE_MAX + 33)
#define COMMIT_next_fail (REGNODE_MAX + 34)
#define MARKPOINT_next (REGNODE_MAX + 35)
#define MARKPOINT_next_fail (REGNODE_MAX + 36)
#define SKIP_next (REGNODE_MAX + 37)
#define SKIP_next_fail (REGNODE_MAX + 38)
#define CUTGROUP_next (REGNODE_MAX + 39)
#define CUTGROUP_next_fail (REGNODE_MAX + 40)
#define KEEPS_next (REGNODE_MAX + 41)
#define KEEPS_next_fail (REGNODE_MAX + 42)
#ifndef DOINIT
#else
#endif
#ifdef REG_COMP_C
#endif
#ifndef DOINIT
#else
#endif
#ifndef DOINIT
#else
#endif
#ifdef DEBUGGING
#define REG_EXTFLAGS_NAME_SIZE 32
#endif
#ifndef DOINIT
#else
#endif
#ifdef DEBUGGING
#define REG_INTFLAGS_NAME_SIZE 13
#endif
#define REGNODE_VARIES(node) (PL_varies_bitmask[(node) >> 3] & (1 << ((node) & 7)))
#ifndef DOINIT
#else
#endif
#ifndef DOINIT
#else
#endif
#define REGNODE_SIMPLE(node) (PL_simple_bitmask[(node) >> 3] & (1 << ((node) & 7)))
#ifndef DOINIT
#else
#endif
#ifndef DOINIT
#else
#endif
