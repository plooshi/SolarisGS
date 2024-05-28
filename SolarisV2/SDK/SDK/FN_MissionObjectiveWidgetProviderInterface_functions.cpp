#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionObjectiveWidgetProviderInterface.MissionObjectiveWidgetProviderInterface_C
// (None)

class UClass* IMissionObjectiveWidgetProviderInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionObjectiveWidgetProviderInterface_C");

	return Clss;
}


// MissionObjectiveWidgetProviderInterface_C MissionObjectiveWidgetProviderInterface.Default__MissionObjectiveWidgetProviderInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IMissionObjectiveWidgetProviderInterface_C* IMissionObjectiveWidgetProviderInterface_C::GetDefaultObj()
{
	static class IMissionObjectiveWidgetProviderInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IMissionObjectiveWidgetProviderInterface_C*>(IMissionObjectiveWidgetProviderInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MissionObjectiveWidgetProviderInterface.MissionObjectiveWidgetProviderInterface_C.GetObjectiveBulletIcon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush                 BulletIcon                                                       (Parm, OutParm)

void IMissionObjectiveWidgetProviderInterface_C::GetObjectiveBulletIcon(struct FSlateBrush* BulletIcon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionObjectiveWidgetProviderInterface_C", "GetObjectiveBulletIcon");

	Params::IMissionObjectiveWidgetProviderInterface_C_GetObjectiveBulletIcon_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (BulletIcon != nullptr)
		*BulletIcon = std::move(Parms.BulletIcon);

}

}


