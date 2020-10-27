#pragma once

#ifndef GMOD_BASE_PRIM
	#error GMOD_BASE_PRIM not loaded
#endif

#ifndef GMOD_HPP_PRIM_SINTFAST8
	#define GMOD_HPP_PRIM_SINTFAST8
	
	#include <cstdint>	// std::int_fast8_t

	namespace GMOD_NS_PRIM
	{
		using SIntFast8 = ::std::int_fast8_t;
	}

	#ifdef GMOD_LIB_ALIAS_PRIM
		#ifndef GMOD_ALIAS_PRIM_SINTFAST8
			#define GMOD_ALIAS_PRIM_SINTFAST8 ::GMOD_LIB_NS_ALIAS_PRIM::SIntFast8Prim
		#endif

		using GMOD_ALIAS_PRIM_SINTFAST8 = ::GMOD_NS_PRIM::SIntFast8;
	#endif
#endif