#pragma once

#ifndef GMOD_BASE_PRIM
	#error GMOD_BASE_PRIM not loaded
#endif

#ifndef GMOD_HPP_PRIM_WIDECHAR
	#define GMOD_HPP_PRIM_WIDECHAR

	namespace GMOD_NS_PRIM
	{
		using WideChar = wchar_t;
	}

	#ifdef GMOD_LIB_ALIAS_PRIM
		#ifndef GMOD_ALIAS_PRIM_WIDECHAR
			#define GMOD_ALIAS_PRIM_WIDECHAR ::GMOD_LIB_NS_ALIAS_PRIM::WideCharPrim
		#endif

		using GMOD_ALIAS_PRIM_WIDECHAR = ::GMOD_NS_PRIM::WideChar;
	#endif
#endif