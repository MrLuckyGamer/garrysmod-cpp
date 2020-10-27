#pragma once

#ifndef GMOD_BASE_PRIM
	#error GMOD_BASE_PRIM not loaded
#endif

#ifndef GMOD_HPP_PRIM_DOUBLE
	#define GMOD_HPP_PRIM_DOUBLE

	namespace GMOD_NS_PRIM
	{
		using Double = double;
	}

	#ifdef GMOD_LIB_ALIAS_PRIM
		#ifndef GMOD_ALIAS_PRIM_DOUBLE
			#define GMOD_ALIAS_PRIM_DOUBLE ::GMOD_LIB_NS_ALIAS_PRIM::DoublePrim
		#endif

		using GMOD_ALIAS_PRIM_DOUBLE = ::GMOD_NS_PRIM::Double;
	#endif
#endif