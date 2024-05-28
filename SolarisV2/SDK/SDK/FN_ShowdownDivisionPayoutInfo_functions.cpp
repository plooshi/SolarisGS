#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ShowdownDivisionPayoutInfo.ShowdownDivisionPayoutInfo_C
// (None)

class UClass* UShowdownDivisionPayoutInfo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ShowdownDivisionPayoutInfo_C");

	return Clss;
}


// ShowdownDivisionPayoutInfo_C ShowdownDivisionPayoutInfo.Default__ShowdownDivisionPayoutInfo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UShowdownDivisionPayoutInfo_C* UShowdownDivisionPayoutInfo_C::GetDefaultObj()
{
	static class UShowdownDivisionPayoutInfo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UShowdownDivisionPayoutInfo_C*>(UShowdownDivisionPayoutInfo_C::StaticClass()->DefaultObject);

	return Default;
}

}


