#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LoveStorm_MenuMap.LoveStorm_MenuMap_C
// (Actor)

class UClass* ALoveStorm_MenuMap_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LoveStorm_MenuMap_C");

	return Clss;
}


// LoveStorm_MenuMap_C LoveStorm_MenuMap.Default__LoveStorm_MenuMap_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALoveStorm_MenuMap_C* ALoveStorm_MenuMap_C::GetDefaultObj()
{
	static class ALoveStorm_MenuMap_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALoveStorm_MenuMap_C*>(ALoveStorm_MenuMap_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LoveStorm_MenuMap.LoveStorm_MenuMap_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ALoveStorm_MenuMap_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoveStorm_MenuMap_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LoveStorm_MenuMap.LoveStorm_MenuMap_C.ExecuteUbergraph_LoveStorm_MenuMap
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetPartSkeletalMeshComponent_ReturnValue                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetPartSkeletalMeshComponent_ReturnValue_1              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALoveStorm_MenuMap_C::ExecuteUbergraph_LoveStorm_MenuMap(int32 EntryPoint, class USkeletalMeshComponent* CallFunc_GetPartSkeletalMeshComponent_ReturnValue, class USkeletalMeshComponent* CallFunc_GetPartSkeletalMeshComponent_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoveStorm_MenuMap_C", "ExecuteUbergraph_LoveStorm_MenuMap");

	Params::ALoveStorm_MenuMap_C_ExecuteUbergraph_LoveStorm_MenuMap_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPartSkeletalMeshComponent_ReturnValue = CallFunc_GetPartSkeletalMeshComponent_ReturnValue;
	Parms.CallFunc_GetPartSkeletalMeshComponent_ReturnValue_1 = CallFunc_GetPartSkeletalMeshComponent_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


