#pragma once

#ifndef GMOD_BASE_PRIM
	#error GMOD_BASE_PRIM not loaded
#endif

#ifndef GMOD_HPP_PRIM_LONGLONGUINT
	#define GMOD_HPP_PRIM_LONGLONGUINT

	namespace GMOD_NS_PRIM
	{
		using LongLongUInt = long long unsigned int;
	}

	#ifdef GMOD_LIB_ALIAS_PRIM
		#ifndef GMOD_ALIAS_PRIM_LONGLONGUINT
			#define GMOD_ALIAS_PRIM_LONGLONGUINT ::GMOD_LIB_NS_ALIAS_PRIM::LongLongUIntPrim
		#endif

		using GMOD_ALIAS_PRIM_LONGLONGUINT = ::GMOD_NS_PRIM::LongLongUInt;
	#endif
#endif