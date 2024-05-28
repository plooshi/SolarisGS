#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class EpicGameplayStatsRuntime.BlueprintGameplayStatsLibrary
// (None)

class UClass* UBlueprintGameplayStatsLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BlueprintGameplayStatsLibrary");

	return Clss;
}


// BlueprintGameplayStatsLibrary EpicGameplayStatsRuntime.Default__BlueprintGameplayStatsLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UBlueprintGameplayStatsLibrary* UBlueprintGameplayStatsLibrary::GetDefaultObj()
{
	static class UBlueprintGameplayStatsLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UBlueprintGameplayStatsLibrary*>(UBlueprintGameplayStatsLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function EpicGameplayStatsRuntime.BlueprintGameplayStatsLibrary.NotEqual_GameplayStatTagGameplayStatTag
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayStatTag            A                                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayStatTag            B                                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UBlueprintGameplayStatsLibrary::NotEqual_GameplayStatTagGameplayStatTag(const struct FGameplayStatTag& A, const struct FGameplayStatTag& B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlueprintGameplayStatsLibrary", "NotEqual_GameplayStatTagGameplayStatTag");

	Params::UBlueprintGameplayStatsLibrary_NotEqual_GameplayStatTagGameplayStatTag_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EpicGameplayStatsRuntime.BlueprintGameplayStatsLibrary.EqualEqual_GameplayStatTagGameplayStatTag
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayStatTag            A                                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayStatTag            B                                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UBlueprintGameplayStatsLibrary::EqualEqual_GameplayStatTagGameplayStatTag(const struct FGameplayStatTag& A, const struct FGameplayStatTag& B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlueprintGameplayStatsLibrary", "EqualEqual_GameplayStatTagGameplayStatTag");

	Params::UBlueprintGameplayStatsLibrary_EqualEqual_GameplayStatTagGameplayStatTag_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class EpicGameplayStatsRuntime.GameplayTagTableManager
// (None)

class UClass* UGameplayTagTableManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayTagTableManager");

	return Clss;
}


// GameplayTagTableManager EpicGameplayStatsRuntime.Default__GameplayTagTableManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameplayTagTableManager* UGameplayTagTableManager::GetDefaultObj()
{
	static class UGameplayTagTableManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameplayTagTableManager*>(UGameplayTagTableManager::StaticClass()->DefaultObject);

	return Default;
}

}


