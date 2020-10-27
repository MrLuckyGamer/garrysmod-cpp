#pragma once

#ifndef GMOD_BASE_PRIM
	#error GMOD_BASE_PRIM not loaded
#endif

#ifndef GMOD_HPP_PRIM_ISFLOAT
	#define GMOD_HPP_PRIM_ISFLOAT

	#include GMOD_BASE_INCLUDE_LANG
	#include GMOD_INCLUDE_LANG_BOOL
	
	#include <type_traits>	// std::is_floating_point_v

	namespace GMOD_NS_PRIM
	{
		template<typename _Type>
		struct IsFloat_Struct
		{
			static constexpr ::GMOD_NS_LANG::Bool Value = ::std::is_floating_point_v<_Type>;
		
			IsFloat_Struct() = delete;
		};
		
		template<typename _Type>
		concept IsFloat = IsFloat_Struct<_Type>::Value;
	}

	#ifdef GMOD_LIB_ALIAS_PRIM
		#ifndef GMOD_ALIAS_PRIM_ISFLOAT
			#define GMOD_ALIAS_PRIM_ISFLOAT ::GMOD_LIB_NS_ALIAS_PRIM::IsFloatPrim
		#endif
		
		template<typename _Type>
		concept GMOD_ALIAS_PRIM_ISFLOAT = ::GMOD_NS_PRIM::IsFloat<_Type>;
		
		#ifndef GMOD_ALIAS_PRIM_ISFLOAT_STRUCT
			#define GMOD_ALIAS_PRIM_ISFLOAT_STRUCT GMOD_ALIAS_PRIM_ISFLOAT##_Struct
		#endif
		
		template<typename _Type>
		using GMOD_ALIAS_PRIM_ISFLOAT_STRUCT = ::GMOD_NS_PRIM::IsFloat_Struct<_Type>;
	#endif
#endif