#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border-MainModal-Dark.Border-MainModal-Dark_C
// (None)

class UClass* UBorderMinusMainModalMinusDark_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border-MainModal-Dark_C");

	return Clss;
}


// Border-MainModal-Dark_C Border-MainModal-Dark.Default__Border-MainModal-Dark_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorderMinusMainModalMinusDark_C* UBorderMinusMainModalMinusDark_C::GetDefaultObj()
{
	static class UBorderMinusMainModalMinusDark_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorderMinusMainModalMinusDark_C*>(UBorderMinusMainModalMinusDark_C::StaticClass()->DefaultObject);

	return Default;
}

}


