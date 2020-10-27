#pragma once

#ifndef GMOD_BASE_PRIM
	#error GMOD_BASE_PRIM not loaded
#endif

#ifndef GMOD_HPP_PRIM_UINTFAST32
	#define GMOD_HPP_PRIM_UINTFAST32
	
	#include <cstdint>	// std::uint_fast32_t

	namespace GMOD_NS_PRIM
	{
		using UIntFast32 = ::std::uint_fast32_t;
	}

	#ifdef GMOD_LIB_ALIAS_PRIM
		#ifndef GMOD_ALIAS_PRIM_UINTFAST32
			#define GMOD_ALIAS_PRIM_UINTFAST32 ::GMOD_LIB_NS_ALIAS_PRIM::UIntFast32Prim
		#endif

		using GMOD_ALIAS_PRIM_UINTFAST32 = ::GMOD_NS_PRIM::UIntFast32;
	#endif
#endif