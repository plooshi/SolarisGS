#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Targeting3PCamera_MidRange.Targeting3PCamera_MidRange_C
// (None)

class UClass* UTargeting3PCamera_MidRange_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Targeting3PCamera_MidRange_C");

	return Clss;
}


// Targeting3PCamera_MidRange_C Targeting3PCamera_MidRange.Default__Targeting3PCamera_MidRange_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTargeting3PCamera_MidRange_C* UTargeting3PCamera_MidRange_C::GetDefaultObj()
{
	static class UTargeting3PCamera_MidRange_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTargeting3PCamera_MidRange_C*>(UTargeting3PCamera_MidRange_C::StaticClass()->DefaultObject);

	return Default;
}

}


