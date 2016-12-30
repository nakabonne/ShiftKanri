#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Sprite[]
struct SpriteU5BU5D_t3359083662;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<FlatCalendar/EventObj>>>>
struct Dictionary_2_t4167718956;
// FlatCalendar/Delegate_OnDaySelected
struct Delegate_OnDaySelected_t992817254;
// FlatCalendar/Delegate_OnEventSelected
struct Delegate_OnEventSelected_t2948336640;
// FlatCalendar/Delegate_OnMonthChanged
struct Delegate_OnMonthChanged_t1729167635;
// FlatCalendar/Delegate_OnNowDay
struct Delegate_OnNowDay_t4280307643;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_FlatCalendar_TimeObj1405947884.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FlatCalendar
struct  FlatCalendar_t750354231  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Sprite[] FlatCalendar::sprites
	SpriteU5BU5D_t3359083662* ___sprites_3;
	// System.Int32 FlatCalendar::current_UiStyle
	int32_t ___current_UiStyle_4;
	// UnityEngine.GameObject FlatCalendar::btn_nextMonth
	GameObject_t1756533147 * ___btn_nextMonth_5;
	// UnityEngine.GameObject FlatCalendar::btn_prevMonth
	GameObject_t1756533147 * ___btn_prevMonth_6;
	// UnityEngine.GameObject FlatCalendar::btn_calendar
	GameObject_t1756533147 * ___btn_calendar_7;
	// UnityEngine.GameObject FlatCalendar::label_year
	GameObject_t1756533147 * ___label_year_8;
	// UnityEngine.GameObject FlatCalendar::label_month
	GameObject_t1756533147 * ___label_month_9;
	// UnityEngine.GameObject FlatCalendar::label_dayOfWeek
	GameObject_t1756533147 * ___label_dayOfWeek_10;
	// UnityEngine.GameObject FlatCalendar::label_dayNumber
	GameObject_t1756533147 * ___label_dayNumber_11;
	// UnityEngine.GameObject FlatCalendar::label_numberEvents
	GameObject_t1756533147 * ___label_numberEvents_12;
	// FlatCalendar/TimeObj FlatCalendar::currentTime
	TimeObj_t1405947884  ___currentTime_13;
	// FlatCalendar/Delegate_OnDaySelected FlatCalendar::delegate_ondayselected
	Delegate_OnDaySelected_t992817254 * ___delegate_ondayselected_15;
	// FlatCalendar/Delegate_OnEventSelected FlatCalendar::delegate_oneventselected
	Delegate_OnEventSelected_t2948336640 * ___delegate_oneventselected_16;
	// FlatCalendar/Delegate_OnMonthChanged FlatCalendar::delegate_onmonthchanged
	Delegate_OnMonthChanged_t1729167635 * ___delegate_onmonthchanged_17;
	// FlatCalendar/Delegate_OnNowDay FlatCalendar::delegate_onnowday
	Delegate_OnNowDay_t4280307643 * ___delegate_onnowday_18;

