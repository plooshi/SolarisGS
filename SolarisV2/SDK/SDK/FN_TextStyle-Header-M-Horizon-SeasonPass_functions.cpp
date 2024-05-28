#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Header-M-Horizon-SeasonPass.TextStyle-Header-M-Horizon-SeasonPass_C
// (None)

class UClass* UTextStyleMinusHeaderMinusMMinusHorizonMinusSeasonPass_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Header-M-Horizon-SeasonPass_C");

	return Clss;
}


// TextStyle-Header-M-Horizon-SeasonPass_C TextStyle-Header-M-Horizon-SeasonPass.Default__TextStyle-Header-M-Horizon-SeasonPass_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusHeaderMinusMMinusHorizonMinusSeasonPass_C* UTextStyleMinusHeaderMinusMMinusHorizonMinusSeasonPass_C::GetDefaultObj()
{
	static class UTextStyleMinusHeaderMinusMMinusHorizonMinusSeasonPass_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusHeaderMinusMMinusHorizonMinusSeasonPass_C*>(UTextStyleMinusHeaderMinusMMinusHorizonMinusSeasonPass_C::StaticClass()->DefaultObject);

	return Default;
}

}


