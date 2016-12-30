#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif



#include "mscorlib_System_Array3829468939.h"
#include "AssemblyU2DCSharp_FlatCalendar_EventObj3480153623.h"

#pragma once
// FlatCalendar/EventObj[]
struct EventObjU5BU5D_t2902866862  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) EventObj_t3480153623  m_Items[1];

public:
	inline EventObj_t3480153623  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline EventObj_t3480153623 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, EventObj_t3480153623  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline EventObj_t3480153623  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline EventObj_t3480153623 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, EventObj_t3480153623  value)
	{
		m_Items[index] = value;
	}
};
