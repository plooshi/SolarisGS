#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass PerkDivider.PerkDivider_C
// (None)

class UClass* UPerkDivider_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PerkDivider_C");

	return Clss;
}


// PerkDivider_C PerkDivider.Default__PerkDivider_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPerkDivider_C* UPerkDivider_C::GetDefaultObj()
{
	static class UPerkDivider_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPerkDivider_C*>(UPerkDivider_C::StaticClass()->DefaultObject);

	return Default;
}

}


