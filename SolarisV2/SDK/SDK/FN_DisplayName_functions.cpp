#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass DisplayName.DisplayName_C
// (None)

class UClass* UDisplayName_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DisplayName_C");

	return Clss;
}


// DisplayName_C DisplayName.Default__DisplayName_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDisplayName_C* UDisplayName_C::GetDefaultObj()
{
	static class UDisplayName_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDisplayName_C*>(UDisplayName_C::StaticClass()->DefaultObject);

	return Default;
}

}


