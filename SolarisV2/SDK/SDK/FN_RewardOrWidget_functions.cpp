#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass RewardOrWidget.RewardOrWidget_C
// (None)

class UClass* URewardOrWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RewardOrWidget_C");

	return Clss;
}


// RewardOrWidget_C RewardOrWidget.Default__RewardOrWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URewardOrWidget_C* URewardOrWidget_C::GetDefaultObj()
{
	static class URewardOrWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URewardOrWidget_C*>(URewardOrWidget_C::StaticClass()->DefaultObject);

	return Default;
}

}


