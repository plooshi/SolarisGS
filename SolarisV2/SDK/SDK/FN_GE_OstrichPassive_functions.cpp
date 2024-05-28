#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_OstrichPassive.GE_OstrichPassive_C
// (None)

class UClass* UGE_OstrichPassive_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_OstrichPassive_C");

	return Clss;
}


// GE_OstrichPassive_C GE_OstrichPassive.Default__GE_OstrichPassive_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_OstrichPassive_C* UGE_OstrichPassive_C::GetDefaultObj()
{
	static class UGE_OstrichPassive_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_OstrichPassive_C*>(UGE_OstrichPassive_C::StaticClass()->DefaultObject);

	return Default;
}

}


