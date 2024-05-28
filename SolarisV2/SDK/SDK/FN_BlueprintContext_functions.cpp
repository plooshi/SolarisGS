#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class BlueprintContext.BlueprintContextBase
// (None)

class UClass* UBlueprintContextBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BlueprintContextBase");

	return Clss;
}


// BlueprintContextBase BlueprintContext.Default__BlueprintContextBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UBlueprintContextBase* UBlueprintContextBase::GetDefaultObj()
{
	static class UBlueprintContextBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UBlueprintContextBase*>(UBlueprintContextBase::StaticClass()->DefaultObject);

	return Default;
}


// Class BlueprintContext.BlueprintContextLibrary
// (None)

class UClass* UBlueprintContextLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BlueprintContextLibrary");

	return Clss;
}


// BlueprintContextLibrary BlueprintContext.Default__BlueprintContextLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UBlueprintContextLibrary* UBlueprintContextLibrary::GetDefaultObj()
{
	static class UBlueprintContextLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UBlueprintContextLibrary*>(UBlueprintContextLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function BlueprintContext.BlueprintContextLibrary.GetContext
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     ContextObject                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class USubsystem>      Class                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USubsystem*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USubsystem* UBlueprintContextLibrary::GetContext(class UObject* ContextObject, TSubclassOf<class USubsystem> Class)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlueprintContextLibrary", "GetContext");

	Params::UBlueprintContextLibrary_GetContext_Params Parms{};

	Parms.ContextObject = ContextObject;
	Parms.Class = Class;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


