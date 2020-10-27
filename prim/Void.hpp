#pragma once

#ifndef GMOD_BASE_PRIM
	#error GMOD_BASE_PRIM not loaded
#endif

#ifndef GMOD_HPP_PRIM_VOID
	#define GMOD_HPP_PRIM_VOID
	
	namespace GMOD_NS_PRIM
	{
		using Void = void;
	}

	#ifdef GMOD_LIB_ALIAS_PRIM
		#ifndef GMOD_ALIAS_PRIM_VOID
			#define GMOD_ALIAS_PRIM_VOID ::GMOD_LIB_NS_ALIAS_PRIM::Void
		#endif

		using GMOD_ALIAS_PRIM_VOID = ::GMOD_NS_PRIM::Void;
	#endif
#endif