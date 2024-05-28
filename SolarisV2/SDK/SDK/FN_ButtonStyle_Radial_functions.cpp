#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle_Radial.ButtonStyle_Radial_C
// (None)

class UClass* UButtonStyle_Radial_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle_Radial_C");

	return Clss;
}


// ButtonStyle_Radial_C ButtonStyle_Radial.Default__ButtonStyle_Radial_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyle_Radial_C* UButtonStyle_Radial_C::GetDefaultObj()
{
	static class UButtonStyle_Radial_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyle_Radial_C*>(UButtonStyle_Radial_C::StaticClass()->DefaultObject);

	return Default;
}

}


