#ifndef _OITL_UTILITY_OITL_DEF_HPP
#define _OITL_UTILITY_OITL_DEF_HPP // C++ Header oitl_def.hpp

#if defined(__GNUC__)
	#define _OITL_LANG_VER __cplusplus
	// #if __GNUC__>=10
	// 	#define _OITL_CONCEPT_LIMIT 201907L
	// #else
	// 	#define _OITL_CONCEPT_LIMIT 0x7FFFFFFFL
	// #endif

#elif defined(_MSC_VER)
	#define _OITL_LANG_VER _MSVC_LANG
	// #define _OITL_CONCEPT_LIMIT 201811L

#endif

#if defined(__has_include) && __has_include(<concepts>) && !defined(__clang__)
	#define _OITL_CONCEPT_AVAILABLE
#endif

#endif //C++ Header oitl_def.hpp