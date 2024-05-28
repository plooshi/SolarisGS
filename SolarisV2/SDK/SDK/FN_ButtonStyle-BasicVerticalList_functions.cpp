#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-BasicVerticalList.ButtonStyle-BasicVerticalList_C
// (None)

class UClass* UButtonStyleMinusBasicVerticalList_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-BasicVerticalList_C");

	return Clss;
}


// ButtonStyle-BasicVerticalList_C ButtonStyle-BasicVerticalList.Default__ButtonStyle-BasicVerticalList_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusBasicVerticalList_C* UButtonStyleMinusBasicVerticalList_C::GetDefaultObj()
{
	static class UButtonStyleMinusBasicVerticalList_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusBasicVerticalList_C*>(UButtonStyleMinusBasicVerticalList_C::StaticClass()->DefaultObject);

	return Default;
}

}


