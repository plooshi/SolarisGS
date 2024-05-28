#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x128 - 0x128)
// BlueprintGeneratedClass Creative_Radio_AudioToMPC.Creative_Radio_AudioToMPC_C
class UCreative_Radio_AudioToMPC_C : public UFortAudioToMPCComponent
{
public:

	static class UClass* StaticClass();
	static class UCreative_Radio_AudioToMPC_C* GetDefaultObj();

	void OnGatheredFFTData(TArray<struct FChannelData>& FFTData, float& OutAmplitudeAverage);
};

}


