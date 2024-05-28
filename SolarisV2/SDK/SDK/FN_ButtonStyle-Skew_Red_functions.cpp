#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-Skew_Red.ButtonStyle-Skew_Red_C
// (None)

class UClass* UButtonStyleMinusSkew_Red_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-Skew_Red_C");

	return Clss;
}


// ButtonStyle-Skew_Red_C ButtonStyle-Skew_Red.Default__ButtonStyle-Skew_Red_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusSkew_Red_C* UButtonStyleMinusSkew_Red_C::GetDefaultObj()
{
	static class UButtonStyleMinusSkew_Red_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusSkew_Red_C*>(UButtonStyleMinusSkew_Red_C::StaticClass()->DefaultObject);

	return Default;
}

}


