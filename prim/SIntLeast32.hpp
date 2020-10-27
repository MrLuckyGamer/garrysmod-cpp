#pragma once

#ifndef GMOD_BASE_PRIM
	#error GMOD_BASE_PRIM not loaded
#endif

#ifndef GMOD_HPP_PRIM_SINTLEAST32
	#define GMOD_HPP_PRIM_SINTLEAST32
	
	#include <cstdint>	// std::int_least32_t

	namespace GMOD_NS_PRIM
	{
		using SIntLeast32 = ::std::int_least32_t;
	}

	#ifdef GMOD_LIB_ALIAS_PRIM
		#ifndef GMOD_ALIAS_PRIM_SINTLEAST32
			#define GMOD_ALIAS_PRIM_SINTLEAST32 ::GMOD_LIB_NS_ALIAS_PRIM::SIntLeast32Prim
		#endif

		using GMOD_ALIAS_PRIM_SINTLEAST32 = ::GMOD_NS_PRIM::SIntLeast32;
	#endif
#endif