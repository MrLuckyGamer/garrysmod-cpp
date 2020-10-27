#pragma once

#ifndef GMOD_BASE_PRIM
	#error GMOD_BASE_PRIM not loaded
#endif

#ifndef GMOD_HPP_PRIM_LONGLONGSINT
	#define GMOD_HPP_PRIM_LONGLONGSINT

	namespace GMOD_NS_PRIM
	{
		using LongLongSInt = long long signed int;
	}

	#ifdef GMOD_LIB_ALIAS_PRIM
		#ifndef GMOD_ALIAS_PRIM_LONGLONGSINT
			#define GMOD_ALIAS_PRIM_LONGLONGSINT ::GMOD_LIB_NS_ALIAS_PRIM::LongLongSIntPrim
		#endif

		using GMOD_ALIAS_PRIM_LONGLONGSINT = ::GMOD_NS_PRIM::LongLongSInt;
	#endif
#endif