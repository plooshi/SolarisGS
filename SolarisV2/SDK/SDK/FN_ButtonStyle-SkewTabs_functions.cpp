#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-SkewTabs.ButtonStyle-SkewTabs_C
// (None)

class UClass* UButtonStyleMinusSkewTabs_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-SkewTabs_C");

	return Clss;
}


// ButtonStyle-SkewTabs_C ButtonStyle-SkewTabs.Default__ButtonStyle-SkewTabs_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusSkewTabs_C* UButtonStyleMinusSkewTabs_C::GetDefaultObj()
{
	static class UButtonStyleMinusSkewTabs_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusSkewTabs_C*>(UButtonStyleMinusSkewTabs_C::StaticClass()->DefaultObject);

	return Default;
}

}


