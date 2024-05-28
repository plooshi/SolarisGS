#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TwitchNotification.TwitchNotification_C
// (None)

class UClass* UTwitchNotification_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TwitchNotification_C");

	return Clss;
}


// TwitchNotification_C TwitchNotification.Default__TwitchNotification_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTwitchNotification_C* UTwitchNotification_C::GetDefaultObj()
{
	static class UTwitchNotification_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTwitchNotification_C*>(UTwitchNotification_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TwitchNotification.TwitchNotification_C.GetImageOverride
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UTexture2D* UTwitchNotification_C::GetImageOverride()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwitchNotification_C", "GetImageOverride");

	Params::UTwitchNotification_C_GetImageOverride_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


