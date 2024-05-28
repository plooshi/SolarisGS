#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Creative_Radio_AudioToMPC.Creative_Radio_AudioToMPC_C
// (None)

class UClass* UCreative_Radio_AudioToMPC_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Creative_Radio_AudioToMPC_C");

	return Clss;
}


// Creative_Radio_AudioToMPC_C Creative_Radio_AudioToMPC.Default__Creative_Radio_AudioToMPC_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCreative_Radio_AudioToMPC_C* UCreative_Radio_AudioToMPC_C::GetDefaultObj()
{
	static class UCreative_Radio_AudioToMPC_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCreative_Radio_AudioToMPC_C*>(UCreative_Radio_AudioToMPC_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Creative_Radio_AudioToMPC.Creative_Radio_AudioToMPC_C.OnGatheredFFTData
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FChannelData>        FFTData                                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                              OutAmplitudeAverage                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreative_Radio_AudioToMPC_C::OnGatheredFFTData(TArray<struct FChannelData>& FFTData, float& OutAmplitudeAverage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Creative_Radio_AudioToMPC_C", "OnGatheredFFTData");

	Params::UCreative_Radio_AudioToMPC_C_OnGatheredFFTData_Params Parms{};

	Parms.FFTData = FFTData;
	Parms.OutAmplitudeAverage = OutAmplitudeAverage;

	UObject::ProcessEvent(Func, &Parms);

}

}


