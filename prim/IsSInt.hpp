#pragma once

#ifndef GMOD_BASE_PRIM
	#error GMOD_BASE_PRIM not loaded
#endif

#ifndef GMOD_HPP_PRIM_ISSINT
	#define GMOD_HPP_PRIM_ISSINT

	#include GMOD_INCLUDE_PRIM_ISINT
	
	#include GMOD_BASE_INCLUDE_LANG
	#include GMOD_INCLUDE_LANG_BOOL
	
	#include <limits>	// std::numeric_limits

	namespace GMOD_NS_PRIM
	{
		template<typename _Type>
		struct IsSInt_Struct
		{
			static constexpr ::GMOD_NS_LANG::Bool Value = ::GMOD_NS_PRIM::IsInt<_Type> && ::std::numeric_limits<_Type>::is_signed;
		
			IsSInt_Struct() = delete;
		};
		
		template<typename _Type>
		concept IsSInt = IsSInt_Struct<_Type>::Value;
	}

	#ifdef GMOD_LIB_ALIAS_PRIM
		#ifndef GMOD_ALIAS_PRIM_ISSINT
			#define GMOD_ALIAS_PRIM_ISSINT ::GMOD_LIB_NS_ALIAS_PRIM::IsSIntPrim
		#endif
		
		template<typename _Type>
		concept GMOD_ALIAS_PRIM_ISSINT = ::GMOD_NS_PRIM::IsSInt<_Type>;
		
		#ifndef GMOD_ALIAS_PRIM_ISSINT_STRUCT
			#define GMOD_ALIAS_PRIM_ISSINT_STRUCT GMOD_ALIAS_PRIM_ISSINT##_Struct
		#endif
		
		template<typename _Type>
		using GMOD_ALIAS_PRIM_ISSINT_STRUCT = ::GMOD_NS_PRIM::IsSInt_Struct<_Type>;
	#endif
#endif