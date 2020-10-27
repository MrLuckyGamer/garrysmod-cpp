#pragma once

#ifndef GMOD_BASE_PRIM
	#error GMOD_BASE_PRIM not loaded
#endif

#ifndef GMOD_HPP_PRIM_SINTLEAST8
	#define GMOD_HPP_PRIM_SINTLEAST8
	
	#include <cstdint>	// std::int_least8_t

	namespace GMOD_NS_PRIM
	{
		using SIntLeast8 = ::std::int_least8_t;
	}

	#ifdef GMOD_LIB_ALIAS_PRIM
		#ifndef GMOD_ALIAS_PRIM_SINTLEAST8
			#define GMOD_ALIAS_PRIM_SINTLEAST8 ::GMOD_LIB_NS_ALIAS_PRIM::SIntLeast8Prim
		#endif

		using GMOD_ALIAS_PRIM_SINTLEAST8 = ::GMOD_NS_PRIM::SIntLeast8;
	#endif
#endif