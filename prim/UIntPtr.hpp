#pragma once

#ifndef GMOD_BASE_PRIM
	#error GMOD_BASE_PRIM not loaded
#endif

#ifndef GMOD_HPP_PRIM_UINTPTR
	#define GMOD_HPP_PRIM_UINTPTR
	
	#include <cstdint>	// std::uintptr_t, UINTPTR_MIN, UINTPTR_MAX

	#if defined(UINTPTR_MIN) && defined(UINTPTR_MAX)
		#define GMOD_PRIM_UINTPTR
		
		namespace GMOD_NS_PRIM
		{
			using UIntPtr = ::std::uintptr_t;
		}
		
		#ifdef GMOD_LIB_ALIAS_PRIM
			#ifndef GMOD_ALIAS_PRIM_UINTPTR
				#define GMOD_ALIAS_PRIM_UINTPTR ::GMOD_LIB_NS_ALIAS_PRIM::UIntPtrPrim
			#endif
			
			using GMOD_ALIAS_PRIM_UINTPTR = ::GMOD_NS_PRIM::UIntPtr;
		#endif
	#endif
#endif