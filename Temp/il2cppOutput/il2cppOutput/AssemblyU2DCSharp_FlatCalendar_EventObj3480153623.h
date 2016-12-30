#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "mscorlib_System_ValueType3507792607.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FlatCalendar/EventObj
struct  EventObj_t3480153623 
{
public:
	// System.String FlatCalendar/EventObj::name
	String_t* ___name_0;
	// System.String FlatCalendar/EventObj::description
	String_t* ___description_1;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(EventObj_t3480153623, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier(&___name_0, value);
	}

	inline static int32_t get_offset_of_description_1() { return static_cast<int32_t>(offsetof(EventObj_t3480153623, ___description_1)); }
	inline String_t* get_description_1() const { return ___description_1; }
	inline String_t** get_address_of_description_1() { return &___description_1; }
	inline void set_description_1(String_t* value)
	{
		___description_1 = value;
		Il2CppCodeGenWriteBarrier(&___description_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of FlatCalendar/EventObj
struct EventObj_t3480153623_marshaled_pinvoke
{
	char* ___name_0;
	char* ___description_1;
};
// Native definition for COM marshalling of FlatCalendar/EventObj
struct EventObj_t3480153623_marshaled_com
{
	Il2CppChar* ___name_0;
	Il2CppChar* ___description_1;
};
