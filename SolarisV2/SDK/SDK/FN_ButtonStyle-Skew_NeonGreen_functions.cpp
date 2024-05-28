#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-Skew_NeonGreen.ButtonStyle-Skew_NeonGreen_C
// (None)

class UClass* UButtonStyleMinusSkew_NeonGreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-Skew_NeonGreen_C");

	return Clss;
}


// ButtonStyle-Skew_NeonGreen_C ButtonStyle-Skew_NeonGreen.Default__ButtonStyle-Skew_NeonGreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusSkew_NeonGreen_C* UButtonStyleMinusSkew_NeonGreen_C::GetDefaultObj()
{
	static class UButtonStyleMinusSkew_NeonGreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusSkew_NeonGreen_C*>(UButtonStyleMinusSkew_NeonGreen_C::StaticClass()->DefaultObject);

	return Default;
}

}


