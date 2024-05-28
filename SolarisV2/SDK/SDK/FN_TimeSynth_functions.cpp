#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class TimeSynth.TimeSynthVolumeGroup
// (None)

class UClass* UTimeSynthVolumeGroup::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TimeSynthVolumeGroup");

	return Clss;
}


// TimeSynthVolumeGroup TimeSynth.Default__TimeSynthVolumeGroup
// (Public, ClassDefaultObject, ArchetypeObject)

class UTimeSynthVolumeGroup* UTimeSynthVolumeGroup::GetDefaultObj()
{
	static class UTimeSynthVolumeGroup* Default = nullptr;

	if (!Default)
		Default = static_cast<UTimeSynthVolumeGroup*>(UTimeSynthVolumeGroup::StaticClass()->DefaultObject);

	return Default;
}


// Class TimeSynth.TimeSynthClip
// (None)

class UClass* UTimeSynthClip::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TimeSynthClip");

	return Clss;
}


// TimeSynthClip TimeSynth.Default__TimeSynthClip
// (Public, ClassDefaultObject, ArchetypeObject)

class UTimeSynthClip* UTimeSynthClip::GetDefaultObj()
{
	static class UTimeSynthClip* Default = nullptr;

	if (!Default)
		Default = static_cast<UTimeSynthClip*>(UTimeSynthClip::StaticClass()->DefaultObject);

	return Default;
}


// Class TimeSynth.TimeSynthComponent
// (SceneComponent)

class UClass* UTimeSynthComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TimeSynthComponent");

	return Clss;
}


