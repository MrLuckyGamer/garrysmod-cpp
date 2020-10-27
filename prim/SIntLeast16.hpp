#pragma once

#ifndef GMOD_BASE_PRIM
	#error GMOD_BASE_PRIM not loaded
#endif

#ifndef GMOD_HPP_PRIM_SINTLEAST16
	#define GMOD_HPP_PRIM_SINTLEAST16
	
	#include <cstdint>	// std::int_least16_t

	namespace GMOD_NS_PRIM
	{
		using SIntLeast16 = ::std::int_least16_t;
	}

	#ifdef GMOD_LIB_ALIAS_PRIM
		#ifndef GMOD_ALIAS_PRIM_SINTLEAST16
			#define GMOD_ALIAS_PRIM_SINTLEAST16 ::GMOD_LIB_NS_ALIAS_PRIM::SIntLeast16Prim
		#endif

		using GMOD_ALIAS_PRIM_SINTLEAST16 = ::GMOD_NS_PRIM::SIntLeast16;
	#endif
#endif