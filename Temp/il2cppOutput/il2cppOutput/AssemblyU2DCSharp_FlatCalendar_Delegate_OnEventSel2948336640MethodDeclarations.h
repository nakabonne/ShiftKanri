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

// FlatCalendar/Delegate_OnEventSelected
struct Delegate_OnEventSelected_t2948336640;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.List`1<FlatCalendar/EventObj>
struct List_1_t2849274755;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "AssemblyU2DCSharp_FlatCalendar_TimeObj1405947884.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void FlatCalendar/Delegate_OnEventSelected::.ctor(System.Object,System.IntPtr)
extern "C"  void Delegate_OnEventSelected__ctor_m3254047133 (Delegate_OnEventSelected_t2948336640 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FlatCalendar/Delegate_OnEventSelected::Invoke(FlatCalendar/TimeObj,System.Collections.Generic.List`1<FlatCalendar/EventObj>)
extern "C"  void Delegate_OnEventSelected_Invoke_m3517121228 (Delegate_OnEventSelected_t2948336640 * __this, TimeObj_t1405947884  ___time0, List_1_t2849274755 * ___evs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult FlatCalendar/Delegate_OnEventSelected::BeginInvoke(FlatCalendar/TimeObj,System.Collections.Generic.List`1<FlatCalendar/EventObj>,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Delegate_OnEventSelected_BeginInvoke_m1451482209 (Delegate_OnEventSelected_t2948336640 * __this, TimeObj_t1405947884  ___time0, List_1_t2849274755 * ___evs1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FlatCalendar/Delegate_OnEventSelected::EndInvoke(System.IAsyncResult)
extern "C"  void Delegate_OnEventSelected_EndInvoke_m1836874923 (Delegate_OnEventSelected_t2948336640 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
