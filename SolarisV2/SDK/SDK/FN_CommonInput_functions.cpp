#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class CommonInput.CommonInputSettings
// (None)

class UClass* UCommonInputSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonInputSettings");

	return Clss;
}


// CommonInputSettings CommonInput.Default__CommonInputSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UCommonInputSettings* UCommonInputSettings::GetDefaultObj()
{
	static class UCommonInputSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonInputSettings*>(UCommonInputSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class CommonInput.CommonInputSubsystem
// (None)

class UClass* UCommonInputSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonInputSubsystem");

	return Clss;
}


// CommonInputSubsystem CommonInput.Default__CommonInputSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UCommonInputSubsystem* UCommonInputSubsystem::GetDefaultObj()
{
	static class UCommonInputSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonInputSubsystem*>(UCommonInputSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Function CommonInput.CommonInputSubsystem.ShouldShowInputKeys
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonInputSubsystem::ShouldShowInputKeys()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonInputSubsystem", "ShouldShowInputKeys");

	Params::UCommonInputSubsystem_ShouldShowInputKeys_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonInput.CommonInputSubsystem.SetGamepadInputType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ECommonGamepadType      InGamepadInputType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonInputSubsystem::SetGamepadInputType(enum class ECommonGamepadType InGamepadInputType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonInputSubsystem", "SetGamepadInputType");

	Params::UCommonInputSubsystem_SetGamepadInputType_Params Parms{};

	Parms.InGamepadInputType = InGamepadInputType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonInput.CommonInputSubsystem.SetCurrentInputType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ECommonInputType        NewInputType                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonInputSubsystem::SetCurrentInputType(enum class ECommonInputType NewInputType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonInputSubsystem", "SetCurrentInputType");

	Params::UCommonInputSubsystem_SetCurrentInputType_Params Parms{};

	Parms.NewInputType = NewInputType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonInput.CommonInputSubsystem.IsUsingPointerInput
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonInputSubsystem::IsUsingPointerInput()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonInputSubsystem", "IsUsingPointerInput");

	Params::UCommonInputSubsystem_IsUsingPointerInput_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// DelegateFunction CommonInput.CommonInputSubsystem.InputMethodChangedDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// enum class ECommonInputType        bNewInputType                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonInputSubsystem::InputMethodChangedDelegate__DelegateSignature(enum class ECommonInputType bNewInputType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonInputSubsystem", "InputMethodChangedDelegate__DelegateSignature");

	Params::UCommonInputSubsystem_InputMethodChangedDelegate__DelegateSignature_Params Parms{};

	Parms.bNewInputType = bNewInputType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CommonInput.CommonInputSubsystem.GetDefaultInputType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ECommonInputType        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ECommonInputType UCommonInputSubsystem::GetDefaultInputType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonInputSubsystem", "GetDefaultInputType");

	Params::UCommonInputSubsystem_GetDefaultInputType_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonInput.CommonInputSubsystem.GetCurrentInputType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ECommonInputType        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ECommonInputType UCommonInputSubsystem::GetCurrentInputType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonInputSubsystem", "GetCurrentInputType");

	Params::UCommonInputSubsystem_GetCurrentInputType_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonInput.CommonInputSubsystem.GetCurrentGamepadType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ECommonGamepadType      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ECommonGamepadType UCommonInputSubsystem::GetCurrentGamepadType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonInputSubsystem", "GetCurrentGamepadType");

	Params::UCommonInputSubsystem_GetCurrentGamepadType_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class CommonInput.CommonUIInputData
// (None)

class UClass* UCommonUIInputData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonUIInputData");

	return Clss;
}


// CommonUIInputData CommonInput.Default__CommonUIInputData
// (Public, ClassDefaultObject, ArchetypeObject)

class UCommonUIInputData* UCommonUIInputData::GetDefaultObj()
{
	static class UCommonUIInputData* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonUIInputData*>(UCommonUIInputData::StaticClass()->DefaultObject);

	return Default;
}


// Class CommonInput.CommonInputControllerData
// (None)

class UClass* UCommonInputControllerData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonInputControllerData");

	return Clss;
}


// CommonInputControllerData CommonInput.Default__CommonInputControllerData
// (Public, ClassDefaultObject, ArchetypeObject)

class UCommonInputControllerData* UCommonInputControllerData::GetDefaultObj()
{
	static class UCommonInputControllerData* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonInputControllerData*>(UCommonInputControllerData::StaticClass()->DefaultObject);

	return Default;
}

}


