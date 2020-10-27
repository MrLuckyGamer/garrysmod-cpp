#pragma once

#ifndef GMOD_BASE_PRIM
	#error GMOD_BASE_PRIM not loaded
#endif

#ifndef GMOD_HPP_PRIM_IS
	#define GMOD_HPP_PRIM_IS
	
	#include GMOD_BASE_INCLUDE_LANG
	#include GMOD_INCLUDE_LANG_BOOL

	#include <type_traits>	// std::is_fundamental

	namespace GMOD_NS_PRIM
	{
		template<typename _Type>
		struct Is_Struct
		{
			static constexpr ::GMOD_NS_LANG::Bool Value = ::std::is_fundamental_v<_Type>;
		
			Is_Struct() = delete;
		};
		
		template<typename _Type>
		concept Is = Is_Struct<_Type>::Value;
	}

	#ifdef GMOD_LIB_ALIAS_PRIM
		#ifndef GMOD_ALIAS_PRIM_IS
			#define GMOD_ALIAS_PRIM_IS ::GMOD_LIB_NS_ALIAS_PRIM::IsPrim
		#endif
		
		template<typename _Type>
		concept GMOD_ALIAS_PRIM_IS = ::GMOD_NS_PRIM::Is<_Type>;
		
		#ifndef GMOD_ALIAS_PRIM_IS_STRUCT
			#define GMOD_ALIAS_PRIM_IS_STRUCT GMOD_ALIAS_PRIM_IS##_Struct
		#endif
		
		template<typename _Type>
		using GMOD_ALIAS_PRIM_IS_STRUCT = ::GMOD_NS_PRIM::Is_Struct<_Type>;
	#endif
#endif