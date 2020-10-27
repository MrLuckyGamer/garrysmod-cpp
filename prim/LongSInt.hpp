#pragma once

#ifndef GMOD_BASE_PRIM
	#error GMOD_BASE_PRIM not loaded
#endif

#ifndef GMOD_HPP_PRIM_LONGSINT
	#define GMOD_HPP_PRIM_LONGSINT

	namespace GMOD_NS_PRIM
	{
		using LongSInt = long signed int;
	}

	#ifdef GMOD_LIB_ALIAS_PRIM
		#ifndef GMOD_ALIAS_PRIM_LONGSINT
			#define GMOD_ALIAS_PRIM_LONGSINT ::GMOD_LIB_NS_ALIAS_PRIM::LongSIntPrim
		#endif

		using GMOD_ALIAS_PRIM_LONGSINT = ::GMOD_NS_PRIM::LongSInt;
	#endif
#endif