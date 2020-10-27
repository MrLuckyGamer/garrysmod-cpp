#pragma once

#ifndef GMOD_BASE_PRIM
	#error GMOD_BASE_PRIM not loaded
#endif

#ifndef GMOD_HPP_PRIM_SINT16
	#define GMOD_HPP_PRIM_SINT16
	
	#include <cstdint>	// std::int16_t, INT16_MIN, INT16_MAX

	#if defined(INT16_MIN) && defined(INT16_MAX)
		#define GMOD_PRIM_SINT16
		
		namespace GMOD_NS_PRIM
		{
			using SInt16 = ::std::int16_t;
		}
		
		#ifdef GMOD_LIB_ALIAS_PRIM
			#ifndef GMOD_ALIAS_PRIM_SINT16
				#define GMOD_ALIAS_PRIM_SINT16 ::GMOD_LIB_NS_ALIAS_PRIM::SInt16Prim
			#endif
			
			using GMOD_ALIAS_PRIM_SINT16 = ::GMOD_NS_PRIM::SInt16;
		#endif
	#endif
#endif