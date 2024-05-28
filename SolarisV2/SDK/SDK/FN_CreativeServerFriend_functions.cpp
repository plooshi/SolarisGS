#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CreativeServerFriend.CreativeServerFriend_C
// (None)

class UClass* UCreativeServerFriend_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CreativeServerFriend_C");

	return Clss;
}


// CreativeServerFriend_C CreativeServerFriend.Default__CreativeServerFriend_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCreativeServerFriend_C* UCreativeServerFriend_C::GetDefaultObj()
{
	static class UCreativeServerFriend_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCreativeServerFriend_C*>(UCreativeServerFriend_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CreativeServerFriend.CreativeServerFriend_C.InitData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      FriendName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UCreativeServerFriend_C::InitData(const class FString& FriendName, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeServerFriend_C", "InitData");

	Params::UCreativeServerFriend_C_InitData_Params Parms{};

	Parms.FriendName = FriendName;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


