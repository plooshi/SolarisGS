#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AffiliateEntry.AffiliateEntry_C
// (None)

class UClass* UAffiliateEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AffiliateEntry_C");

	return Clss;
}


// AffiliateEntry_C AffiliateEntry.Default__AffiliateEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAffiliateEntry_C* UAffiliateEntry_C::GetDefaultObj()
{
	static class UAffiliateEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAffiliateEntry_C*>(UAffiliateEntry_C::StaticClass()->DefaultObject);

	return Default;
}

}


