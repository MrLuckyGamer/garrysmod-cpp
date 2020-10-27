#pragma once

#ifndef GMOD_BASE_PRIM
	#error GMOD_BASE_PRIM not loaded
#endif

#ifndef GMOD_HPP_PRIM_NUM_MAX
	#define GMOD_HPP_PRIM_NUM_MAX

	#include GMOD_INCLUDE_PRIM_ISNUM
	
	#include <limits>	// std::numeric_limits

	namespace GMOD_NS_PRIM
	{
		template<::GMOD_NS_PRIM::IsNum _Type>
		constexpr _Type Num_Max = ::std::numeric_limits<_Type>::max();
	}

	#ifdef GMOD_LIB_ALIAS_PRIM
		#ifndef GMOD_ALIAS_PRIM_NUM_MAX
			#define GMOD_ALIAS_PRIM_NUM_MAX ::GMOD_LIB_NS_ALIAS_PRIM::NumPrim_Max
		#endif
		
		template<::GMOD_NS_PRIM::IsNum _Type>
		constexpr _Type GMOD_ALIAS_PRIM_NUM_MAX = ::GMOD_NS_PRIM::Num_Max<_Type>;
	#endif
#endif