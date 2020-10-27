#pragma once

#ifndef GMOD_BASE_PRIM
	#error GMOD_BASE_PRIM not loaded
#endif

#ifndef GMOD_HPP_PRIM_UCHARLEAST8
	#define GMOD_HPP_PRIM_UCHARLEAST8

	namespace GMOD_NS_PRIM
	{
		using UCharLeast8 = char8_t;
	}

	#ifdef GMOD_LIB_ALIAS_PRIM
		#ifndef GMOD_ALIAS_PRIM_UCHARLEAST8
			#define GMOD_ALIAS_PRIM_UCHARLEAST8 ::GMOD_LIB_NS_ALIAS_PRIM::UCharLeast8Prim
		#endif

		using GMOD_ALIAS_PRIM_UCHARLEAST8 = ::GMOD_NS_PRIM::UCharLeast8;
	#endif
#endif