#pragma once

#ifndef GMOD_BASE_PRIM
	#error GMOD_BASE_PRIM not loaded
#endif

#ifndef GMOD_HPP_PRIM_PTRDIFF
	#define GMOD_HPP_PRIM_PTRDIFF
	
	#include <cstddef>	// std::ptrdiff_t

	namespace GMOD_NS_PRIM
	{
		using PtrDiff = ::std::ptrdiff_t;
	}

	#ifdef GMOD_LIB_ALIAS_PRIM
		#ifndef GMOD_ALIAS_PRIM_PTRDIFF
			#define GMOD_ALIAS_PRIM_PTRDIFF ::GMOD_LIB_NS_ALIAS_PRIM::PtrDiffPrim
		#endif

		using GMOD_ALIAS_PRIM_PTRDIFF = ::GMOD_NS_PRIM::PtrDiff;
	#endif
#endif