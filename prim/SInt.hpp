#pragma once

#ifndef GMOD_BASE_PRIM
	#error GMOD_BASE_PRIM not loaded
#endif

#ifndef GMOD_HPP_PRIM_SINT
	#define GMOD_HPP_PRIM_SINT

	namespace GMOD_NS_PRIM
	{
		using SInt = signed int;
	}

	#ifdef GMOD_LIB_ALIAS_PRIM
		#ifndef GMOD_ALIAS_PRIM_SINT
			#define GMOD_ALIAS_PRIM_SINT ::GMOD_LIB_NS_ALIAS_PRIM::SIntPrim
		#endif

		using GMOD_ALIAS_PRIM_SINT = ::GMOD_NS_PRIM::SInt;
	#endif
#endif