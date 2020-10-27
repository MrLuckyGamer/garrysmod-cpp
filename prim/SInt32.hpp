#pragma once

#ifndef GMOD_BASE_PRIM
	#error GMOD_BASE_PRIM not loaded
#endif

#ifndef GMOD_HPP_PRIM_SINT32
	#define GMOD_HPP_PRIM_SINT32
	
	#include <cstdint>	// std::int32_t, INT32_MIN, INT32_MAX

	#if defined(INT32_MIN) && defined(INT32_MAX)
		#define GMOD_PRIM_SINT32
		
		namespace GMOD_NS_PRIM
		{
			using SInt32 = ::std::int32_t;
		}
		
		#ifdef GMOD_LIB_ALIAS_PRIM
			#ifndef GMOD_ALIAS_PRIM_SINT32
				#define GMOD_ALIAS_PRIM_SINT32 ::GMOD_LIB_NS_ALIAS_PRIM::SInt32Prim
			#endif
			
			using GMOD_ALIAS_PRIM_SINT32 = ::GMOD_NS_PRIM::SInt32;
		#endif
	#endif
#endif