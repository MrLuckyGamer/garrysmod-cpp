#pragma once

#ifndef GMOD_BASE_PRIM
	#error GMOD_BASE_PRIM not loaded
#endif

#ifndef GMOD_HPP_PRIM_ISNUMBOUNDED
	#define GMOD_HPP_PRIM_ISNUMBOUNDED

	#include GMOD_INCLUDE_PRIM_ISNUM
	
	#include GMOD_BASE_INCLUDE_LANG
	#include GMOD_INCLUDE_LANG_BOOL

	#include <limits>	// std::numeric_limits

	namespace GMOD_NS_PRIM
	{
		template<typename _Type>
		struct IsNumBounded_Struct
		{
			static constexpr ::GMOD_NS_LANG::Bool Value = ::GMOD_NS_PRIM::IsNum<_Type> && ::std::numeric_limits<_Type>::is_bounded;
		
			IsNumBounded_Struct() = delete;
		};
		
		template<typename _Type>
		concept IsNumBounded = IsNumBounded_Struct<_Type>::Value;
	}

	#ifdef GMOD_LIB_ALIAS_PRIM
		#ifndef GMOD_ALIAS_PRIM_ISNUMBOUNDED
			#define GMOD_ALIAS_PRIM_ISNUMBOUNDED ::GMOD_LIB_NS_ALIAS_PRIM::IsNumPrimBounded
		#endif
		
		template<typename _Type>
		concept GMOD_ALIAS_PRIM_ISNUMBOUNDED = ::GMOD_NS_PRIM::IsNumBounded<_Type>;
		
		#ifndef GMOD_ALIAS_PRIM_ISNUMBOUNDED_STRUCT
			#define GMOD_ALIAS_PRIM_ISNUMBOUNDED_STRUCT GMOD_ALIAS_PRIM_ISNUMBOUNDED##_Struct
		#endif
		
		template<typename _Type>
		using GMOD_ALIAS_PRIM_ISNUMBOUNDED_STRUCT = ::GMOD_NS_PRIM::IsNumBounded_Struct<_Type>;
	#endif
#endif