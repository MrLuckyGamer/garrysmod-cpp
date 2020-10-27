#pragma once

#ifndef GMOD_BASE_PRIM
	#error GMOD_BASE_PRIM not loaded
#endif

#ifndef GMOD_HPP_PRIM_UINTLEAST32
	#define GMOD_HPP_PRIM_UINTLEAST32
	
	#include <cstdint>	// std::uint_least32_t

	namespace GMOD_NS_PRIM
	{
		using UIntLeast32 = ::std::uint_least32_t;
	}

	#ifdef GMOD_LIB_ALIAS_PRIM
		#ifndef GMOD_ALIAS_PRIM_UINTLEAST32
			#define GMOD_ALIAS_PRIM_UINTLEAST32 ::GMOD_LIB_NS_ALIAS_PRIM::UIntLeast32Prim
		#endif

		using GMOD_ALIAS_PRIM_UINTLEAST32 = ::GMOD_NS_PRIM::UIntLeast32;
	#endif
#endif