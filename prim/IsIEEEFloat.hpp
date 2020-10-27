#pragma once

#ifndef GMOD_BASE_PRIM
	#error GMOD_BASE_PRIM not loaded
#endif

#ifndef GMOD_HPP_PRIM_ISIEEEFLOAT
	#define GMOD_HPP_PRIM_ISIEEEFLOAT

	#include GMOD_INCLUDE_PRIM_ISFLOAT
	
	#include GMOD_BASE_INCLUDE_LANG
	#include GMOD_INCLUDE_LANG_BOOL

	#include <limits>	// std::numeric_limits

	namespace GMOD_NS_PRIM
	{
		template<typename _Type>
		struct IsIEEEFloat_Struct
		{
			static constexpr ::GMOD_NS_LANG::Bool Value = ::GMOD_NS_PRIM::IsFloat<_Type> && ::std::numeric_limits<_Type>::is_iec559;
		
			IsIEEEFloat_Struct() = delete;
		};
		
		template<typename _Type>
		concept IsIEEEFloat = IsIEEEFloat_Struct<_Type>::Value;
	}

	#ifdef GMOD_LIB_ALIAS_PRIM
		#ifndef GMOD_ALIAS_PRIM_ISIEEEFLOAT
			#define GMOD_ALIAS_PRIM_ISIEEEFLOAT ::GMOD_LIB_NS_ALIAS_PRIM::IsIEEEFloatPrim
		#endif
		
		template<typename _Type>
		concept GMOD_ALIAS_PRIM_ISIEEEFLOAT = ::GMOD_NS_PRIM::IsIEEEFloat<_Type>;
		
		#ifndef GMOD_ALIAS_PRIM_ISIEEEFLOAT_STRUCT
			#define GMOD_ALIAS_PRIM_ISIEEEFLOAT_STRUCT GMOD_ALIAS_PRIM_ISIEEEFLOAT##_Struct
		#endif
		
		template<typename _Type>
		using GMOD_ALIAS_PRIM_ISIEEEFLOAT_STRUCT = ::GMOD_NS_PRIM::IsIEEEFloat_Struct<_Type>;
	#endif
#endif