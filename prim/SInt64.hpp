#pragma once

#ifndef GMOD_BASE_PRIM
	#error GMOD_BASE_PRIM not loaded
#endif

#ifndef GMOD_HPP_PRIM_SINT64
	#define GMOD_HPP_PRIM_SINT64
	
	#include <cstdint>	// std::int64_t, INT64_MIN, INT64_MAX

	#if defined(INT64_MIN) && defined(INT64_MAX)
		#define GMOD_PRIM_SINT64
		
		namespace GMOD_NS_PRIM
		{
			using SInt64 = ::std::int64_t;
		}
		
		#ifdef GMOD_LIB_ALIAS_PRIM
			#ifndef GMOD_ALIAS_PRIM_SINT64
				#define GMOD_ALIAS_PRIM_SINT64 ::GMOD_LIB_NS_ALIAS_PRIM::SInt64Prim
			#endif
			
			using GMOD_ALIAS_PRIM_SINT64 = ::GMOD_NS_PRIM::SInt64;
		#endif
	#endif
#endif