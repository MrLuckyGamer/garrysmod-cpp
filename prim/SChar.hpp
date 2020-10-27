#pragma once

#ifndef GMOD_BASE_PRIM
	#error GMOD_BASE_PRIM not loaded
#endif

#ifndef GMOD_HPP_PRIM_SCHAR
	#define GMOD_HPP_PRIM_SCHAR

	namespace GMOD_NS_PRIM
	{
		using SChar = signed char;
	}

	#ifdef GMOD_LIB_ALIAS_PRIM
		#ifndef GMOD_ALIAS_PRIM_SCHAR
			#define GMOD_ALIAS_PRIM_SCHAR ::GMOD_LIB_NS_ALIAS_PRIM::SCharPrim
		#endif

		using GMOD_ALIAS_PRIM_SCHAR = ::GMOD_NS_PRIM::SChar;
	#endif
#endif