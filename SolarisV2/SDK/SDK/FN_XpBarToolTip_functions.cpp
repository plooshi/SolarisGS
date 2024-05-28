#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass XpBarToolTip.XpBarToolTip_C
// (None)

class UClass* UXpBarToolTip_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("XpBarToolTip_C");

	return Clss;
}


// XpBarToolTip_C XpBarToolTip.Default__XpBarToolTip_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UXpBarToolTip_C* UXpBarToolTip_C::GetDefaultObj()
{
	static class UXpBarToolTip_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UXpBarToolTip_C*>(UXpBarToolTip_C::StaticClass()->DefaultObject);

	return Default;
}


// Function XpBarToolTip.XpBarToolTip_C.GetBodyText
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)

class FText UXpBarToolTip_C::GetBodyText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("XpBarToolTip_C", "GetBodyText");

	Params::UXpBarToolTip_C_GetBodyText_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function XpBarToolTip.XpBarToolTip_C.GetRestedXPText
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)

class FText UXpBarToolTip_C::GetRestedXPText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("XpBarToolTip_C", "GetRestedXPText");

	Params::UXpBarToolTip_C_GetRestedXPText_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function XpBarToolTip.XpBarToolTip_C.GetBoostXPText
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)

class FText UXpBarToolTip_C::GetBoostXPText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("XpBarToolTip_C", "GetBoostXPText");

	Params::UXpBarToolTip_C_GetBoostXPText_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function XpBarToolTip.XpBarToolTip_C.GetCommanderXPText
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)

class FText UXpBarToolTip_C::GetCommanderXPText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("XpBarToolTip_C", "GetCommanderXPText");

	Params::UXpBarToolTip_C_GetCommanderXPText_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function XpBarToolTip.XpBarToolTip_C.GetHeaderText
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)

class FText UXpBarToolTip_C::GetHeaderText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("XpBarToolTip_C", "GetHeaderText");

	Params::UXpBarToolTip_C_GetHeaderText_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


