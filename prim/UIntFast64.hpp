#pragma once

#ifndef GMOD_BASE_PRIM
	#error GMOD_BASE_PRIM not loaded
#endif

#ifndef GMOD_HPP_PRIM_UINTFAST64
	#define GMOD_HPP_PRIM_UINTFAST64
	
	#include <cstdint>	// std::uint_fast64_t

	namespace GMOD_NS_PRIM
	{
		using UIntFast64 = ::std::uint_fast64_t;
	}

	#ifdef GMOD_LIB_ALIAS_PRIM
		#ifndef GMOD_ALIAS_PRIM_UINTFAST64
			#define GMOD_ALIAS_PRIM_UINTFAST64 ::GMOD_LIB_NS_ALIAS_PRIM::UIntFast64Prim
		#endif

		using GMOD_ALIAS_PRIM_UINTFAST64 = ::GMOD_NS_PRIM::UIntFast64;
	#endif
#endif