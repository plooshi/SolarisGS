#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MinigameStat_PlayerDeaths.MinigameStat_PlayerDeaths_C
// (None)

class UClass* UMinigameStat_PlayerDeaths_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MinigameStat_PlayerDeaths_C");

	return Clss;
}


// MinigameStat_PlayerDeaths_C MinigameStat_PlayerDeaths.Default__MinigameStat_PlayerDeaths_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMinigameStat_PlayerDeaths_C* UMinigameStat_PlayerDeaths_C::GetDefaultObj()
{
	static class UMinigameStat_PlayerDeaths_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMinigameStat_PlayerDeaths_C*>(UMinigameStat_PlayerDeaths_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MinigameStat_PlayerDeaths.MinigameStat_PlayerDeaths_C.Compare
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              FirstScore                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              SecondScore                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UMinigameStat_PlayerDeaths_C::Compare(int32 FirstScore, int32 SecondScore, int32 CallFunc_Subtract_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinigameStat_PlayerDeaths_C", "Compare");

	Params::UMinigameStat_PlayerDeaths_C_Compare_Params Parms{};

	Parms.FirstScore = FirstScore;
	Parms.SecondScore = SecondScore;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


