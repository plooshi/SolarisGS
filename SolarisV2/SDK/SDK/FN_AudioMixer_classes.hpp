#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x418 (0x630 - 0x218)
// Class AudioMixer.SynthComponent
class USynthComponent : public USceneComponent
{
public:
	uint8                                        bAutoDestroy : 1;                                  // Mask: 0x1, PropSize: 0x10x218(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bStopWhenOwnerDestroyed : 1;                       // Mask: 0x2, PropSize: 0x10x218(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAllowSpatialization : 1;                          // Mask: 0x4, PropSize: 0x10x218(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideAttenuation : 1;                          // Mask: 0x8, PropSize: 0x10x218(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_8 : 4;                                      // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_23C[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bOutputToBusOnly : 1;                              // Mask: 0x1, PropSize: 0x10x21C(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_9 : 7;                                      // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_23E[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundAttenuation*                     AttenuationSettings;                               // 0x220(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoundAttenuationSettings             AttenuationOverrides;                              // 0x228(0x2E8)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class USoundConcurrency*                     ConcurrencySettings;                               // 0x510(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSet<class USoundConcurrency*>               ConcurrencySet;                                    // 0x518(0x50)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class USoundClass*                           SoundClass;                                        // 0x568(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundEffectSourcePresetChain*         SourceEffectChain;                                 // 0x570(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundSubmix*                          SoundSubmix;                                       // 0x578(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSoundSubmixSendInfo>          SoundSubmixSends;                                  // 0x580(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FSoundSourceBusSendInfo>       BusSends;                                          // 0x590(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FSoundSourceBusSendInfo>       PreEffectBusSends;                                 // 0x5A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        bIsUISound : 1;                                    // Mask: 0x1, PropSize: 0x10x5B0(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsPreviewSound : 1;                               // Mask: 0x2, PropSize: 0x10x5B0(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_A : 6;                                      // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_243[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        EnvelopeFollowerAttackTime;                        // 0x5B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        EnvelopeFollowerReleaseTime;                       // 0x5B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_244[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastInlineDelegateProperty_            OnAudioEnvelopeValue;                              // 0x5C0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_245[0x20];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USynthSound*                           Synth;                                             // 0x5F0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAudioComponent*                       AudioComponent;                                    // 0x5F8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_247[0x30];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USynthComponent* GetDefaultObj();

	void Stop();
	void Start();
	void SetVolumeMultiplier(float VolumeMultiplier);
	void SetSubmixSend(class USoundSubmix* Submix, float SendLevel);
	bool IsPlaying();
};

// 0x80 (0xA8 - 0x28)
// Class AudioMixer.AudioGenerator
class UAudioGenerator : public UObject
{
public:
	uint8                                        Pad_249[0x80];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAudioGenerator* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class AudioMixer.AudioMixerBlueprintLibrary
class UAudioMixerBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UAudioMixerBlueprintLibrary* GetDefaultObj();

	float TrimAudioCache(float InMegabytesToFree);
	class USoundWave* StopRecordingOutput(class UObject* WorldContextObject, enum class EAudioRecordingExportType ExportType, const class FString& Name, const class FString& Path, class USoundSubmix* SubmixToRecord, class USoundWave* ExistingSoundWaveToOverwrite);
	void StopAnalyzingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToStopAnalyzing);
	void StartRecordingOutput(class UObject* WorldContextObject, float ExpectedDuration, class USoundSubmix* SubmixToRecord);
	void StartAnalyzingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToAnalyze, enum class EFFTSize FFTSize, enum class EFFTPeakInterpolationMethod InterpolationMethod, enum class EFFTWindowType WindowType, float HopSize);
	void SetBypassSourceEffectChainEntry(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, int32 EntryIndex, bool bBypassed);
	void ResumeRecordingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToPause);
	void RemoveSourceEffectFromPresetChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, int32 EntryIndex);
	void RemoveMasterSubmixEffect(class UObject* WorldContextObject, class USoundEffectSubmixPreset* SubmixEffectPreset);
	void PrimeSoundForPlayback(class USoundWave* SoundWave, UDelegateProperty_ OnLoadCompletion);
	void PauseRecordingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToPause);
	void GetPhaseForFrequencies(class UObject* WorldContextObject, TArray<float>& Frequencies, TArray<float>* Phases, class USoundSubmix* SubmixToAnalyze);
	int32 GetNumberOfEntriesInSourceEffectChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain);
	void GetMagnitudeForFrequencies(class UObject* WorldContextObject, TArray<float>& Frequencies, TArray<float>* Magnitudes, class USoundSubmix* SubmixToAnalyze);
	void ClearMasterSubmixEffects(class UObject* WorldContextObject);
	void AddSourceEffectToPresetChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, const struct FSourceEffectChainEntry& Entry);
	void AddMasterSubmixEffect(class UObject* WorldContextObject, class USoundEffectSubmixPreset* SubmixEffectPreset);
};

// 0x78 (0xB8 - 0x40)
// Class AudioMixer.SubmixEffectDynamicsProcessorPreset
class USubmixEffectDynamicsProcessorPreset : public USoundEffectSubmixPreset
{
public:
	uint8                                        Pad_2E0[0x50];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSubmixEffectDynamicsProcessorSettings Settings;                                          // 0x90(0x28)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USubmixEffectDynamicsProcessorPreset* GetDefaultObj();

	void SetSettings(struct FSubmixEffectDynamicsProcessorSettings& InSettings);
};

// 0x48 (0x88 - 0x40)
// Class AudioMixer.SubmixEffectSubmixEQPreset
class USubmixEffectSubmixEQPreset : public USoundEffectSubmixPreset
{
public:
	uint8                                        Pad_2EA[0x38];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSubmixEffectSubmixEQSettings         Settings;                                          // 0x78(0x10)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USubmixEffectSubmixEQPreset* GetDefaultObj();

	void SetSettings(struct FSubmixEffectSubmixEQSettings& InSettings);
};

// 0x90 (0xD0 - 0x40)
// Class AudioMixer.SubmixEffectReverbPreset
class USubmixEffectReverbPreset : public USoundEffectSubmixPreset
{
public:
	uint8                                        Pad_2F4[0x5C];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSubmixEffectReverbSettings           Settings;                                          // 0x9C(0x34)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USubmixEffectReverbPreset* GetDefaultObj();

	void SetSettingsWithReverbEffect(class UReverbEffect* InReverbEffect, float WetLevel, float DryLevel);
	void SetSettings(struct FSubmixEffectReverbSettings& InSettings);
};

// 0x90 (0xD0 - 0x40)
// Class AudioMixer.SubmixEffectReverbFastPreset
class USubmixEffectReverbFastPreset : public USoundEffectSubmixPreset
{
public:
	uint8                                        Pad_303[0x5C];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSubmixEffectReverbFastSettings       Settings;                                          // 0x9C(0x34)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USubmixEffectReverbFastPreset* GetDefaultObj();

	void SetSettingsWithReverbEffect(class UReverbEffect* InReverbEffect, float WetLevel, float DryLevel);
	void SetSettings(struct FSubmixEffectReverbFastSettings& InSettings);
};

// 0x20 (0x340 - 0x320)
// Class AudioMixer.SynthSound
class USynthSound : public USoundWaveProcedural
{
public:
	class USynthComponent*                       OwningSynthComponent;                              // 0x320(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_305[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USynthSound* GetDefaultObj();

};

}


