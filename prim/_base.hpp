#pragma once

#ifndef GMOD_BASE
	#error GMOD_BASE not loaded
#endif

#ifndef GMOD_BASE_HPP_PRIM
	#define GMOD_BASE_HPP_PRIM

	#define GMOD_BASE_PRIM
	
	#ifdef GMOD_BASE_EXT_INCLUDE_PRIM
		#include GMOD_BASE_EXT_INCLUDE_PRIM
	#endif
	
	
	// Options //
	
	#ifdef GMOD_ALIAS
		#define GMOD_LIB_ALIAS_PRIM
	#endif


	// Namespaces //

	#ifndef GMOD_NS_PRIM
		#define GMOD_NS_PRIM GMOD_NS::prim
	#endif

	namespace GMOD_NS_PRIM
	{}
	
	#ifdef GMOD_NS_ALIAS_PRIM
		namespace GMOD_NS_ALIAS_PRIM = ::GMOD_NS_PRIM;
	#endif
	
	#ifdef GMOD_LIB_ALIAS_PRIM
		#ifndef GMOD_LIB_NS_ALIAS_PRIM
			#define GMOD_LIB_NS_ALIAS_PRIM GMOD_LIB_NS_ALIAS
		#endif
		
		namespace GMOD_LIB_NS_ALIAS_PRIM
		{}
	#endif


	// Includes //
	
	/// Concepts ///

	#ifndef GMOD_INCLUDE_PRIM_IS
		#define GMOD_INCLUDE_PRIM_IS "gmod/prim/Is.hpp"
	#endif
	
	//// Nums ////
	
	#ifndef GMOD_INCLUDE_PRIM_ISNUM
		#define GMOD_INCLUDE_PRIM_ISNUM "gmod/prim/IsNum.hpp"
	#endif
	
	#ifndef GMOD_INCLUDE_PRIM_ISSNUM
		#define GMOD_INCLUDE_PRIM_ISSNUM "gmod/prim/IsSNum.hpp"
	#endif
	
	#ifndef GMOD_INCLUDE_PRIM_ISUNUM
		#define GMOD_INCLUDE_PRIM_ISUNUM "gmod/prim/IsUNum.hpp"
	#endif
	
	#ifndef GMOD_INCLUDE_PRIM_ISNUMBOUNDED
		#define GMOD_INCLUDE_PRIM_ISNUMBOUNDED "gmod/prim/IsNumBounded.hpp"
	#endif
	
	//// Ints ////
	
	#ifndef GMOD_INCLUDE_PRIM_ISINT
		#define GMOD_INCLUDE_PRIM_ISINT "gmod/prim/IsInt.hpp"
	#endif
	
	#ifndef GMOD_INCLUDE_PRIM_ISSINT
		#define GMOD_INCLUDE_PRIM_ISSINT "gmod/prim/IsSInt.hpp"
	#endif

	#ifndef GMOD_INCLUDE_PRIM_ISUINT
		#define GMOD_INCLUDE_PRIM_ISUINT "gmod/prim/IsUInt.hpp"
	#endif
	
	//// Floats ////

	#ifndef GMOD_INCLUDE_PRIM_ISFLOAT
		#define GMOD_INCLUDE_PRIM_ISFLOAT "gmod/prim/IsFloat.hpp"
	#endif
	
	#ifndef GMOD_INCLUDE_PRIM_ISIEEEFLOAT
		#define GMOD_INCLUDE_PRIM_ISIEEEFLOAT "gmod/prim/IsIEEEFloat.hpp"
	#endif

	
	/// Properties ///
	
	#ifndef GMOD_INCLUDE_PRIM_NUM_MIN
		#define GMOD_INCLUDE_PRIM_NUM_MIN "gmod/prim/Num_Min.hpp"
	#endif
	
	#ifndef GMOD_INCLUDE_PRIM_NUM_MAX
		#define GMOD_INCLUDE_PRIM_NUM_MAX "gmod/prim/Num_Max.hpp"
	#endif


	/// Types ///

	#ifndef GMOD_INCLUDE_PRIM_BOOL
		#define GMOD_INCLUDE_PRIM_BOOL "gmod/prim/Bool.hpp"
	#endif
	
	#ifndef GMOD_INCLUDE_PRIM_NULLPTR
		#define GMOD_INCLUDE_PRIM_NULLPTR "gmod/prim/NullPtr.hpp"
	#endif
	
	#ifndef GMOD_INCLUDE_PRIM_VOID
		#define GMOD_INCLUDE_PRIM_VOID "gmod/prim/Void.hpp"
	#endif
	
	//// Chars ////
	
	#ifndef GMOD_INCLUDE_PRIM_CHAR
		#define GMOD_INCLUDE_PRIM_CHAR "gmod/prim/Char.hpp"
	#endif
	
	#ifndef GMOD_INCLUDE_PRIM_WIDECHAR
		#define GMOD_INCLUDE_PRIM_WIDECHAR "gmod/prim/WideChar.hpp"
	#endif
	
	#ifndef GMOD_INCLUDE_PRIM_SCHAR
		#define GMOD_INCLUDE_PRIM_SCHAR "gmod/prim/SChar.hpp"
	#endif
	
	#ifndef GMOD_INCLUDE_PRIM_UCHAR
		#define GMOD_INCLUDE_PRIM_UCHAR "gmod/prim/UChar.hpp"
	#endif
	
	#ifndef GMOD_INCLUDE_PRIM_UCHARLEAST8
		#define GMOD_INCLUDE_PRIM_UCHARLEAST8 "gmod/prim/UCharLeast8.hpp"
	#endif
	
	#ifndef GMOD_INCLUDE_PRIM_UCHARLEAST16
		#define GMOD_INCLUDE_PRIM_UCHARLEAST16 "gmod/prim/UCharLeast16.hpp"
	#endif
	
	#ifndef GMOD_INCLUDE_PRIM_UCHARLEAST32
		#define GMOD_INCLUDE_PRIM_UCHARLEAST32 "gmod/prim/UCharLeast32.hpp"
	#endif
	
	//// SInts ////
	
	#ifndef GMOD_INCLUDE_PRIM_SHORTSINT
		#define GMOD_INCLUDE_PRIM_SHORTSINT "gmod/prim/ShortSInt.hpp"
	#endif
	
	#ifndef GMOD_INCLUDE_PRIM_SINT
		#define GMOD_INCLUDE_PRIM_SINT "gmod/prim/SInt.hpp"
	#endif
	
	#ifndef GMOD_INCLUDE_PRIM_LONGSINT
		#define GMOD_INCLUDE_PRIM_LONGSINT "gmod/prim/LongSInt.hpp"
	#endif

	#ifndef GMOD_INCLUDE_PRIM_LONGLONGSINT
		#define GMOD_INCLUDE_PRIM_LONGLONGSINT "gmod/prim/LongLongSInt.hpp"
	#endif
	
	#ifndef GMOD_INCLUDE_PRIM_MAXSINT
		#define GMOD_INCLUDE_PRIM_MAXSINT "gmod/prim/MaxSInt.hpp"
	#endif
	
	#ifndef GMOD_INCLUDE_PRIM_SINTPTR
		#define GMOD_INCLUDE_PRIM_SINTPTR "gmod/prim/SIntPtr.hpp"
	#endif

	#ifndef GMOD_INCLUDE_PRIM_SINT8
		#define GMOD_INCLUDE_PRIM_SINT8 "gmod/prim/SInt8.hpp"
	#endif

	#ifndef GMOD_INCLUDE_PRIM_SINT16
		#define GMOD_INCLUDE_PRIM_SINT16 "gmod/prim/SInt16.hpp"
	#endif

	#ifndef GMOD_INCLUDE_PRIM_SINT32
		#define GMOD_INCLUDE_PRIM_SINT32 "gmod/prim/SInt32.hpp"
	#endif

	#ifndef GMOD_INCLUDE_PRIM_SINT64
		#define GMOD_INCLUDE_PRIM_SINT64 "gmod/prim/SInt64.hpp"
	#endif
	
	#ifndef GMOD_INCLUDE_PRIM_SINTLEAST8
		#define GMOD_INCLUDE_PRIM_SINTLEAST8 "gmod/prim/SIntLeast8.hpp"
	#endif

	#ifndef GMOD_INCLUDE_PRIM_SINTLEAST16
		#define GMOD_INCLUDE_PRIM_SINTLEAST16 "gmod/prim/SIntLeast16.hpp"
	#endif

	#ifndef GMOD_INCLUDE_PRIM_SINTLEAST32
		#define GMOD_INCLUDE_PRIM_SINTLEAST32 "gmod/prim/SIntLeast32.hpp"
	#endif

	#ifndef GMOD_INCLUDE_PRIM_SINTLEAST64
		#define GMOD_INCLUDE_PRIM_SINTLEAST64 "gmod/prim/SIntLeast64.hpp"
	#endif

	#ifndef GMOD_INCLUDE_PRIM_SINTFAST8
		#define GMOD_INCLUDE_PRIM_SINTFAST8 "gmod/prim/SIntFast8.hpp"
	#endif

	#ifndef GMOD_INCLUDE_PRIM_SINTFAST16
		#define GMOD_INCLUDE_PRIM_SINTFAST16 "gmod/prim/SIntFast16.hpp"
	#endif

	#ifndef GMOD_INCLUDE_PRIM_SINTFAST32
		#define GMOD_INCLUDE_PRIM_SINTFAST32 "gmod/prim/SIntFast32.hpp"
	#endif

	#ifndef GMOD_INCLUDE_PRIM_SINTFAST64
		#define GMOD_INCLUDE_PRIM_SINTFAST64 "gmod/prim/SIntFast64.hpp"
	#endif
	
	//// UInts ////
	
	#ifndef GMOD_INCLUDE_PRIM_SHORTUINT
		#define GMOD_INCLUDE_PRIM_SHORTINT "gmod/prim/ShortUInt.hpp"
	#endif
	
	#ifndef GMOD_INCLUDE_PRIM_UINT
		#define GMOD_INCLUDE_PRIM_UINT "gmod/prim/UInt.hpp"
	#endif
	
	#ifndef GMOD_INCLUDE_PRIM_LONGUINT
		#define GMOD_INCLUDE_PRIM_UNSIGNEDLONGINTEGER "gmod/prim/LongUInt.hpp"
	#endif

	#ifndef GMOD_INCLUDE_PRIM_LONGLONGUINT
		#define GMOD_INCLUDE_PRIM_LONGLONGUINT "gmod/prim/LongLongUInt.hpp"
	#endif
	
	#ifndef GMOD_INCLUDE_PRIM_MAXUINT
		#define GMOD_INCLUDE_PRIM_MAXUINT "gmod/prim/MaxUInt.hpp"
	#endif
	
	#ifndef GMOD_INCLUDE_PRIM_UINTPTR
		#define GMOD_INCLUDE_PRIM_UINTPTR "gmod/prim/UIntPtr.hpp"
	#endif

	#ifndef GMOD_INCLUDE_PRIM_UINT8
		#define GMOD_INCLUDE_PRIM_UINT8 "gmod/prim/UInt8.hpp"
	#endif

	#ifndef GMOD_INCLUDE_PRIM_UINT16
		#define GMOD_INCLUDE_PRIM_UINT16 "gmod/prim/UInt16.hpp"
	#endif

	#ifndef GMOD_INCLUDE_PRIM_UINT32
		#define GMOD_INCLUDE_PRIM_UINT32 "gmod/prim/UInt32.hpp"
	#endif

	#ifndef GMOD_INCLUDE_PRIM_UINT64
		#define GMOD_INCLUDE_PRIM_UINT64 "gmod/prim/UInt64.hpp"
	#endif
	
	#ifndef GMOD_INCLUDE_PRIM_UINTLEAST8
		#define GMOD_INCLUDE_PRIM_UINTLEAST8 "gmod/prim/UIntLeast8.hpp"
	#endif

	#ifndef GMOD_INCLUDE_PRIM_UINTLEAST16
		#define GMOD_INCLUDE_PRIM_UINTLEAST16 "gmod/prim/UIntLeast16.hpp"
	#endif

	#ifndef GMOD_INCLUDE_PRIM_UINTLEAST32
		#define GMOD_INCLUDE_PRIM_UINTLEAST32 "gmod/prim/UIntLeast32.hpp"
	#endif

	#ifndef GMOD_INCLUDE_PRIM_UINTLEAST64
		#define GMOD_INCLUDE_PRIM_UINTLEAST64 "gmod/prim/UIntLeast64.hpp"
	#endif

	#ifndef GMOD_INCLUDE_PRIM_UINTFAST8
		#define GMOD_INCLUDE_PRIM_UINTFAST8 "gmod/prim/UIntFast8.hpp"
	#endif

	#ifndef GMOD_INCLUDE_PRIM_UINTFAST16
		#define GMOD_INCLUDE_PRIM_UINTFAST16 "gmod/prim/UIntFast16.hpp"
	#endif

	#ifndef GMOD_INCLUDE_PRIM_UINTFAST32
		#define GMOD_INCLUDE_PRIM_UINTFAST32 "gmod/prim/UIntFast32.hpp"
	#endif

	#ifndef GMOD_INCLUDE_PRIM_UINTFAST64
		#define GMOD_INCLUDE_PRIM_UINTFAST64 "gmod/prim/UIntFast64.hpp"
	#endif
	
	//// Floats ////
	
	#ifndef GMOD_INCLUDE_PRIM_FLOAT
		#define GMOD_INCLUDE_PRIM_FLOAT "gmod/prim/Float.hpp"
	#endif
	
	#ifndef GMOD_INCLUDE_PRIM_DOUBLE
		#define GMOD_INCLUDE_PRIM_DOUBLE "gmod/prim/Double.hpp"
	#endif

	#ifndef GMOD_INCLUDE_PRIM_LONGDOUBLE
		#define GMOD_INCLUDE_PRIM_LONGDOUBLE "gmod/prim/LongDouble.hpp"
	#endif
#endif