#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-DynamicContent.ButtonStyle-DynamicContent_C
// (None)

class UClass* UButtonStyleMinusDynamicContent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-DynamicContent_C");

	return Clss;
}


// ButtonStyle-DynamicContent_C ButtonStyle-DynamicContent.Default__ButtonStyle-DynamicContent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusDynamicContent_C* UButtonStyleMinusDynamicContent_C::GetDefaultObj()
{
	static class UButtonStyleMinusDynamicContent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusDynamicContent_C*>(UButtonStyleMinusDynamicContent_C::StaticClass()->DefaultObject);

	return Default;
}

}


