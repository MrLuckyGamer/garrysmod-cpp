#pragma once

#ifndef GMOD_BASE_PRIM
	#error GMOD_BASE_PRIM not loaded
#endif

#ifndef GMOD_HPP_PRIM_UINTLEAST64
	#define GMOD_HPP_PRIM_UINTLEAST64
	
	#include <cstdint>	// std::uint_least64_t

	namespace GMOD_NS_PRIM
	{
		using UIntLeast64 = ::std::uint_least64_t;
	}

	#ifdef GMOD_LIB_ALIAS_PRIM
		#ifndef GMOD_ALIAS_PRIM_UINTLEAST64
			#define GMOD_ALIAS_PRIM_UINTLEAST64 ::GMOD_LIB_NS_ALIAS_PRIM::UIntLeast64Prim
		#endif

		using GMOD_ALIAS_PRIM_UINTLEAST64 = ::GMOD_NS_PRIM::UIntLeast64;
	#endif
#endif