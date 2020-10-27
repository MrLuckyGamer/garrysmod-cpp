#pragma once

#ifndef GMOD_BASE_PRIM
	#error GMOD_BASE_PRIM not loaded
#endif

#ifndef GMOD_HPP_PRIM_NULLPTR
	#define GMOD_HPP_PRIM_NULLPTR
	
	#include <cstddef>	// std::nullptr_t
	
	namespace GMOD_NS_PRIM
	{
		using NullPtr = ::std::nullptr_t;
	}

	#ifdef GMOD_LIB_ALIAS_PRIM
		#ifndef GMOD_ALIAS_PRIM_NULLPTR
			#define GMOD_ALIAS_PRIM_NULLPTR ::GMOD_LIB_NS_ALIAS_PRIM::NullPtr
		#endif

		using GMOD_ALIAS_PRIM_NULLPTR = ::GMOD_NS_PRIM::NullPtr;
	#endif
#endif