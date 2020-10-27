#pragma once

#ifndef GMOD_BASE_PRIM
	#error GMOD_BASE_PRIM not loaded
#endif

#ifndef GMOD_HPP_PRIM_UINT
	#define GMOD_HPP_PRIM_UINT

	namespace GMOD_NS_PRIM
	{
		using UInt = unsigned int;
	}

	#ifdef GMOD_LIB_ALIAS_PRIM
		#ifndef GMOD_ALIAS_PRIM_UINT
			#define GMOD_ALIAS_PRIM_UINT ::GMOD_LIB_NS_ALIAS_PRIM::UIntPrim
		#endif

		using GMOD_ALIAS_PRIM_UINT = ::GMOD_NS_PRIM::UInt;
	#endif
#endif