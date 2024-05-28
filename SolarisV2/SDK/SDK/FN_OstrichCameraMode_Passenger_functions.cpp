#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass OstrichCameraMode_Passenger.OstrichCameraMode_Passenger_C
// (None)

class UClass* UOstrichCameraMode_Passenger_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OstrichCameraMode_Passenger_C");

	return Clss;
}


// OstrichCameraMode_Passenger_C OstrichCameraMode_Passenger.Default__OstrichCameraMode_Passenger_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UOstrichCameraMode_Passenger_C* UOstrichCameraMode_Passenger_C::GetDefaultObj()
{
	static class UOstrichCameraMode_Passenger_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UOstrichCameraMode_Passenger_C*>(UOstrichCameraMode_Passenger_C::StaticClass()->DefaultObject);

	return Default;
}

}


