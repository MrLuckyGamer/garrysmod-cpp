#pragma once

#ifndef GMOD_BASE_PRIM
	#error GMOD_BASE_PRIM not loaded
#endif

#ifndef GMOD_HPP_PRIM_LONGUINT
	#define GMOD_HPP_PRIM_LONGUINT

	namespace GMOD_NS_PRIM
	{
		using LongUInt = long unsigned int;
	}

	#ifdef GMOD_LIB_ALIAS_PRIM
		#ifndef GMOD_ALIAS_PRIM_LONGUINT
			#define GMOD_ALIAS_PRIM_LONGUINT ::GMOD_LIB_NS_ALIAS_PRIM::LongUIntPrim
		#endif

		using GMOD_ALIAS_PRIM_LONGUINT = ::GMOD_NS_PRIM::LongUInt;
	#endif
#endif