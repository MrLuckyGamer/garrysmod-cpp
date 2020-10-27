#pragma once

#ifndef GMOD_BASE_PRIM
	#error GMOD_BASE_PRIM not loaded
#endif

#ifndef GMOD_HPP_PRIM_UCHARLEAST16
	#define GMOD_HPP_PRIM_UCHARLEAST16

	namespace GMOD_NS_PRIM
	{
		using UCharLeast16 = char16_t;
	}

	#ifdef GMOD_LIB_ALIAS_PRIM
		#ifndef GMOD_ALIAS_PRIM_UCHARLEAST16
			#define GMOD_ALIAS_PRIM_UCHARLEAST16 ::GMOD_LIB_NS_ALIAS_PRIM::UCharLeast16Prim
		#endif

		using GMOD_ALIAS_PRIM_UCHARLEAST16 = ::GMOD_NS_PRIM::UCharLeast16;
	#endif
#endif