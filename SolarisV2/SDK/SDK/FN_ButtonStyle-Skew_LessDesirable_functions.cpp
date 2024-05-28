#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-Skew_LessDesirable.ButtonStyle-Skew_LessDesirable_C
// (None)

class UClass* UButtonStyleMinusSkew_LessDesirable_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-Skew_LessDesirable_C");

	return Clss;
}


// ButtonStyle-Skew_LessDesirable_C ButtonStyle-Skew_LessDesirable.Default__ButtonStyle-Skew_LessDesirable_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusSkew_LessDesirable_C* UButtonStyleMinusSkew_LessDesirable_C::GetDefaultObj()
{
	static class UButtonStyleMinusSkew_LessDesirable_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusSkew_LessDesirable_C*>(UButtonStyleMinusSkew_LessDesirable_C::StaticClass()->DefaultObject);

	return Default;
}

}


