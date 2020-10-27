#pragma once

#ifndef GMOD_BASE_PRIM
	#error GMOD_BASE_PRIM not loaded
#endif

#ifndef GMOD_HPP_PRIM_SHORTSINT
	#define GMOD_HPP_PRIM_SHORTSINT

	namespace GMOD_NS_PRIM
	{
		using ShortSInt = short signed int;
	}

	#ifdef GMOD_LIB_ALIAS_PRIM
		#ifndef GMOD_ALIAS_PRIM_SHORTSINT
			#define GMOD_ALIAS_PRIM_SHORTSINT ::GMOD_LIB_NS_ALIAS_PRIM::ShortSIntPrim
		#endif

		using GMOD_ALIAS_PRIM_SHORTSINT = ::GMOD_NS_PRIM::ShortSInt;
	#endif
#endif