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

// FlatCalendar/TimeObj
struct  TimeObj_t1405947884 
{
public:
	// System.Int32 FlatCalendar/TimeObj::year
	int32_t ___year_0;
	// System.Int32 FlatCalendar/TimeObj::month
	int32_t ___month_1;
	// System.Int32 FlatCalendar/TimeObj::day
	int32_t ___day_2;
	// System.Int32 FlatCalendar/TimeObj::totalDays
	int32_t ___totalDays_3;
	// System.String FlatCalendar/TimeObj::dayOfWeek
	String_t* ___dayOfWeek_4;
	// System.Int32 FlatCalendar/TimeObj::dayOffset
	int32_t ___dayOffset_5;

public:
	inline static int32_t get_offset_of_year_0() { return static_cast<int32_t>(offsetof(TimeObj_t1405947884, ___year_0)); }
	inline int32_t get_year_0() const { return ___year_0; }
	inline int32_t* get_address_of_year_0() { return &___year_0; }
	inline void set_year_0(int32_t value)
	{
		___year_0 = value;
	}

	inline static int32_t get_offset_of_month_1() { return static_cast<int32_t>(offsetof(TimeObj_t1405947884, ___month_1)); }
	inline int32_t get_month_1() const { return ___month_1; }
	inline int32_t* get_address_of_month_1() { return &___month_1; }
	inline void set_month_1(int32_t value)
	{
		___month_1 = value;
	}

	inline static int32_t get_offset_of_day_2() { return static_cast<int32_t>(offsetof(TimeObj_t1405947884, ___day_2)); }
	inline int32_t get_day_2() const { return ___day_2; }
	inline int32_t* get_address_of_day_2() { return &___day_2; }
	inline void set_day_2(int32_t value)
	{
		___day_2 = value;
	}

	inline static int32_t get_offset_of_totalDays_3() { return static_cast<int32_t>(offsetof(TimeObj_t1405947884, ___totalDays_3)); }
	inline int32_t get_totalDays_3() const { return ___totalDays_3; }
	inline int32_t* get_address_of_totalDays_3() { return &___totalDays_3; }
	inline void set_totalDays_3(int32_t value)
	{
		___totalDays_3 = value;
	}

	inline static int32_t get_offset_of_dayOfWeek_4() { return static_cast<int32_t>(offsetof(TimeObj_t1405947884, ___dayOfWeek_4)); }
	inline String_t* get_dayOfWeek_4() const { return ___dayOfWeek_4; }
	inline String_t** get_address_of_dayOfWeek_4() { return &___dayOfWeek_4; }
	inline void set_dayOfWeek_4(String_t* value)
	{
		___dayOfWeek_4 = value;
		Il2CppCodeGenWriteBarrier(&___dayOfWeek_4, value);
	}

	inline static int32_t get_offset_of_dayOffset_5() { return static_cast<int32_t>(offsetof(TimeObj_t1405947884, ___dayOffset_5)); }
	inline int32_t get_dayOffset_5() const { return ___dayOffset_5; }
	inline int32_t* get_address_of_dayOffset_5() { return &___dayOffset_5; }
	inline void set_dayOffset_5(int32_t value)
	{
		___dayOffset_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of FlatCalendar/TimeObj
struct TimeObj_t1405947884_marshaled_pinvoke
{
	int32_t ___year_0;
	int32_t ___month_1;
	int32_t ___day_2;
	int32_t ___totalDays_3;
	char* ___dayOfWeek_4;
	int32_t ___dayOffset_5;
};
// Native definition for COM marshalling of FlatCalendar/TimeObj
struct TimeObj_t1405947884_marshaled_com
{
	int32_t ___year_0;
	int32_t ___month_1;
	int32_t ___day_2;
	int32_t ___totalDays_3;
	Il2CppChar* ___dayOfWeek_4;
	int32_t ___dayOffset_5;
};
