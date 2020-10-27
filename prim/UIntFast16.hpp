#pragma once

#ifndef GMOD_BASE_PRIM
	#error GMOD_BASE_PRIM not loaded
#endif

#ifndef GMOD_HPP_PRIM_UINTFAST16
	#define GMOD_HPP_PRIM_UINTFAST16
	
	#include <cstdint>	// std::uint_fast16_t

	namespace GMOD_NS_PRIM
	{
		using UIntFast16 = ::std::uint_fast16_t;
	}

	#ifdef GMOD_LIB_ALIAS_PRIM
		#ifndef GMOD_ALIAS_PRIM_UINTFAST16
			#define GMOD_ALIAS_PRIM_UINTFAST16 ::GMOD_LIB_NS_ALIAS_PRIM::UIntFast16Prim
		#endif

		using GMOD_ALIAS_PRIM_UINTFAST16 = ::GMOD_NS_PRIM::UIntFast16;
	#endif
#endif