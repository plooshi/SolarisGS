#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaVariantTileButton.AthenaVariantTileButton_C
// (None)

class UClass* UAthenaVariantTileButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaVariantTileButton_C");

	return Clss;
}


// AthenaVariantTileButton_C AthenaVariantTileButton.Default__AthenaVariantTileButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaVariantTileButton_C* UAthenaVariantTileButton_C::GetDefaultObj()
{
	static class UAthenaVariantTileButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaVariantTileButton_C*>(UAthenaVariantTileButton_C::StaticClass()->DefaultObject);

	return Default;
}

}


