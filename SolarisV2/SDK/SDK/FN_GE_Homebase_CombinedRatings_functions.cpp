#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Homebase_CombinedRatings.GE_Homebase_CombinedRatings_C
// (None)

class UClass* UGE_Homebase_CombinedRatings_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Homebase_CombinedRatings_C");

	return Clss;
}


// GE_Homebase_CombinedRatings_C GE_Homebase_CombinedRatings.Default__GE_Homebase_CombinedRatings_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Homebase_CombinedRatings_C* UGE_Homebase_CombinedRatings_C::GetDefaultObj()
{
	static class UGE_Homebase_CombinedRatings_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Homebase_CombinedRatings_C*>(UGE_Homebase_CombinedRatings_C::StaticClass()->DefaultObject);

	return Default;
}

}


