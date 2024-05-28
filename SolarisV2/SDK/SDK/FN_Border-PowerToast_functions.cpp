#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border-PowerToast.Border-PowerToast_C
// (None)

class UClass* UBorderMinusPowerToast_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border-PowerToast_C");

	return Clss;
}


// Border-PowerToast_C Border-PowerToast.Default__Border-PowerToast_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorderMinusPowerToast_C* UBorderMinusPowerToast_C::GetDefaultObj()
{
	static class UBorderMinusPowerToast_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorderMinusPowerToast_C*>(UBorderMinusPowerToast_C::StaticClass()->DefaultObject);

	return Default;
}

}


