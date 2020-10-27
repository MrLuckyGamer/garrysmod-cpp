#pragma once

#ifndef GMOD_BASE_PRIM
	#error GMOD_BASE_PRIM not loaded
#endif

#ifndef GMOD_HPP_PRIM_MAXUINT
	#define GMOD_HPP_PRIM_MAXUINT

	#include <cstdint>	// std::uintmax_t

	namespace GMOD_NS_PRIM
	{
		using MaxUInt = ::std::uintmax_t;
	}

	#ifdef GMOD_LIB_ALIAS_PRIM
		#ifndef GMOD_ALIAS_PRIM_MAXUINT
			#define GMOD_ALIAS_PRIM_MAXUINT ::GMOD_LIB_NS_ALIAS_PRIM::MaxUIntPrim
		#endif

		using GMOD_ALIAS_PRIM_MAXUINT = ::GMOD_NS_PRIM::MaxUInt;
	#endif
#endif