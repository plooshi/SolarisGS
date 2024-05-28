#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-Rotator-Large.ButtonStyle-Rotator-Large_C
// (None)

class UClass* UButtonStyleMinusRotatorMinusLarge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-Rotator-Large_C");

	return Clss;
}


// ButtonStyle-Rotator-Large_C ButtonStyle-Rotator-Large.Default__ButtonStyle-Rotator-Large_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusRotatorMinusLarge_C* UButtonStyleMinusRotatorMinusLarge_C::GetDefaultObj()
{
	static class UButtonStyleMinusRotatorMinusLarge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusRotatorMinusLarge_C*>(UButtonStyleMinusRotatorMinusLarge_C::StaticClass()->DefaultObject);

	return Default;
}

}


