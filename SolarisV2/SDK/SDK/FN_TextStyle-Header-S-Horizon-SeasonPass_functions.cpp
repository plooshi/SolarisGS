#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Header-S-Horizon-SeasonPass.TextStyle-Header-S-Horizon-SeasonPass_C
// (None)

class UClass* UTextStyleMinusHeaderMinusSMinusHorizonMinusSeasonPass_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Header-S-Horizon-SeasonPass_C");

	return Clss;
}


// TextStyle-Header-S-Horizon-SeasonPass_C TextStyle-Header-S-Horizon-SeasonPass.Default__TextStyle-Header-S-Horizon-SeasonPass_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusHeaderMinusSMinusHorizonMinusSeasonPass_C* UTextStyleMinusHeaderMinusSMinusHorizonMinusSeasonPass_C::GetDefaultObj()
{
	static class UTextStyleMinusHeaderMinusSMinusHorizonMinusSeasonPass_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusHeaderMinusSMinusHorizonMinusSeasonPass_C*>(UTextStyleMinusHeaderMinusSMinusHorizonMinusSeasonPass_C::StaticClass()->DefaultObject);

	return Default;
}

}


