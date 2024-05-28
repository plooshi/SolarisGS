#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-Icon_Transparent.ButtonStyle-Icon_Transparent_C
// (None)

class UClass* UButtonStyleMinusIcon_Transparent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-Icon_Transparent_C");

	return Clss;
}


// ButtonStyle-Icon_Transparent_C ButtonStyle-Icon_Transparent.Default__ButtonStyle-Icon_Transparent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusIcon_Transparent_C* UButtonStyleMinusIcon_Transparent_C::GetDefaultObj()
{
	static class UButtonStyleMinusIcon_Transparent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusIcon_Transparent_C*>(UButtonStyleMinusIcon_Transparent_C::StaticClass()->DefaultObject);

	return Default;
}

}


