#pragma once

#ifndef GMOD_BASE_PRIM
	#error GMOD_BASE_PRIM not loaded
#endif

#ifndef GMOD_HPP_PRIM_UINT16
	#define GMOD_HPP_PRIM_UINT16
	
	#include <cstdint>	// std::uint16_t, UINT16_MIN, UINT16_MAX

	#if defined(UINT16_MIN) && defined(UINT16_MAX)
		#define GMOD_PRIM_UINT16
		
		namespace GMOD_NS_PRIM
		{
			using UInt16 = ::std::uint16_t;
		}
		
		#ifdef GMOD_LIB_ALIAS_PRIM
			#ifndef GMOD_ALIAS_PRIM_UINT16
				#define GMOD_ALIAS_PRIM_UINT16 ::GMOD_LIB_NS_ALIAS_PRIM::UInt16Prim
			#endif
			
			using GMOD_ALIAS_PRIM_UINT16 = ::GMOD_NS_PRIM::UInt16;
		#endif
	#endif
#endif