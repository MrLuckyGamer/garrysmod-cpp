#pragma once

#ifndef GMOD_BASE_PRIM
	#error GMOD_BASE_PRIM not loaded
#endif

#ifndef GMOD_HPP_PRIM_LONGDOUBLE
	#define GMOD_HPP_PRIM_LONGDOUBLE

	namespace GMOD_NS_PRIM
	{
		using LongDouble = long double;
	}

	#ifdef GMOD_LIB_ALIAS_PRIM
		#ifndef GMOD_ALIAS_PRIM_LONGDOUBLE
			#define GMOD_ALIAS_PRIM_LONGDOUBLE ::GMOD_LIB_NS_ALIAS_PRIM::LongDoublePrim
		#endif

		using GMOD_ALIAS_PRIM_LONGDOUBLE = ::GMOD_NS_PRIM::LongDouble;
	#endif
#endif