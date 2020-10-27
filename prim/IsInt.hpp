#pragma once

#ifndef GMOD_BASE_PRIM
	#error GMOD_BASE_PRIM not loaded
#endif

#ifndef GMOD_HPP_PRIM_ISINT
	#define GMOD_HPP_PRIM_ISINT
	
	#include GMOD_BASE_INCLUDE_LANG
	#include GMOD_INCLUDE_LANG_BOOL

	#include <type_traits>	// std::is_integral_v

	namespace GMOD_NS_PRIM
	{
		template<typename _Type>
		struct IsInt_Struct
		{
			static constexpr ::GMOD_NS_LANG::Bool Value = ::std::is_integral_v<_Type>;
		
			IsInt_Struct() = delete;
		};
		
		template<typename _Type>
		concept IsInt = IsInt_Struct<_Type>::Value;
	}

	#ifdef GMOD_LIB_ALIAS_PRIM
		#ifndef GMOD_ALIAS_PRIM_ISINT
			#define GMOD_ALIAS_PRIM_ISINT ::GMOD_LIB_NS_ALIAS_PRIM::IsIntPrim
		#endif
		
		template<typename _Type>
		concept GMOD_ALIAS_PRIM_ISINT = ::GMOD_NS_PRIM::IsInt<_Type>;
		
		#ifndef GMOD_ALIAS_PRIM_ISINT_STRUCT
			#define GMOD_ALIAS_PRIM_ISINT_STRUCT GMOD_ALIAS_PRIM_ISINT##_Struct
		#endif
		
		template<typename _Type>
		using GMOD_ALIAS_PRIM_ISINT_STRUCT = ::GMOD_NS_PRIM::IsInt_Struct<_Type>;
	#endif
#endif