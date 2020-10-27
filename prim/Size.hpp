#pragma once

#ifndef GMOD_BASE_PRIM
	#error GMOD_BASE_PRIM not loaded
#endif

#ifndef GMOD_HPP_PRIM_SIZE
	#define GMOD_HPP_PRIM_SIZE
	
	#include <cstddef>	// std::size_t

	namespace GMOD_NS_PRIM
	{
		using Size = ::std::size_t;
	}
	
	#ifdef GMOD_LIB_ALIAS_PRIM
		#ifndef GMOD_ALIAS_PRIM_SIZE
			#define GMOD_ALIAS_PRIM_SIZE ::GMOD_LIB_NS_ALIAS_PRIM::SizePrim
		#endif
		
		using GMOD_ALIAS_PRIM_SIZE = ::GMOD_NS_PRIM::Size;
	#endif
#endif