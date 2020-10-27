#pragma once

#ifndef GMOD_BASE_PRIM
	#error GMOD_BASE_PRIM not loaded
#endif

#ifndef GMOD_HPP_PRIM_NUM_MIN
	#define GMOD_HPP_PRIM_NUM_MIN

	#include GMOD_INCLUDE_PRIM_ISNUM
	
	#include <limits>	// std::numeric_limits

	namespace GMOD_NS_PRIM
	{
		template<::GMOD_NS_PRIM::IsNum _Type>
		constexpr _Type Num_Min = ::std::numeric_limits<_Type>::lowest();
	}

	#ifdef GMOD_LIB_ALIAS_PRIM
		#ifndef GMOD_ALIAS_PRIM_NUM_MIN
			#define GMOD_ALIAS_PRIM_NUM_MIN ::GMOD_LIB_NS_ALIAS_PRIM::NumPrim_Min
		#endif
		
		template<::GMOD_NS_PRIM::IsNum _Type>
		constexpr _Type GMOD_ALIAS_PRIM_NUM_MIN = ::GMOD_NS_PRIM::Num_Min<_Type>;
	#endif
#endif