// TimeSynthComponent TimeSynth.Default__TimeSynthComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UTimeSynthComponent* UTimeSynthComponent::GetDefaultObj()
{
	static class UTimeSynthComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UTimeSynthComponent*>(UTimeSynthComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function TimeSynth.TimeSynthComponent.StopSoundsOnVolumeGroupWithFadeOverride
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UTimeSynthVolumeGroup*       InVolumeGroup                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ETimeSynthEventClipQuantizationEventQuantization                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTimeSynthTimeDef           FadeTime                                                         (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UTimeSynthComponent::StopSoundsOnVolumeGroupWithFadeOverride(class UTimeSynthVolumeGroup* InVolumeGroup, enum class ETimeSynthEventClipQuantization EventQuantization, struct FTimeSynthTimeDef& FadeTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeSynthComponent", "StopSoundsOnVolumeGroupWithFadeOverride");

	Params::UTimeSynthComponent_StopSoundsOnVolumeGroupWithFadeOverride_Params Parms{};

	Parms.InVolumeGroup = InVolumeGroup;
	Parms.EventQuantization = EventQuantization;
	Parms.FadeTime = FadeTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TimeSynth.TimeSynthComponent.StopSoundsOnVolumeGroup
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTimeSynthVolumeGroup*       InVolumeGroup                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ETimeSynthEventClipQuantizationEventQuantization                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTimeSynthComponent::StopSoundsOnVolumeGroup(class UTimeSynthVolumeGroup* InVolumeGroup, enum class ETimeSynthEventClipQuantization EventQuantization)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeSynthComponent", "StopSoundsOnVolumeGroup");

	Params::UTimeSynthComponent_StopSoundsOnVolumeGroup_Params Parms{};

	Parms.InVolumeGroup = InVolumeGroup;
	Parms.EventQuantization = EventQuantization;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TimeSynth.TimeSynthComponent.StopClipWithFadeOverride
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTimeSynthClipHandle        InClipHandle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
// enum class ETimeSynthEventClipQuantizationEventQuantization                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTimeSynthTimeDef           FadeTime                                                         (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UTimeSynthComponent::StopClipWithFadeOverride(const struct FTimeSynthClipHandle& InClipHandle, enum class ETimeSynthEventClipQuantization EventQuantization, struct FTimeSynthTimeDef& FadeTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeSynthComponent", "StopClipWithFadeOverride");

	Params::UTimeSynthComponent_StopClipWithFadeOverride_Params Parms{};

	Parms.InClipHandle = InClipHandle;
	Parms.EventQuantization = EventQuantization;
	Parms.FadeTime = FadeTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TimeSynth.TimeSynthComponent.StopClip
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FTimeSynthClipHandle        InClipHandle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
// enum class ETimeSynthEventClipQuantizationEventQuantization                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTimeSynthComponent::StopClip(const struct FTimeSynthClipHandle& InClipHandle, enum class ETimeSynthEventClipQuantization EventQuantization)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeSynthComponent", "StopClip");

	Params::UTimeSynthComponent_StopClip_Params Parms{};

	Parms.InClipHandle = InClipHandle;
	Parms.EventQuantization = EventQuantization;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TimeSynth.TimeSynthComponent.SetVolumeGroup
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTimeSynthVolumeGroup*       InVolumeGroup                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              VolumeDb                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              FadeTimeSec                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTimeSynthComponent::SetVolumeGroup(class UTimeSynthVolumeGroup* InVolumeGroup, float VolumeDb, float FadeTimeSec)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeSynthComponent", "SetVolumeGroup");

	Params::UTimeSynthComponent_SetVolumeGroup_Params Parms{};

	Parms.InVolumeGroup = InVolumeGroup;
	Parms.VolumeDb = VolumeDb;
	Parms.FadeTimeSec = FadeTimeSec;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TimeSynth.TimeSynthComponent.SetSeed
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InSeed                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTimeSynthComponent::SetSeed(int32 InSeed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeSynthComponent", "SetSeed");

	Params::UTimeSynthComponent_SetSeed_Params Parms{};

	Parms.InSeed = InSeed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TimeSynth.TimeSynthComponent.SetQuantizationSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTimeSynthQuantizationSettingsInQuantizationSettings                                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UTimeSynthComponent::SetQuantizationSettings(struct FTimeSynthQuantizationSettings& InQuantizationSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeSynthComponent", "SetQuantizationSettings");

	Params::UTimeSynthComponent_SetQuantizationSettings_Params Parms{};

	Parms.InQuantizationSettings = InQuantizationSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TimeSynth.TimeSynthComponent.SetFilterSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// enum class ETimeSynthFilter        Filter                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTimeSynthFilterSettings    InSettings                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UTimeSynthComponent::SetFilterSettings(enum class ETimeSynthFilter Filter, struct FTimeSynthFilterSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeSynthComponent", "SetFilterSettings");

	Params::UTimeSynthComponent_SetFilterSettings_Params Parms{};

	Parms.Filter = Filter;
	Parms.InSettings = InSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TimeSynth.TimeSynthComponent.SetFilterEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ETimeSynthFilter        Filter                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsEnabled                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTimeSynthComponent::SetFilterEnabled(enum class ETimeSynthFilter Filter, bool bIsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeSynthComponent", "SetFilterEnabled");

	Params::UTimeSynthComponent_SetFilterEnabled_Params Parms{};

	Parms.Filter = Filter;
	Parms.bIsEnabled = bIsEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TimeSynth.TimeSynthComponent.SetFFTSize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ETimeSynthFFTSize       InFFTSize                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTimeSynthComponent::SetFFTSize(enum class ETimeSynthFFTSize InFFTSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeSynthComponent", "SetFFTSize");

	Params::UTimeSynthComponent_SetFFTSize_Params Parms{};

	Parms.InFFTSize = InFFTSize;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TimeSynth.TimeSynthComponent.SetEnvelopeFollowerSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTimeSynthEnvelopeFollowerSettingsInSettings                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UTimeSynthComponent::SetEnvelopeFollowerSettings(struct FTimeSynthEnvelopeFollowerSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeSynthComponent", "SetEnvelopeFollowerSettings");

	Params::UTimeSynthComponent_SetEnvelopeFollowerSettings_Params Parms{};

	Parms.InSettings = InSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TimeSynth.TimeSynthComponent.SetEnvelopeFollowerEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInIsEnabled                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTimeSynthComponent::SetEnvelopeFollowerEnabled(bool bInIsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeSynthComponent", "SetEnvelopeFollowerEnabled");

	Params::UTimeSynthComponent_SetEnvelopeFollowerEnabled_Params Parms{};

	Parms.bInIsEnabled = bInIsEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TimeSynth.TimeSynthComponent.SetBPM
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              BeatsPerMinute                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTimeSynthComponent::SetBPM(float BeatsPerMinute)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeSynthComponent", "SetBPM");

	Params::UTimeSynthComponent_SetBPM_Params Parms{};

	Parms.BeatsPerMinute = BeatsPerMinute;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TimeSynth.TimeSynthComponent.ResetSeed
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UTimeSynthComponent::ResetSeed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeSynthComponent", "ResetSeed");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function TimeSynth.TimeSynthComponent.PlayClip
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTimeSynthClip*              InClip                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTimeSynthVolumeGroup*       InVolumeGroup                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTimeSynthClipHandle        ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FTimeSynthClipHandle UTimeSynthComponent::PlayClip(class UTimeSynthClip* InClip, class UTimeSynthVolumeGroup* InVolumeGroup)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeSynthComponent", "PlayClip");

	Params::UTimeSynthComponent_PlayClip_Params Parms{};

	Parms.InClip = InClip;
	Parms.InVolumeGroup = InVolumeGroup;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TimeSynth.TimeSynthComponent.GetSpectralData
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FTimeSynthSpectralData>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FTimeSynthSpectralData> UTimeSynthComponent::GetSpectralData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeSynthComponent", "GetSpectralData");

	Params::UTimeSynthComponent_GetSpectralData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TimeSynth.TimeSynthComponent.GetEnvelopeFollowerValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UTimeSynthComponent::GetEnvelopeFollowerValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeSynthComponent", "GetEnvelopeFollowerValue");

	Params::UTimeSynthComponent_GetEnvelopeFollowerValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TimeSynth.TimeSynthComponent.GetBPM
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UTimeSynthComponent::GetBPM()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeSynthComponent", "GetBPM");

	Params::UTimeSynthComponent_GetBPM_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TimeSynth.TimeSynthComponent.AddQuantizationEventDelegate
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// enum class ETimeSynthEventQuantizationQuantizationType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UDelegateProperty_                 OnQuantizationEvent                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UTimeSynthComponent::AddQuantizationEventDelegate(enum class ETimeSynthEventQuantization QuantizationType, UDelegateProperty_& OnQuantizationEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeSynthComponent", "AddQuantizationEventDelegate");

	Params::UTimeSynthComponent_AddQuantizationEventDelegate_Params Parms{};

	Parms.QuantizationType = QuantizationType;
	Parms.OnQuantizationEvent = OnQuantizationEvent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


