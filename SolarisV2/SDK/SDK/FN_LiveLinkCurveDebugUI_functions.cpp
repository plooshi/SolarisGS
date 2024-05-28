#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class LiveLinkCurveDebugUI.LiveLinkDebuggerBlueprintLibrary
// (None)

class UClass* ULiveLinkDebuggerBlueprintLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiveLinkDebuggerBlueprintLibrary");

	return Clss;
}


// LiveLinkDebuggerBlueprintLibrary LiveLinkCurveDebugUI.Default__LiveLinkDebuggerBlueprintLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class ULiveLinkDebuggerBlueprintLibrary* ULiveLinkDebuggerBlueprintLibrary::GetDefaultObj()
{
	static class ULiveLinkDebuggerBlueprintLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiveLinkDebuggerBlueprintLibrary*>(ULiveLinkDebuggerBlueprintLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function LiveLinkCurveDebugUI.LiveLinkDebuggerBlueprintLibrary.HideLiveLinkDebugger
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:

void ULiveLinkDebuggerBlueprintLibrary::HideLiveLinkDebugger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkDebuggerBlueprintLibrary", "HideLiveLinkDebugger");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function LiveLinkCurveDebugUI.LiveLinkDebuggerBlueprintLibrary.DisplayLiveLinkDebugger
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class FString                      SubjectName                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULiveLinkDebuggerBlueprintLibrary::DisplayLiveLinkDebugger(const class FString& SubjectName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkDebuggerBlueprintLibrary", "DisplayLiveLinkDebugger");

	Params::ULiveLinkDebuggerBlueprintLibrary_DisplayLiveLinkDebugger_Params Parms{};

	Parms.SubjectName = SubjectName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class LiveLinkCurveDebugUI.LiveLinkDebuggerSettings
// (None)

class UClass* ULiveLinkDebuggerSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiveLinkDebuggerSettings");

	return Clss;
}


// LiveLinkDebuggerSettings LiveLinkCurveDebugUI.Default__LiveLinkDebuggerSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class ULiveLinkDebuggerSettings* ULiveLinkDebuggerSettings::GetDefaultObj()
{
	static class ULiveLinkDebuggerSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiveLinkDebuggerSettings*>(ULiveLinkDebuggerSettings::StaticClass()->DefaultObject);

	return Default;
}


// Function LiveLinkCurveDebugUI.LiveLinkDebuggerSettings.GetDPIScaleBasedOnSize
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FIntPoint                   Size                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float ULiveLinkDebuggerSettings::GetDPIScaleBasedOnSize(const struct FIntPoint& Size)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkDebuggerSettings", "GetDPIScaleBasedOnSize");

	Params::ULiveLinkDebuggerSettings_GetDPIScaleBasedOnSize_Params Parms{};

	Parms.Size = Size;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LiveLinkCurveDebugUI.LiveLinkDebuggerSettings.GetBarColorForCurveValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              CurveValue                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSlateColor                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FSlateColor ULiveLinkDebuggerSettings::GetBarColorForCurveValue(float CurveValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkDebuggerSettings", "GetBarColorForCurveValue");

	Params::ULiveLinkDebuggerSettings_GetBarColorForCurveValue_Params Parms{};

	Parms.CurveValue = CurveValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


