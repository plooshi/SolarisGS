#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ItemDefinitionLivePreview.ItemDefinitionLivePreview_C
// (None)

class UClass* UItemDefinitionLivePreview_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ItemDefinitionLivePreview_C");

	return Clss;
}


// ItemDefinitionLivePreview_C ItemDefinitionLivePreview.Default__ItemDefinitionLivePreview_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UItemDefinitionLivePreview_C* UItemDefinitionLivePreview_C::GetDefaultObj()
{
	static class UItemDefinitionLivePreview_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UItemDefinitionLivePreview_C*>(UItemDefinitionLivePreview_C::StaticClass()->DefaultObject);

	return Default;
}

}


