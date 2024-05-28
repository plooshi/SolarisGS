#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass SocialPanel_TopBarExtension.SocialPanel_TopBarExtension_C
// (None)

class UClass* USocialPanel_TopBarExtension_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SocialPanel_TopBarExtension_C");

	return Clss;
}


// SocialPanel_TopBarExtension_C SocialPanel_TopBarExtension.Default__SocialPanel_TopBarExtension_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USocialPanel_TopBarExtension_C* USocialPanel_TopBarExtension_C::GetDefaultObj()
{
	static class USocialPanel_TopBarExtension_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USocialPanel_TopBarExtension_C*>(USocialPanel_TopBarExtension_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SocialPanel_TopBarExtension.SocialPanel_TopBarExtension_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void USocialPanel_TopBarExtension_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SocialPanel_TopBarExtension_C", "BP_OnHovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SocialPanel_TopBarExtension.SocialPanel_TopBarExtension_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void USocialPanel_TopBarExtension_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SocialPanel_TopBarExtension_C", "BP_OnUnhovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SocialPanel_TopBarExtension.SocialPanel_TopBarExtension_C.ExecuteUbergraph_SocialPanel_TopBarExtension
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USocialPanel_TopBarExtension_C::ExecuteUbergraph_SocialPanel_TopBarExtension(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SocialPanel_TopBarExtension_C", "ExecuteUbergraph_SocialPanel_TopBarExtension");

	Params::USocialPanel_TopBarExtension_C_ExecuteUbergraph_SocialPanel_TopBarExtension_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


