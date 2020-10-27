#pragma once

#ifndef GMOD_BASE_PRIM
	#error GMOD_BASE_PRIM not loaded
#endif

#ifndef GMOD_HPP_PRIM_MAXSINT
	#define GMOD_HPP_PRIM_MAXSINT

	#include <cstdint>	// std::intmax_t

	namespace GMOD_NS_PRIM
	{
		using MaxSInt = ::std::intmax_t;
	}

	#ifdef GMOD_LIB_ALIAS_PRIM
		#ifndef GMOD_ALIAS_PRIM_MAXSINT
			#define GMOD_ALIAS_PRIM_MAXSINT ::GMOD_LIB_NS_ALIAS_PRIM::MaxSIntPrim
		#endif

		using GMOD_ALIAS_PRIM_MAXSINT = ::GMOD_NS_PRIM::MaxSInt;
	#endif
#endif