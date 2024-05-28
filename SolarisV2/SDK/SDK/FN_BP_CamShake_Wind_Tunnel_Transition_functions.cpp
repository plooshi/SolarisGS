#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CamShake_Wind_Tunnel_Transition.BP_CamShake_Wind_Tunnel_Transition_C
// (None)

class UClass* UBP_CamShake_Wind_Tunnel_Transition_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CamShake_Wind_Tunnel_Transition_C");

	return Clss;
}


// BP_CamShake_Wind_Tunnel_Transition_C BP_CamShake_Wind_Tunnel_Transition.Default__BP_CamShake_Wind_Tunnel_Transition_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_CamShake_Wind_Tunnel_Transition_C* UBP_CamShake_Wind_Tunnel_Transition_C::GetDefaultObj()
{
	static class UBP_CamShake_Wind_Tunnel_Transition_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_CamShake_Wind_Tunnel_Transition_C*>(UBP_CamShake_Wind_Tunnel_Transition_C::StaticClass()->DefaultObject);

	return Default;
}

}


