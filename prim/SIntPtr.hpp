#pragma once

#ifndef GMOD_BASE_PRIM
	#error GMOD_BASE_PRIM not loaded
#endif

#ifndef GMOD_HPP_PRIM_SINTPTR
	#define GMOD_HPP_PRIM_SINTPTR
	
	#include <cstdint>	// std::intptr_t, INTPTR_MIN, INTPTR_MAX

	#if defined(INTPTR_MIN) && defined(INTPTR_MAX)
		#define GMOD_PRIM_SINTPTR
		
		namespace GMOD_NS_PRIM
		{
			using SIntPtr = ::std::intptr_t;
		}
		
		#ifdef GMOD_LIB_ALIAS_PRIM
			#ifndef GMOD_ALIAS_PRIM_SINTPTR
				#define GMOD_ALIAS_PRIM_SINTPTR ::GMOD_LIB_NS_ALIAS_PRIM::SIntPtrPrim
			#endif
			
			using GMOD_ALIAS_PRIM_SINTPTR = ::GMOD_NS_PRIM::SIntPtr;
		#endif
	#endif
#endif