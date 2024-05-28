#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-Skew_Black.ButtonStyle-Skew_Black_C
// (None)

class UClass* UButtonStyleMinusSkew_Black_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-Skew_Black_C");

	return Clss;
}


// ButtonStyle-Skew_Black_C ButtonStyle-Skew_Black.Default__ButtonStyle-Skew_Black_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusSkew_Black_C* UButtonStyleMinusSkew_Black_C::GetDefaultObj()
{
	static class UButtonStyleMinusSkew_Black_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusSkew_Black_C*>(UButtonStyleMinusSkew_Black_C::StaticClass()->DefaultObject);

	return Default;
}

}


