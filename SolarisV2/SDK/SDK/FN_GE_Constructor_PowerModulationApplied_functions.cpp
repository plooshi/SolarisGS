#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Constructor_PowerModulationApplied.GE_Constructor_PowerModulationApplied_C
// (None)

class UClass* UGE_Constructor_PowerModulationApplied_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Constructor_PowerModulationApplied_C");

	return Clss;
}


// GE_Constructor_PowerModulationApplied_C GE_Constructor_PowerModulationApplied.Default__GE_Constructor_PowerModulationApplied_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Constructor_PowerModulationApplied_C* UGE_Constructor_PowerModulationApplied_C::GetDefaultObj()
{
	static class UGE_Constructor_PowerModulationApplied_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Constructor_PowerModulationApplied_C*>(UGE_Constructor_PowerModulationApplied_C::StaticClass()->DefaultObject);

	return Default;
}

}


