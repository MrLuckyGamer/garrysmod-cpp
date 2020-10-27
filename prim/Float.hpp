#pragma once

#ifndef GMOD_BASE_PRIM
	#error GMOD_BASE_PRIM not loaded
#endif

#ifndef GMOD_HPP_PRIM_FLOAT
	#define GMOD_HPP_PRIM_FLOAT

	namespace GMOD_NS_PRIM
	{
		using Float = float;
	}

	#ifdef GMOD_LIB_ALIAS_PRIM
		#ifndef GMOD_ALIAS_PRIM_FLOAT
			#define GMOD_ALIAS_PRIM_FLOAT ::GMOD_LIB_NS_ALIAS_PRIM::FloatPrim
		#endif

		using GMOD_ALIAS_PRIM_FLOAT = ::GMOD_NS_PRIM::Float;
	#endif
#endif