#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass EulaWidget.EulaWidget_C
// (None)

class UClass* UEulaWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EulaWidget_C");

	return Clss;
}


// EulaWidget_C EulaWidget.Default__EulaWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEulaWidget_C* UEulaWidget_C::GetDefaultObj()
{
	static class UEulaWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEulaWidget_C*>(UEulaWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function EulaWidget.EulaWidget_C.OnEulaResponse__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Accepted                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEulaWidget_C::OnEulaResponse__DelegateSignature(bool Accepted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EulaWidget_C", "OnEulaResponse__DelegateSignature");

	Params::UEulaWidget_C_OnEulaResponse__DelegateSignature_Params Parms{};

	Parms.Accepted = Accepted;

	UObject::ProcessEvent(Func, &Parms);

}

}


