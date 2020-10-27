#pragma once

#ifndef GMOD_BASE_PRIM
	#error GMOD_BASE_PRIM not loaded
#endif

#ifndef GMOD_HPP_PRIM_SINTLEAST64
	#define GMOD_HPP_PRIM_SINTLEAST64
	
	#include <cstdint>	// std::int_least64_t

	namespace GMOD_NS_PRIM
	{
		using SIntLeast64 = ::std::int_least64_t;
	}

	#ifdef GMOD_LIB_ALIAS_PRIM
		#ifndef GMOD_ALIAS_PRIM_SINTLEAST64
			#define GMOD_ALIAS_PRIM_SINTLEAST64 ::GMOD_LIB_NS_ALIAS_PRIM::SIntLeast64Prim
		#endif

		using GMOD_ALIAS_PRIM_SINTLEAST64 = ::GMOD_NS_PRIM::SIntLeast64;
	#endif
#endif