public:
	inline static int32_t get_offset_of_sprites_3() { return static_cast<int32_t>(offsetof(FlatCalendar_t750354231, ___sprites_3)); }
	inline SpriteU5BU5D_t3359083662* get_sprites_3() const { return ___sprites_3; }
	inline SpriteU5BU5D_t3359083662** get_address_of_sprites_3() { return &___sprites_3; }
	inline void set_sprites_3(SpriteU5BU5D_t3359083662* value)
	{
		___sprites_3 = value;
		Il2CppCodeGenWriteBarrier(&___sprites_3, value);
	}

	inline static int32_t get_offset_of_current_UiStyle_4() { return static_cast<int32_t>(offsetof(FlatCalendar_t750354231, ___current_UiStyle_4)); }
	inline int32_t get_current_UiStyle_4() const { return ___current_UiStyle_4; }
	inline int32_t* get_address_of_current_UiStyle_4() { return &___current_UiStyle_4; }
	inline void set_current_UiStyle_4(int32_t value)
	{
		___current_UiStyle_4 = value;
	}

	inline static int32_t get_offset_of_btn_nextMonth_5() { return static_cast<int32_t>(offsetof(FlatCalendar_t750354231, ___btn_nextMonth_5)); }
	inline GameObject_t1756533147 * get_btn_nextMonth_5() const { return ___btn_nextMonth_5; }
	inline GameObject_t1756533147 ** get_address_of_btn_nextMonth_5() { return &___btn_nextMonth_5; }
	inline void set_btn_nextMonth_5(GameObject_t1756533147 * value)
	{
		___btn_nextMonth_5 = value;
		Il2CppCodeGenWriteBarrier(&___btn_nextMonth_5, value);
	}

	inline static int32_t get_offset_of_btn_prevMonth_6() { return static_cast<int32_t>(offsetof(FlatCalendar_t750354231, ___btn_prevMonth_6)); }
	inline GameObject_t1756533147 * get_btn_prevMonth_6() const { return ___btn_prevMonth_6; }
	inline GameObject_t1756533147 ** get_address_of_btn_prevMonth_6() { return &___btn_prevMonth_6; }
	inline void set_btn_prevMonth_6(GameObject_t1756533147 * value)
	{
		___btn_prevMonth_6 = value;
		Il2CppCodeGenWriteBarrier(&___btn_prevMonth_6, value);
	}

	inline static int32_t get_offset_of_btn_calendar_7() { return static_cast<int32_t>(offsetof(FlatCalendar_t750354231, ___btn_calendar_7)); }
	inline GameObject_t1756533147 * get_btn_calendar_7() const { return ___btn_calendar_7; }
	inline GameObject_t1756533147 ** get_address_of_btn_calendar_7() { return &___btn_calendar_7; }
	inline void set_btn_calendar_7(GameObject_t1756533147 * value)
	{
		___btn_calendar_7 = value;
		Il2CppCodeGenWriteBarrier(&___btn_calendar_7, value);
	}

	inline static int32_t get_offset_of_label_year_8() { return static_cast<int32_t>(offsetof(FlatCalendar_t750354231, ___label_year_8)); }
	inline GameObject_t1756533147 * get_label_year_8() const { return ___label_year_8; }
	inline GameObject_t1756533147 ** get_address_of_label_year_8() { return &___label_year_8; }
	inline void set_label_year_8(GameObject_t1756533147 * value)
	{
		___label_year_8 = value;
		Il2CppCodeGenWriteBarrier(&___label_year_8, value);
	}

	inline static int32_t get_offset_of_label_month_9() { return static_cast<int32_t>(offsetof(FlatCalendar_t750354231, ___label_month_9)); }
	inline GameObject_t1756533147 * get_label_month_9() const { return ___label_month_9; }
	inline GameObject_t1756533147 ** get_address_of_label_month_9() { return &___label_month_9; }
	inline void set_label_month_9(GameObject_t1756533147 * value)
	{
		___label_month_9 = value;
		Il2CppCodeGenWriteBarrier(&___label_month_9, value);
	}

	inline static int32_t get_offset_of_label_dayOfWeek_10() { return static_cast<int32_t>(offsetof(FlatCalendar_t750354231, ___label_dayOfWeek_10)); }
	inline GameObject_t1756533147 * get_label_dayOfWeek_10() const { return ___label_dayOfWeek_10; }
	inline GameObject_t1756533147 ** get_address_of_label_dayOfWeek_10() { return &___label_dayOfWeek_10; }
	inline void set_label_dayOfWeek_10(GameObject_t1756533147 * value)
	{
		___label_dayOfWeek_10 = value;
		Il2CppCodeGenWriteBarrier(&___label_dayOfWeek_10, value);
	}

	inline static int32_t get_offset_of_label_dayNumber_11() { return static_cast<int32_t>(offsetof(FlatCalendar_t750354231, ___label_dayNumber_11)); }
	inline GameObject_t1756533147 * get_label_dayNumber_11() const { return ___label_dayNumber_11; }
	inline GameObject_t1756533147 ** get_address_of_label_dayNumber_11() { return &___label_dayNumber_11; }
	inline void set_label_dayNumber_11(GameObject_t1756533147 * value)
	{
		___label_dayNumber_11 = value;
		Il2CppCodeGenWriteBarrier(&___label_dayNumber_11, value);
	}

	inline static int32_t get_offset_of_label_numberEvents_12() { return static_cast<int32_t>(offsetof(FlatCalendar_t750354231, ___label_numberEvents_12)); }
	inline GameObject_t1756533147 * get_label_numberEvents_12() const { return ___label_numberEvents_12; }
	inline GameObject_t1756533147 ** get_address_of_label_numberEvents_12() { return &___label_numberEvents_12; }
	inline void set_label_numberEvents_12(GameObject_t1756533147 * value)
	{
		___label_numberEvents_12 = value;
		Il2CppCodeGenWriteBarrier(&___label_numberEvents_12, value);
	}

	inline static int32_t get_offset_of_currentTime_13() { return static_cast<int32_t>(offsetof(FlatCalendar_t750354231, ___currentTime_13)); }
	inline TimeObj_t1405947884  get_currentTime_13() const { return ___currentTime_13; }
	inline TimeObj_t1405947884 * get_address_of_currentTime_13() { return &___currentTime_13; }
	inline void set_currentTime_13(TimeObj_t1405947884  value)
	{
		___currentTime_13 = value;
	}

	inline static int32_t get_offset_of_delegate_ondayselected_15() { return static_cast<int32_t>(offsetof(FlatCalendar_t750354231, ___delegate_ondayselected_15)); }
	inline Delegate_OnDaySelected_t992817254 * get_delegate_ondayselected_15() const { return ___delegate_ondayselected_15; }
	inline Delegate_OnDaySelected_t992817254 ** get_address_of_delegate_ondayselected_15() { return &___delegate_ondayselected_15; }
	inline void set_delegate_ondayselected_15(Delegate_OnDaySelected_t992817254 * value)
	{
		___delegate_ondayselected_15 = value;
		Il2CppCodeGenWriteBarrier(&___delegate_ondayselected_15, value);
	}

	inline static int32_t get_offset_of_delegate_oneventselected_16() { return static_cast<int32_t>(offsetof(FlatCalendar_t750354231, ___delegate_oneventselected_16)); }
	inline Delegate_OnEventSelected_t2948336640 * get_delegate_oneventselected_16() const { return ___delegate_oneventselected_16; }
	inline Delegate_OnEventSelected_t2948336640 ** get_address_of_delegate_oneventselected_16() { return &___delegate_oneventselected_16; }
	inline void set_delegate_oneventselected_16(Delegate_OnEventSelected_t2948336640 * value)
	{
		___delegate_oneventselected_16 = value;
		Il2CppCodeGenWriteBarrier(&___delegate_oneventselected_16, value);
	}

	inline static int32_t get_offset_of_delegate_onmonthchanged_17() { return static_cast<int32_t>(offsetof(FlatCalendar_t750354231, ___delegate_onmonthchanged_17)); }
	inline Delegate_OnMonthChanged_t1729167635 * get_delegate_onmonthchanged_17() const { return ___delegate_onmonthchanged_17; }
	inline Delegate_OnMonthChanged_t1729167635 ** get_address_of_delegate_onmonthchanged_17() { return &___delegate_onmonthchanged_17; }
	inline void set_delegate_onmonthchanged_17(Delegate_OnMonthChanged_t1729167635 * value)
	{
		___delegate_onmonthchanged_17 = value;
		Il2CppCodeGenWriteBarrier(&___delegate_onmonthchanged_17, value);
	}

	inline static int32_t get_offset_of_delegate_onnowday_18() { return static_cast<int32_t>(offsetof(FlatCalendar_t750354231, ___delegate_onnowday_18)); }
	inline Delegate_OnNowDay_t4280307643 * get_delegate_onnowday_18() const { return ___delegate_onnowday_18; }
	inline Delegate_OnNowDay_t4280307643 ** get_address_of_delegate_onnowday_18() { return &___delegate_onnowday_18; }
	inline void set_delegate_onnowday_18(Delegate_OnNowDay_t4280307643 * value)
	{
		___delegate_onnowday_18 = value;
		Il2CppCodeGenWriteBarrier(&___delegate_onnowday_18, value);
	}
};

