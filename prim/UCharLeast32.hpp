#pragma once

#ifndef GMOD_BASE_PRIM
	#error GMOD_BASE_PRIM not loaded
#endif

#ifndef GMOD_HPP_PRIM_UCHARLEAST32
	#define GMOD_HPP_PRIM_UCHARLEAST32

	namespace GMOD_NS_PRIM
	{
		using UCharLeast32 = char32_t;
	}

	#ifdef GMOD_LIB_ALIAS_PRIM
		#ifndef GMOD_ALIAS_PRIM_UCHARLEAST32
			#define GMOD_ALIAS_PRIM_UCHARLEAST32 ::GMOD_LIB_NS_ALIAS_PRIM::UCharLeast32Prim
		#endif

		using GMOD_ALIAS_PRIM_UCHARLEAST32 = ::GMOD_NS_PRIM::UCharLeast32;
	#endif
#endif