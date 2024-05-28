#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-Tab-AngledStats.ButtonStyle-Tab-AngledStats_C
// (None)

class UClass* UButtonStyleMinusTabMinusAngledStats_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-Tab-AngledStats_C");

	return Clss;
}


// ButtonStyle-Tab-AngledStats_C ButtonStyle-Tab-AngledStats.Default__ButtonStyle-Tab-AngledStats_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusTabMinusAngledStats_C* UButtonStyleMinusTabMinusAngledStats_C::GetDefaultObj()
{
	static class UButtonStyleMinusTabMinusAngledStats_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusTabMinusAngledStats_C*>(UButtonStyleMinusTabMinusAngledStats_C::StaticClass()->DefaultObject);

	return Default;
}

}


