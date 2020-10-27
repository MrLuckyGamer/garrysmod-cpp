#pragma once

#ifndef GMOD_BASE_PRIM
	#error GMOD_BASE_PRIM not loaded
#endif

#ifndef GMOD_HPP_PRIM_UINTLEAST8
	#define GMOD_HPP_PRIM_UINTLEAST8
	
	#include <cstdint>	// std::uint_least8_t

	namespace GMOD_NS_PRIM
	{
		using UIntLeast8 = ::std::uint_least8_t;
	}

	#ifdef GMOD_LIB_ALIAS_PRIM
		#ifndef GMOD_ALIAS_PRIM_UINTLEAST8
			#define GMOD_ALIAS_PRIM_UINTLEAST8 ::GMOD_LIB_NS_ALIAS_PRIM::UIntLeast8Prim
		#endif

		using GMOD_ALIAS_PRIM_UINTLEAST8 = ::GMOD_NS_PRIM::UIntLeast8;
	#endif
#endif