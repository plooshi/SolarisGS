#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DefaultAppActivationSoundMixManager.DefaultAppActivationSoundMixManager_C
// (None)

class UClass* UDefaultAppActivationSoundMixManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DefaultAppActivationSoundMixManager_C");

	return Clss;
}


// DefaultAppActivationSoundMixManager_C DefaultAppActivationSoundMixManager.Default__DefaultAppActivationSoundMixManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDefaultAppActivationSoundMixManager_C* UDefaultAppActivationSoundMixManager_C::GetDefaultObj()
{
	static class UDefaultAppActivationSoundMixManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDefaultAppActivationSoundMixManager_C*>(UDefaultAppActivationSoundMixManager_C::StaticClass()->DefaultObject);

	return Default;
}

}


