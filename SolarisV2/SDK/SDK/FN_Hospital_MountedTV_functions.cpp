#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Hospital_MountedTV.Hospital_MountedTV_C
// (Actor)

class UClass* AHospital_MountedTV_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Hospital_MountedTV_C");

	return Clss;
}


// Hospital_MountedTV_C Hospital_MountedTV.Default__Hospital_MountedTV_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AHospital_MountedTV_C* AHospital_MountedTV_C::GetDefaultObj()
{
	static class AHospital_MountedTV_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AHospital_MountedTV_C*>(AHospital_MountedTV_C::StaticClass()->DefaultObject);

	return Default;
}

}


