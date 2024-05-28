#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border-SolidBG-RewardBack.Border-SolidBG-RewardBack_C
// (None)

class UClass* UBorderMinusSolidBGMinusRewardBack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border-SolidBG-RewardBack_C");

	return Clss;
}


// Border-SolidBG-RewardBack_C Border-SolidBG-RewardBack.Default__Border-SolidBG-RewardBack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorderMinusSolidBGMinusRewardBack_C* UBorderMinusSolidBGMinusRewardBack_C::GetDefaultObj()
{
	static class UBorderMinusSolidBGMinusRewardBack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorderMinusSolidBGMinusRewardBack_C*>(UBorderMinusSolidBGMinusRewardBack_C::StaticClass()->DefaultObject);

	return Default;
}

}


