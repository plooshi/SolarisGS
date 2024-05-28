#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaVariantCustomizationSelector.AthenaVariantCustomizationSelector_C
// (None)

class UClass* UAthenaVariantCustomizationSelector_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaVariantCustomizationSelector_C");

	return Clss;
}


// AthenaVariantCustomizationSelector_C AthenaVariantCustomizationSelector.Default__AthenaVariantCustomizationSelector_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaVariantCustomizationSelector_C* UAthenaVariantCustomizationSelector_C::GetDefaultObj()
{
	static class UAthenaVariantCustomizationSelector_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaVariantCustomizationSelector_C*>(UAthenaVariantCustomizationSelector_C::StaticClass()->DefaultObject);

	return Default;
}

}


