#pragma once

#ifndef GMOD_BASE_PRIM
	#error GMOD_BASE_PRIM not loaded
#endif

#ifndef GMOD_HPP_PRIM_UINT32
	#define GMOD_HPP_PRIM_UINT32
	
	#include <cstdint>	// std::uint32_t, UINT32_MIN, UINT32_MAX

	#if defined(UINT32_MIN) && defined(UINT32_MAX)
		#define GMOD_PRIM_UINT32
		
		namespace GMOD_NS_PRIM
		{
			using UInt32 = ::std::uint32_t;
		}
		
		#ifdef GMOD_LIB_ALIAS_PRIM
			#ifndef GMOD_ALIAS_PRIM_UINT32
				#define GMOD_ALIAS_PRIM_UINT32 ::GMOD_LIB_NS_ALIAS_PRIM::UInt32Prim
			#endif
			
			using GMOD_ALIAS_PRIM_UINT32 = ::GMOD_NS_PRIM::UInt32;
		#endif
	#endif
#endif