#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_ThrownConsumable_InWindup.GE_ThrownConsumable_InWindup_C
// (None)

class UClass* UGE_ThrownConsumable_InWindup_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_ThrownConsumable_InWindup_C");

	return Clss;
}


// GE_ThrownConsumable_InWindup_C GE_ThrownConsumable_InWindup.Default__GE_ThrownConsumable_InWindup_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_ThrownConsumable_InWindup_C* UGE_ThrownConsumable_InWindup_C::GetDefaultObj()
{
	static class UGE_ThrownConsumable_InWindup_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_ThrownConsumable_InWindup_C*>(UGE_ThrownConsumable_InWindup_C::StaticClass()->DefaultObject);

	return Default;
}

}


