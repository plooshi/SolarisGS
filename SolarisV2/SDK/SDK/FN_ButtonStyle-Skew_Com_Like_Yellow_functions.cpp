#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-Skew_Com_Like_Yellow.ButtonStyle-Skew_Com_Like_Yellow_C
// (None)

class UClass* UButtonStyleMinusSkew_Com_Like_Yellow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-Skew_Com_Like_Yellow_C");

	return Clss;
}


// ButtonStyle-Skew_Com_Like_Yellow_C ButtonStyle-Skew_Com_Like_Yellow.Default__ButtonStyle-Skew_Com_Like_Yellow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusSkew_Com_Like_Yellow_C* UButtonStyleMinusSkew_Com_Like_Yellow_C::GetDefaultObj()
{
	static class UButtonStyleMinusSkew_Com_Like_Yellow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusSkew_Com_Like_Yellow_C*>(UButtonStyleMinusSkew_Com_Like_Yellow_C::StaticClass()->DefaultObject);

	return Default;
}

}


