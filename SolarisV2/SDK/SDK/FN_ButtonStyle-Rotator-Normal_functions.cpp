#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-Rotator-Normal.ButtonStyle-Rotator-Normal_C
// (None)

class UClass* UButtonStyleMinusRotatorMinusNormal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-Rotator-Normal_C");

	return Clss;
}


// ButtonStyle-Rotator-Normal_C ButtonStyle-Rotator-Normal.Default__ButtonStyle-Rotator-Normal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusRotatorMinusNormal_C* UButtonStyleMinusRotatorMinusNormal_C::GetDefaultObj()
{
	static class UButtonStyleMinusRotatorMinusNormal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusRotatorMinusNormal_C*>(UButtonStyleMinusRotatorMinusNormal_C::StaticClass()->DefaultObject);

	return Default;
}

}


