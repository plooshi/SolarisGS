#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// ControlRigBlueprintGeneratedClass Mech_Veh_ConrolRig.Mech_Veh_ConrolRig_C
// (None)

class UClass* UMech_Veh_ConrolRig_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Mech_Veh_ConrolRig_C");

	return Clss;
}


// Mech_Veh_ConrolRig_C Mech_Veh_ConrolRig.Default__Mech_Veh_ConrolRig_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMech_Veh_ConrolRig_C* UMech_Veh_ConrolRig_C::GetDefaultObj()
{
	static class UMech_Veh_ConrolRig_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMech_Veh_ConrolRig_C*>(UMech_Veh_ConrolRig_C::StaticClass()->DefaultObject);

	return Default;
}

}


