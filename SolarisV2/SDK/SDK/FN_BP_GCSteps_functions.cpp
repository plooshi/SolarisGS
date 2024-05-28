#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_GCSteps.BP_GCSteps_C
// (None)

class UClass* UBP_GCSteps_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_GCSteps_C");

	return Clss;
}


// BP_GCSteps_C BP_GCSteps.Default__BP_GCSteps_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_GCSteps_C* UBP_GCSteps_C::GetDefaultObj()
{
	static class UBP_GCSteps_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_GCSteps_C*>(UBP_GCSteps_C::StaticClass()->DefaultObject);

	return Default;
}

}


