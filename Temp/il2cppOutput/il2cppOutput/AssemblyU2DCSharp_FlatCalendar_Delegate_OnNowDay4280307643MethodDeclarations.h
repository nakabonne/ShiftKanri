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

// FlatCalendar/Delegate_OnNowDay
struct Delegate_OnNowDay_t4280307643;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "AssemblyU2DCSharp_FlatCalendar_TimeObj1405947884.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void FlatCalendar/Delegate_OnNowDay::.ctor(System.Object,System.IntPtr)
extern "C"  void Delegate_OnNowDay__ctor_m2493268432 (Delegate_OnNowDay_t4280307643 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FlatCalendar/Delegate_OnNowDay::Invoke(FlatCalendar/TimeObj)
extern "C"  void Delegate_OnNowDay_Invoke_m2010588010 (Delegate_OnNowDay_t4280307643 * __this, TimeObj_t1405947884  ___time0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult FlatCalendar/Delegate_OnNowDay::BeginInvoke(FlatCalendar/TimeObj,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Delegate_OnNowDay_BeginInvoke_m1835131589 (Delegate_OnNowDay_t4280307643 * __this, TimeObj_t1405947884  ___time0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FlatCalendar/Delegate_OnNowDay::EndInvoke(System.IAsyncResult)
extern "C"  void Delegate_OnNowDay_EndInvoke_m246787582 (Delegate_OnNowDay_t4280307643 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
