#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// FlatCalendar
struct FlatCalendar_t750354231;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FlatCalendar_Demo
struct  FlatCalendar_Demo_t1251487231  : public MonoBehaviour_t1158329972
{
public:
	// FlatCalendar FlatCalendar_Demo::flatCalendar
	FlatCalendar_t750354231 * ___flatCalendar_2;

public:
	inline static int32_t get_offset_of_flatCalendar_2() { return static_cast<int32_t>(offsetof(FlatCalendar_Demo_t1251487231, ___flatCalendar_2)); }
	inline FlatCalendar_t750354231 * get_flatCalendar_2() const { return ___flatCalendar_2; }
	inline FlatCalendar_t750354231 ** get_address_of_flatCalendar_2() { return &___flatCalendar_2; }
	inline void set_flatCalendar_2(FlatCalendar_t750354231 * value)
	{
		___flatCalendar_2 = value;
		Il2CppCodeGenWriteBarrier(&___flatCalendar_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
