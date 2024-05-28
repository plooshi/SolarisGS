#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-GamepadBindings.ButtonStyle-GamepadBindings_C
// (None)

class UClass* UButtonStyleMinusGamepadBindings_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-GamepadBindings_C");

	return Clss;
}


// ButtonStyle-GamepadBindings_C ButtonStyle-GamepadBindings.Default__ButtonStyle-GamepadBindings_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusGamepadBindings_C* UButtonStyleMinusGamepadBindings_C::GetDefaultObj()
{
	static class UButtonStyleMinusGamepadBindings_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusGamepadBindings_C*>(UButtonStyleMinusGamepadBindings_C::StaticClass()->DefaultObject);

	return Default;
}

}


