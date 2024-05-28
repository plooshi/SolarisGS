#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Constructor_FullyContainedApplied.GE_Constructor_FullyContainedApplied_C
// (None)

class UClass* UGE_Constructor_FullyContainedApplied_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Constructor_FullyContainedApplied_C");

	return Clss;
}


// GE_Constructor_FullyContainedApplied_C GE_Constructor_FullyContainedApplied.Default__GE_Constructor_FullyContainedApplied_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Constructor_FullyContainedApplied_C* UGE_Constructor_FullyContainedApplied_C::GetDefaultObj()
{
	static class UGE_Constructor_FullyContainedApplied_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Constructor_FullyContainedApplied_C*>(UGE_Constructor_FullyContainedApplied_C::StaticClass()->DefaultObject);

	return Default;
}

}


