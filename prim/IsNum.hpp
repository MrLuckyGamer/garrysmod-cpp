#pragma once

#ifndef GMOD_BASE_PRIM
	#error GMOD_BASE_PRIM not loaded
#endif

#ifndef GMOD_HPP_PRIM_ISNUM
	#define GMOD_HPP_PRIM_ISNUM
	
	#include GMOD_BASE_INCLUDE_LANG
	#include GMOD_INCLUDE_LANG_BOOL

	#include <type_traits>	// std::is_arithmetic_v

	namespace GMOD_NS_PRIM
	{
		template<typename _Type>
		struct IsNum_Struct
		{
			static constexpr ::GMOD_NS_LANG::Bool Value = ::std::is_arithmetic_v<_Type>;
		
			IsNum_Struct() = delete;
		};
		
		template<typename _Type>
		concept IsNum = IsNum_Struct<_Type>::Value;
	}

	#ifdef GMOD_LIB_ALIAS_PRIM
		#ifndef GMOD_ALIAS_PRIM_ISNUM
			#define GMOD_ALIAS_PRIM_ISNUM ::GMOD_LIB_NS_ALIAS_PRIM::IsNumPrim
		#endif
		
		template<typename _Type>
		concept GMOD_ALIAS_PRIM_ISNUM = ::GMOD_NS_PRIM::IsNum<_Type>;
		
		#ifndef GMOD_ALIAS_PRIM_ISNUM_STRUCT
			#define GMOD_ALIAS_PRIM_ISNUM_STRUCT GMOD_ALIAS_PRIM_ISNUM##_Struct
		#endif
		
		template<typename _Type>
		using GMOD_ALIAS_PRIM_ISNUM_STRUCT = ::GMOD_NS_PRIM::IsNum_Struct<_Type>;
	#endif
#endif