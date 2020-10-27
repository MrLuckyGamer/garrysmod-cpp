#pragma once

#ifndef GMOD_BASE_PRIM
	#error GMOD_BASE_PRIM not loaded
#endif

#ifndef GMOD_HPP_PRIM_MAXALIGN
	#define GMOD_HPP_PRIM_MAXALIGN
	
	#include <cstddef>	// std::max_align_t

	namespace GMOD_NS_PRIM
	{
		using MaxAlign = ::std::max_align_t;
	}
	
	#ifdef GMOD_LIB_ALIAS_PRIM
		#ifndef GMOD_ALIAS_PRIM_MAXALIGN
			#define GMOD_ALIAS_PRIM_MAXALIGN ::GMOD_LIB_NS_ALIAS_PRIM::MaxAlignPrim
		#endif
		
		using GMOD_ALIAS_PRIM_MAXALIGN = ::GMOD_NS_PRIM::MaxAlign;
	#endif
#endif