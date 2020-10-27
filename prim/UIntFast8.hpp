#pragma once

#ifndef GMOD_BASE_PRIM
	#error GMOD_BASE_PRIM not loaded
#endif

#ifndef GMOD_HPP_PRIM_UINTFAST8
	#define GMOD_HPP_PRIM_UINTFAST8
	
	#include <cstdint>	// std::uint_fast8_t

	namespace GMOD_NS_PRIM
	{
		using UIntFast8 = ::std::uint_fast8_t;
	}

	#ifdef GMOD_LIB_ALIAS_PRIM
		#ifndef GMOD_ALIAS_PRIM_UINTFAST8
			#define GMOD_ALIAS_PRIM_UINTFAST8 ::GMOD_LIB_NS_ALIAS_PRIM::UIntFast8Prim
		#endif

		using GMOD_ALIAS_PRIM_UINTFAST8 = ::GMOD_NS_PRIM::UIntFast8;
	#endif
#endif