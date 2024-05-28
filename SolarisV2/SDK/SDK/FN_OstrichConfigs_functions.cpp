#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass OstrichConfigs.OstrichConfigs_C
// (None)

class UClass* UOstrichConfigs_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OstrichConfigs_C");

	return Clss;
}


// OstrichConfigs_C OstrichConfigs.Default__OstrichConfigs_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UOstrichConfigs_C* UOstrichConfigs_C::GetDefaultObj()
{
	static class UOstrichConfigs_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UOstrichConfigs_C*>(UOstrichConfigs_C::StaticClass()->DefaultObject);

	return Default;
}

}


