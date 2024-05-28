#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass FortVoiceChannelSpeakerContainer.FortVoiceChannelSpeakerContainer_C
// (None)

class UClass* UFortVoiceChannelSpeakerContainer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortVoiceChannelSpeakerContainer_C");

	return Clss;
}


// FortVoiceChannelSpeakerContainer_C FortVoiceChannelSpeakerContainer.Default__FortVoiceChannelSpeakerContainer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFortVoiceChannelSpeakerContainer_C* UFortVoiceChannelSpeakerContainer_C::GetDefaultObj()
{
	static class UFortVoiceChannelSpeakerContainer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortVoiceChannelSpeakerContainer_C*>(UFortVoiceChannelSpeakerContainer_C::StaticClass()->DefaultObject);

	return Default;
}

}


