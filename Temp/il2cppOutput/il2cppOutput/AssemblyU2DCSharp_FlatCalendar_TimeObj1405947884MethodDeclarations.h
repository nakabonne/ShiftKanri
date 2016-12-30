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

// System.String
struct String_t;
// FlatCalendar/TimeObj
struct TimeObj_t1405947884;
struct TimeObj_t1405947884_marshaled_pinvoke;
struct TimeObj_t1405947884_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_FlatCalendar_TimeObj1405947884.h"
#include "mscorlib_System_String2029220233.h"

// System.Void FlatCalendar/TimeObj::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.String,System.Int32)
extern "C"  void TimeObj__ctor_m4009635678 (TimeObj_t1405947884 * __this, int32_t ____year0, int32_t ____month1, int32_t ____day2, int32_t ____totalDays3, String_t* ____dayOfWeek4, int32_t ____dayOffset5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FlatCalendar/TimeObj::print()
extern "C"  void TimeObj_print_m401727232 (TimeObj_t1405947884 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct TimeObj_t1405947884;
struct TimeObj_t1405947884_marshaled_pinvoke;

extern "C" void TimeObj_t1405947884_marshal_pinvoke(const TimeObj_t1405947884& unmarshaled, TimeObj_t1405947884_marshaled_pinvoke& marshaled);
extern "C" void TimeObj_t1405947884_marshal_pinvoke_back(const TimeObj_t1405947884_marshaled_pinvoke& marshaled, TimeObj_t1405947884& unmarshaled);
extern "C" void TimeObj_t1405947884_marshal_pinvoke_cleanup(TimeObj_t1405947884_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct TimeObj_t1405947884;
struct TimeObj_t1405947884_marshaled_com;

extern "C" void TimeObj_t1405947884_marshal_com(const TimeObj_t1405947884& unmarshaled, TimeObj_t1405947884_marshaled_com& marshaled);
extern "C" void TimeObj_t1405947884_marshal_com_back(const TimeObj_t1405947884_marshaled_com& marshaled, TimeObj_t1405947884& unmarshaled);
extern "C" void TimeObj_t1405947884_marshal_com_cleanup(TimeObj_t1405947884_marshaled_com& marshaled);
