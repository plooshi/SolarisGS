#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaBattlePassRewardDetails.AthenaBattlePassRewardDetails_C
// (None)

class UClass* UAthenaBattlePassRewardDetails_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaBattlePassRewardDetails_C");

	return Clss;
}


// AthenaBattlePassRewardDetails_C AthenaBattlePassRewardDetails.Default__AthenaBattlePassRewardDetails_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaBattlePassRewardDetails_C* UAthenaBattlePassRewardDetails_C::GetDefaultObj()
{
	static class UAthenaBattlePassRewardDetails_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaBattlePassRewardDetails_C*>(UAthenaBattlePassRewardDetails_C::StaticClass()->DefaultObject);

	return Default;
}

}


