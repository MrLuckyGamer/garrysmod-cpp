#pragma once

#ifndef GMOD_BASE_PRIM
	#error GMOD_BASE_PRIM not loaded
#endif

#ifndef GMOD_HPP_PRIM_SINTFAST32
	#define GMOD_HPP_PRIM_SINTFAST32
	
	#include <cstdint>	// std::int_fast32_t

	namespace GMOD_NS_PRIM
	{
		using SIntFast32 = ::std::int_fast32_t;
	}

	#ifdef GMOD_LIB_ALIAS_PRIM
		#ifndef GMOD_ALIAS_PRIM_SINTFAST32
			#define GMOD_ALIAS_PRIM_SINTFAST32 ::GMOD_LIB_NS_ALIAS_PRIM::SIntFast32Prim
		#endif

		using GMOD_ALIAS_PRIM_SINTFAST32 = ::GMOD_NS_PRIM::SIntFast32;
	#endif
#endif