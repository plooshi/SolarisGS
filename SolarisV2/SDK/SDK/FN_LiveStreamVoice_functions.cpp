#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class LiveStreamVoice.LiveStreamVoiceChannel
// (None)

class UClass* ULiveStreamVoiceChannel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiveStreamVoiceChannel");

	return Clss;
}


// LiveStreamVoiceChannel LiveStreamVoice.Default__LiveStreamVoiceChannel
// (Public, ClassDefaultObject, ArchetypeObject)

class ULiveStreamVoiceChannel* ULiveStreamVoiceChannel::GetDefaultObj()
{
	static class ULiveStreamVoiceChannel* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiveStreamVoiceChannel*>(ULiveStreamVoiceChannel::StaticClass()->DefaultObject);

	return Default;
}


// Class LiveStreamVoice.LiveStreamVoiceSubsystem
// (None)

class UClass* ULiveStreamVoiceSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiveStreamVoiceSubsystem");

	return Clss;
}


// LiveStreamVoiceSubsystem LiveStreamVoice.Default__LiveStreamVoiceSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class ULiveStreamVoiceSubsystem* ULiveStreamVoiceSubsystem::GetDefaultObj()
{
	static class ULiveStreamVoiceSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiveStreamVoiceSubsystem*>(ULiveStreamVoiceSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Function LiveStreamVoice.LiveStreamVoiceSubsystem.SetVoiceSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FVoiceSettings              InSettings                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void ULiveStreamVoiceSubsystem::SetVoiceSettings(struct FVoiceSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveStreamVoiceSubsystem", "SetVoiceSettings");

	Params::ULiveStreamVoiceSubsystem_SetVoiceSettings_Params Parms{};

	Parms.InSettings = InSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LiveStreamVoice.LiveStreamVoiceSubsystem.EnableLocalVoiceProcessing
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// uint8                              LocalUserNum                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bEnable                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULiveStreamVoiceSubsystem::EnableLocalVoiceProcessing(uint8 LocalUserNum, bool bEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveStreamVoiceSubsystem", "EnableLocalVoiceProcessing");

	Params::ULiveStreamVoiceSubsystem_EnableLocalVoiceProcessing_Params Parms{};

	Parms.LocalUserNum = LocalUserNum;
	Parms.bEnable = bEnable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LiveStreamVoice.LiveStreamVoiceSubsystem.ClearVoiceSettings
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void ULiveStreamVoiceSubsystem::ClearVoiceSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveStreamVoiceSubsystem", "ClearVoiceSettings");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}

}


