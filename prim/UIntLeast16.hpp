#pragma once

#ifndef GMOD_BASE_PRIM
	#error GMOD_BASE_PRIM not loaded
#endif

#ifndef GMOD_HPP_PRIM_UINTLEAST16
	#define GMOD_HPP_PRIM_UINTLEAST16
	
	#include <cstdint>	// std::uint_least16_t

	namespace GMOD_NS_PRIM
	{
		using UIntLeast16 = ::std::uint_least16_t;
	}

	#ifdef GMOD_LIB_ALIAS_PRIM
		#ifndef GMOD_ALIAS_PRIM_UINTLEAST16
			#define GMOD_ALIAS_PRIM_UINTLEAST16 ::GMOD_LIB_NS_ALIAS_PRIM::UIntLeast16Prim
		#endif

		using GMOD_ALIAS_PRIM_UINTLEAST16 = ::GMOD_NS_PRIM::UIntLeast16;
	#endif
#endif