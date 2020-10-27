#pragma once

#ifndef GMOD_BASE_PRIM
	#error GMOD_BASE_PRIM not loaded
#endif

#ifndef GMOD_HPP_PRIM_SINT8
	#define GMOD_HPP_PRIM_SINT8
	
	#include <cstdint>	// std::int8_t, INT8_MIN, INT8_MAX

	#if defined(INT8_MIN) && defined(INT8_MAX)
		#define GMOD_PRIM_SINT8
		
		namespace GMOD_NS_PRIM
		{
			using SInt8 = ::std::int8_t;
		}
		
		#ifdef GMOD_LIB_ALIAS_PRIM
			#ifndef GMOD_ALIAS_PRIM_SINT8
				#define GMOD_ALIAS_PRIM_SINT8 ::GMOD_LIB_NS_ALIAS_PRIM::SInt8Prim
			#endif
			
			using GMOD_ALIAS_PRIM_SINT8 = ::GMOD_NS_PRIM::SInt8;
		#endif
	#endif
#endif