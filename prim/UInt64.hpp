#pragma once

#ifndef GMOD_BASE_PRIM
	#error GMOD_BASE_PRIM not loaded
#endif

#ifndef GMOD_HPP_PRIM_UINT64
	#define GMOD_HPP_PRIM_UINT64
	
	#include <cstdint>	// std::uint64_t, UINT64_MIN, UINT64_MAX

	#if defined(UINT64_MIN) && defined(UINT64_MAX)
		#define GMOD_PRIM_UINT64
		
		namespace GMOD_NS_PRIM
		{
			using UInt64 = ::std::uint64_t;
		}
		
		#ifdef GMOD_LIB_ALIAS_PRIM
			#ifndef GMOD_ALIAS_PRIM_UINT64
				#define GMOD_ALIAS_PRIM_UINT64 ::GMOD_LIB_NS_ALIAS_PRIM::UInt64Prim
			#endif
			
			using GMOD_ALIAS_PRIM_UINT64 = ::GMOD_NS_PRIM::UInt64;
		#endif
	#endif
#endif