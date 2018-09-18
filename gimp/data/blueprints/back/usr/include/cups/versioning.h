// GGHASH:V_h83OeVqsF81Iezx9Jtj4dvI6bvLLYOiPHpp1JvWdIA00001ec1
#ifndef _CUPS_VERSIONING_H_
#define _CUPS_VERSIONING_H_ 
# if defined(__APPLE__) && !defined(_CUPS_SOURCE) && !TARGET_OS_IOS
# include <AvailabilityMacros.h>
# ifndef AVAILABLE_MAC_OS_X_VERSION_10_3_AND_LATER
#define AVAILABLE_MAC_OS_X_VERSION_10_3_AND_LATER __attribute__((unavailable))
# endif
# ifndef AVAILABLE_MAC_OS_X_VERSION_10_4_AND_LATER
#define AVAILABLE_MAC_OS_X_VERSION_10_4_AND_LATER __attribute__((unavailable))
# endif
# ifndef AVAILABLE_MAC_OS_X_VERSION_10_5_AND_LATER
#define AVAILABLE_MAC_OS_X_VERSION_10_5_AND_LATER __attribute__((unavailable))
# endif
# ifndef AVAILABLE_MAC_OS_X_VERSION_10_6_AND_LATER
#define AVAILABLE_MAC_OS_X_VERSION_10_6_AND_LATER __attribute__((unavailable))
# endif
# ifndef AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER
#define AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER __attribute__((unavailable))
# endif
# ifndef AVAILABLE_MAC_OS_X_VERSION_10_8_AND_LATER
#define AVAILABLE_MAC_OS_X_VERSION_10_8_AND_LATER __attribute__((unavailable))
# endif
# ifndef AVAILABLE_MAC_OS_X_VERSION_10_9_AND_LATER
#define AVAILABLE_MAC_OS_X_VERSION_10_9_AND_LATER __attribute__((unavailable))
# endif
# ifndef AVAILABLE_MAC_OS_X_VERSION_10_10_AND_LATER
#define AVAILABLE_MAC_OS_X_VERSION_10_10_AND_LATER __attribute__((unavailable))
# endif
# ifndef AVAILABLE_MAC_OS_X_VERSION_10_12_AND_LATER
#define AVAILABLE_MAC_OS_X_VERSION_10_12_AND_LATER __attribute__((unavailable))
# endif
# ifndef AVAILABLE_MAC_OS_X_VERSION_10_13_AND_LATER
#define AVAILABLE_MAC_OS_X_VERSION_10_13_AND_LATER __attribute__((unavailable))
# endif
#define _CUPS_API_1_1_19 AVAILABLE_MAC_OS_X_VERSION_10_3_AND_LATER
#define _CUPS_API_1_1_20 AVAILABLE_MAC_OS_X_VERSION_10_4_AND_LATER
#define _CUPS_API_1_1_21 AVAILABLE_MAC_OS_X_VERSION_10_4_AND_LATER
#define _CUPS_API_1_2 AVAILABLE_MAC_OS_X_VERSION_10_5_AND_LATER
#define _CUPS_API_1_3 AVAILABLE_MAC_OS_X_VERSION_10_5_AND_LATER
#define _CUPS_API_1_4 AVAILABLE_MAC_OS_X_VERSION_10_6_AND_LATER
#define _CUPS_API_1_5 AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER
#define _CUPS_API_1_6 AVAILABLE_MAC_OS_X_VERSION_10_8_AND_LATER
#define _CUPS_API_1_7 AVAILABLE_MAC_OS_X_VERSION_10_9_AND_LATER
#define _CUPS_API_2_0 AVAILABLE_MAC_OS_X_VERSION_10_10_AND_LATER
#define _CUPS_API_2_2 AVAILABLE_MAC_OS_X_VERSION_10_12_AND_LATER
#define _CUPS_API_2_2_4 AVAILABLE_MAC_OS_X_VERSION_10_13_AND_LATER
#define _CUPS_API_2_2_7 
# else
#define _CUPS_API_1_1_19 
#define _CUPS_API_1_1_20 
#define _CUPS_API_1_1_21 
#define _CUPS_API_1_2 
#define _CUPS_API_1_3 
#define _CUPS_API_1_4 
#define _CUPS_API_1_5 
#define _CUPS_API_1_6 
#define _CUPS_API_1_7 
#define _CUPS_API_2_0 
#define _CUPS_API_2_2 
#define _CUPS_API_2_2_4 
#define _CUPS_API_2_2_7 
# endif
# ifdef __has_extension
#define _CUPS_HAS_DEPRECATED 
# if __has_extension(attribute_deprecated_with_message)
#define _CUPS_HAS_DEPRECATED_WITH_MESSAGE 
# endif
# if __has_extension(attribute_unavailable_with_message)
#define _CUPS_HAS_UNAVAILABLE_WITH_MESSAGE 
# endif
# elif defined(__GNUC__)
# if __GNUC__ >= 3
#define _CUPS_HAS_DEPRECATED 
# endif
# if __GNUC__ >= 5
#define _CUPS_HAS_DEPRECATED_WITH_MESSAGE 
# elif __GNUC__ == 4 && __GNUC_MINOR__ >= 5
#define _CUPS_HAS_DEPRECATED_WITH_MESSAGE 
# endif
# endif
# if !defined(_CUPS_HAS_DEPRECATED) || (defined(_CUPS_SOURCE) && !defined(_CUPS_NO_DEPRECATED))
#define _CUPS_DEPRECATED 
#define _CUPS_DEPRECATED_MSG(m) 
#define _CUPS_DEPRECATED_1_6_MSG(m) 
#define _CUPS_DEPRECATED_1_7_MSG(m) 
#define _CUPS_INTERNAL_MSG(m) 
# elif defined(_CUPS_HAS_UNAVAILABLE_WITH_MESSAGE) && defined(_CUPS_NO_DEPRECATED)
#define _CUPS_DEPRECATED __attribute__ ((unavailable))
#define _CUPS_DEPRECATED_MSG(m) __attribute__ ((unavailable(m)))
#define _CUPS_DEPRECATED_1_6_MSG(m) __attribute__ ((unavailable(m)))
#define _CUPS_DEPRECATED_1_7_MSG(m) __attribute__ ((unavailable(m)))
#define _CUPS_INTERNAL_MSG(m) __attribute__ ((unavailable(m)))
# else
#define _CUPS_DEPRECATED __attribute__ ((deprecated))
# ifdef _CUPS_HAS_DEPRECATED_WITH_MESSAGE
#define _CUPS_DEPRECATED_MSG(m) __attribute__ ((deprecated(m)))
# else
#define _CUPS_DEPRECATED_MSG(m) __attribute__ ((deprecated))
# endif
# if defined(MAC_OS_X_VERSION_10_8) && MAC_OS_X_VERSION_MIN_REQUIRED >= MAC_OS_X_VERSION_10_8
#define _CUPS_DEPRECATED_1_6_MSG(m) _CUPS_DEPRECATED_MSG(m)
# else
#define _CUPS_DEPRECATED_1_6_MSG(m) 
# endif
# if defined(MAC_OS_X_VERSION_10_9) && MAC_OS_X_VERSION_MIN_REQUIRED >= MAC_OS_X_VERSION_10_9
#define _CUPS_DEPRECATED_1_7_MSG(m) _CUPS_DEPRECATED_MSG(m)
# else
#define _CUPS_DEPRECATED_1_7_MSG(m) 
# endif
# ifdef _CUPS_SOURCE
#define _CUPS_INTERNAL_MSG(m) 
# elif defined(_CUPS_HAS_UNAVAILABLE_WITH_MESSAGE)
#define _CUPS_INTERNAL_MSG(m) __attribute__ ((unavailable(m)))
# elif defined(_CUPS_HAS_DEPRECATED_WITH_MESSAGE)
#define _CUPS_INTERNAL_MSG(m) __attribute__ ((deprecated(m)))
# else
#define _CUPS_INTERNAL_MSG(m) __attribute__ ((deprecated))
# endif
# endif
# ifndef __GNUC__
#define __attribute__(x) 
# endif
#endif
