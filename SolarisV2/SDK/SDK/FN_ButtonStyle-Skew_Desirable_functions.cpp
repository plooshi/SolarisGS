#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-Skew_Desirable.ButtonStyle-Skew_Desirable_C
// (None)

class UClass* UButtonStyleMinusSkew_Desirable_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-Skew_Desirable_C");

	return Clss;
}


// ButtonStyle-Skew_Desirable_C ButtonStyle-Skew_Desirable.Default__ButtonStyle-Skew_Desirable_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusSkew_Desirable_C* UButtonStyleMinusSkew_Desirable_C::GetDefaultObj()
{
	static class UButtonStyleMinusSkew_Desirable_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusSkew_Desirable_C*>(UButtonStyleMinusSkew_Desirable_C::StaticClass()->DefaultObject);

	return Default;
}

}


