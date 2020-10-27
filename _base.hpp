#pragma once

#ifndef GMOD
	#error GMOD not loaded
#endif

#ifndef GMOD_BASE_HPP
	#define GMOD_BASE_HPP

	#define GMOD_BASE
	
	#ifdef GMOD_BASE_EXT_INCLUDE
		#include GMOD_BASE_EXT_INCLUDE
	#endif
	
	
	// Options //

	#ifdef GMOD_ALIAS
		#define GMOD_LIB_ALIAS
	#endif


	// Namespaces //

	#ifndef GMOD_NS
		#define GMOD_NS gmod
	#endif

	namespace GMOD_NS
	{}
	
	#ifdef GMOD_NS_ALIAS
		namespace GMOD_NS_ALIAS = ::GMOD_NS;
	#endif
	
	#ifdef GMOD_LIB_ALIAS
		#ifndef GMOD_LIB_NS_ALIAS
			#define GMOD_LIB_NS_ALIAS GMOD_NS
		#endif
		
		namespace GMOD_LIB_NS_ALIAS
		{}
	#endif
	
	
	// Utils //

	#ifndef GMOD_TOSTR
		#define GMOD_TOSTR(_STR_)	\
			#_STR_
	#endif

	#ifndef GMOD_QUOTE
		#define GMOD_QUOTE(_STR_)	\
			GMOD_TOSTR(_STR_)
	#endif


	// Includes //
	
	/// Container ///
	
	#ifndef GMOD_BASE_INCLUDE_CONTAINER
		#define GMOD_BASE_INCLUDE_CONTAINER "gmod/container/_base.hpp"
	#endif
	
	#ifndef GMOD_BASES_INCLUDE_CONTAINER
		#define GMOD_BASES_INCLUDE_CONTAINER "gmod/container/_base.hpp"
	#endif
	
	#ifndef GMOD_LIB_INCLUDE_CONTAINER
		#define GMOD_LIB_INCLUDE_CONTAINER "gmod/container/_lib.hpp"
	#endif
	
	/// Func ///
	
	#ifndef GMOD_BASE_INCLUDE_FUNC
		#define GMOD_BASE_INCLUDE_FUNC "gmod/func/_base.hpp"
	#endif
	
	#ifndef GMOD_BASES_INCLUDE_FUNC
		#define GMOD_BASES_INCLUDE_FUNC "gmod/func/_base.hpp"
	#endif
	
	#ifndef GMOD_LIB_INCLUDE_FUNC
		#define GMOD_LIB_INCLUDE_FUNC "gmod/func/_lib.hpp"
	#endif
	
	/// Lang ///

	#ifndef GMOD_BASE_INCLUDE_LANG
		#define GMOD_BASE_INCLUDE_LANG "gmod/lang/_base.hpp"
	#endif
	
	#ifndef GMOD_BASES_INCLUDE_LANG
		#define GMOD_BASES_INCLUDE_LANG "gmod/lang/_base.hpp"
	#endif
	
	#ifndef GMOD_BASES_INCLUDE_LANG
		#define GMOD_BASES_INCLUDE_LANG "gmod/lang/_lib.hpp"
	#endif
	
	/// Lua ///
	
	#ifndef GMOD_BASE_INCLUDE_LUA
		#define GMOD_BASE_INCLUDE_LUA "gmod/lua/_base.hpp"
	#endif
	
	#ifndef GMOD_BASES_INCLUDE_LUA
		#define GMOD_BASES_INCLUDE_LUA "gmod/lua/_bases.hpp"
	#endif
	
	#ifndef GMOD_LIB_INCLUDE_LUA
		#define GMOD_LIB_INCLUDE_LUA "gmod/lua/_lib.hpp"
	#endif
	
	/// Num ///

	#ifndef GMOD_BASE_INCLUDE_MATH
		#define GMOD_BASE_INCLUDE_NUM "gmod/math/_base.hpp"
	#endif
	
	#ifndef GMOD_BASES_INCLUDE_MATH
		#define GMOD_BASES_INCLUDE_NUM "gmod/math/_base.hpp"
	#endif
	
	#ifndef GMOD_LIB_INCLUDE_MATH
		#define GMOD_LIB_INCLUDE_NUM "gmod/math/_lib.hpp"
	#endif
	
	/// Prim ///

	#ifndef GMOD_BASE_INCLUDE_PRIM
		#define GMOD_BASE_INCLUDE_PRIM "gmod/prim/_base.hpp"
	#endif
	
	#ifndef GMOD_BASES_INCLUDE_PRIM
		#define GMOD_BASES_INCLUDE_PRIM "gmod/prim/_base.hpp"
	#endif
	
	#ifndef GMOD_LIB_INCLUDE_PRIM
		#define GMOD_LIB_INCLUDE_PRIM "gmod/prim/_lib.hpp"
	#endif
	
	/// Str ///
	
	#ifndef GMOD_BASE_INCLUDE_STR
		#define GMOD_BASE_INCLUDE_STR "gmod/str/_base.hpp"
	#endif
	
	#ifndef GMOD_BASES_INCLUDE_STR
		#define GMOD_BASES_INCLUDE_STR "gmod/str/_base.hpp"
	#endif
	
	#ifndef GMOD_LIB_INCLUDE_STR
		#define GMOD_LIB_INCLUDE_STR "gmod/str/_lib.hpp"
	#endif
	
	/// Type ///

	#ifndef GMOD_BASE_INCLUDE_TYPE
		#define GMOD_BASE_INCLUDE_TYPE "gmod/type/_base.hpp"
	#endif
	
	#ifndef GMOD_BASES_INCLUDE_TYPE
		#define GMOD_BASES_INCLUDE_TYPE "gmod/type/_base.hpp"
	#endif
	
	#ifndef GMOD_LIB_INCLUDE_TYPE
		#define GMOD_LIB_INCLUDE_TYPE "gmod/type/_lib.hpp"
	#endif
	
	/// Typelist ///
	
	#ifndef GMOD_BASE_INCLUDE_TYPELIST
		#define GMOD_BASE_INCLUDE_TYPELIST "gmod/typelist/_base.hpp"
	#endif
	
	#ifndef GMOD_BASES_INCLUDE_TYPELIST
		#define GMOD_BASES_INCLUDE_TYPELIST "gmod/typelist/_base.hpp"
	#endif
	
	#ifndef GMOD_LIB_INCLUDE_TYPELIST
		#define GMOD_LIB_INCLUDE_TYPELIST "gmod/typelist/_lib.hpp"
	#endif
#endif