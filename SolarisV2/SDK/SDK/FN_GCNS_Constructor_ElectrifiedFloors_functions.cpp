#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCNS_Constructor_ElectrifiedFloors.GCNS_Constructor_ElectrifiedFloors_C
// (None)

class UClass* UGCNS_Constructor_ElectrifiedFloors_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCNS_Constructor_ElectrifiedFloors_C");

	return Clss;
}


// GCNS_Constructor_ElectrifiedFloors_C GCNS_Constructor_ElectrifiedFloors.Default__GCNS_Constructor_ElectrifiedFloors_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGCNS_Constructor_ElectrifiedFloors_C* UGCNS_Constructor_ElectrifiedFloors_C::GetDefaultObj()
{
	static class UGCNS_Constructor_ElectrifiedFloors_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGCNS_Constructor_ElectrifiedFloors_C*>(UGCNS_Constructor_ElectrifiedFloors_C::StaticClass()->DefaultObject);

	return Default;
}

}


