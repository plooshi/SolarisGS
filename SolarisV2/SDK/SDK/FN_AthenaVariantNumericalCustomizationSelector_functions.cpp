#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaVariantNumericalCustomizationSelector.AthenaVariantNumericalCustomizationSelector_C
// (None)

class UClass* UAthenaVariantNumericalCustomizationSelector_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaVariantNumericalCustomizationSelector_C");

	return Clss;
}


// AthenaVariantNumericalCustomizationSelector_C AthenaVariantNumericalCustomizationSelector.Default__AthenaVariantNumericalCustomizationSelector_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaVariantNumericalCustomizationSelector_C* UAthenaVariantNumericalCustomizationSelector_C::GetDefaultObj()
{
	static class UAthenaVariantNumericalCustomizationSelector_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaVariantNumericalCustomizationSelector_C*>(UAthenaVariantNumericalCustomizationSelector_C::StaticClass()->DefaultObject);

	return Default;
}

}


