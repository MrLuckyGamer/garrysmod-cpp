#pragma once

#ifndef GMOD_BASE_PRIM
	#error GMOD_BASE_PRIM not loaded
#endif

#ifndef GMOD_HPP_PRIM_SINTFAST64
	#define GMOD_HPP_PRIM_SINTFAST64
	
	#include <cstdint>	// std::int_fast64_t

	namespace GMOD_NS_PRIM
	{
		using SIntFast64 = ::std::int_fast64_t;
	}

	#ifdef GMOD_LIB_ALIAS_PRIM
		#ifndef GMOD_ALIAS_PRIM_SINTFAST64
			#define GMOD_ALIAS_PRIM_SINTFAST64 ::GMOD_LIB_NS_ALIAS_PRIM::SIntFast64Prim
		#endif

		using GMOD_ALIAS_PRIM_SINTFAST64 = ::GMOD_NS_PRIM::SIntFast64;
	#endif
#endif