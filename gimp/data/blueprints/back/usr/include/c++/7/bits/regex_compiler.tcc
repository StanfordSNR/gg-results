// GGHASH:Vs6oxAcCdEpyH3dLgBMs5Ih4r84WeE5ivJm0mtbljUWE000049d5
#define __INSERT_REGEX_MATCHER(__func,args...) do if (!(_M_flags & regex_constants::icase)) if (!(_M_flags & regex_constants::collate)) __func<false, false>(args); else __func<false, true>(args); else if (!(_M_flags & regex_constants::collate)) __func<true, false>(args); else __func<true, true>(args); while (false)
#undef __INSERT_REGEX_MATCHER