struct FlatCalendar_t750354231_StaticFields
{
public:
	// System.Int32 FlatCalendar::max_day_slots
	int32_t ___max_day_slots_2;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<FlatCalendar/EventObj>>>> FlatCalendar::events_list
	Dictionary_2_t4167718956 * ___events_list_14;

public:
	inline static int32_t get_offset_of_max_day_slots_2() { return static_cast<int32_t>(offsetof(FlatCalendar_t750354231_StaticFields, ___max_day_slots_2)); }
	inline int32_t get_max_day_slots_2() const { return ___max_day_slots_2; }
	inline int32_t* get_address_of_max_day_slots_2() { return &___max_day_slots_2; }
	inline void set_max_day_slots_2(int32_t value)
	{
		___max_day_slots_2 = value;
	}

	inline static int32_t get_offset_of_events_list_14() { return static_cast<int32_t>(offsetof(FlatCalendar_t750354231_StaticFields, ___events_list_14)); }
	inline Dictionary_2_t4167718956 * get_events_list_14() const { return ___events_list_14; }
	inline Dictionary_2_t4167718956 ** get_address_of_events_list_14() { return &___events_list_14; }
	inline void set_events_list_14(Dictionary_2_t4167718956 * value)
	{
		___events_list_14 = value;
		Il2CppCodeGenWriteBarrier(&___events_list_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
