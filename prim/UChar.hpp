#pragma once

#ifndef GMOD_BASE_PRIM
	#error GMOD_BASE_PRIM not loaded
#endif

#ifndef GMOD_HPP_PRIM_UCHAR
	#define GMOD_HPP_PRIM_UCHAR

	namespace GMOD_NS_PRIM
	{
		using UChar = unsigned char;
	}

	#ifdef GMOD_LIB_ALIAS_PRIM
		#ifndef GMOD_ALIAS_PRIM_UCHAR
			#define GMOD_ALIAS_PRIM_UCHAR ::GMOD_LIB_NS_ALIAS_PRIM::UCharPrim
		#endif

		using GMOD_ALIAS_PRIM_UCHAR = ::GMOD_NS_PRIM::UChar;
	#endif
#endif