#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass DailyQuestRewardInfo.DailyQuestRewardInfo_C
// (None)

class UClass* UDailyQuestRewardInfo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DailyQuestRewardInfo_C");

	return Clss;
}


// DailyQuestRewardInfo_C DailyQuestRewardInfo.Default__DailyQuestRewardInfo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDailyQuestRewardInfo_C* UDailyQuestRewardInfo_C::GetDefaultObj()
{
	static class UDailyQuestRewardInfo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDailyQuestRewardInfo_C*>(UDailyQuestRewardInfo_C::StaticClass()->DefaultObject);

	return Default;
}

}


