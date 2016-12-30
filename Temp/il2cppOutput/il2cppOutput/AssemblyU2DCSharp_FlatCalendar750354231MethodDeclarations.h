#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// FlatCalendar
struct FlatCalendar_t750354231;
// System.String
struct String_t;
// System.Collections.Generic.List`1<FlatCalendar/EventObj>
struct List_1_t2849274755;
// FlatCalendar/Delegate_OnDaySelected
struct Delegate_OnDaySelected_t992817254;
// FlatCalendar/Delegate_OnEventSelected
struct Delegate_OnEventSelected_t2948336640;
// FlatCalendar/Delegate_OnMonthChanged
struct Delegate_OnMonthChanged_t1729167635;
// FlatCalendar/Delegate_OnNowDay
struct Delegate_OnNowDay_t4280307643;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_FlatCalendar_TimeObj1405947884.h"
#include "AssemblyU2DCSharp_FlatCalendar_EventObj3480153623.h"
#include "AssemblyU2DCSharp_FlatCalendar_Delegate_OnDaySelect992817254.h"
#include "AssemblyU2DCSharp_FlatCalendar_Delegate_OnEventSel2948336640.h"
#include "AssemblyU2DCSharp_FlatCalendar_Delegate_OnMonthCha1729167635.h"
#include "AssemblyU2DCSharp_FlatCalendar_Delegate_OnNowDay4280307643.h"

