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
// FlatCalendar/EventObj
struct EventObj_t3480153623;
struct EventObj_t3480153623_marshaled_pinvoke;
struct EventObj_t3480153623_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_FlatCalendar_EventObj3480153623.h"
#include "mscorlib_System_String2029220233.h"

// System.Void FlatCalendar/EventObj::.ctor(System.String,System.String)
extern "C"  void EventObj__ctor_m3424446800 (EventObj_t3480153623 * __this, String_t* ____name0, String_t* ____description1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FlatCalendar/EventObj::print()
extern "C"  void EventObj_print_m3006038559 (EventObj_t3480153623 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct EventObj_t3480153623;
struct EventObj_t3480153623_marshaled_pinvoke;

extern "C" void EventObj_t3480153623_marshal_pinvoke(const EventObj_t3480153623& unmarshaled, EventObj_t3480153623_marshaled_pinvoke& marshaled);
extern "C" void EventObj_t3480153623_marshal_pinvoke_back(const EventObj_t3480153623_marshaled_pinvoke& marshaled, EventObj_t3480153623& unmarshaled);
extern "C" void EventObj_t3480153623_marshal_pinvoke_cleanup(EventObj_t3480153623_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct EventObj_t3480153623;
struct EventObj_t3480153623_marshaled_com;

extern "C" void EventObj_t3480153623_marshal_com(const EventObj_t3480153623& unmarshaled, EventObj_t3480153623_marshaled_com& marshaled);
extern "C" void EventObj_t3480153623_marshal_com_back(const EventObj_t3480153623_marshaled_com& marshaled, EventObj_t3480153623& unmarshaled);
extern "C" void EventObj_t3480153623_marshal_com_cleanup(EventObj_t3480153623_marshaled_com& marshaled);
