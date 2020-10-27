#pragma once

#ifndef GMOD_BASE_PRIM
	#error GMOD_BASE_PRIM not loaded
#endif

#ifndef GMOD_HPP_PRIM_SHORTUINT
	#define GMOD_HPP_PRIM_SHORTUINT

	namespace GMOD_NS_PRIM
	{
		using ShortUInt = short unsigned int;
	}

	#ifdef GMOD_LIB_ALIAS_PRIM
		#ifndef GMOD_ALIAS_PRIM_SHORTUINT
			#define GMOD_ALIAS_PRIM_SHORTUINT ::GMOD_LIB_NS_ALIAS_PRIM::ShortUIntPrim
		#endif

		using GMOD_ALIAS_PRIM_SHORTUINT = ::GMOD_NS_PRIM::ShortUInt;
	#endif
#endif