#pragma once

#ifndef GMOD_BASE_PRIM
	#error GMOD_BASE_PRIM not loaded
#endif

#ifndef GMOD_HPP_PRIM_CHAR
	#define GMOD_HPP_PRIM_CHAR

	namespace GMOD_NS_PRIM
	{
		using Char = char;
	}

	#ifdef GMOD_LIB_ALIAS_PRIM
		#ifndef GMOD_ALIAS_PRIM_CHAR
			#define GMOD_ALIAS_PRIM_CHAR ::GMOD_LIB_NS_ALIAS_PRIM::CharPrim
		#endif

		using GMOD_ALIAS_PRIM_CHAR = ::GMOD_NS_PRIM::Char;
	#endif
#endif