// System.Void FlatCalendar::.ctor()
extern "C"  void FlatCalendar__ctor_m3550374416 (FlatCalendar_t750354231 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FlatCalendar::initFlatCalendar()
extern "C"  void FlatCalendar_initFlatCalendar_m2370078149 (FlatCalendar_t750354231 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FlatCalendar::Start()
extern "C"  void FlatCalendar_Start_m4134577028 (FlatCalendar_t750354231 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FlatCalendar::Update()
extern "C"  void FlatCalendar_Update_m999353431 (FlatCalendar_t750354231 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FlatCalendar::updateCalendar(System.Int32,System.Int32)
extern "C"  void FlatCalendar_updateCalendar_m2661521473 (FlatCalendar_t750354231 * __this, int32_t ___month_number0, int32_t ___year1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FlatCalendar::refreshCalendar()
extern "C"  void FlatCalendar_refreshCalendar_m163047513 (FlatCalendar_t750354231 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String FlatCalendar::getMonthStringFromNumber(System.Int32)
extern "C"  String_t* FlatCalendar_getMonthStringFromNumber_m3688805020 (FlatCalendar_t750354231 * __this, int32_t ___month_number0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String FlatCalendar::getDayOfWeek(System.Int32,System.Int32,System.Int32)
extern "C"  String_t* FlatCalendar_getDayOfWeek_m289229869 (FlatCalendar_t750354231 * __this, int32_t ___year0, int32_t ___month1, int32_t ___day2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 FlatCalendar::getIndexOfFirstSlotInMonth(System.Int32,System.Int32)
extern "C"  int32_t FlatCalendar_getIndexOfFirstSlotInMonth_m2452636476 (FlatCalendar_t750354231 * __this, int32_t ___year0, int32_t ___month1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FlatCalendar::disableAllSlot()
extern "C"  void FlatCalendar_disableAllSlot_m2045415243 (FlatCalendar_t750354231 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FlatCalendar::disableSlot(System.Int32)
extern "C"  void FlatCalendar_disableSlot_m253354759 (FlatCalendar_t750354231 * __this, int32_t ___numSlot0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FlatCalendar::setNormalSlot(System.Int32)
extern "C"  void FlatCalendar_setNormalSlot_m37520930 (FlatCalendar_t750354231 * __this, int32_t ___numSlot0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FlatCalendar::setEventSlot(System.Int32)
extern "C"  void FlatCalendar_setEventSlot_m344314385 (FlatCalendar_t750354231 * __this, int32_t ___numSlot0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FlatCalendar::populateAllSlot(System.Int32,System.Int32)
extern "C"  void FlatCalendar_populateAllSlot_m667924061 (FlatCalendar_t750354231 * __this, int32_t ___monthNumber0, int32_t ___year1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FlatCalendar::changeTextSlot(System.Int32,System.String)
extern "C"  void FlatCalendar_changeTextSlot_m156918264 (FlatCalendar_t750354231 * __this, int32_t ___numSlot0, String_t* ___text1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 FlatCalendar::getDayInSlot(System.Int32)
extern "C"  int32_t FlatCalendar_getDayInSlot_m2422276348 (FlatCalendar_t750354231 * __this, int32_t ___numSlot0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FlatCalendar::markSelectionDay(System.Int32)
extern "C"  void FlatCalendar_markSelectionDay_m242052638 (FlatCalendar_t750354231 * __this, int32_t ___day0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FlatCalendar::unmarkSelctionDay(System.Int32)
extern "C"  void FlatCalendar_unmarkSelctionDay_m1981695424 (FlatCalendar_t750354231 * __this, int32_t ___day0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FlatCalendar::checkEventExist(System.Int32,System.Int32,System.Int32)
extern "C"  bool FlatCalendar_checkEventExist_m2599869438 (Il2CppObject * __this /* static, unused */, int32_t ___year0, int32_t ___month1, int32_t ___day2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FlatCalendar::addEventsListener()
extern "C"  void FlatCalendar_addEventsListener_m1685839966 (FlatCalendar_t750354231 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FlatCalendar::setCurrentTime()
extern "C"  void FlatCalendar_setCurrentTime_m729178242 (FlatCalendar_t750354231 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FlatCalendar::setCurrentTime(FlatCalendar/TimeObj)
extern "C"  void FlatCalendar_setCurrentTime_m4179055774 (FlatCalendar_t750354231 * __this, TimeObj_t1405947884  ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FlatCalendar::installDemoData()
extern "C"  void FlatCalendar_installDemoData_m224371116 (FlatCalendar_t750354231 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FlatCalendar::setUIStyle(System.Int32)
extern "C"  void FlatCalendar_setUIStyle_m1506722796 (FlatCalendar_t750354231 * __this, int32_t ___style0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FlatCalendar::addEvent(System.Int32,System.Int32,System.Int32,FlatCalendar/EventObj)
extern "C"  void FlatCalendar_addEvent_m1608829155 (FlatCalendar_t750354231 * __this, int32_t ___year0, int32_t ___month1, int32_t ___day2, EventObj_t3480153623  ___ev3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FlatCalendar::removeEvent(System.Int32,System.Int32,System.Int32,FlatCalendar/EventObj)
extern "C"  void FlatCalendar_removeEvent_m381515434 (FlatCalendar_t750354231 * __this, int32_t ___year0, int32_t ___month1, int32_t ___day2, EventObj_t3480153623  ___ev3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FlatCalendar::removeAllEventOfDay(System.Int32,System.Int32,System.Int32)
extern "C"  void FlatCalendar_removeAllEventOfDay_m3695720461 (FlatCalendar_t750354231 * __this, int32_t ___year0, int32_t ___month1, int32_t ___day2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FlatCalendar::removeAllCalendarEvents()
extern "C"  void FlatCalendar_removeAllCalendarEvents_m1353961732 (FlatCalendar_t750354231 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<FlatCalendar/EventObj> FlatCalendar::getEventList(System.Int32,System.Int32,System.Int32)
extern "C"  List_1_t2849274755 * FlatCalendar_getEventList_m3163818935 (Il2CppObject * __this /* static, unused */, int32_t ___year0, int32_t ___month1, int32_t ___day2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FlatCalendar::updateUiLabelEvents(System.Int32,System.Int32,System.Int32)
extern "C"  void FlatCalendar_updateUiLabelEvents_m2822541451 (FlatCalendar_t750354231 * __this, int32_t ___year0, int32_t ___month1, int32_t ___day2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FlatCalendar::evtListener_NextMonth()
extern "C"  void FlatCalendar_evtListener_NextMonth_m789252187 (FlatCalendar_t750354231 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FlatCalendar::evtListener_PreviousMonth()
extern "C"  void FlatCalendar_evtListener_PreviousMonth_m1168591277 (FlatCalendar_t750354231 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FlatCalendar::evtListener_DaySelected()
extern "C"  void FlatCalendar_evtListener_DaySelected_m1067697105 (FlatCalendar_t750354231 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FlatCalendar::evtListener_GoToNowday()
extern "C"  void FlatCalendar_evtListener_GoToNowday_m1185060869 (FlatCalendar_t750354231 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FlatCalendar::setCallback_OnDaySelected(FlatCalendar/Delegate_OnDaySelected)
extern "C"  void FlatCalendar_setCallback_OnDaySelected_m1265187064 (FlatCalendar_t750354231 * __this, Delegate_OnDaySelected_t992817254 * ___func0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FlatCalendar::setCallback_OnEventSelected(FlatCalendar/Delegate_OnEventSelected)
extern "C"  void FlatCalendar_setCallback_OnEventSelected_m534458744 (FlatCalendar_t750354231 * __this, Delegate_OnEventSelected_t2948336640 * ___func0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FlatCalendar::setCallback_OnMonthChanged(FlatCalendar/Delegate_OnMonthChanged)
extern "C"  void FlatCalendar_setCallback_OnMonthChanged_m2189275038 (FlatCalendar_t750354231 * __this, Delegate_OnMonthChanged_t1729167635 * ___func0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FlatCalendar::setCallback_OnNowday(FlatCalendar/Delegate_OnNowDay)
extern "C"  void FlatCalendar_setCallback_OnNowday_m968605502 (FlatCalendar_t750354231 * __this, Delegate_OnNowDay_t4280307643 * ___func0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FlatCalendar::.cctor()
extern "C"  void FlatCalendar__cctor_m4119176465 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FlatCalendar::<addEventsListener>m__0()
extern "C"  void FlatCalendar_U3CaddEventsListenerU3Em__0_m1011677909 (FlatCalendar_t750354231 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FlatCalendar::<addEventsListener>m__1()
extern "C"  void FlatCalendar_U3CaddEventsListenerU3Em__1_m1011678004 (FlatCalendar_t750354231 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FlatCalendar::<addEventsListener>m__2()
extern "C"  void FlatCalendar_U3CaddEventsListenerU3Em__2_m1011677843 (FlatCalendar_t750354231 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FlatCalendar::<addEventsListener>m__3()
extern "C"  void FlatCalendar_U3CaddEventsListenerU3Em__3_m1011677938 (FlatCalendar_t750354231 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
