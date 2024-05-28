#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Jackal_CameraMode_Boost.Jackal_CameraMode_Boost_C
// (None)

class UClass* UJackal_CameraMode_Boost_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Jackal_CameraMode_Boost_C");

	return Clss;
}


// Jackal_CameraMode_Boost_C Jackal_CameraMode_Boost.Default__Jackal_CameraMode_Boost_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UJackal_CameraMode_Boost_C* UJackal_CameraMode_Boost_C::GetDefaultObj()
{
	static class UJackal_CameraMode_Boost_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UJackal_CameraMode_Boost_C*>(UJackal_CameraMode_Boost_C::StaticClass()->DefaultObject);

	return Default;
}

}


