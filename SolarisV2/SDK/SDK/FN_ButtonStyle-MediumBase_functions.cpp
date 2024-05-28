#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-MediumBase.ButtonStyle-MediumBase_C
// (None)

class UClass* UButtonStyleMinusMediumBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-MediumBase_C");

	return Clss;
}


// ButtonStyle-MediumBase_C ButtonStyle-MediumBase.Default__ButtonStyle-MediumBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusMediumBase_C* UButtonStyleMinusMediumBase_C::GetDefaultObj()
{
	static class UButtonStyleMinusMediumBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusMediumBase_C*>(UButtonStyleMinusMediumBase_C::StaticClass()->DefaultObject);

	return Default;
}

}


