#pragma once

#ifndef GMOD_BASE_PRIM
	#error GMOD_BASE_PRIM not loaded
#endif

#ifndef GMOD_HPP_PRIM_UINT8
	#define GMOD_HPP_PRIM_UINT8
	
	#include <cstdint>	// std::uint8_t, UINT8_MIN, UINT8_MAX

	#if defined(UINT8_MIN) && defined(UINT8_MAX)
		#define GMOD_PRIM_UINT8
		
		namespace GMOD_NS_PRIM
		{
			using UInt8 = ::std::uint8_t;
		}
		
		#ifdef GMOD_LIB_ALIAS_PRIM
			#ifndef GMOD_ALIAS_PRIM_UINT8
				#define GMOD_ALIAS_PRIM_UINT8 ::GMOD_LIB_NS_ALIAS_PRIM::UInt8Prim
			#endif
			
			using GMOD_ALIAS_PRIM_UINT8 = ::GMOD_NS_PRIM::UInt8;
		#endif
	#endif
#endif