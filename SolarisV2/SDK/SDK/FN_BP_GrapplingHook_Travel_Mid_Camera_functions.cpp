#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_GrapplingHook_Travel_Mid_Camera.BP_GrapplingHook_Travel_Mid_Camera_C
// (None)

class UClass* UBP_GrapplingHook_Travel_Mid_Camera_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_GrapplingHook_Travel_Mid_Camera_C");

	return Clss;
}


// BP_GrapplingHook_Travel_Mid_Camera_C BP_GrapplingHook_Travel_Mid_Camera.Default__BP_GrapplingHook_Travel_Mid_Camera_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_GrapplingHook_Travel_Mid_Camera_C* UBP_GrapplingHook_Travel_Mid_Camera_C::GetDefaultObj()
{
	static class UBP_GrapplingHook_Travel_Mid_Camera_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_GrapplingHook_Travel_Mid_Camera_C*>(UBP_GrapplingHook_Travel_Mid_Camera_C::StaticClass()->DefaultObject);

	return Default;
}

}


