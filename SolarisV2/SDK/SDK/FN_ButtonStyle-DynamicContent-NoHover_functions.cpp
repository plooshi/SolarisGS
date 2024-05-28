#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-DynamicContent-NoHover.ButtonStyle-DynamicContent-NoHover_C
// (None)

class UClass* UButtonStyleMinusDynamicContentMinusNoHover_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-DynamicContent-NoHover_C");

	return Clss;
}


// ButtonStyle-DynamicContent-NoHover_C ButtonStyle-DynamicContent-NoHover.Default__ButtonStyle-DynamicContent-NoHover_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusDynamicContentMinusNoHover_C* UButtonStyleMinusDynamicContentMinusNoHover_C::GetDefaultObj()
{
	static class UButtonStyleMinusDynamicContentMinusNoHover_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusDynamicContentMinusNoHover_C*>(UButtonStyleMinusDynamicContentMinusNoHover_C::StaticClass()->DefaultObject);

	return Default;
}

}


