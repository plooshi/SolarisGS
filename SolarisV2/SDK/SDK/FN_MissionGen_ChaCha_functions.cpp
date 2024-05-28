#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_ChaCha.MissionGen_ChaCha_C
// (None)

class UClass* UMissionGen_ChaCha_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_ChaCha_C");

	return Clss;
}


// MissionGen_ChaCha_C MissionGen_ChaCha.Default__MissionGen_ChaCha_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_ChaCha_C* UMissionGen_ChaCha_C::GetDefaultObj()
{
	static class UMissionGen_ChaCha_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_ChaCha_C*>(UMissionGen_ChaCha_C::StaticClass()->DefaultObject);

	return Default;
}

}


