#pragma once

#ifndef GMOD_BASE_PRIM
	#error GMOD_BASE_PRIM not loaded
#endif

#ifndef GMOD_HPP_PRIM_BOOL
	#define GMOD_HPP_PRIM_BOOL

	namespace GMOD_NS_PRIM
	{
		using Bool = bool;
	}
	
	#ifdef GMOD_LIB_ALIAS_PRIM
		#ifndef GMOD_ALIAS_PRIM_BOOL
			#define GMOD_ALIAS_PRIM_BOOL ::GMOD_LIB_NS_ALIAS_PRIM::BoolPrim
		#endif

		using GMOD_ALIAS_PRIM_BOOL = ::GMOD_NS_PRIM::Bool;
	#endif
#endif