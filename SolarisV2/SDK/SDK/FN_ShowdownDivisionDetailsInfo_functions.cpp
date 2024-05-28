#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ShowdownDivisionDetailsInfo.ShowdownDivisionDetailsInfo_C
// (None)

class UClass* UShowdownDivisionDetailsInfo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ShowdownDivisionDetailsInfo_C");

	return Clss;
}


// ShowdownDivisionDetailsInfo_C ShowdownDivisionDetailsInfo.Default__ShowdownDivisionDetailsInfo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UShowdownDivisionDetailsInfo_C* UShowdownDivisionDetailsInfo_C::GetDefaultObj()
{
	static class UShowdownDivisionDetailsInfo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UShowdownDivisionDetailsInfo_C*>(UShowdownDivisionDetailsInfo_C::StaticClass()->DefaultObject);

	return Default;
}

}


