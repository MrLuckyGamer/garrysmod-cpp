#pragma once

#ifndef GMOD_BASE_PRIM
	#error GMOD_BASE_PRIM not loaded
#endif

#ifndef GMOD_HPP_PRIM_SINTFAST16
	#define GMOD_HPP_PRIM_SINTFAST16
	
	#include <cstdint>	// std::int_fast16_t

	namespace GMOD_NS_PRIM
	{
		using SIntFast16 = ::std::int_fast16_t;
	}

	#ifdef GMOD_LIB_ALIAS_PRIM
		#ifndef GMOD_ALIAS_PRIM_SINTFAST16
			#define GMOD_ALIAS_PRIM_SINTFAST16 ::GMOD_LIB_NS_ALIAS_PRIM::SIntFast16Prim
		#endif

		using GMOD_ALIAS_PRIM_SINTFAST16 = ::GMOD_NS_PRIM::SIntFast16;
	#endif
#endif