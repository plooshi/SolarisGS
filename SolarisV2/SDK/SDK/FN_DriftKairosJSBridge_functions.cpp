#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class DriftKairosJSBridge.DriftKairosCommonJSBridge
// (None)

class UClass* UDriftKairosCommonJSBridge::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DriftKairosCommonJSBridge");

	return Clss;
}


// DriftKairosCommonJSBridge DriftKairosJSBridge.Default__DriftKairosCommonJSBridge
// (Public, ClassDefaultObject, ArchetypeObject)

class UDriftKairosCommonJSBridge* UDriftKairosCommonJSBridge::GetDefaultObj()
{
	static class UDriftKairosCommonJSBridge* Default = nullptr;

	if (!Default)
		Default = static_cast<UDriftKairosCommonJSBridge*>(UDriftKairosCommonJSBridge::StaticClass()->DefaultObject);

	return Default;
}


// Class DriftKairosJSBridge.DanceChallengesJSBridge
// (None)

class UClass* UDanceChallengesJSBridge::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DanceChallengesJSBridge");

	return Clss;
}


// DanceChallengesJSBridge DriftKairosJSBridge.Default__DanceChallengesJSBridge
// (Public, ClassDefaultObject, ArchetypeObject)

class UDanceChallengesJSBridge* UDanceChallengesJSBridge::GetDefaultObj()
{
	static class UDanceChallengesJSBridge* Default = nullptr;

	if (!Default)
		Default = static_cast<UDanceChallengesJSBridge*>(UDanceChallengesJSBridge::StaticClass()->DefaultObject);

	return Default;
}


// Function DriftKairosJSBridge.DanceChallengesJSBridge.GetDanceChallenges
// (Final, Native, Public)
// Parameters:
// struct FWebJSResponse              Response                                                         (Parm, NativeAccessSpecifierPublic)

void UDanceChallengesJSBridge::GetDanceChallenges(const struct FWebJSResponse& Response)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DanceChallengesJSBridge", "GetDanceChallenges");

	Params::UDanceChallengesJSBridge_GetDanceChallenges_Params Parms{};

	Parms.Response = Response;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


