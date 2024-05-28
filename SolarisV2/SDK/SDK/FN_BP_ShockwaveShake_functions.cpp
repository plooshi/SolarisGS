#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ShockwaveShake.BP_ShockwaveShake_C
// (None)

class UClass* UBP_ShockwaveShake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ShockwaveShake_C");

	return Clss;
}


// BP_ShockwaveShake_C BP_ShockwaveShake.Default__BP_ShockwaveShake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ShockwaveShake_C* UBP_ShockwaveShake_C::GetDefaultObj()
{
	static class UBP_ShockwaveShake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ShockwaveShake_C*>(UBP_ShockwaveShake_C::StaticClass()->DefaultObject);

	return Default;
}

}


