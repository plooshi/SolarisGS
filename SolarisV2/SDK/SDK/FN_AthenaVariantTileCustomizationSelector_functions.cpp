#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaVariantTileCustomizationSelector.AthenaVariantTileCustomizationSelector_C
// (None)

class UClass* UAthenaVariantTileCustomizationSelector_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaVariantTileCustomizationSelector_C");

	return Clss;
}


// AthenaVariantTileCustomizationSelector_C AthenaVariantTileCustomizationSelector.Default__AthenaVariantTileCustomizationSelector_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaVariantTileCustomizationSelector_C* UAthenaVariantTileCustomizationSelector_C::GetDefaultObj()
{
	static class UAthenaVariantTileCustomizationSelector_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaVariantTileCustomizationSelector_C*>(UAthenaVariantTileCustomizationSelector_C::StaticClass()->DefaultObject);

	return Default;
}

}


