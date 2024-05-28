#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_SpecialEvent_Halloween_PumpkinHead.GE_SpecialEvent_Halloween_PumpkinHead_C
// (None)

class UClass* UGE_SpecialEvent_Halloween_PumpkinHead_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_SpecialEvent_Halloween_PumpkinHead_C");

	return Clss;
}


// GE_SpecialEvent_Halloween_PumpkinHead_C GE_SpecialEvent_Halloween_PumpkinHead.Default__GE_SpecialEvent_Halloween_PumpkinHead_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_SpecialEvent_Halloween_PumpkinHead_C* UGE_SpecialEvent_Halloween_PumpkinHead_C::GetDefaultObj()
{
	static class UGE_SpecialEvent_Halloween_PumpkinHead_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_SpecialEvent_Halloween_PumpkinHead_C*>(UGE_SpecialEvent_Halloween_PumpkinHead_C::StaticClass()->DefaultObject);

	return Default;
}

}


