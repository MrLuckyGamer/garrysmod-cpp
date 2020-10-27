#pragma once

#ifndef GMOD
	#error GMOD not loaded
#endif

#ifndef GMOD_LIB_HPP
	#define GMOD_LIB_HPP
	
	
	// Base //
	
	#include GMOD_BASE_INCLUDE
	
	
	// Libs //
	
	#include GMOD_LIB_INCLUDE_CONTAINER
	#include GMOD_LIB_INCLUDE_FUNC
	#include GMOD_LIB_INCLUDE_LANG
	#include GMOD_LIB_INCLUDE_LUA
	#include GMOD_LIB_INCLUDE_MATH
	#include GMOD_LIB_INCLUDE_PRIM
	#include GMOD_LIB_INCLUDE_STR
	#include GMOD_LIB_INCLUDE_TYPE
	#include GMOD_LIB_INCLUDE_TYPELIST
	
	
	#ifdef GMOD_LIB_EXT_INCLUDE
		#include GMOD_LIB_EXT_INCLUDE
	#endif
#endif